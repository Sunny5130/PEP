// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int n;
// //     cin>>n;
// //     int arr[n];
// //     for(int i=0;i<n;i++){
// //         cin>>arr[i];
// //     }
// //     int m=*max_element(arr,arr+n);
// //     int freq[m+1]={0};
// //     vector<int>ans={false};
// //     for(int i=0;i<n;i++){
// //         freq[arr[i]]++;
// //     }
// //     for(int i=0;i<n;i++){

// //         cout<<"freq of "<<arr[i]<<" is: "<<freq[arr[i]]<<endl;
// //     }
// //     return 0;
// // }


// // #include <bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int n;
// //     cin>>n;
// //     int arr[n];
// //     for(int i=0;i<n;i++){
// //         cin>>arr[i];
// //     }
// //     map<int,int>map;
// //     for(int i=0;i<n;i++){
// //         map[arr[i]]++;
// //     }
// //     cout<<"Duplicates value are: ";
// //     for(auto it=map.begin();it!=map.end();it++){
// //         if(it->second>=2)cout<<it->first<<" ";
// //     }


// // }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     // bool isPrime = true;
//     // if (n <= 1) isPrime = false;
//     // for (int i = 2; i*i <= n; i++) {
//     //     if (n % i == 0) {
//     //         isPrime = false;
//     //         break;
//     //     }
//     // }
//     // if (isPrime==true)
//     //     cout << "Prime Number";
//     // else
//     //     cout << "Not Prime";

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main() {
    const int width = 50;
    const int height = 50;

    float angle = 0.0f;
    float size = 12.0f;
    float sizeSpeed = 0.15f;
    float angleSpeed = 0.15f;
    bool increase = true;

    while (true) {
        clearScreen();

        float cx = width / 2.0f;
        float cy = height / 2.0f;

        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) {

                float dx = x - cx;
                float dy = y - cy;

                float dist = sqrt(dx*dx + dy*dy);

                // Change circle radius (increase / decrease)
                float radius = size + sin(angle) * 2.0f;

                // Rotating ASCII characters
                float rotatedX = dx * cos(angle) - dy * sin(angle);
                float rotatedY = dx * sin(angle) + dy * cos(angle);

                float patternValue = fabs(sin(rotatedX * 0.3f) + cos(rotatedY * 0.3f));

                if (fabs(dist - radius) < 1.5f) {
                    if (patternValue > 1.2f) cout << "@";
                    else if (patternValue > 0.9f) cout << "$";
                    else if (patternValue > 0.6f) cout << "#";
                    else if (patternValue > 0.3f) cout << "*";
                    else cout << ".";
                } else {
                    cout << " ";
                }
            }
            cout << "\n";
        }

        // Animate rotation
        angle += angleSpeed;

        // Animate pulse
        if (increase) {
            size += sizeSpeed;
            if (size >= 18) increase = false;
        } else {
            size -= sizeSpeed;
            if (size <= 10) increase = true;
        }

        // Delay for smooth animation
        this_thread::sleep_for(chrono::milliseconds(50));
    }

    return 0;
}
