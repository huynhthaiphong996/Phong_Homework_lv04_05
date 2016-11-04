#include <stdio.h>

void main()
{
    int mang[100],n,i,*p;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p=mang;
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu thu %d:",i+1);
        scanf("%d",p+i);
    }
    printf("\nCac so chan: ");
    for(i=0;i<n;i++)
    {
        if(*(p+i)%2==0) printf("%d  ",*(p+i));
    }
     printf("\nCac so le: ");
    for(i=0;i<n;i++)
    {
        if(*(p+i)%2==1) printf("%d  ",*(p+i));
    }
}
