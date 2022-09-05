#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getRandomNumber(int a, int b);

int main()
{
	srand(time(NULL));
	printf("�ƺ��� ��Ӹ� ����\n");

	int answer = 0; // ����� �Է� ��
	int treatment = getRandomNumber(4, 0); // �߸��� ���� 1~4

	int cntShowBottle = 0; // �̹� ���ӿ� ������ ���� ����
	int prevCntShowBottle = 0; // �տ��� ������ ���� ����

	// 3���� ��ȸ
	for (int i = 1; i <= 3; i++)
	{
		int bottle[4] = { 0,0,0,0 }; // 4���� ��
		do {
			cntShowBottle = getRandomNumber(2, 2);
		} while (cntShowBottle == prevCntShowBottle);
		prevCntShowBottle = cntShowBottle;

		int isIncluded = 0; // ������ ������ �߸��� ���� ����
		printf("%d�� ° �õ�\n", i);

		// ������ �� ����
		for (int j = 0; j < cntShowBottle; j++) 
		{
			int randBottle = getRandomNumber(4, 0);

			// ���� ���õ��� ���� ���̸� ����ó��
			if (bottle[randBottle] == 0)
			{
				bottle[randBottle] = 1;
				if (randBottle == treatment) {
					isIncluded = 1;
				}
			}

			// �̹� ���õ� ���̸�
			else
			{
				j--;
			}
		}

		// ����ڿ��� ���� ǥ��
		for (int k = 0; k < 4; k++) 
		{
			if (bottle[k] == 1)
			{
				printf("%d ", k + 1);
			}
		}
		printf("���� �Ӹ��� �ٸ��ϴ�.\n");
		if (isIncluded == 1) {
			printf("�Ӹ��� �����ϴ�.\n");
		}
		else
		{
			printf("�Ӹ��� ���� �ʾҽ��ϴ�.\n");
		}

		printf("�ƹ�Ű�� ��������\n");
		getchar();
	}

	printf("�߸����� �� �� �Դϱ�?\n");
	scanf_s("%d", &answer);

	if (answer == treatment+1)
	{
		printf("�߸����� �½��ϴ�.\n");
	}
	else
	{
		printf("�߸����� �ƴմϴ�.\n");
	}

	return 0;
}

int getRandomNumber(int a, int b)
{
	return rand() % a + b;
}