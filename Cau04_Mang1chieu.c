// Mang co xen ke hay khong 

#include <stdio.h>

int main() 
{
    int a[100], n, i;
    int xenke = 1;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) 
	{
        printf("Nhap gia tri cho phan tu thu %d: ", i);
		scanf("%d", &a[i]);
    }
    for (i = 1; i < n; i++) 
	{
        if ((a[i] % 2 == 0) == (a[i - 1] % 2 == 0)) 
		{
            xenke = 0;
            break;
        }
    }
    if (xenke == 1)
        printf("Mang co xen ke chan le");
    else
        printf("Mang khong xen ke chan le");
    return 0;
}
