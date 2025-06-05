const { Router } = require('express');
const router = Router();

// TODO: Implement auth endpoints
router.post('/register', (req, res) => res.send('register'));
router.post('/login', (req, res) => res.send('login'));

module.exports = router;
