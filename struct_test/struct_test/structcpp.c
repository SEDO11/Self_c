#include <stdio.h>

int main()
{
    // �������
    // �̸� ��������
    // �߸ų⵵ 2017
    // ���� 50��
    // ���ۻ� ����ȸ��

    const char* name = "��������";
    int year = 2017;
    int price = 50;
    const char* company = "����ȸ��";

    // �������
    // �̸� �ʵ�����
    // �߸ų⵵ 2017
    // ���� 100��
    // ���ۻ� �ʵ�ȸ��

    // ����ü ����
    struct GameInfo {
        const char* name;
        int year;
        int price;
        const char* company;

        struct GameInfo* friendGame; // ������ü ����
    };

    // ����ü ���
    struct GameInfo gameinfo;
    gameinfo.name = "��������";
    gameinfo.year = 2016;
    gameinfo.price = 50;
    gameinfo.company = "����ȸ��";
    printf("--------------------------\n");
    printf("����ü \n");
    printf("--------------------------\n");
    printf("%s\n", gameinfo.name);
    printf("%d\n", gameinfo.year);
    printf("%d\n", gameinfo.price);
    printf("%s\n\n", gameinfo.company);

    // ����ü�� �迭 ó�� �ʱ�ȭ
    struct GameInfo gameinfo2 = { "�ʵ�����", 2017, 100, "�ʵ�ȸ��" };
    printf("--------------------------\n");
    printf("����ü �迭 1\n");
    printf("--------------------------\n");
    printf("%s\n", gameinfo2.name);
    printf("%d\n", gameinfo2.year);
    printf("%d\n", gameinfo2.price);
    printf("%s\n\n", gameinfo2.company);

    // ����ü �迭
    struct GameInfo gameArray[2] = {
    { "��������", 2017, 50, "����ȸ��" },
    { "�ʵ�����", 2016, 100, "�ʵ�ȸ��" } };

    printf("--------------------------\n");
    printf("����ü �迭 2\n");
    printf("--------------------------\n");
    printf("%s\n", gameArray[0].name);
    printf("%d\n", gameArray[0].year);
    printf("%d\n", gameArray[0].price);
    printf("%s\n\n", gameArray[0].company);

    printf("%s\n", gameArray[1].name);
    printf("%d\n", gameArray[1].year);
    printf("%d\n", gameArray[1].price);
    printf("%s\n\n", gameArray[1].company);


    // ����ü ������
    struct GameInfo* gamePtr;
    gamePtr = &gameinfo;
    printf("--------------------------\n");
    printf("����ü ������ *\n");
    printf("--------------------------\n");
    printf("%s\n", (*gamePtr).name);
    printf("%d\n", (*gamePtr).year);
    printf("%d\n", (*gamePtr).price);
    printf("%s\n\n", (*gamePtr).company);

    printf("--------------------------\n");
    printf("����ü ������ ->\n");
    printf("--------------------------\n");
    printf("%s\n", gamePtr->name);
    printf("%d\n", gamePtr->year);
    printf("%d\n", gamePtr->price);
    printf("%s\n\n", gamePtr->company);

    //���� ��ü ���ӼҰ�

    gameinfo.friendGame = &gameinfo2;
    printf("--------------------------\n");
    printf("����ü ������ ����ü\n");
    printf("--------------------------\n");
    printf("%s\n", gameinfo.friendGame->name);
    printf("%d\n", gameinfo.friendGame->year);
    printf("%d\n", gameinfo.friendGame->price);
    printf("%s\n\n", gameinfo.friendGame->company);

    // typedef
    // �ڷ����� ���� ����
    int i = 1;
    typedef int ����; // int�� ������ ����Ѵ�
    ���� j = 2;
    typedef double �Ǽ�; // double�� �Ǽ��� ����Ѵ�
    �Ǽ� k = 5.1265;
    printf("%d %f", j, k);

    typedef struct GameInfo ��������; //����ü GameInfo�� ���������� ���
    �������� game1;
    game1.name = "�ѱ� ����";
    game1.year = 2015;

    typedef struct GameInfomation {
        const char* name;
        int year;
        int price;
        const char* company;

        struct GameInfo* friendGame; // ������ü ����
    } GAME_INFO; // ����ü GameInfomation�� GAME_INFO�� ���


}