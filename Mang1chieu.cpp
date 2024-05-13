#include<stdio.h>
#include<math.h>

#define maxd 20

int spt;
int a[maxd];

void nhapmang()
{	
	int n;
	printf("n = ");
	scanf("%d",&n);
	while (n != 0)
	{
		printf("n = ");                           
		scanf("%d",&n);
		a[spt++] = n;
	}
}
void inmang(int m[],int size){
	for(int i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
}

void swap(int *x, int *y)
{
	int tam = *x;
	*x = *y;
	*y = tam;
}
void sapxep(int m[], int size){
	for(int i = 0; i < spt-1; i++){
		for(int j = i +1; j < spt; j++){
			if(abs(a[i]) > abs(a[j])){
				swap(&a[i],&a[j]);
			}
		}
	}
	printf("\nMang sau khi sap xep la:");
	inmang(m,size);
}

int main()
{
	nhapmang();
	printf("Mang nhap toi 0: ");
	inmang(a,spt);
	sapxep(a,spt);
}
