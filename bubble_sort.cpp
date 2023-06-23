#include <iostream>
using namespace std;

void bubbleSort(int arr[],int size){
    for(int i = 0;i<size-2;i++){
        for(int j = i;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}



int main(){
    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }

    bubbleSort(arr,size);

    for(int i = 0;i<size;i++){
    cout<<arr[i]<<" ";
    }

    return 0;
}
