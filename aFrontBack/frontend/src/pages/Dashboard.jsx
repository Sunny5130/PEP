import { useEffect, useState } from 'react';
import { useNavigate } from 'react-router-dom';
import API from '../services/api';

const Dashboard = () => {
  const navigate = useNavigate();
  const [name, setName] = useState(''); // state for username

  useEffect(() => {
    const token = localStorage.getItem('token');
    if (!token) {
      navigate('/login');
      return;
    }

    API.post('/auth/check', {}, {
      headers: { Authorization: `Bearer ${token}` } // send token
    })
      .then((res) => {
        console.log('Authorized', res.data);
        setName(res.data.name); // set username
      })
      .catch(() => {
        alert('Unauthorized, redirecting...');
        navigate('/login');
      });
  }, [navigate]);

  const handleLogout = () => {
    localStorage.removeItem('token');
    navigate('/login');
    alert("Successfully logged out");
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

        <button
          onClick={handleLogout}
          className="w-full py-3 rounded-lg text-white font-semibold
                     bg-gradient-to-r from-green-500 to-teal-500
                     hover:from-green-600 hover:to-teal-600
                     transition duration-300"
        >
          Logout
        </button>
      </div>
    </div>
  );
};

export default Dashboard;
