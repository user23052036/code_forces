#include<stdio.h>
#include<stdlib.h>

int main()
{
    int limit;
    scanf("%d",&limit);
    while(limit!=0)
    {
        char str[6];
        int str_num;
        scanf("%s",str);
        str_num = atoi(str);

        if(str_num>=0 && str_num<=11)      // for AM
        {
            if(str_num == 0)
            {
                str[0]='1';
                str[1]='2';
            }
            printf("%s AM\n",str);
        }
        else
        {
            if(str_num>12)
            {
                int num = str_num-12;
                str[1] = num%10 +'0';
                str[0] = ((num-num%10)/10) + '0';
            }
            printf("%s PM\n",str);
        }
        limit--;
    }
}