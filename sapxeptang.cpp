#include<stdio.h>
int n;
int a[10];
void NhapN(){
	printf("Nhap vao so N: ");
	scanf("%d", &n);
	while(n<5 || n>=10){
		printf("So N da nhap la: ");
		scanf("%d", &n);
	}
}
void Nhapmang(){
	for(int i=0;i<n; i++){
		printf("A[%d]: ",i);
		scanf("%d", &a[i]);
	}
}
void inMang(){
	for(int i=0; i<n; i++){
		printf("\t%d", a[i]);
	}
}
int timptnhonhat(){
	int posmin=0;
	int min=a[0];
	for(int i=1; i<n; i++){
		if(a[i]<min){
			posmin=i;
			min=a[i];
		}
	}
	return posmin;
}
int timptlonnhat(){
	int posmax=0;
	int max=a[0];
	for(int i=1; i<n; i++){
		if(a[i]>max){
			posmax=i;
			max=a[i];
		}
	}
	return posmax;
}
void swap(int *x, int *y){
	int tam= *x;
	*x= *y;
	*y=tam;
}
void doicho(){
	swap(&a[timptnhonhat()], &a[timptlonnhat()]);
	printf("\nDay so sau khi doi cho min max: ");
	inMang();
}
void sapxep() {
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i]>a[j]){
				swap(&a[i], &a[j]);
			}
		}
	}
	printf("\nDay so da sap xep tang: ");
	inMang();
}
int main(){
	NhapN();
	Nhapmang();
	inMang();
	timptnhonhat();
	timptlonnhat();
	doicho();
	sapxep();
	return 0;
}
