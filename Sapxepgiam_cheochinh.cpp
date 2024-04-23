#include<stdio.h>
#define maxd 10
int n;
int a[maxd][maxd];
int b[maxd];
void Nhapsohangcot()
{
	printf("Nhap vao n=hang=cot: ");
	scanf("%d",&n);
	while(n < 2 || n>15 )
	{
		printf("Nhap lai n: ");
		scanf("%d",&n);
	}
} 

void Nhapphantu()
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
int swap(int *x, int *y)
{
	int tam = *x;
	*x = *y;
	*y = tam;
}
void Sapxepgiam(int m[])
{
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = 1; j < n; j++)
		{
			if (b[i] < b[j])
			{
				swap(&b[i],&b[j]);
			}
		}
	}
}

void Sapxepgiam_CC(int m[][maxd], int n)
{
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i == j) 
			{
			b[dem++]=a[i][j];
			}
		}
	}
	Sapxepgiam(b);
	for (int i = 0; i < dem; i++)
	{
		a[i][i] = b[i];
	}
	Xuatmang();
}
int main()
{
	Nhapsohangcot();
	Nhapphantu();
	printf("\nMa tran sau khi nhap la:\n");
	Xuatmang();
	printf("\nDuong cheo chinh sau khi sap xep giam la:\n");
	Sapxepgiam_CC(a,n);
}







