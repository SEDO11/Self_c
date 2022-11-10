#include <stdio.h>
#include <time.h>
#include <stdlib.h>

bool friends(void);
bool ai(void);
void projecct(void); // 업 앤 다운 게임
void ran(void); // 랜덤 예제

int main() {

	//char str[10];
	//scanf_s("%s", str, sizeof(str)); // 256자리 이내의 문자만 입력
	//printf_s("%s", str);

	projecct();

	return 0;

}

void ran() {
	//srand(time(NULL)); // 난수 초기화
	//int num = rand() % 100 + 1; // 1~100

	printf("난수 초기화 이전..\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", rand() % 10);
	}

	srand(time(NULL));
	printf("난수 초기화 이후..\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", rand() % 10);
	}
}

void projecct() {
	bool run = true;
	while (run) {
		int sel = 0;
		printf("업앤다운 게임 \n1. 친구랑하기 \n2. ai와 하기 \n3. 종료\n");
		scanf_s("%d", &sel);

		switch (sel) {
		case 1:
			printf("친구와 게임을 시작합니다.\n");
			if (friends()) {
				printf("승리 하였습니다.\n");
			}
			else {
				printf("패배 하였습니다.\n");
			}
			break;

		case 2:
			printf("ai와 게임을 시작합니다.\n");
			if (ai()) {
				printf("승리 하였습니다.\n");
			}
			else {
				printf("패배 하였습니다.\n");
			}
			break;

		case 3:
			printf("게임을 종료합니다.\n");
			run = false;
			break;

		default:
			printf("잘 못 선택하였습니다.\n");
		}
	}
}

bool friends() {
	int cnt;
	int check;
	int ran;
	printf("\n기회는 몇 번으로 하실겁니까? > ");
	scanf_s("%d", &cnt);
	srand(time(NULL));
	while (true) {
		printf("\n랜덤 숫자를 입력해주세요 1~100 > ");
		scanf_s("%d", &ran);
		if (ran > 0 && ran <= 100) {
			break;
		}
		else {
			printf("\n옳바른 숫자 범위가 아닙니다.");
		}
	}

	while (cnt--) {
		printf("숫자를 입력하세요 > ");
		scanf_s("%d", &check);

		if (check == ran) {
			printf("정답입니다.\n");
			return true;
		}
		else if (check > ran) {
			printf("down 남은 기회 %d\n", cnt);
		}
		else {
			printf("up 남은 기회 %d\n", cnt);
		}
	}
	return false;
}

bool ai() {
	int cnt;
	int check;
	int valance;
	printf("기회는 몇 번으로 하실겁니까? > ");
	scanf_s("%d", &cnt);
	printf("숫자의 범위는 1 부터 몇 까지 하시겠습니까? > ");
	scanf_s("%d", &valance);
	srand(time(NULL));
	int ran = rand() % valance + 1; // 1~100 사이의 랜덤 숫자
	
	while (cnt--) {
		printf("숫자를 입력하세요 > ");
		scanf_s("%d", &check);

		if (check == ran) {
			printf("정답입니다.\n");
			return true;
		}
		else if (check > ran) {
			printf("down 남은 기회 %d\n", cnt);
		}
		else {
			printf("up 남은 기회 %d\n", cnt);
		}
	}
	printf("정답은 %d 입니다.\n", ran);
	return false;
}