#include<stdio.h>

int main()
{
    int limit;
    scanf("%d",&limit);
    while(limit!=0)
    {
        int num;
        char str[45];
        scanf("%d",&num); // Pass the address of num
        for(int i=0; i<num; i++)
        {
            int k=0;
            for(int j=0; j<num; j++)
            {
                if((i+j)%2 == 0)
                {
                    str[k++] = '#';
                    str[k++] = '#';
                }
                else
                {
                    str[k++] = '.';
                    str[k++] = '.';
                }
            }
            str[k]='\0';
            printf("%s\n",str);
            printf("%s\n",str);
        }
        limit--;
    }
    return 0;
}