#include<stdio.h>
#include<math.h>
#define max 10
int n;
int A[max];

void nhapN()
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
		scanf("%d", &A[i]);
	}
}

void inMang()
{
	for(int i=0; i<n; i++)
	{
		printf("%d ", A[i]);
	}
}

int checksnt(int x){
	if(x<=1) return 0;
	int dem = 0;
	
	for(int i=1; i<=x; i++){
		if(x%i==0){
			dem ++;
		}
	}
	
	if(dem==2){
		return 1;
	}
	return 0;
}

float tbc_songuyento(int A[], int n){
	float tb=0;
	int cnt=0;
	for(int i=0; i<n; i++){
		if(checksnt(A[i])==1){
			tb=tb+A[i];
			cnt++;
		}
	}
	if(cnt!=0){
		tb=tb/cnt;
	}
	return tb;
}

int main(){
	nhapN();
    nhapMang();
    printf("\nmang da nhap la: ");
    inMang();
    printf("\nTrung binh cong cac so nguyen to la: %f", tbc_songuyento(A,n));
   
    return 0;
}
