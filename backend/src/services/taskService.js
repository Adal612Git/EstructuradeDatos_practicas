const Task = require('../models/Task');

const createTask = (data) => Task.create(data);
const getTasks = (userId) => Task.find({ user: userId });
const getTaskById = (id) => Task.findById(id);
const updateTask = (id, data) => Task.findByIdAndUpdate(id, data, { new: true });
const deleteTask = (id) => Task.findByIdAndDelete(id);

module.exports = {
  createTask,
  getTasks,
  getTaskById,
  updateTask,
  deleteTask,
};
