#include<stdio.h>
#define maxd 10
#include<limits.h>

int n;
int d;
int c;
int a[maxd][maxd];

void Nhapsohangcot()
{
	printf("Nhap hang=cot=n: ");
	scanf("%d",&n);
	while(n < 2 || n > 15)
{
	printf("Nhap lai n: ");
	scanf("%d",&n);
}
}
void Nhapmang()
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}

void Xuatmang()
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}

void TrenCC(int m[][maxd], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i < j)
			{
				printf("%d ", a[i][j]);
			}
		}
	}
}

void Indong(int m[][maxd], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%d ",a[d][i]);
	}
}

int Min(int m[][maxd], int n)
{
	int min = INT_MAX;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i > j && min > a[i][j])
			{
				min = a[i][j];
			}
		}
	}
	return min;
}

int Swap(int *x, int *y)
{
	int tam = *x;
	*x = *y;
	*y = tam;
}

void Chuyenvi(int m[][maxd], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < i; j++)
		{
			Swap(&a[i][j], &a[j][i]);
		}
	}
	Xuatmang();
}
int PhantuCtrencheochinh()
{
	if(n==15)
	{
		printf("Nhap c: ");
		scanf("%d",&c);
		for (int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(i == j)
				{
					printf("%d",c);
				}
				else
				{
					printf("0");
				}
			}
			printf("\n");
		}
	}
}

void Sapxepgiam(int m[][maxd], int n)
{
	for (int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(i == j && a[i][j] < a[i+1][j+1] )
				{
					Swap(&a[i][j], &a[i+1][j+1]);
				}
			}
		}
		Xuatmang();
}

int main()
{
	Nhapsohangcot();
	Nhapmang();
	Xuatmang();
//	printf("\nCac phan tu tren duong cheo chinh la:");
//	TrenCC(a,n);
//	printf("\nNhap d: ");
//	scanf("%d",&d);
//	printf("\nCac phan tu tren dong d cua ma tran la: ");
//	Indong(a,n);
//	printf("\nGTNN duoi duong cheo chinh la: %d", Min(a,n));
//	printf("\nMa Tran chuyen vi la:\n");
//	Chuyenvi(a,n);
	
//	printf("Phan tu C tren cheo chinh:");
//	PhantuCtrencheochinh();
	printf("Ma tran co duong cheo chinh giam dan la : \n");
	Sapxepgiam(a,n);
}
