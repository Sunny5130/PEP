import { useState } from 'react';
import { useNavigate } from 'react-router-dom';
import API from '../services/api';

const Login = () => {
  const [form, setForm] = useState({ email: '', password: '' });
  const navigate = useNavigate(); // <-- useNavigate for redirect

  const handleChange = (e) =>
    setForm({ ...form, [e.target.name]: e.target.value });

  const handleSubmit = async (e) => {
    e.preventDefault();
    try {
      const res = await API.post('/login', form);

      // Save token in localStorage
      localStorage.setItem('token', res.data.token);

      // Redirect to dashboard
      navigate('/dashboard');

    } catch (err) {
      alert(err.response?.data?.message || 'Error');
    }
  };

  return (
    <div className="min-h-screen flex items-center justify-center bg-gradient-to-br from-blue-600 via-cyan-500 to-teal-500">
      <form
        onSubmit={handleSubmit}
        className="bg-white/90 backdrop-blur-md p-8 rounded-2xl shadow-2xl w-96"
      >
        <h2 className="text-3xl font-extrabold text-center text-gray-800 mb-6">
          Welcome Back
        </h2>

        <input
          className="w-full mb-4 px-4 py-3 rounded-lg border border-gray-300 focus:outline-none focus:ring-2 focus:ring-blue-500"
          name="email"
          placeholder="Email"
          onChange={handleChange}
          required
        />

        <input
          className="w-full mb-6 px-4 py-3 rounded-lg border border-gray-300 focus:outline-none focus:ring-2 focus:ring-teal-500"
          name="password"
          type="password"
          placeholder="Password"
          onChange={handleChange}
          required
        />

        <button
          className="w-full py-3 rounded-lg text-white font-semibold 
          bg-gradient-to-r from-blue-600 to-teal-600 
          hover:from-blue-700 hover:to-teal-700 
          transition duration-300"
        >
          Login
        </button>

        <p className="text-sm text-center text-gray-600 mt-4">
          Don’t have an account?
          <a href="/signup" className="text-blue-600 font-semibold ml-1">
            Signup
          </a>
        </p>
      </form>
    </div>
  );
};

export default Login;
