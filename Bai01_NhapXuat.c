#include <stdio.h>
void main()
{
    int mang[100],n,*p,i;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p=mang;
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu thu %d:",i+1);
        scanf("%d",p+i);
    }
    printf("\nDay so da nhap la:");
    for(i=0;i<n;i++)
    {
        printf("%d  ",*(p+i));
    }
}
