#include <stdio.h>
void main()
{
    int mang[100],n,i,*p;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p=mang;
    for(i=0;i<n;i++)
    {
        if(i==0) *p=1;
        else if(i==1) *(p+1) =1;
        else *(p+i) = *(p+i-1)+*(p+i-2);
    }
    printf("\nDay Fibonacci: ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",*(p+i));
    }
}
