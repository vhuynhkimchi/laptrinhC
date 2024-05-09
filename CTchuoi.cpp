//Dem do dai cua chuoi
//Dem nguyen am
//Dao nguoc
//Sap xep ky tu hoa thuong
#include<stdio.h>
#include<string.h>

char s[100] = "T@I 1A h0c sinH K23 dhnt 2024!";

int Dodai(char a[])
{
	int dem = 0;
	int i = 0;
	while(a[i] != '\0')
	{
		dem++;
		i++;
	}
	return dem;		
}
void Nguyenam(char a[])
{
	int len =strlen(a);
	char m[20] = "ueoaiUEOAI";
	int dem = 0;
	for(int i = 0; i < len; i++)
	{
		for(int j = 0; j < strlen(m); j++)
		{
			if(a[i] == m[j])
			dem++;
		}
	}printf("\nSo nguyen am trong chuoi la:%d",dem);
}
void Daonguoc(char m[])
{
	int vt = 0;
	char b[100];
	char len = strlen(m);
	for( int i = len - 1; i >= 0; i--)
	{
		while(m[i] != ' ' && i >= 0)
		{
			b[vt] = m[i];
			vt++;
			i--;
		}
		b[vt] = '\0';
		strrev(b);
		vt = 0;
		printf("%s ",b);
	}
}

void Sapxep(char m[]){
	char des[255];
	int dem=0;
	for(int i=0; i<strlen(m); i++){
		if(((m[i]>='A' && m[i]<='Z'))||((m[i]>='a' && m[i]<='z'))){
			des[dem++]=m[i];
		}
	}	
	des[dem]='\0';
	printf("\nChuoi toan ky tu: %s",des);
	//sap xep
	for(int i=0; i<dem-1; i++){
		for(int j=i+1; j<dem; j++){
			if(des[i] > des[j]){
				char tam = des[i];
				des[i]=des[j];
				des[j]=tam;
			}
		}
	}
	printf("\nChuoi sau khi sap xep toan ky tu: %s",des);
}

//'1' = 49-48 = 1

void timsnt(char m[]){
	int number[255];
	int idx=0;
	int so=0;
	int start;
	int count;
	int i;
	int j;
	//tim vi tri noi co cac chu so
	for(i=0; i<strlen(m); i++){
		if(m[i] >='0' && m[i]<='9'){
			start = i;
			count=1;
			for(j=start+1; j<strlen(m); j++){
				if(m[j] >='0' && m[j] <='9'){
					count++;
				}
				else{
					break;
				}
			}
			i=j;
			number[idx++] = start;
			number[idx++] = count;
		}	
	}
	//in ra day number
	printf("\nDay toan cac chu so: ");
	for(int i=0; i<idx; i++){
		printf("%d  ",number[i]);
	}
	//mang number 4 1 8 1 17 2 25 4
	int songuyen[255];
	int len=0;
	for(int i=0; i<idx-1; i=i+2){
		for(int j=0; j<number[i+1]; j++){
			printf("\nso i+1 = %d",number[i+1]);
			so=so*10+(int(m[i]) - 48);
			printf("\nso = %d",so);
		}
		songuyen[len++]=so;
		so=0;
	} 
	
	
	
	//in ra day so nguyen
//	printf("\nDay toan cac chu so: ");
//	for(int i=0; i<len; i++){
//		printf("%d  ",songuyen[i]);
//	}
}

int main()
{
	//printf("Chuoi da nhap la :");
	printf("\n%s",s);
//	Dodai(s);
//	printf("\nDo dai chuoi la: %d", Dodai(s));
//	Nguyenam(s);
//	printf("\nChuoi sau khi do nguoc la:");
//	Daonguoc(s);
//	Sapxep(s);
	timsnt(s);
}

