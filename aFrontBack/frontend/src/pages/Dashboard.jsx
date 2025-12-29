import { useEffect, useState } from 'react';
import { useNavigate } from 'react-router-dom';
import API from '../services/api';

const Dashboard = () => {
  const navigate = useNavigate();
  const [name, setName] = useState(''); // state for username
  const [password, setPassword] = useState(''); // state for new password
  const [loading, setLoading] = useState(false);

  // Fetch user info on mount
  useEffect(() => {
    const token = localStorage.getItem('token');
    if (!token) {
      navigate('/login');
      return;
    }

    API.post('/dashboard', {}, {
      headers: { Authorization: `Bearer ${token}` }
    })
      .then((res) => {
        console.log('Authorized', res.data);
        setName(res.data.name);
      })
      .catch(() => {
        alert('Unauthorized, redirecting...');
        navigate('/login');
      });
  }, [navigate]);

  // Handle logout
  const handleLogout = () => {
    localStorage.removeItem('token');
    navigate('/login');
    alert("Successfully logged out");
  };

  // Handle password update
  const handleUpdatePassword = async () => {
    const token = localStorage.getItem('token');
    if (!password) {
      alert('Please enter a new password');
      return;
    }
    setLoading(true);
    try {
      const res = await API.put('/dashboard/updatepassword', { password }, {
        headers: { Authorization: `Bearer ${token}` }
      });
      alert(res.data.message);
      setPassword('');
      localStorage.removeItem('token');
      navigate('/login');
    } catch (err) {
      console.error(err);
      alert(err.response?.data?.message || 'Failed to update password');
    } finally {
      setLoading(false);
    }
  };

  // Handle delete account
  const handleDeleteAccount = async () => {
    const token = localStorage.getItem('token');
    const confirmDelete = window.confirm("Are you sure you want to delete your account? This action cannot be undone.");
    if (!confirmDelete) return;

    try {
      const res = await API.delete('/dashboard/deleteAccount', {
        headers: { Authorization: `Bearer ${token}` }
      });
      alert(res.data.message);
      localStorage.removeItem('token');
      navigate('/login');
    } catch (err) {
      console.error(err);
      alert(err.response?.data?.message || 'Failed to delete account');
    }
  };

  return (
    <div className="min-h-screen bg-gradient-to-br from-green-400 via-teal-400 to-cyan-500 flex flex-col items-center justify-center">
      <div className="bg-white/90 backdrop-blur-md p-8 rounded-2xl shadow-2xl w-96 text-center">
        <h1 className="text-3xl font-extrabold mb-6 text-gray-800">
          Welcome to Dashboard 🚀
        </h1>
        <p className="text-gray-600 mb-6">
          {name ? `${name} is successfully logged in!` : 'Loading...'}
        </p>

        {/* Update Password Field */}
        <input
          type="password"
          placeholder="Enter new password"
          value={password}
          onChange={(e) => setPassword(e.target.value)}
          className="w-full mb-4 p-3 rounded-lg border border-gray-300 focus:outline-none focus:ring-2 focus:ring-teal-400"
        />
        <button
          onClick={handleUpdatePassword}
          disabled={loading}
          className="w-full mb-4 py-3 rounded-lg text-white font-semibold
                     bg-gradient-to-r from-green-500 to-teal-500
                     hover:from-green-600 hover:to-teal-600
                     transition duration-300 disabled:opacity-50"
        >
          {loading ? 'Updating...' : 'Update Password'}
        </button>

        {/* Delete Account Button */}
        <button
          onClick={handleDeleteAccount}
          className="w-full mb-4 py-3 rounded-lg text-white font-semibold
                     bg-gradient-to-r from-red-500 to-orange-500
                     hover:from-red-600 hover:to-orange-600
                     transition duration-300"
        >
          Delete Account
        </button>

        {/* Logout Button */}
        <button
          onClick={handleLogout}
          className="w-full py-3 rounded-lg text-white font-semibold
                     bg-gradient-to-r from-gray-500 to-gray-700
                     hover:from-gray-600 hover:to-gray-800
                     transition duration-300"
        >
          Logout
        </button>
      </div>
    </div>
  );
};

export default Dashboard;
