import { useState } from 'react';
import API from '../services/api';

const Signup = () => {
  const [form, setForm] = useState({ name: '', email: '', password: '' });

  const handleChange = (e) =>
    setForm({ ...form, [e.target.name]: e.target.value });

  const handleSubmit = async (e) => {
    e.preventDefault();
    try {
      await API.post('/signup', form);
      alert('Signup successful 🎉');
    } catch (err) {
      alert(err.response?.data?.message || 'Error');
    }
  };

  return (
    <div className="min-h-screen flex items-center justify-center bg-gradient-to-br from-purple-600 via-pink-500 to-red-500">
      
      <form
        onSubmit={handleSubmit}
        className="bg-white/90 backdrop-blur-md p-8 rounded-2xl shadow-2xl w-96"
      >
        <h2 className="text-3xl font-extrabold text-center text-gray-800 mb-6">
          Create Account
        </h2>

        <input
          className="w-full mb-4 px-4 py-3 rounded-lg border border-gray-300 focus:outline-none focus:ring-2 focus:ring-purple-500"
          name="name"
          placeholder="Full Name"
          onChange={handleChange}
          required
        />

        <input
          className="w-full mb-4 px-4 py-3 rounded-lg border border-gray-300 focus:outline-none focus:ring-2 focus:ring-pink-500"
          name="email"
          type="email"
          placeholder="Email Address"
          onChange={handleChange}
          required
        />

        <input
          className="w-full mb-6 px-4 py-3 rounded-lg border border-gray-300 focus:outline-none focus:ring-2 focus:ring-red-500"
          name="password"
          type="password"
          placeholder="Password"
          onChange={handleChange}
          required
        />

        <button
          className="w-full py-3 rounded-lg text-white font-semibold 
          bg-gradient-to-r from-purple-600 to-pink-600 
          hover:from-purple-700 hover:to-pink-700 
          transition duration-300"
        >
          Sign Up
        </button>

        <p className="text-sm text-center text-gray-600 mt-4">
          Already have an account?
          <a href="/login" className="text-purple-600 font-semibold ml-1">
            Login
          </a>
        </p>
      </form>

    </div>
  );
};

export default Signup;
