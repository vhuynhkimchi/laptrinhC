#include<stdio.h>
int N;
int A[10];
void NhapN() {
	printf("Nhap vao so N: ");
	scanf("%d", &N);
	while(N<5 || N>10){
		printf("Nhap so N: ");
		scanf("%d",&N);
	}
}
void Nhapmang(){
	for(int i=0;i<N; i++){
		printf("A[%d]: ",i);
		scanf("%d", &A[i]);
	}
}
void inMang(){
	for(int i=0; i<N; i++){
		printf("\t%d", A[i]);
	}
}
int timptnhonhat(){
	int posmin=0;
	int min=A[0];
	for(int i=1; i<N; i++){
		if(A[i]<min){
			posmin=i;
			min=A[i];
		}
	}
	return posmin;
}
int main(){
	NhapN();
	Nhapmang();
	inMang();
	printf("\nSo nho nhat la %d, tai vi tri %d", A[timptnhonhat()], timptnhonhat());
	return 0;
}
