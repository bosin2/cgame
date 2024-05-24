#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int totalHealth = 100;
int totalDefense = 3;
int totalHeart = 3;

void Heart(int amount) {
	totalHeart -= amount;
	if (totalHeart == 0) {
		Death();
	}
}

void Health(int amount) {
	totalHealth += amount;
	if (totalHealth <= 0) {
		totalHeart--;
		totalHealth = 100;
	}
	if (totalHealth > 100) {
		totalHealth = 100;
	}
}

int guardPuzzle(int anemyDamage) {
	int selection = 0;
	int attackDirection = 0;
	int subtraction = 0;
	int totalDamage = 0;

	srand(time(NULL));
	attackDirection = rand() % 4 + 1;

	printf("(고유 대사), xx는 공격을 준비중이다. 어디로 공격이 들어올까 ? \n");
	printf("1. 상\n2. 하\n3. 좌\n4. 우\n");
	do {
		
		printf("1, 2, 3, 4 중 선택하시오.");
		scanf("%d", &selection);
	} while ((selection < 1) || (selection > 4));
	
	subtraction = attackDirection - selection;

	if (subtraction < 0) {
		subtraction *= -1;
	}

	//가드 성공 시 피해량 없음
	if (subtraction == 0) {
		printf("완벽하게 막아냈다.");
	}

	//일부 가드시 0.5배의 피해량
	else if (subtraction == 1) {
		totalDamage = anemyDamage - totalDefense;
		totalDamage /= 2;
		printf("아쉬웠다, %d만큼의 피해를 입었다.", totalDamage);
		Health(-totalDamage);
	}

	//가드 실패시 기존의 피해량 (2배는 좀 많이 아픔.)
	else {
		totalDamage = anemyDamage - totalDefense;
		printf("실패했다, %d만큼의 피해를 입었다.", totalDamage);
		Health(-totalDamage);
	}
}

int main() {
	//임의의 적 공격력
	int anemyDMG = 10;
	//적의 공격력으로 함수를 호출하세요.
	guardPuzzle(10);

	return 0;
}