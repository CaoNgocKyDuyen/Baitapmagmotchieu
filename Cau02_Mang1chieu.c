// Tach mang A thanh 2 mang B va C. Mang B chua so chan, mang C chua so le

#include<stdio.h>

int main()
{
	int A[100], B[100], C[100];
    int n, i;
    int nb = 0, nc = 0;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) 
	{
    	printf("Nhap gia tri cho phan tu thu %d: ", i);
        scanf("%d", &A[i]);
    }
    for (i = 0; i < n; i++) 
	{
        if (A[i] % 2 == 0) 
		{
            B[nb] = A[i];
            nb++;
        } 
		else 
		{
            C[nc] = A[i];
            nc++;
        }
    }
    printf("Mang B (so chan): ");
    for (i = 0; i < nb; i++) 
	{
        printf("%d ", B[i]);
    }
    printf("\nMang C (so le): ");
    for (i = 0; i < nc; i++) 
	{
        printf("%d ", C[i]);
    }
	return 0;
}
