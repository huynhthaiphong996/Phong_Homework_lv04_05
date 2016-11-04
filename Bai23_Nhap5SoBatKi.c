#include <stdio.h>
void main()
{
    int i,*p,mang[5];
    p=mang;
    for(i=0;i<5;i++)
    {
        printf("\nNhap gia tri phan tu thu %d:",i+1);
        scanf("%d",p+i);
    }
    printf("\nDay da nhap:");
    for(i=0;i<5;i++)
    {
        printf("%d  ",*(p+i));
    }
}
