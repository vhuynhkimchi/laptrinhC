#include<stdio.h>
#include<limits.h>
#define maxd 20
int a[maxd][maxd];
int n ,m;
int c;
void Nhap(int c[][maxd], int &n, int &m)
{
	do
	{
		printf("Nhap n:");
		scanf("%d",&n);
		printf("Nhap m:");
		scanf("%d",&m);
	}while(n < 2 || m < 2 || n > 4 || m > 4);
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			scanf("%d",&c[i][j]);
		}
	}
}
void InMT(int c[][maxd], int n, int m)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			printf("%d	",a[i][j]);
		}
		printf("\n");
	}
}
void Max(int c[][maxd], int n,int m)
{
	int max = INT_MIN;
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(c[i][j] > max)
			{
				max = c[i][j];
				dem++;
			}
		}
	}
	printf("\nCo %d phan tu lon nhat.",dem);
}
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
int KT_tang(int x[][maxd], int size)
{
	for(int i = 0; i < size; i++)
	{
		if(x[i][c] > x[i+1][c])
		{
			return 0;
		}
		return 1;
	}
}
void Sapxep(int x[][maxd], int size)
{
	if(KT_tang(x,size) == 1)
	{
		printf("\nDay so da sap xep tang.");
	}
	else
	{
		printf("\nDay da sap xep lai la:\n");
		for(int i = 0; i < size-1; i++)
		{
			for(int j = i+1;j < size; j++)
			{
				if(x[i][c] > x[i+1][c])
				{
					swap(&x[i][c], &x[j][c]);
				}
			}
		}
		InMT(x,n,m);
	}
}
int main()
{
	Nhap(a,n,m);
	printf("Ma tran da nhap la:\n");
	InMT(a,n,m);
	Max(a,n,m);
	printf("\nNhap c:");
	scanf("%d",&c);
	Sapxep(a,n);
}
