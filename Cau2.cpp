#include<stdio.h>
#include<string.h>
#define maxd 100
char s[maxd]="Dai hoc Nha Trang ";
//int Nhap(char m[])
//{
//	printf("Nhap chuoi:");
//	gets(s);
//}
void In(char m[])
{
	printf("\nChuoi da nhap la:");
	printf("%s",s);
}
void LEFT(char m[], int num_char)
{
	printf("\nCac ki tu tan cung trai la:");
	int i = 0;
	while(m[i] != '\0')
	{
		if(m[i] != 32)
		{
			printf("%c",m[i]);
			i++;
		}
		else
		break;
	}
}
void DemNA(char m[])
{
	char a[maxd] = "ueoai";
	int dem = 0;
	int len = strlen(m);
	for(int i = 0; i < len; i++)
	{
		for (int j = 0; j < strlen(a); j++)
		if(m[i] == a[j])
		{
			dem++;
			m[i] = int(a[j] -32);
		}
	}
	printf("\nCo %d nguyen am thuong.",dem);
	printf("\nChuoi sau khi doi nguyen am thuong thanh hoa la:%s",m);
}
int main()
{
	//Nhap(s);
	In(s);
	DemNA(s);
	LEFT(s,5);
}
