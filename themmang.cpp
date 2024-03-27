#include<stdio.h>
int a[]={3,2,6,5};
int n;

void inmang(int m[], int size){
	for(int i=0; i<size; i++){
		printf("%d ", m[i]);
	}
	printf("\n");
}

void them(int m[],int size, int x){
	size++;
	int pos=1;
	for(int i=size; i>pos; i--){
		a[i]=a[i-1];
	}
	a[pos]=x;
	printf("Chen x vao giua danh sach: ");
	inmang(m,size);
	
}
	

int main(){
	n=sizeof(a)/sizeof(a[0]);
	them(a,n,4);
	return 0;
}
