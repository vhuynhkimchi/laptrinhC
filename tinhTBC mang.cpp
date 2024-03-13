#include<stdio.h>
int N;
int A[10];
void NhapN()
{
	printf("Nhap vao so phan tu cua mang: ");
	scanf("%d", &N);
	while(N<1 || N>10)
	{
		printf("So phan tu da nhap la: ");
		scanf("%d",&N);
	}
}
void nhapMang()
{
	for(int i=0; i<N; i++)
	{
		printf("A[%d]: ", i);
		scanf("%d", &A[i]);
	}
}
void inMang()
{
	for(int i=0; i<N; i++)
	{
		printf("\nMang da nhap la: %d", A[i]);
	}
}
float tinhTBC(int x[], int N)
{
	float TongTBC=0;
	for(int i=0; i<N; i++){
	
	TongTBC=(TongTBC+x[i])/N;
}
   return TongTBC;	
}
float tinhTBCduong(int x[], int N)
{
	float Tong=0;
	int soluongsoduong;
	for (int i=0; i<N; i++)
	{
		if(x[i]>0){
			Tong=Tong+x[i];
			soluongsoduong++;
		}
	}
	return Tong/soluongsoduong;
}
int main()
{
	NhapN();
	nhapMang();
	inMang();
	tinhTBC(A,N);
	tinhTBCduong(A,N);
}
