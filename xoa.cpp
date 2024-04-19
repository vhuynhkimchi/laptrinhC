#include<stdio.h>
#define maxd 100

int n;
int k;
int a[maxd];
void nhapmang(int a[], int &n){
	do{
		printf("Nhap n:");
		scanf("%d",&n);
	}while(n<=5||n>=10);
	for(int i=0;i<n; i++){
		scanf("%d",&a[i]);
	}
}
void inmang(int a[], int n){
	printf("mang da nhap la: ");
	for(int i=0; i<n; i++){
		printf("%d ",a[i]);
	}
}
int timvt(int a[], int n, int x){
	for(int i=0; i<n; i++){
		if(a[i]==x){
			return i;
		}
	}
	return -1;
}

void xoa(int a[], int n){
	printf("\nNhap k: ");
	scanf("%d",&k);
	
	int vt=timvt(a,n,k);
	printf("\nVT=%d",vt);
	
	if(vt==-1){
		printf("\nkhong tim thay vi tri.");
	}
	if(vt!=-1){
		printf("\nDay so sau khi xoa la: ");
		for(int i=vt+1; i<n; i++){
			a[i-1]=a[i];
		}
	}
	n--;
	inmang(a,n);
}
int main(){
	nhapmang(a,n);
	inmang(a,n);
	xoa(a,n);
}
