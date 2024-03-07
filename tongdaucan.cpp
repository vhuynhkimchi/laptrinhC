#include<stdio.h>
#include<math.h> 
int n;
void NhapN()
{
	printf("Nhap vao so N: ");
	scanf("%d", &n);
	while(n<=0){
		printf("Nhap N= ");
		scanf("%d",&n);  
 	} 
}
float TongS()
{
	float S=0;
	float ts=0;
	float ms=0;
	for(int i=1; i<=n; i++){
		ts=i;
		ms= pow((i+1), ((float)1/(i+1))); 
		printf("ts= %f\n",ts);
		printf("ms= %f\n",ms);
		
		S=S+(ts/ms); 
	} 
	return S; 
 } 
 
 int main(){
 	NhapN();
	printf("Tong S = %f", TongS()); 
	
	return 0; 
 } 
