#include<iostream>
#include<vector>
using namespace std;
////////-------------------------------------Selection sorting---------------------------------/////////
void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[mini],arr[i]);
    }
}
/////////-----------------------------------bubble sorting------------------------------------//////////
void bubblesort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        int swaps=0;
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaps=1;
            }
        }
            if(swaps==0)break;
    }
}

//--------------------------------------//insertion sorting----------------------------------//////////
void insertionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}

//--------------------------------------------merge sort------------------------------------///////
// Function to merge two halves
void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1; // size of left half
    int n2 = r - m;     // size of right half
    // temporary arrays
    int left[n1], right[n2];
    // copy data to temp arrays
    for (int i = 0; i < n1; i++)
        left[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        right[j] = arr[m + 1 + j];
    // merge temp arrays back into arr[l..r]
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    // copy remaining elements
    while (i < n1) {
        arr[k] = left[i];
        i++; k++;
    }
    while (j < n2) {
        arr[k] = right[j];
        j++; k++;
    }
}
// Recursive merge sort
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

        // sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // merge the sorted halves
        merge(arr, l, m, r);
    }
}
// it is valid for only if an array have only  positve values 
void countingsort(vector<int> &arr){
    int n = arr.size();
    // step 1: get maximum value
    int maxi = arr[0];
    for (int i=0;i<n;i++) {
        maxi = max(arr[i], maxi);
    }
    // step 2: create count array and store frequency
    vector<int>arr1(maxi+1, 0);
    for (int i =0;i<n;i++) {
        arr1[arr[i]]++;
    }
    // step 3: prefix sum
    for (int i=1;i<=maxi;i++) {
        arr1[i] +=arr1[i - 1];
    }
    // step 4: build output array (stable sort)
    vector<int>output(n);
    for (int i =n-1;i>=0;i--) {
        output[--arr1[arr[i]]]=arr[i];
    }
    // step 5: copy back to arr
    for (int i=0;i<n;i++) {
        arr[i] =output[i];
        cout <<arr[i] << " ";
    }
    cout << endl;
}


int main(){
    // cout<<"Size of the array: ";
    // int a;
    // cin>>a;
    
    // int arr[a];
    // cout<<"Input of the array: ";
    // for(int i=0;i<a;i++){
    //     cin>>arr[i];
    // }

    // selectionsort(arr,a);
    // cout<<"Insert sorting: ";
    // for(int i=0;i<a;i++){
    //     cout<<arr[i]<<" ";
    // }

    // bubblesort(arr,a);
    // cout<<"bubble sorting: ";
    // for(int i=0;i<a;i++){
    //     cout<<arr[i]<<" ";
    // }

    // insertionsort(arr,a);
    // cout<<"insertion sorting: ";
    // for(int i=0;i<a;i++){
    //     cout<<arr[i]<<" ";
    // }

    // mergeSort(arr,0,a);
    // cout<<"merge sorting: ";
    // for(int i=0;i<a;i++){
    //     cout<<arr[i]<<" ";
    // }
    vector<int>arrr{21,4,2,6,7,8,9};
    countingsort(arrr);
    return 0;
}