#include<stdio.h>
#define max 100

int n;
int a[max];
int k;

void nhapn(){
	printf("Nhap vao so phan tu n: ");
	scanf("%d", &n);
	while (n<1 || n>20){
		printf("So phan tu n la: ");
		scanf("%d", &n);
	}
}

void nhapmang(){
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}

void inmang(int a[], int n){
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
}

void timx(int a[], int n, int x){
	for(int vt=0; vt<n; vt++){
		if(a[vt]==x){
			printf("\nSo tim duoc o vi tri X: %d", x);
		}
	}
}

int timvitri(int a[], int n, int x){
	for(int vt=0; vt<n; vt++){
		if(a[vt]==x){
			return vt;
		}
	}
	return -1;
}

void Delete(int a[], int n){
	printf("\nNhap k: ");
	scanf("%d", &k);
	int vt=timvitri(a,n,k);
	printf("\nvt = %d\n",vt);
	if(vt==-1){
		printf("\nKhong tim thay vi tri");
	}
	else{
		//th1. so k nam o cuoi
//		if(vt==n-1){
//			printf("\nday so sau khi xoa la: ");
//			n--;
//			inmang(a,n);
//		}
		//th2. so k nam o dau
		if(vt!=-1){
			printf("\nday so sau khi xoa la: ");
			//dich toan bo day so sang trai
			for(int i=vt+1; i<n; i++){
				a[i-1]=a[i];
			}
			n--;
			inmang(a,n);
		}
	}
}

int main(){
	nhapn();
	nhapmang();
	printf("\nmang da nhap la: ");
	inmang(a,n);
//	printf("Nhap x: ");
//	scanf("%d", &k);
//	timx(a,n,k);
	Delete(a,n);
	
}
