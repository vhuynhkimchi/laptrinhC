#include<stdio.h>
int n;
int A[50];
void NhapN()
{
	printf("Nhap vao so phan tu cua mang (1<n<50): ");
	scanf("%d", &n);
	while(n<1 || n>50)
	{
		printf("So phan tu da nhap la: ");
		scanf("%d",&n);
	}
}
void nhapMang()
{
	for(int i=0; i<n; i++)
	{
		printf("A[%d]: ", i);
		scanf("\n%d", &A[i]);
	}
}
void inMang()
{
	for(int i=0; i<n; i++)
	{
		printf("\nMang da nhap la:%d",A[i]);
	}
}
void sapxep()
{
	int i, j, tam;
	for(i=0; i<n-1; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(A[i]<A[j])
			{
			tam=A[i];
			A[i]=A[j];
			A[j]=tam;
			}
		}
	}
	printf("\nDay so sau khi sap xep la:\n ");
	inMang();
}
int main()
{
	NhapN();
	nhapMang();
	inMang();
	sapxep();
}

