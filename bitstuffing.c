#include<stdio.h>
int main()
{
        int data[20];
        int stuff[30];
        int i,a=0,b,j;
        int count=0;
	int n;
	printf("Enter the length of bit stream: ");
	scanf("%d", &n);

        printf("Enter the data \n");

        for(i=0;i<n;i++)
        {
                scanf("%d",&data[i]);
        }

        printf("The stuffed bits are\n");
        printf("01111110 ");
        for(i=0,j=0;i<n;i++,j++)
        {
                stuff[j]=data[i];
                if(data[i]==1)
                {
                        count++;
                        if(count==5)
                        {
                                j=j+1;
                                stuff[j]=0;
                                count=0;
                        }
                }
                else
                {
                        count=0;
                }
        }
        for(i=0;i<j;i++)
        {
                printf("%d",stuff[i]);
        }
        printf(" ");
        printf("01111110\n");

return 0;
}
