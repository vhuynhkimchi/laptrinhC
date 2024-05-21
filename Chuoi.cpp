#include<stdio.h>
#include<string.h>
#define maxd 100

char s[maxd];
int len=0;

void Nhap()
{
	printf("Nhap chuoi: ");
	gets(s);
}

int dodai(char m[maxd])
{
	int dem = 0;
	int i = 0;
	while(m[i] != '\0')
	{
		dem++;
		i++;
	}
	
	return dem;
}

void In(char m[maxd])
{
	printf("Chuoi da nhap la:");
	printf("%s",s);
	len=dodai(m);
	printf("\nChuoi co do dai = %d",len);
}


void DemNA()
{
	int dem = 0;
	char b[maxd] = "UEOAIueoai";
	for(int i = 0; i < len; i++)
	{
		for(int j = 0; j < strlen(b); j++)
		{
			if(s[i] == b[j])
			dem++;
		}
	}
	printf("\nSo luong nguyen am trong chuoi: %d",dem);
}

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void my_strrev()
{
	char des[maxd];
	int dem = 0;

	for(int i = len-1; i >= 0; i--)
	{
		if(s[i] != '\0'){
			des[dem++] = s[i];
		}
	}
	des[dem]='\0';
	printf("\nMy_strrev: %s",des);
}

void Daonguoc()
{
	char des[maxd]="";
	int dem = 0;
	printf("\nIn moi tu mot dong: \n");
	for(int i = len-1; i >= 0; i--)
	{
		if(s[i]!=' ' && s[i]!='\0'){
			des[dem++] = s[i];
		}
		else{//s[i]=' '
			//printf("%s",des);
			for(int i=dem-1; i>=0; i--){
				printf("%c",des[i]);
			}
			printf("\n");
			dem=0;
		}
	}
	//in tu dau tien
	int i=0;
	while(s[i]!=' '){
		printf("%c",s[i]);
		i++;
	}
}

int main()
{
	Nhap();
	In(s);
	DemNA();
	my_strrev();
	Daonguoc();
}
