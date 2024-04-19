#include<stdio.h>
int main(void)
{
    int arr[100];
    int a = 0;
    int b;
    int c;

    scanf("%d", &b); //8
    scanf("%d", &c); //2

    while (b != 0)
    {
        arr[a++] = b % c; //8 arr = [4 = a]0001
        b /= c;
    }
    
    for (int i = a - 1; i >= 0; i--) //역으로 출력
    {
        if (arr[i] > 9 && c > 10)
        {
            printf("%c", 'A' + arr[i] - 10);
        }
        else
        {
            printf("%d", arr[i]);
        }
    }

    return 0;

}