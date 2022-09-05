#include <stdio.h>
#include <time.h>
#include <stdlib.h>

bool game(int level);
int getRandomNumber(int num);
void success();
void fail();

int main()
{
    int level = 1;
    bool run = true;
    printf("-1을 입력하면 게임이 종료됩니다.\n");
    while (run)
    {
        printf("레벨 %d\n", level);
        run = game(level++);
    }
    printf("게임종료\n");
    printf("최고 레벨: %d", level-2);
}

bool game(int level)
{
    srand(time(NULL));
    int n1 = getRandomNumber(level);
    int n2 = getRandomNumber(level);
    int n3 = n1 * n2;
    int r = -1;

    printf_s("%d x %d = ", n1, n2);
    scanf_s("%d", &r);
    
    if (n3 == r) 
    {
        success();
        return true;
    }
    else if (r == -1) // 게임 종료
    {
        return false;
    }
    else {
        fail();
        return false;
    }
}

int getRandomNumber(int num)
{
    return rand() % (10 * num) + 1;
}

void success()
{
    printf("맞았습니다.\n\n");
}

void fail()
{
    printf("틀렸습니다.\n\n");
}