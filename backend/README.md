# To-Do Backend

Este proyecto implementa un backend para una aplicación de tareas utilizando **Node.js**, **Express** y **MongoDB**. Se sigue la arquitectura MVC y se utiliza autenticación mediante JWT.

## Estructura

```
backend/
├── server.js
├── package.json
├── .env.example
├── .eslintrc.js
├── .prettierrc
└── src
    ├── config
    │   └── db.js
    ├── controllers
    │   ├── authController.js
    │   └── taskController.js
    ├── middlewares
    │   └── authMiddleware.js
    ├── models
    │   ├── Task.js
    │   └── User.js
    ├── routes
    │   ├── authRoutes.js
    │   └── taskRoutes.js
    ├── services
    │   ├── authService.js
    │   └── taskService.js
    └── utils
        └── generateToken.js
```

## Uso

1. Copia `.env.example` a `.env` y ajusta las variables.
2. Ejecuta `npm install` dentro de `backend`.
3. Inicia el servidor en desarrollo con `npm run dev`.

Las pruebas se ejecutan con `npm test`.
