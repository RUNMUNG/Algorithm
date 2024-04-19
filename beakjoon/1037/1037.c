#include<stdio.h>

int main(void)
{ 
    int count, num;
    long long max = 0, min = 1000001; 
    
    scanf("%d", &count);

    for(int i = 0; i < count; i++)
    {
        scanf("%d", &num);

        if(num > max)
        {
            max = num;
        }
        if(num < min)
        {
            min = num;
        }
    }

    printf("%lld", min * max);
    return 0; 
}