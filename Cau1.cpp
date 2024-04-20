#include<stdio.h>
#include<limits.h>
#define maxd 5

int n;
int a[maxd][maxd];
void nhapso_hang_cot()
{
  	printf("Nhap hang=cot=n: ");
  	scanf("%d",&n);

  	while(n<=2 || n>15)
  	{
  	  printf("Nhap n: ");
  	  scanf("%d ",&n);
	}
}

void nhapphantu(){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
	  	  //printf("A[%d,%d] = ",i,j);
	  		scanf("%d",&a[i][j]);
		}
	}
}


void inphantu()
{
  for(int i=0; i<n; i++)
		{
		  for(int j=0; j<n; j++)
		  {
	  	  printf("%d ",a[i][j]);
				}
				printf("\n");
		}
}
//void duoidcc(int m[][maxd], int n){
//	for(int i=0; i<n; i++){
//		for(int j=0; j<n; j++){
//			if(i>j){
//				printf("%d ",a[i][j]);
//		}
//	}
//}
//printf("\n");
//}

int gtnn(int m[][maxd], int n){
	int min=INT_MAX;//so nguyen tan cung lon = 2ty may
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i>j && min>a[i][j]){
				min=a[i][j];	
			}
		}
	}
	return min;
}

int shh(int x){//1 
	int sum=0;
	for(int i=1; i<x; i++){
			if(x%i==0){
				sum+=i;
			}
	}
	if(sum==x){
		return 1;
	}
	return 0;
}

void timshh(int m[][maxd], int n){
	int dem=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(shh(a[i][j])==1 && i%2==0 && j%2!=0){
				printf("\nSo hoan hao la %d tai (%d,%d)",a[i][j],i,j);
				dem++;
			}
		}
	}
	if(dem==0){
		printf("\nKhong ton tai so hoan hao");
	}
}
int main(){
	nhapso_hang_cot();
	nhapphantu();
	inphantu();
//	printf("Duoi duog cheo chinh: ");
//	duoidcc(a,n);
//	printf("gia tri nho nhat:%d",gtnn(a,n));
	timshh(a,n);
	//printf("Hang chan cot le: %d", chanle());
}
