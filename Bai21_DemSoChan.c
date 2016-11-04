#include <stdio.h>
void main()
{
    int n,i,*p,mang[100],j=0,tong=0;
    printf("Nhap n:");
    scanf("%d",&n);
    p=mang;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
         {
            tong++;
            *(p+j)=i;
            j++;
         }
    }
    printf("\nCac so chan: ");
    for(i=0;i<j;i++)
    {
        printf("%d ",*(p+i));
    }
    printf("\nSo cac so chan tu 1 den n la:%d",tong);
}
