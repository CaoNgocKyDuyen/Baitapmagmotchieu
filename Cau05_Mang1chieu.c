// Tong cac so nguyen to co trong mang 
#include <stdio.h>

int SNT(int n) 
{
    int i;
    if (n < 2)
        return 0;
    for (i = 2; i * i <= n; i++) 
	{
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main() 
{
    int a[100], n, i;
    int tong = 0;
	printf("Nhap so phan tu n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) 
	{
        printf("Nhap gia tri cho phan tu thu %d: ", i);
		scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) 
	{
        if (SNT(a[i])) 
		{
            tong += a[i];
        }
    }
    printf("Tong cac so nguyen to trong mang la: %d", tong);
    return 0;
}
