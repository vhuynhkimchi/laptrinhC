#include<stdio.h>
#include<string.h>

char s[]="toi la sinh vien";
int len;

void Trich(char source[], int num_char)
{
	for(int i=0; i<num_char; i++){
		printf("%c",s[i]);
	}
}

void Nguyenam(char chuoi[])
{
	char a[]="ueoai";
	int dem=0;
	int len=strlen(chuoi);
	for(int i = 0; i < len; i++)
	{
		for(int j=0; j<strlen(a); j++){
			if(chuoi[i] == a[j] )
			{
				chuoi[i]-=32;
				dem++;
			}
		}
	}
	printf("\nco %d nguyen am va viet hoa ng.am la %s",dem,chuoi);
	
}
//void Xoa(char chuoi[])
//{
//	int vt;
//	int leng = strlen(chuoi);
//	int dem = 0;
//	for(int i = 0; i < leng; i++)
//	{
//		dem++;
//		vt=dem-2;
//		while(dem < vt)
//		{
//			if(s[i] != ' ')
//			{
//				break;
//			}
//			else
//			{
//				dem++;
//			}
//		}
//	}
//	printf("\nChuoi sau khi xoa 2 tu cuoi la: %d",s);
//}
void Xoa(char chuoi[])
{
	int dem = 0;
	int len = strlen(chuoi);
	for(int  i =0; i < len; i++)
	{
		if(chuoi[i] == ' ')
		{
			dem++;
			if(dem == 2)
			{
				printf("%d",chuoi);
			}
			else
			{
				break;
			}
		}
		
	}
	printf("\nChuoi sau khi xoa la:%d",chuoi);
}
int main()
{
	//printf("Nhap chuoi:");
	//gets(s);
	printf("%s",s);
	printf("\nTrich chuoi: ");
	Trich(s,6);
	Nguyenam(s);
	Xoa(s);
}

