#include<stdio.h>
#include<string.h>
#define maxd 100
char s[maxd] = "1959, dai hoc nha trang duoc thanh lap ";
int kc[maxd];;


int Dem(char m[])
{
	int dem = 1;
	for(int i = 0; i < strlen(m); i++)
	{
		if(m[i] == ' ' )
		{
			dem++;
		}
	}
	return dem;
}
//void Tudainhat(char m[])
//{
//	int dem = 0;
//	char a[max];
//	int len = strlen(m);
//	for(int i = 0; i < len; i++)
//	{
//		if(m[i] = ' ' && m[i] !='\0')
//		{
//			m[i] = a[dem];
//		}
//	}
//	printf("%c",a);
//}
void tudainhat(char m[]){
	int i=0;
	int len=0;
	int dem=0;
	int D[255];
	while(m[i]!='\0'){
		if(m[i]!='\0' && m[i]==' '){
			D[dem++]=len;
			len=0;
		}
		len++;
		i++;
	}
	//in ra danh sach do dai cua tu
	for(int i=0; i<dem; i++){
		printf("%d  ",D[i]);
	}
	int max = 0;
	int vtmax = 0;
	for(int i =1; i < dem; i++)
	{
		if(max < D[i])
		{
			max = D[i];
			vtmax = i;
		}
	}
	printf("Max = %d va vtmax = %d",max,vtmax);
	
}

void ktrang(){
	int dem=0;
	kc[dem++]=0;
	for(int i = 0; i < strlen(s); i++){
		if(s[i]==' '){
			kc[dem++]=i;
		}
	}
	for(int i = 0; i < dem; i++)
	printf("%d ",kc[i]);
	
}

void mid(char source[], int start, int stop)
{
	
}

int main()
{
	printf("Chuoi da nhap la :");
	printf("%s",s);
	printf("\nco %d tu trong chuoi",Dem(s));
//	printf("\nTu dai nhat la:");
//	tudainhat(s);
	ktrang();
}
