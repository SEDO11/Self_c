#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void project1(void); // 경찰 조서
void project2(void); // 탑 쌓기
void friends(void);
void ai(void);
void projecct3(void); // 업 앤 다운 게임
void gugudan(void); // 구구단
void star(void); // 별 찍기

int main() {

	//char str[10];
	//scanf_s("%s", str, sizeof(str)); // 256자리 이내의 문자만 입력
	//printf_s("%s", str);

	friends();

	return 0;
	
}

void project1() {
	// 경찰 조서
	char name[20];
	int age;
	float weight;
	float height;
	char content[256];

	// 정보 입력
	printf("이름이 뭐에요?\n");
	scanf_s("%s", name, sizeof(name));
	printf("나이가 어떻게 되나요?\n");
	scanf_s("%d", &age);
	printf("몸 무게가 어떻게 되나요?\n");
	scanf_s("%f", &weight);
	printf("키가 어떻게 되나요?\n");
	scanf_s("%f", &height);
	printf("무슨 잘 못을 했나요?\n");
	scanf_s("%s", content, sizeof(content));

	// 조서내용 출력
	printf("\n--------------------------\n");
	printf("이름		: %s\n", name);
	printf("나이		: %d 세\n", age);
	printf("몸무게	: %f kg\n", weight);
	printf("키		: %f cm\n", height);
	printf("이유		: % s\n", content);
}

void gugudan() {
	//int n;
	//printf("구구단 몇 단을 보시겠습니까?");
	//scanf_s("%d", &n);

	//for (int i = 1; i < 10; i++) {
	//	printf("%d * %d = %d\n", n, i, n * i);
	//}

	for (int i = 2; i < 10; i++) {
		printf("-----%d단 계산-----\n", i);
		for (int j = 1; j < 10; j++) {
			printf("    %d * %d = %d\n", i, j, j * i);
		}
		printf("-------------------\n\n");
	}
}

void star() {
	int a;
	printf("몇 층으로 별을 쌓겠습니까?\n");
	scanf_s("%d", &a);

	// 오름차순
	//for (int i = 1; i <= a; i++) {
	//	for (int j = 0; j < i; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	// 오름차순, y축 대칭
	for (int i = 1; i <= a; i++) {
		for (int j = a; j > i; j--) {
			printf(" ");
		}
		for (int k = 0; k < i; k++) {
			printf("*");
		}
		printf("\n");
	}

	// 내림차순
	//for (int i = 0; i < a; i++) {
	//	for (int j = a; j > i; j--) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
}

void project2() {
	int a;
	printf("몇 층으로 별을 쌓겠습니까?\n");
	scanf_s("%d", &a);

	for (int i = 0; i < a; i++) {
		for (int j = a; j > i+1; j--) {
			printf(" ");
		}
		for (int k = 0; k <= i * 2; k++) {
			printf("*");
		}
		printf("\n");
	}
}

void projecct3() {
	bool run = true;
	while (run) {
		int sel = 0;
		printf("업앤다운 게임 \n1. 친구랑하기 \n2. ai와 하기 \n3. 종료");
		scanf_s("%d", &sel);
		switch (sel) {
			case 1:
				printf("친구와 게임을 시작합니다.");
				friends();
				break;
			case 2:
				printf("ai와 게임을 시작합니다.");
				ai();
				break;
			case 3:
				printf("게임을 종료합니다.");
				run = false;
				break;
			default:
				printf("잘 못 선택하였습니다.");
				break;
		}
	}
}

void friends() {
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

void ai() {

}