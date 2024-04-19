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
int timsl(int x){
	int dem=0;
	while(x!=0){
		x=x/10;
		dem++;
	}
	return dem;
}
void chusomax(int a[], int n){
	int max=timsl(a[0]);
	int vt=0;
	for(int i=1; i<n; i++){
		if(max<timsl(a[i])){
			max=timsl(a[i]);
			vt=i;
		}
	}
	printf("\nVT=%d",vt);
	printf("\nSo co nhieu chu so nhat la:%d",a[vt]);
}

int main(){
	nhapmang(a,n);
	inmang(a,n);
	chusomax(a,n);
}
