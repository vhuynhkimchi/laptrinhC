//sap xep day so theo thu tu tang dan.
//Nhap mot so X tu ban phim va chen vao day so sao cho day van tang dan.
#include<stdio.h>
#define max 100
int n;
int k;
int a[max];
void nhapmang(int a[], int &n){
	do{
	printf("Nhap phan tu n: ");
	scanf("%d", &n);
	}while(n<=5 || n>20);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		}	
}
void inmang(int a[], int n){
	printf("mang da nhap la: ");
	for(int i=0; i<n; i++){
		printf("%d ",a[i]);
	}
}
void hoanvi(int *x, int *y){
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
void sapxeptang(int a[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i] > a[j]){
				hoanvi(&a[i], &a[j]);
			}
		}
	}
	printf("\ndssx:");
	inmang(a,n);
}
//int timvitri(int a[], int n, int x){
//	for(int i=0; i<x; i++){
//		if(a[i]<x && a[i+1]>x){
//			return i;
//		}
//	}
//}

void chen(int a[], int n,int x){
	
	
//	int vt=timvitri(a,n,x);
//	printf("vt = %d\n", vt);
//	
//	
//	if(vt!=-1){
//		printf("Day so sau khi chen la: ");
//		for(int i=vt+1; i<n; i++){
//			a[i]=a[i+1];
//		}
//	}
//	n++;
//	printf("mang sau khi chen la: ");
//	inmang(a,n);


	int vtc=0;
	for(int i=0; i<n; i++){
		if(a[i]<x){
			vtc++;
		}
	}
	printf("Vi tri cua so can chen: %d\n", vtc);	
	n++;
	for(int i=n; i>vtc; i--){
		a[i]=a[i-1];
	}
	printf("Day so sau khi dich chuyen: ");
	inmang(a,n);
	
	a[vtc]=x;
	printf("\nDay so sau khi chen la: ");
	inmang(a,n);
}	

int main(){
	nhapmang(a,n);
	inmang(a,n);
	sapxeptang(a,n);
	printf("\nNhap k: ");
	scanf("%d",&k);
	chen(a,n,k);
}
