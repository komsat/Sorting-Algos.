#include<stdio.h>

int main(){
	int i, j;
	int temp=0;
	int arr[]={9,8,7,6,5,4,3,2,1,0};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(i=0; i<n; i++){
		for(j=n-1;j>i;j--){
			if(arr[j],arr[j-1]){
				temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
			}
				
		}
	}
	for(int k =0; k<n; k++){
		printf("%d",arr[k]);
	}
	return 0;
}
