#include <iostream>
using namespace std;

int partitionArray(int input[], int start, int end) {
	int key = 0;
	for(int i = start+1;i<=end;i++){
		if(input[start]>=input[i]){
			key++;
		}
	}
    key = start + key;
	
	int temp = input[key];
	input[key] = input[start];
	input[start] = temp;

	int i = start,j = end;
	while(i<key && j>key){
		while(input[i]<=input[key]){
			i++;
		}
		while(input[j]>input[key]){
			j--;
		}
		if(i<key && j>key){
			int temp = input[j];
			input[j] = input[i];
			input[i] = temp;
            i++;
            j--;
		}
	}
	return key;	
}

void quickSort(int input[], int start, int end) {
	if(start>=end){
		return;
	}
	int key = partitionArray(input,start,end);
	quickSort(input,start,key-1);
	quickSort(input,key+1,end);
}

int main(){ 
    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter the array: "<<endl;
    for(int j=0;j<size;j++){
        cin>>arr[j];
    }

    quickSort(arr,0,size-1);

    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
