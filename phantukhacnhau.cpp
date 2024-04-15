#include<stdio.h>

#define max 100

void nhapmang(int a[], int n){
	printf("Nhap so luong phan tu mang:");
	scanf("%d", &n);
	while(n<=0 || n>=max){
		printf("so phan tu da nhap la: ");
		scanf("%d", &n);
	}
}

void xuatmang(int a[], int n){
	printf("Mang da nhap la: ");
	for(int i=0; i<n; i++){
		printf("%d", a[i]);
	}
	
}
