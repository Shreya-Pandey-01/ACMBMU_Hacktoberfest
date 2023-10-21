#include <iostream>
using namespace std;

void reversearray(int arr[],int size){
    for(int i=0;i<size/2;i++){
        int temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }
}


int main(){
    int arr[100];
    int size;
    cin>>size;
    for(int i=0;i<size;i++)
        cin>>arr[i];
    reversearray(arr,size);
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
