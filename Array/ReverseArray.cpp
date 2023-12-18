#include <iostream>
using namespace  std;

void printArray(int arr[], int size){
	for (int i = 0; i < size; ++i)
	{
		cout<<arr[i]<<", ";
	}
	cout<<endl;
}

void reverseArray(int *arr,int size){
	int end = size-1;
	int start = 0;
	for (int i = 0; i < size; ++i)
	{
	while(start<=end){
			int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        ++start;
        --end;
	}

	}
}


int main(int argc, char const *argv[])
{
	
int arr[] = {1,2,3,4,5,6,7,8,9};
// size of array
int size = sizeof(arr)/sizeof(arr[0]);

// printing array
printArray(arr,size);
reverseArray(arr,size);
printArray(arr,size);
	return 0;
}