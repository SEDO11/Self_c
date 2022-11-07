#include <stdio.h>

int main()
{
    // 게임출시
    // 이름 나도게임
    // 발매년도 2017
    // 가격 50원
    // 제작사 나도회사

    const char* name = "나도게임";
    int year = 2017;
    int price = 50;
    const char* company = "나도회사";

    // 게임출시
    // 이름 너도게임
    // 발매년도 2017
    // 가격 100원
    // 제작사 너도회사

    // 구조체 선언
    struct GameInfo {
        const char* name;
        int year;
        int price;
        const char* company;
    };

    // 구조체 사용
    struct GameInfo gameinfo;
    gameinfo.name = "너도게임";
    gameinfo.year = 2017;
    gameinfo.price = 100;
    gameinfo.company = "너도회사";

    printf("%s\n", gameinfo.name);
    printf("%s\n", gameinfo.year);
    printf("%s\n", gameinfo.price);
    printf("%s\n", gameinfo.company);
}
