#include<stdio.h>
#define maxd 100

int n;
int k;
int a[maxd];
void nhapn(int &n){
	do{
		printf("Nhap n:");
		scanf("%d",&n);
	}while(n<=5||n>=10);
}

void nhapmang(int a[], int n){
	for(int i=0;i<n; i++){
		scanf("%d",&a[i]);
	}
}

void inmang(int a[], int n){
	for(int i=0; i<n; i++){
		printf("%d ",a[i]);
	}
}

void them(int a[],int n, int x){
	n++;
	int pos=0;
	for(int i=0; i<n; i++){
		if(a[i]<x){
			pos++;
		}
	}
	//pos=??
	for(int i=n-1; i>pos; i--){
		a[i]=a[i-1];
	}
	a[pos]=x;
	printf("Day so sau khi chen la:");
	inmang(a,n);
}
int main(){
	nhapn(n);
	nhapmang(a,n);
	inmang(a,n);
	
	them(a,n,56);
	return 0;
}
