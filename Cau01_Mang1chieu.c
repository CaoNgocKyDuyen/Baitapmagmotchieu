// Sap xep mang so chan dau tang dan, so le cuoi giam dan 

#include <stdio.h>

int main() 
{
    int n, a[100], i, j, temp;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("Nhap gia tri cho phan tu thu %d: ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++) 
	{
        for (j = i + 1; j < n; j++) 
		{
            if ((a[i] % 2 != 0 && a[j] % 2 == 0) || (a[i] % 2 == 0 && a[j] % 2 == 0 && a[i] > a[j]) || (a[i] % 2 != 0 && a[j] % 2 != 0 && a[i] < a[j])) 
				{
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep:\n");
    for (i = 0; i < n; i++) 
	{
        printf("%d ", a[i]);
    }
    return 0;
}
