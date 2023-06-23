#include <iostream>
using namespace std;

void merge(int arr[],int l,int r){
    int a[r-l+1];
    int mid = (l+r)/2;

    int i = l,j = mid+1,k = 0;
    while(i<=mid && j<=r){
        if(arr[i]<=arr[j]){
            a[k] = arr[i];
            k++;
            i++;
        }
        if(arr[i]>=arr[j]){
            a[k] = arr[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        a[k] = arr[i];
        i++;
        k++;
    }
    while(j<=r){
        a[k] = arr[j];
        j++;
        k++;
    }

    for(int m = 0;m<k;m++){
        arr[l+m] = a[m];
    }

}

void mergeSort(int arr[], int l, int r) {
    if(l>=r){
        return;
    }

    int mid = (l+r)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);

    merge(arr,l,r);   

}

int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the array: "<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    mergeSort(arr,0,n-1);

    cout<<"Sorted array: "<<endl;

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
