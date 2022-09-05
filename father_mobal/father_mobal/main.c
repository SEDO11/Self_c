#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getRandomNumber(int a, int b);

int main()
{
	srand(time(NULL));
	printf("아빠는 대머리 게임\n");

	int answer = 0; // 사용자 입력 값
	int treatment = getRandomNumber(4, 0); // 발모제 선택 1~4

	int cntShowBottle = 0; // 이번 게임에 보여줄 병의 개수
	int prevCntShowBottle = 0; // 앞에서 보여준 병의 개수

	// 3번의 기회
	for (int i = 1; i <= 3; i++)
	{
		int bottle[4] = { 0,0,0,0 }; // 4개의 병
		do {
			cntShowBottle = getRandomNumber(2, 2);
		} while (cntShowBottle == prevCntShowBottle);
		prevCntShowBottle = cntShowBottle;

		int isIncluded = 0; // 보여준 병에서 발모제 포함 여부
		printf("%d번 째 시도\n", i);

		// 보여줄 병 선택
		for (int j = 0; j < cntShowBottle; j++) 
		{
			int randBottle = getRandomNumber(4, 0);

			// 아직 선택되지 않은 병이면 선택처리
			if (bottle[randBottle] == 0)
			{
				bottle[randBottle] = 1;
				if (randBottle == treatment) {
					isIncluded = 1;
				}
			}

			// 이미 선택된 것이면
			else
			{
				j--;
			}
		}

		// 사용자에게 문제 표시
		for (int k = 0; k < 4; k++) 
		{
			if (bottle[k] == 1)
			{
				printf("%d ", k + 1);
			}
		}
		printf("약을 머리에 바릅니다.\n");
		if (isIncluded == 1) {
			printf("머리가 났습니다.\n");
		}
		else
		{
			printf("머리가 나지 않았습니다.\n");
		}

		printf("아무키나 누르세요\n");
		getchar();
	}

	printf("발모제는 몇 번 입니까?\n");
	scanf_s("%d", &answer);

	if (answer == treatment+1)
	{
		printf("발모제가 맞습니다.\n");
	}
	else
	{
		printf("발모제가 아닙니다.\n");
	}

	return 0;
}

int getRandomNumber(int a, int b)
{
	return rand() % a + b;
}