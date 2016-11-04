#include <stdio.h>

void main()
{
    int mang[100],n,i,*p,tong=0;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p=mang;
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu thu %d:",i+1);
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
    {
        tong += *(p+i);
    }
    printf("\nTong = %d",tong);
}
