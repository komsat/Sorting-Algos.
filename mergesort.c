#include<stdio.h>
void mergeSort(int a[],int p,int q);
void merge(int a[], int p, int r, int q);
int main(){
int a[]={9,8,7,6,5,4,3,2,1,0};
int n = sizeof(a)/sizeof(a[0]);
mergeSort(a,0,9);
return 0;
}

void mergeSort(int a[],int p,int q){
	if(p<q){
		int r = (p+q)/2;
		mergeSort(a,p,r);
		mergeSort(a,r+1,q);
		merge(a,p,r,q);
	}
}

void merge(int a[], int p, int r, int q){
	int n1 = r-p+1;
	int n2 = r-q;
	int b[n1], c[n2];
	for(int i=0;i<n1; i++){
		b[i]=a[p+i];
	}
	for(int j = 1; j<n2; j++){
		c[j]=a[r+j];
	}
	int i =0, j=0;
	for(int k = 0; k<p+q-1; k++){
		if(b[i]<c[j]){
			a[k]=b[i];
			i++;
		}
		else{
			a[k]=c[j];
			j++;
		}
	}

	for(int l=0; l<p+q-1;l++){
		printf("%d",a[l]);
	}
	printf("\n");
}
