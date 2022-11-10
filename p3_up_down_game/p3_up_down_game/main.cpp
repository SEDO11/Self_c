#include <stdio.h>
#include <time.h>
#include <stdlib.h>

bool friends(void);
bool ai(void);
void projecct(void); // �� �� �ٿ� ����
void ran(void); // ���� ����

int main() {

	//char str[10];
	//scanf_s("%s", str, sizeof(str)); // 256�ڸ� �̳��� ���ڸ� �Է�
	//printf_s("%s", str);

	projecct();

	return 0;

}

void ran() {
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

void projecct() {
	bool run = true;
	while (run) {
		int sel = 0;
		printf("���شٿ� ���� \n1. ģ�����ϱ� \n2. ai�� �ϱ� \n3. ����\n");
		scanf_s("%d", &sel);

		switch (sel) {
		case 1:
			printf("ģ���� ������ �����մϴ�.\n");
			if (friends()) {
				printf("�¸� �Ͽ����ϴ�.\n");
			}
			else {
				printf("�й� �Ͽ����ϴ�.\n");
			}
			break;

		case 2:
			printf("ai�� ������ �����մϴ�.\n");
			if (ai()) {
				printf("�¸� �Ͽ����ϴ�.\n");
			}
			else {
				printf("�й� �Ͽ����ϴ�.\n");
			}
			break;

		case 3:
			printf("������ �����մϴ�.\n");
			run = false;
			break;

		default:
			printf("�� �� �����Ͽ����ϴ�.\n");
		}
	}
}

bool friends() {
	int cnt;
	int check;
	int ran;
	printf("\n��ȸ�� �� ������ �Ͻǰ̴ϱ�? > ");
	scanf_s("%d", &cnt);
	srand(time(NULL));
	while (true) {
		printf("\n���� ���ڸ� �Է����ּ��� 1~100 > ");
		scanf_s("%d", &ran);
		if (ran > 0 && ran <= 100) {
			break;
		}
		else {
			printf("\n�ǹٸ� ���� ������ �ƴմϴ�.");
		}
	}

	while (cnt--) {
		printf("���ڸ� �Է��ϼ��� > ");
		scanf_s("%d", &check);

		if (check == ran) {
			printf("�����Դϴ�.\n");
			return true;
		}
		else if (check > ran) {
			printf("down ���� ��ȸ %d\n", cnt);
		}
		else {
			printf("up ���� ��ȸ %d\n", cnt);
		}
	}
	return false;
}

bool ai() {
	int cnt;
	int check;
	int valance;
	printf("��ȸ�� �� ������ �Ͻǰ̴ϱ�? > ");
	scanf_s("%d", &cnt);
	printf("������ ������ 1 ���� �� ���� �Ͻðڽ��ϱ�? > ");
	scanf_s("%d", &valance);
	srand(time(NULL));
	int ran = rand() % valance + 1; // 1~100 ������ ���� ����
	
	while (cnt--) {
		printf("���ڸ� �Է��ϼ��� > ");
		scanf_s("%d", &check);

		if (check == ran) {
			printf("�����Դϴ�.\n");
			return true;
		}
		else if (check > ran) {
			printf("down ���� ��ȸ %d\n", cnt);
		}
		else {
			printf("up ���� ��ȸ %d\n", cnt);
		}
	}
	printf("������ %d �Դϴ�.\n", ran);
	return false;
}