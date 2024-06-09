#include<stdio.h>
#include<stdlib.h>

int main()
{
    int limit;
    scanf("%d", &limit);
    getchar();
    while (limit!= 0)
    {
        int k = 0;
        char str[8][8], string[10];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                scanf("%c",&str[i][j]);
                if (str[i][j]!= '.')
                {
                    string[k++] = str[i][j];
                }
            }
            getchar();
        }
        string[k] = '\0';
        printf("%s\n",string);
        limit--;
    }
    return 0;
}