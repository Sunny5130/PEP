#include<iostream>
using namespace std;
class heap{
    public:
    int arr[100];
    int size=0;
    //---------------------------------------insertion in max heap----------------------------------------//
    void insert(int val){
        size =size+1;
        int index=size;
        arr[size]=val;
        while(index >1){
            int parent=index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }else{
                return;
            }
        }
    }
    //-----------------------------------------deletion of parent node from heap----------------------------//
    void deleteformheap(){
        if(size==0){
            cout<<"Nothing to delete"<<endl;
            return;
        }
        arr[1]=arr[size];
        size--;
        int i=1;
        while(i<size){
            int left=2*i;
            int right=(2*i)+1;
            if(left<size && arr[i]<arr[left]){
                swap(arr[i],arr[left]);
                i=left;
            }else if(right <size && arr[i]<arr[right]){
                swap(arr[i],arr[right]);
                i=right;
            }else{
                return;
            }
        }
    }
    //--------------------------------------------Heapify function to maintain or satisfy the property of max or min heap-------------//
    void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[left] > arr[largest]) {
        largest = left;
    }
    if (right <= n && arr[right] > arr[largest]) {
        largest = right;
    }
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}
//----------------------------------------------------Heap sort----------------------------------------------------------------------//

void heapsort(int arr[]){
    int n=5;
    for(int i=n/2;i>=0;i--){
        heapify(arr,n,i);
        for(int i=1;i<n;i++){
            
        }
    }
}

//-----------------------------------------print the heap element after insertion into max heap-------------------------------------//
    void print(){
        // cout<<arr[0]<<endl;
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    heap h;
    cout<<endl;
    h.insert(60);
    h.insert(50);
    h.insert(40);
    h.insert(30);
    h.insert(20);
    h.insert(55);
    cout<<"Heap before insertion new node: ";
    h.print();
    cout<<"Heap after insert new node 59: ";
    h.insert(59);
    h.print();
    cout<<"After delete parent means 60 from heap: ";
    h.deleteformheap();
    h.print();
    cout<<"Create a heap from an array using heapify function:";
    int arr[6]={-1,54,53,55,52,50};
    int n=5;
    for(int i=n/2;i>0;i--){
        h.heapify(arr,n,i);
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}


