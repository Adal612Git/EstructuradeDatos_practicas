const express = require('express');
const connectDB = require('./config/database');

const app = express();
connectDB();

app.use(express.json());
app.use('/api', require('./routes'));

const PORT = process.env.PORT || 4000;
app.listen(PORT, () => console.log(`Servidor en puerto ${PORT}`));
