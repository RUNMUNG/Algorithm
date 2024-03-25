#include <stdio.h>

int main(void)
{
    int num;
    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    if (num > 0) // num이 0보다 크면
    {
        printf("입력한 값은 양수입니다.\\n");
    }
    else if (num < 0) // num이 0보다 작으면
    {
        printf("입력한 값은 음수입니다.\\n");
    }
    else // num이 0이면
    {
        printf("입력한 값은 0입니다.\\n");
    }

    return 0;
}




//gcc file 
// ./a.out
// cd home 파일 위치 찾기
// cd.. 뒤로가기
// ls
// 