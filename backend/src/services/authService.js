const User = require('../models/User');
const generateToken = require('../utils/generateToken');

const register = async (data) => {
  const user = await User.create(data);
  const token = generateToken(user);
  return { user, token };
};

const login = async ({ email, password }) => {
  const user = await User.findOne({ email });
  if (!user) throw new Error('Invalid credentials');
  const isMatch = await user.comparePassword(password);
  if (!isMatch) throw new Error('Invalid credentials');
  const token = generateToken(user);
  return { user, token };
};

module.exports = { register, login };
