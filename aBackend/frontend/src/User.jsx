import { useParams } from "react-router-dom";

function User() {
  const { oid,id } = useParams(); // get dynamic value
  return (
    <>
      <h1>User Page</h1>
      <h2>Order ID: {oid}</h2>
      <h2>User ID: {id}</h2>
    </>
  );
}

export default User;
