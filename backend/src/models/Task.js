const { Schema, model } = require('mongoose');

const taskSchema = new Schema(
  {
    title: { type: String, required: true },
    description: String,
    priority: {
      type: String,
      enum: ['low', 'medium', 'high'],
      default: 'low',
    },
    dueDate: Date,
    tags: [String],
    completed: { type: Boolean, default: false },
    user: { type: Schema.Types.ObjectId, ref: 'User', required: true },
  },
  { timestamps: true }
);

module.exports = model('Task', taskSchema);
