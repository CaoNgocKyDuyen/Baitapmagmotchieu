// Tinh trung binh cong cac so le

#include <stdio.h>

int main() 
{
    int a[100], n, i;
    int tong = 0, dem = 0;
    float tbc;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) 
	{
        printf("Nhap gia tri cho phan tu thu %d: ", i);
		scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) 
	{
        if (a[i] % 2 != 0) 
		{
            tong += a[i];
            dem++;
        }
    }
    if (dem > 0) 
	{
        tbc = (float)tong / dem;
        printf("Trung binh cong cac so le = %.2f", tbc);
    } 
	else 
	{
        printf("Mang khong co so le.");
    }
    return 0;
}
