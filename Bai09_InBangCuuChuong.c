#include <stdio.h>

void main()
{
    int k,j,i,*p;

    for(i=2;i<10;i++)
    {
        int bcc[10];
       p=bcc;
           for(j=0;j<10;j++)
           {
               *(p+j)=i*(j+1);
           }
           printf("\nBang cuu chuong %d:",i);
           for(k=1;k<=10;k++)
        {
            printf("\n%dx%d=%d",i,k,*(p+k-1));
        }
    }

}

