#include<stdio.h>
int n;
int A[10];
void NhapN()
{
	printf("Nhap vao so phan tu cua mang (0<n<10): ");
	scanf("%d", &n);
	while(n<1 || n>10)
	{
		printf("nhap vao phan tu: ");
		scanf("%d",&n);
	}
}
void nhapMang()
{
	for(int i=0; i<n; i++)
	{
		printf("\nA[%d]: ",i);
		scanf("\n%d", &A[i]);
	}
}
void inMang()
{
	for(int i=0; i<n; i++)
	{
		printf("\nMang da nhap la: %d", A[i]);
	}
}
void tinhTong()
{
	int Tong=0;
	for(int i=0; i<n; i++)
	{
		Tong+=A[i];
		
	} 
	printf("\nTong= %d",Tong);
}
int main()
{
	NhapN();
	nhapMang();
	inMang();
	tinhTong();
}

