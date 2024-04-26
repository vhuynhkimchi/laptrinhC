#include<stdio.h>
#include<string.h>
#define maxd 100
char s[maxd];
int len;

int Nguyenam(char chuoi[], char na)
{	
	int len = strlen(chuoi);
	int dem=0;
	for(int i = 0; i < len; i++)
	{
		if(chuoi[i] == na || chuoi[i] == char(int(na)-32))
		{
			dem++;
		}
	}
	return dem;
}

int Tongchuso(char chuoi[])
{
	int Tong=0;
	int len = strlen(chuoi);
	for(int i = 0; i < len; i++)
	{
		if(chuoi[i] >= '0' && chuoi[i] <= '9')
		{
			Tong+= int(chuoi[i])-48;
		}
	}
	return Tong;
}

int main()
{
	printf("Nhap mot chuoi:");
	//fgets(s, sizeof(s), stdin);
	fflush(stdin);
	gets(s);
	printf("Chuoi nhan duoc la: %s",s);
	len=strlen(s);
	
	printf("\nSo luong so nguyen am la a: %d",Nguyenam(s,'a'));
	printf("\nSo luong so nguyen am la o: %d",Nguyenam(s,'o'));
	printf("\nSo luong so nguyen am la i: %d",Nguyenam(s,'i'));
	printf("\nSo luong so nguyen am la u: %d",Nguyenam(s,'u'));
	printf("\nSo luong so nguyen am la e: %d",Nguyenam(s,'e'));
	
	printf("\nTong chu so la:%d", Tongchuso(s));
}
