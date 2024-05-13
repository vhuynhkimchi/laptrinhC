#include<stdio.h>
#include<string.h>
#define maxd 100
char s[maxd] = "thang gieng la thang an choi, thang hai co bac, thang ba ruoi che";

int DemNA(char m[maxd])
{
	int dem = 0;
	char a[maxd] = "ueoaiUEOAI";
	for(int i = 0; i < strlen(m); i++)
	{
		for(int j = 0; j < strlen(a); j++)
		{
			if(m[i] == a[j])
			dem++;
		}
	}
	return dem;
}
void tudainhat()
{
	int i;
	int a[maxd];
	int dem = 0;
	int len = 0;
	while(s[i] != '\0' )
	{
		if(s[i] != ' ')
		{
			len++;
		}
		else
		{
			a[dem++] = len;
			len = 0;
		}
		i++;
	}
	int max = 0;
	for(int i = 0; i < dem; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	printf("\nTu dai nhat trong chuoi co %d ky tu",max);
}
int main()
{
	printf("Chuoi da nhap la :");
	printf("%s",s);
	printf("\nCo %d nguyen am trong chuoi.", DemNA(s));
	tudainhat();
}

