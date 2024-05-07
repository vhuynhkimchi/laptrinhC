#include <stdio.h>
#include <string.h>

#define maxd 100

char s[maxd] = "1959, dai hoc nha trang duoc thanh lap ";
int kc[maxd];
int D[maxd];
char a[maxd];
int Dem(char m[])
{
    int dem = 1;
    for (int i = 0; i < strlen(m); i++)
    {
        if (m[i] == ' ')
        {
            dem++;
        }
    }
    return dem;
}
void mid(char source[], int start, int stop)
{
    char res[255];
    int dem = 0;

    for (int i = start; i <start+ stop; i++)
    {
        res[dem++] = source[i];
    }
    res[dem] = '\0';
    //in ra chuoi res
    printf("%s	 ", res);
}

void tudainhat(char m[])
{
    int i = 0;
    int len = 0;
    int dem = 0;
    int D[255] = {0};
    D[dem++] = 0;
    while (m[i] != '\0')
    {
        if (m[i] != ' ')
        {
            len++;
        }
        else
        {
            D[dem++] = len;
            len = 0;
        }
        i++;
    }
    printf("\nChieu dai cac tu trong chuoi");
    for (int i = 0; i < dem; i++)
    {
        printf(" %d  ", D[i]);
    }
    int max = D[0];
    for (int i = 0; i < dem; i++)
    {
        if (D[i] > max)
        {
            max = D[i];
        }
    }
    printf("\nTu dai nhat co %d ky tu",max);

    int count = 0;
    kc[count++] = 0;
    for (int i = 0; i < strlen(m); i++)
    {
        if (m[i] == ' ')
        {
            kc[count++] = i;
        }
    }
    printf("\nVi tri khoang trang:");
    for (int i = 0; i < count; i++)
        printf("%d ", kc[i]);
	printf("\nTu dai nhat trong chuoi: \n");
	for(int i = 0; i <dem; i++)
	{
		if(D[i] == max)
		{
			mid(s, kc[i]-max, max);
		}
	}
}

int main()
{
    printf("Chuoi da nhap la :");
    printf("%s", s);
    printf("\nco %d tu trong chuoi", Dem(s));
    tudainhat(s);
}
