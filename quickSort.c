#include<stdio.h>

void quickSort(int arr[], int p, int r);
int partition(int arr[], int p, int r);
void swap(int *, int *);

int main(){
	int arr[]={9,8,7,6,4,3,2,0,1,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	quickSort(arr, 0, n-1);

	for(int i =0; i<n; i++){
		printf("%d",arr[i]);
	}
	return 0;
}

void quickSort(int arr[], int p, int r){
	if(p<r){
		int q = partition(arr,p,r);
		quickSort(arr,p,q-1);
		quickSort(arr,q+1,r);
	}
}

int partition(int arr[], int p, int r){
	int key = arr[r];
	int i= p-1;
	for(int j =p; j<=r-1; j++){
		if(arr[j]<=key){
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[r]);
	return (i+1);
}

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
