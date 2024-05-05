//Tim GTNN tren cheo chinh
//Co bao nhieu phan tu cung nho nhat tren cheo chinh
//Nhap d tu ban phim kiem tra dong do da sap sap giam dan chua
#include<stdio.h>
#define maxd 10
#include<limits.h>

int n;
int mt[maxd][maxd];

void NhapHangCot()
{
	printf("Nhap n=hang=cot: ");
	scanf("%d",&n);
	
	while (n < 2 || n > 10)
	{
		printf("Nhap lai n: ");
		scanf("%d", &n);
	}
}

void NhapMang()
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			scanf("%d", &mt[i][j]);
		}
	}
}

void XuatMang()
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d\t", mt[i][j]);
		}
		printf("\n");
	}
}

int Min(int m[][maxd], int n)
{
	int min = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{	
			if(i < j && min > mt[i][j]){
				min = mt[i][j];
			}
		}
	} 
	return min;
}

void cau3(){
	int min = Min(mt,n);
	int dem=0;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{	
			if(i < j && min == mt[i][j]){
				dem++;
			}
		}
	} 
	printf("Co %d phan tu co gia tri cung nho nhat la %d", dem, min);
}

int kt_giam(int m[][maxd], int n, int d)
{
	for(int i=0; i<n-1; i++){//cac phan tu cua cot
		if(mt[d][i] < mt[d][i+1]){
			return 0;//vi pham quy tac khong giam -> return 0
		}	
	}
	return 1;//het for ma ko vi pham quy tac -> return 1
}

int main()
{
	NhapHangCot();
	NhapMang();
	printf("\nMang vua nhap:\n");
	XuatMang();
	Min(mt, n);
	cau3();
	int d=2;
	if(kt_giam(mt,n,d)==1){
		printf("\nDong thu %d, cac phan tu da sap xep theo thu tu giam dan",d);
	}
	else{
		printf("\nDong thu %d, cac phan tu khong sap xep theo thu tu giam dan",d);
	}
}
