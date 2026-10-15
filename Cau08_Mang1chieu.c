// Mang co doi xung hay khong 

#include <stdio.h>

int main() 
{
    int a[100], n, i;
    int doixung = 1;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) 
	{
        printf("Nhap gia tri cho phan tu thu %d: ", i);
		scanf("%d", &a[i]);
    }
    for (i = 0; i < n / 2; i++) 
	{
        if (a[i] != a[n - 1 - i]) 
		{
            doixung = 0;
            break;
        }
    }
    if (doixung == 1)
        printf("Mang doi xung");
    else
        printf("Mang khong doi xung");
    return 0;
}
