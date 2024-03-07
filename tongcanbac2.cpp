#include<stdio.h>
#include<math.h> 
int n;

void NhapN()
{
	printf("Nhap vao so N: ");
	scanf("%d", &n); 
	//dk? 
	if(n<=0){
		printf("Nhap N= ");
		scanf("%d",&n); 
	} 
} 

float TongS()
{
	float S=0;
	float ts=0;
	float ms=0;
	 
	for(int i=0; i<=n; i++){
		ts=2*i+1;
		ms=sqrt(ms+2*i+1); 
		S=S+ts/ms; 
	} 
	return S; 
} 

int main()
{
	NhapN();
	printf("Tong S=%f", TongS());
	return 0; 
 } 
