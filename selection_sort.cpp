#include <iostream>
#define INT_MAX 2147483647
using namespace std;

void selectionSort(int arr[],int n){
    if(n==0 || n==1){
        return;
    }

    int min = INT_MAX;
    int minIndex;
    for(int j = 0;j<n;j++){
        if(arr[j]<min){
            min = arr[j];
            minIndex = j;                
        }            
    }
    int temp = arr[minIndex];
    arr[minIndex] = arr[0];
    arr[0] = temp;

    selectionSort(arr+1,n-1);


    /*
    //By using iteration
    for(int i = 0;i<n-1;i++){
        int min = INT_MAX;
        int minIndex;
        for(int j = i;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                minIndex = j;                
            }            
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
    */
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

    selectionSort(arr,size);

    cout<<"Sorted array: "<<endl;
    for(int j = 0;j<size;j++){
        cout<<arr[j]<<" ";
    }

    return 0;
}
