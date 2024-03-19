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
int kttang(int A[], int N){
	for(int i=0; i<N-1; i++){
		if(A[i] > A[i+1]){
			return 0;
		}
	}
	return 1;
 }
int main(){
	NhapN();
	Nhapmang();
	inMang();
	kttang(A,N);
	if(kttang(A,N)==1){
		printf("\nMang tang dan");
	}
	else{
		printf("\nMang khong tang dan");
	}
}
