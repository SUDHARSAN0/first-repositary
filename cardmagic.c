#include <stdio.h>
#include<conio.h>
int a[21]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21};
void card()
{
    printf("THINK ANY NUMBER BETWEEN 1 TO 21:\n");

    int i,j,k3=0,k1=0,k2=0,r;
    int b1[7],b2[7],b3[7];
    printf("row 1|row 2|row 3\n");
    for(i=0;i<21;)
    {
        for(j=0;j<3;j++)
        {
            if(j==0)
            {
                b1[k1]=a[i];
                k1++;
            }
            else if(j==1)
            {
                b2[k2]=a[i];
                k2++;
            }
            else if(j==2)
            {
                b3[k3]=a[i];
                k3++;
            }
            printf("%d\t",a[i]);
            i++;
        }
        printf("\n");
    }
    printf("ENTER THE ROW THAT U R NO PRESENT ");
    scanf("%d",&r);
    for(j=7,i=0;j<14;j++,i++)
    {
        if(r==1)
        a[j]=b1[i];
        else if(r==2)
        a[j]=b2[i];
        else
        a[j]=b3[i];
    }
    for(j=0;j<7;j++)
    {
        if(r==1)
        a[j]=b2[j];
        else if(r==2)
        a[j]=b3[j];
        else
        a[j]=b1[j];
    }
    for(j=14,i=0;j<21;j++,i++)
    {
        if(r==1)
        a[j]=b3[i];
        else if(r==2)
        a[j]=b1[i];
        else
        a[j]=b2[i];
    }
    
}
int main()
{
    
    card();
    card();
    card();
    printf("%d",a[10]);
    return 0;
}
