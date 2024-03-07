#include<stdio.h>
int n;
void NhapN() {
	printf("Nhap vao so N: ");
	scanf("%d", &n);
	while (n<=5 || n>=10){
		printf("Nhap N= ");
		scanf("%d",&n);  
 	} 
}
int giaithua(int x){
	int gt=1;
	for(int i=1; i<=x; i++){
		gt=gt*i;
	}
	return gt();
}
void Tong(){
	int S=0;
	for (int i=1; i<=n; i++){
		S=S+giaithua(i);
	}
	printf("tong=%d", S);
}
int main(){
	NhapN();
	Tong();
	
	return 0;
}
