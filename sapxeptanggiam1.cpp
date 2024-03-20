#include <stdio.h>

void nhapMang(int mang[], int n) {
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("A[%d]: ", i + 1);
        scanf("%d", &mang[i]);
    }
}
void sapXepChon(int mang[], int n) {
    int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++) {
        // Tìm ph?n t? nh? nh?t trong m?ng chua du?c s?p x?p
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (mang[j] < mang[minIndex]) {
                minIndex = j;
            }
        }

        // Hoán d?i ph?n t? nh? nh?t v?i ph?n t? d?u tiên c?a m?ng chua du?c s?p x?p
        temp = mang[i];
        mang[i] = mang[minIndex];
        mang[minIndex] = temp;
    }
}
void hoanDoiGanNhau(int mang[], int viTri1, int viTri2) {
    int temp = mang[viTri1];
    mang[viTri1] = mang[viTri2];
    mang[viTri2] = temp;
}
void hoanDoi(int mang[], int n){
	if(n%2==0){
		for (int i=0; i<n;i=i+2){
			hoanDoiGanNhau(mang, i, i+1);
		}
	}else{
		for (int i=0; i<n-1;i=i+2){
			hoanDoiGanNhau(mang, i, i+1);
		}
	}
}
void xuatMang(int mang[], int n) {
    printf("Cac phan tu cua mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");
}
int main() {
    int mang[100];
    int n;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    nhapMang(mang, n);
    sapXepChon(mang, n);
    hoanDoi(mang, n);
    xuatMang(mang, n);

    return 0;
}
