/*
Number Game
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Ashishgup and FastestFinger play a game.

They start with a number n
 and play in turns. In each turn, a player can make any one of the following moves:

Divide n
 by any of its odd divisors greater than 1
.
Subtract 1
 from n
 if n
 is greater than 1
.
Divisors of a number include the number itself.

The player who is unable to make a move loses the game.

Ashishgup moves first. Determine the winner of the game if both of them play optimally.

Input
The first line contains a single integer t
 (1≤t≤100
)  — the number of test cases. The description of the test cases follows.

The only line of each test case contains a single integer  — n
 (1≤n≤109
).

Output
For each test case, print "Ashishgup" if he wins, and "FastestFinger" otherwise (without quotes).
*/


#include<stdio.h>
#include<stdlib.h>

int move1(int);
int move2(int);
int minimum(int,int);
int main()
{
    int limit,count,result;
    
    printf("Enter the number of times game is played:--->");
    scanf("%d",&limit);
    
    int *arr = (int*)malloc(limit*sizeof(int));
    printf("Enter the values of n played each time:--->");
    for(int i=0; i<limit; i++)
        scanf("%d",&arr[i]);
        
    for(int i=0; i<limit; i++)
    {
        count=0;
        result = arr[i];

        while(result != 1)
        {
            result = minimum(move1(result),move2(result));
            count++;
        }
        if(count==0)
            printf("FastestFinger\n");
        else if(count%2 == 0)
            printf("FastestFinger\n");
        else
            printf("Ashishgup\n");
    }
    
    free(arr);
    return 0;
}

int move1(int num)
{
    int max_odd_div=1,num1=num;
    for(int i=2; num!=1; i++)
    {
        if(num%i == 0)
        {
            num = num/i;
            if(i%2 != 0 && i>max_odd_div)
                max_odd_div = i;
            i--;
        }
    }
    return (num1/max_odd_div);
}

int move2(int num)
{
    return(num-1);
}

int minimum(int num1, int num2)
{
    if(num1>num2)
        return(num2);
    else 
        return(num1);
}