const jwt = require('jsonwebtoken');

const authMiddleware = (req, res, next) => {
  try {
    // Get token from header or cookie
    const token = req.headers.authorization?.split(' ')[1] || req.cookies.token;
    console.log("Token received:   ", token);
    console.log();

    if (!token) {
      return res.status(401).json({ message: 'Unauthorized: No token provided' });
    }
    // Verify token
    const decoded = jwt.verify(token, process.env.Jwt_secret);
    req.user = decoded; // attach user info to request
    req.userid = decoded.userid;
    next();
  } catch (err) {
    return res.status(401).json({ message: 'Unauthorized:Invalid token' });
  }
};

module.exports = authMiddleware;
