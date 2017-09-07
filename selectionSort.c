#include<stdio.h>
#include<stdlib.h>
int selectionSort(int arr[], int n);
int main(){
	int arr[]={9,8,7,6,5,4,3,2,1,0};
	int n = sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr, n);
	return 0;
}

int selectionSort(int arr[], int n){
	int i, j, temp=0, iMin;
	for(i=0;i<n-1; i++){
		iMin=i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[iMin]){
				iMin=j;
			}
		}
	temp=arr[i];
	arr[i]=arr[iMin];
	arr[iMin]=temp;
	}

	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
}
