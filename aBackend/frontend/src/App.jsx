import { BrowserRouter, Routes, Route } from "react-router-dom";
import User from "./User";

function App() {
  return (
    <BrowserRouter>                                               
      <Routes>
        <Route path="/order/:oid/user/:id" element={<User />} />
      </Routes>
    </BrowserRouter>
  );
}

export default App;
