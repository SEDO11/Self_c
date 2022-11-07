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

        struct GameInfo* friendGame; // 연관업체 게임
    };

    // 구조체 사용
    struct GameInfo gameinfo;
    gameinfo.name = "나도게임";
    gameinfo.year = 2016;
    gameinfo.price = 50;
    gameinfo.company = "나도회사";
    printf("--------------------------\n");
    printf("구조체 \n");
    printf("--------------------------\n");
    printf("%s\n", gameinfo.name);
    printf("%d\n", gameinfo.year);
    printf("%d\n", gameinfo.price);
    printf("%s\n\n", gameinfo.company);

    // 구조체를 배열 처럼 초기화
    struct GameInfo gameinfo2 = { "너도게임", 2017, 100, "너도회사" };
    printf("--------------------------\n");
    printf("구조체 배열 1\n");
    printf("--------------------------\n");
    printf("%s\n", gameinfo2.name);
    printf("%d\n", gameinfo2.year);
    printf("%d\n", gameinfo2.price);
    printf("%s\n\n", gameinfo2.company);

    // 구조체 배열
    struct GameInfo gameArray[2] = {
    { "나도게임", 2017, 50, "나도회사" },
    { "너도게임", 2016, 100, "너도회사" } };

    printf("--------------------------\n");
    printf("구조체 배열 2\n");
    printf("--------------------------\n");
    printf("%s\n", gameArray[0].name);
    printf("%d\n", gameArray[0].year);
    printf("%d\n", gameArray[0].price);
    printf("%s\n\n", gameArray[0].company);

    printf("%s\n", gameArray[1].name);
    printf("%d\n", gameArray[1].year);
    printf("%d\n", gameArray[1].price);
    printf("%s\n\n", gameArray[1].company);


    // 구조체 포인터
    struct GameInfo* gamePtr;
    gamePtr = &gameinfo;
    printf("--------------------------\n");
    printf("구조체 포인터 *\n");
    printf("--------------------------\n");
    printf("%s\n", (*gamePtr).name);
    printf("%d\n", (*gamePtr).year);
    printf("%d\n", (*gamePtr).price);
    printf("%s\n\n", (*gamePtr).company);

    printf("--------------------------\n");
    printf("구조체 포인터 ->\n");
    printf("--------------------------\n");
    printf("%s\n", gamePtr->name);
    printf("%d\n", gamePtr->year);
    printf("%d\n", gamePtr->price);
    printf("%s\n\n", gamePtr->company);

    //연관 업체 게임소개

    gameinfo.friendGame = &gameinfo2;
    printf("--------------------------\n");
    printf("구조체 내부의 구조체\n");
    printf("--------------------------\n");
    printf("%s\n", gameinfo.friendGame->name);
    printf("%d\n", gameinfo.friendGame->year);
    printf("%d\n", gameinfo.friendGame->price);
    printf("%s\n\n", gameinfo.friendGame->company);

    // typedef
    // 자료형에 별명 지정
    int i = 1;
    typedef int 정수; // int를 정수로 사용한다
    정수 j = 2;
    typedef double 실수; // double을 실수로 사용한다
    실수 k = 5.1265;
    printf("%d %f", j, k);

    typedef struct GameInfo 게임정보; //구조체 GameInfo를 게임정보로 사용
    게임정보 game1;
    game1.name = "한글 게임";
    game1.year = 2015;

    typedef struct GameInfomation {
        const char* name;
        int year;
        int price;
        const char* company;

        struct GameInfo* friendGame; // 연관업체 게임
    } GAME_INFO; // 구조체 GameInfomation을 GAME_INFO로 사용


}