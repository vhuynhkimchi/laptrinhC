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
	printf("\nMang da nhap la: ");
	for(int i=0; i<N; i++)
	{
		printf("%d ", A[i]);
	}
}
void tinhTBC()
{
	float TongTBC=0;
	for(int i=0; i<N; i++){
	
	TongTBC=(TongTBC+A[i])/N;
}
   printf("\nTong TBC la: %f", TongTBC);	
}
void tinhTBCduong()
{
	float Tong=0;
	int soluongsoduong;
	for (int i=0; i<N; i++)
	{
		if(A[i]>0){
			Tong=Tong+A[i];
			soluongsoduong++;
		}
	}
	printf("\nTong TBC la: %f", Tong/soluongsoduong);
}
int main()
{
	NhapN();
	nhapMang();
	inMang();
	tinhTBC();
	tinhTBCduong();
}
