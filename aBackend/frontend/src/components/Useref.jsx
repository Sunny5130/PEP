// import { useRef, useState, useEffect } from "react";

// function Counter() {
//   const countRef = useRef(0);
//   const [state, setState] = useState(0);

//   function saini() {
//     console.log("call");
//   }
//   useEffect(() => {
//     saini(); // runs once
//   });

//   countRef.current += 1;

//   return (
//     <>
//       <h1>State renders: {state}</h1>
//       <h2>Ref renders: {countRef.current}</h2>
//       <button onClick={() => setState(state + 1)}>Re-render</button>
//     </>
//   );
// }

// export default Counter;
import React, { useReducer } from "react";

// Initial state
const initialState = { count: 0 };

// Reducer function
function reducer(state, action) {
  switch (action.type) {
    case "INCREMENT":
      return { count: state.count + 1 };

    case "DECREMENT":
      return { count: state.count - 1 };

    case "RESET":
      return initialState;

    default:
      return state;
  }
}

// Counter Component
function Counter() {
  const [state, dispatch] = useReducer(reducer, initialState);

  return (
    <div style={{ textAlign: "center", marginTop: "50px" }}>
      <h1>useReducer Counter</h1>
      <h2>Count: {state.count}</h2>

      <button
        onClick={() => dispatch({ type: "INCREMENT" })}
        style={{ margin: "5px" }}
      >
        Increment
      </button>

      <button
        onClick={() => dispatch({ type: "DECREMENT" })}
        style={{ margin: "5px" }}
      >
        Decrement
      </button>

      <button
        onClick={() => dispatch({ type: "RESET" })}
        style={{ margin: "5px" }}
      >
        Reset
      </button>
    </div>
  );
}

export default Counter;
