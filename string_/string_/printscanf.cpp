#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void project1(void); // ���� ����
void project2(void); // ž �ױ�
void friends(void);
void ai(void);
void projecct3(void); // �� �� �ٿ� ����
void gugudan(void); // ������
void star(void); // �� ���

int main() {

	//char str[10];
	//scanf_s("%s", str, sizeof(str)); // 256�ڸ� �̳��� ���ڸ� �Է�
	//printf_s("%s", str);

	friends();

	return 0;
	
}

void project1() {
	// ���� ����
	char name[20];
	int age;
	float weight;
	float height;
	char content[256];

	// ���� �Է�
	printf("�̸��� ������?\n");
	scanf_s("%s", name, sizeof(name));
	printf("���̰� ��� �ǳ���?\n");
	scanf_s("%d", &age);
	printf("�� ���԰� ��� �ǳ���?\n");
	scanf_s("%f", &weight);
	printf("Ű�� ��� �ǳ���?\n");
	scanf_s("%f", &height);
	printf("���� �� ���� �߳���?\n");
	scanf_s("%s", content, sizeof(content));

	// �������� ���
	printf("\n--------------------------\n");
	printf("�̸�		: %s\n", name);
	printf("����		: %d ��\n", age);
	printf("������	: %f kg\n", weight);
	printf("Ű		: %f cm\n", height);
	printf("����		: % s\n", content);
}

void gugudan() {
	//int n;
	//printf("������ �� ���� ���ðڽ��ϱ�?");
	//scanf_s("%d", &n);

	//for (int i = 1; i < 10; i++) {
	//	printf("%d * %d = %d\n", n, i, n * i);
	//}

	for (int i = 2; i < 10; i++) {
		printf("-----%d�� ���-----\n", i);
		for (int j = 1; j < 10; j++) {
			printf("    %d * %d = %d\n", i, j, j * i);
		}
		printf("-------------------\n\n");
	}
}

void star() {
	int a;
	printf("�� ������ ���� �װڽ��ϱ�?\n");
	scanf_s("%d", &a);

	// ��������
	//for (int i = 1; i <= a; i++) {
	//	for (int j = 0; j < i; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	// ��������, y�� ��Ī
	for (int i = 1; i <= a; i++) {
		for (int j = a; j > i; j--) {
			printf(" ");
		}
		for (int k = 0; k < i; k++) {
			printf("*");
		}
		printf("\n");
	}

	// ��������
	//for (int i = 0; i < a; i++) {
	//	for (int j = a; j > i; j--) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
}

void project2() {
	int a;
	printf("�� ������ ���� �װڽ��ϱ�?\n");
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
		printf("���شٿ� ���� \n1. ģ�����ϱ� \n2. ai�� �ϱ� \n3. ����");
		scanf_s("%d", &sel);
		switch (sel) {
			case 1:
				printf("ģ���� ������ �����մϴ�.");
				friends();
				break;
			case 2:
				printf("ai�� ������ �����մϴ�.");
				ai();
				break;
			case 3:
				printf("������ �����մϴ�.");
				run = false;
				break;
			default:
				printf("�� �� �����Ͽ����ϴ�.");
				break;
		}
	}
}

void friends() {
	//srand(time(NULL)); // ���� �ʱ�ȭ
	//int num = rand() % 100 + 1; // 1~100

	printf("���� �ʱ�ȭ ����..\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", rand() % 10);
	}

	srand(time(NULL));
	printf("���� �ʱ�ȭ ����..\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", rand() % 10);
	}
}

void ai() {

}