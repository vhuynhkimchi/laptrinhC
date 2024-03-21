#include<stdio.h>
int n, n1,n2;
int a[10], b[10], c[10];
void nhapn(){
	printf("Nhap vao so N: ");
	scanf("%d", &n);
	while(n<5 || n>=10){
		printf("So N da nhap la: ");
		scanf("%d", &n);
	}
}
void Nhapmang(int x[10], int &n){
	for(int i=0;i<n; i++){
		printf("A[%d]: ",i);
		scanf("%d", &x[i]);
	}
}
void inMang(int x[10], int n){
	for(int i=0; i<n; i++){
		printf("\t%d", x[i]);
	}
}

void tach(int x[10], int n, int x1[10], int &n_1, int x2[10], int &n_2){
	int i1=0; n_1=0;
	int i2=0; n_2=0;
	for (int i=0; i<n; i++){
		if(x[i]%2==0){
			x1[i1]=x[i];
			i1++;
			n_1++;
		}
		else{
			x2[i2]=x[i];
			i2++;
			n_2++;
		
		}
	}
}
int main() {
	nhapn();
	Nhapmang(a,n);
	inMang(a,n);
	printf("\nMang da sap xep theo thu thu tang giam lien tiep la: ");
	tach(a,n,b,n1,c,n2);
	printf("\nSo chan la: ");
	inMang(b,n1);
	printf("\nSo le la: ");
	inMang(c,n2);
	return 0;
}
