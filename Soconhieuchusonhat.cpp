//Nhap vao day so co N phan tu 5<n<10
//Tim va in ra cac so nguyen to trong mang
//In ra man hinh so luong cac so hoan hao có trong mang.Neu khong ton tai so hoan hao in ra(khong co)
//So co nhieu chu so nhat la so nao?
#include<stdio.h>
#define maxd 100

int n;
int a[maxd];
void nhapmang(int a[], int &n){
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
	}while(n<=5 || n>=20);
	printf("Nhap mang: ");
	for(int i=0; i<n; i++){
	scanf("%d",&a[i]);
	}
}
void inmang(int a[], int n){
	printf("mang da nhap la: ");
	for(int i=0; i<n; i++){
		printf("%d ",a[i]);
	}
}

int kiemtrasoluong(int x){
	int dem=0;
	while (x!=0)
	{
		x=x/10;
		dem++;
	}
	return dem;
}

void timso(int a[], int n){
	int max=kiemtrasoluong(a[0]);
	int vitri=0;
	for(int i=1;i<n;i++){
		if(max<kiemtrasoluong(a[i])){
			max=kiemtrasoluong(a[i]);
			vitri=i;
		}
	}
	printf("\nSo co nhieu chu so nhat la: %d", a[vitri]);
	
}
int main(){
	nhapmang(a,n);
	inmang(a,n);
	
	timso(a,n);
}
