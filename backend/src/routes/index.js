const { Router } = require('express');

const router = Router();

router.use('/auth', require('./authRoutes'));
router.use('/tasks', require('./taskRoutes'));

module.exports = router;
