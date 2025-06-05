const { Router } = require('express');
const router = Router();

// TODO: Implement task endpoints
router.get('/', (req, res) => res.send('list tasks'));

module.exports = router;
