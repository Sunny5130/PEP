import axios from "axios";
const Api=axios.create({
    baseURL:"http://localhost:3000/api",
    withCredentials: true,
});

//------------------------attach token automatically---------//
Api.interceptors.request.use((req)=>{
    const token=localStorage.getItem('token');
    if(token){
        req.headers.Authorization=`Bearer ${token}`
    }
    return req;
});
export default Api;
