#include <iostream>
using namespace std;

void insertionSort(int arr[],int size){
    int i,j,key;
    for(int i = 1;i<size;i++){
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;      
    }
}

int main(){
    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;

    int array[size];
    cout<<"Enter the array: "<<endl;

    for(int i=0;i<size;i++){
        cin>>array[i];
    }

    insertionSort(array,size);

    cout<<"Sorted array: "<<endl;
    for(int i = 0;i<size;i++){
        cout<<array[i]<<" ";
    }










    return 0;
}
