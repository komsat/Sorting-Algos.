#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void insertionSort(int arr[], int n);
void insertionSort(int arr[], int n){
	int i, j, key;
	for(j=1; j<n; j++){
		key = arr[j];
		i = j-1;
		while(i>=0 && arr[i]>key){
			arr[i+1]=arr[i];
			i--;
		}
		arr[i+1]=key;
	}
	for(i=0; i<n; i++){
		printf("%d",arr[i]);
	}
}

int main(){
int arr[]={0,2,7,1,9,5,8,3,6,4};
int n = sizeof(arr)/sizeof(arr[0]);
insertionSort(arr, n);
printf("\n");
return 0;
}
