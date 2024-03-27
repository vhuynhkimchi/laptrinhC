#include<stdio.h>
int a[]={3,2,6,5};
int n;

void inmang(int m[], int size){
	for(int i=0; i<size; i++){
		printf("%d ", m[i]);
	}
	printf("\n");
}

void xoa(int m[], int size){
	//chen x vao vi tri bat ky
	int pos=1;//xoa so tai vi tri pos: 0, size, 0<pos<size
	//B1. Dich chuyen day so sang trai tu pos ve cuoi 1 phan tu
	for(int i=pos; i<size; i++){
		a[i]=a[i+1];
	}
	size--;//giam so luong phan tu len 1
	printf("Day so sau khi xoa: ");
	inmang(m,size);//chu y: size da giam di 1
}
	

int main(){
	n=sizeof(a)/sizeof(a[0]);
	xoa(a,n);
	return 0;
}
