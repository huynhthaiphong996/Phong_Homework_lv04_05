#include <stdio.h>
void main()
{
    int i,j,k=0,mang[4][5],*p;
    p=mang;
    for(i=0;i<4;i++)
        for(j=0;j<5;j++)
    {
        printf("\nNhap gia tri phan tu a[%d][%d]:",i+1,j+1);
        scanf("%d",(p+k));
        k++;
    }
    i=0;
    while(i!=k)
    {
         if((i+1)%5==0) printf("%d\n",*(p+i));
        else printf("%d\t",*(p+i));

        i++;
    }
}
