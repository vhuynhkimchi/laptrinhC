#include<stdio.h>
#define max 100

int n;
int a[max];
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

void inmang(){
	for(int i=0; i<n; i++){
		printf("%d", a[i]);
	}
}

int checkshh(int x){
	int sum=0;
	for(int i=1; i<x; i++){
		if(x%i==0){
			sum+=i;
		}
	}
	if(sum==x){
		return 1;
	}
	return 0;
}

float tbc_shh(int a[], int n){
	float tb=0;
	float cnt=0;
	for(int i=0; i<n; i++){
		if(checkshh(a[i])==1){
			tb+=a[i];
			cnt++;
		}
	}
	if(cnt!=0){
		tb=tb/cnt;
	}
	return tb;
}
int main(){
	nhapn();
	nhapmang();
	printf("\nmang da nhap la: ");
	inmang();
	printf("Trung binh cong cac so hoan hao: %f",tbc_shh(a, n) );
	
}
