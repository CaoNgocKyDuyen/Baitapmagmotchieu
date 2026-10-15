// Mang co tang dan hay khong 

#include <stdio.h>

int main() 
{
    int a[100], n, i;
    int tangdan = 1;
	printf("Nhap so phan tu n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) 
	{
        printf("Nhap gia tri cho phan tu thu %d: ", i);
		scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++) 
	{
        if (a[i] > a[i + 1]) 
		{
            tangdan = 0;
            break;
        }
    }
    if (tangdan == 1)
        printf("Mang tang dan");
    else
        printf("Mang khong tang dan");

    return 0;
}
