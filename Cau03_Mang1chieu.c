// Them x vao sau so chan dau cua mang

#include<stdio.h>

int main()
{
	int a[101], n, x, i, j, vt = -1;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) 
	{
        printf("Nhap gia tri cho phan tu thu %d: ", i);
		scanf("%d", &a[i]);
    }
    printf("Nhap gia tri x: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++) 
	{
        if (a[i] % 2 == 0) 
		{
            vt = i;
            break;
        }
    }
    if (vt != -1) 
	{
        for (j = n; j > vt + 1; j--) 
		{
            a[j] = a[j - 1];
        }
        a[vt + 1] = x;
        n++;
        printf("Mang sau khi them: ");
        for (i = 0; i < n; i++) 
        {
            printf("%d ", a[i]);
        }
    } 
	else 
	{
        printf("Mang khong co so chan.");
    }
	return 0;
}
