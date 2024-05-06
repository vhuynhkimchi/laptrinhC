#include<stdio.h>
#include<string.h>
#define max 100
char s1[max] = "Dai Hoc ";
char s2[max] = "Nha Trang";

void noichuoi()
{
	int dems1 = 0;
	int dems2 = 0;
	while(s1[dems1] != '\0')
	{
		dems1++;
	}
	while(s2[dems2] != '\0')
	{
		s1[dems1] = s2[dems2];
		dems1++;
		dems2++;
	}
	s1[dems1] = '\0';
	printf("\nchuoi noi la:%s",s1);
}
int main()
{
	printf("Chuoi sau khi nhap la:");
	printf("%s ",s1);
	printf("%s",s2);
	noichuoi();
}
