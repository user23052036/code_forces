#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int limit;
    scanf("%d",&limit);
    while(limit!=0)
    {
        getchar();
        char str[12],charecter,new_char,temp;
        scanf("%s",str);
        charecter=str[0];
        int i=0,length=strlen(str);

        for(i=0; i<length; i++)
        {
            if(charecter!=str[i])
            {
                new_char=str[i];
                printf("YES\n");
                temp=str[0];
                str[0]=str[i];
                str[i]=temp;  
                printf("%s\n",str);
                break;
            }
        }
        if(i==length)
            printf("NO\n");
        limit--;
    }
    return 0;
}