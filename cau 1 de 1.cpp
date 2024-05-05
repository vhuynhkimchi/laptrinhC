//Tinh TBC cac so chan tren duong cheo phu
//Tim GTNN tren cheo chinh
//Nhap c tu ban phim va in ra duong cheo chinh la phan tu c con xung quanh bang 0
#include<stdio.h>
#define maxd 5
#include<limits.h>
int n;
int c;
int a[maxd][maxd];


void nhapsohangcot(){
	printf("Nhap hang=cot=n:");
	scanf("%d",&n);
	while(n<2||n>15){
		printf("Nhap lai n:");
		scanf("%d",&n);
	}
}
void nhapphantu(){
	for(int i=0; i<n; i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
}
void xuatmang(){
	for(int i=0; i<n; i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int ktra_chan(int x){
	if(x%2==0){
		return 1;
	}
	return 0;
}
float inchan(int m[][maxd], int n){
	float tbc=0;
	int tong=0;
	float cnt=0;
	for(int i=0; i<n; i++){
		for(int j=0;j<n;j++){
			if(i+j<n-1 && ktra_chan(a[i][j])==1){	
				tong+=a[i][j];
				cnt++;
			}
		}
	}
	tbc=tong/cnt;
	return tbc;
}
int min(int m[][maxd], int n){
	int min=INT_MAX;
		for(int i=0; i<n; i++){
			for(int j=0;j<n;j++){
				if(i<j && min>a[i][j]){
					min=a[i][j];
				}
			}
		}
		return min;
}

int caud()
{
	if (n == 15)
	{
		printf("\nNhap c:");
		scanf("%d",&c);
		for(int i=0; i<n; i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i==j)
				{
					printf("%d ",c);
				}
				else
				{
					printf("0 ");
				}
			}
			printf("\n");
		}
	}
}

int main(){
	nhapsohangcot();
	nhapphantu();
	xuatmang();
	printf("TBC=%.2f",inchan(a,n));
	printf("\nGTNN tren duong cheo chinh: %d",min(a,n));
	caud();
}

