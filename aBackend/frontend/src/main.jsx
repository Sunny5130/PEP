import { StrictMode } from 'react'
import { createRoot } from 'react-dom/client'
import './index.css'
import App from './App.jsx'
// import Index from './components/Index'
// import Index2 from './components/Index2'
// import Lifec from './components/Lifecyclemethod'
// import Parent from './props/Parent'
// import Counter from './components/Useref'
// import ExpensiveComponent from './components/Usememo'

createRoot(document.getElementById('root')).render(
  <StrictMode>
    <App />
    {/* <Index/> */}
    {/* <Index2/> */}
    {/* <Lifec/> */}
    {/* <Parent/> */}
    {/* <App/> */}
    {/* <Counter/> */}
    {/* <ExpensiveComponent/> */}
  </StrictMode>,
)
