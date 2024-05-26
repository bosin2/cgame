void attack(int attackerStrength, int* defenderHealth) {
    int damage = attackerStrength;
    printf("공격 데미지: %d\n", damage);
    *defenderHealth -= damage;
    if (*defenderHealth < 0) *defenderHealth = 0;
    printf("남은 체력: %d\n", *defenderHealth);
}

// 도망치기 시도 함수 정의
int tryToEscape(int escapeChance) {
    int chance = rand() % 100;
    return chance < escapeChance;
}

void guardPuzzle(int anemyDamage) {
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

    //가드 실패시 기존의 피해량
    else {
        totalDamage = anemyDamage - totalDefense;
        printf("실패했다, %d만큼의 피해를 입었다.", totalDamage);
        Health(-totalDamage);
    }
}

void fight1() {
    int youDamage = rand() % 10 + 20;
    clear_text();
    Fight_UI();
    print_at(49, 24, "   ¯ ╭━━━━╮___         ");
    print_at(49, 25, "   . | :::::::::: / ___ /  ");
    print_at(49, 26, " * < | :::::::::(｡ ●ω●｡)");
    print_at(49, 27, "    >し------し-- - Ｊ     ");
    move_cursor(15, 35);
    print_slow("야생멧돼지가 나타났다 ! 귀여워 !");
    Sleep(1000);
    print_at(15, 45, "                                                           ");
    while (totalHealth > 0 && total_youHealth > 0) {
        print_at(15, 45, "돼지는 꿀꿀거리기를 준비한다... 멧돼지 아니야 ?");
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        int choice;
        move_cursor(15, 46);
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            move_cursor(15, 45);
            print_slow("공격하기를 선택했다 ! ");
            Sleep(1000);
            print_at(15, 45, "                                                           ");
            attack(totalStrength, totalHealth);
            break;
        case 2:
            move_cursor(15, 45);
            print_slow("방어하기를 선택했다 ! 어디로 공격이 들어올까 ?? ");
            Sleep(1000);
            print_at(15, 45, "                                                           ");
            guardPuzzle(youDamage);
            break;

        case 3:
            move_cursor(15, 45);
            print_slow("도망가기를 선택했다 ! 도망칠수 있을까 ...?");
            Sleep(1000);
            print_at(15, 45, "                                                           ");
            int run = rand() % 100;
            Sleep(1000);

            if (run < 30) {
                move_cursor(15, 45);
                print_slow("도망가기에 성공했다 ! 나이스 !!!");
                Sleep(1000);
                print_at(15, 45, "                                                           ");
                return;
            }

            else {
                move_cursor(15, 45);
                print_slow("도망치기에 실패했다... 다시 맞서 싸워야해");
                Sleep(1000);
                print_at(15, 45, "                                                           ");
                break;
            }
        default:
            print_slow_at(15, 45, "지금 뭐하는거야 !!! 소중한 한 턴을 낭비 했다...");
            Sleep(1000);
            print_at(15, 45, "                                                           ");
            break;

        }
        print_slow_at(15, 45, "멧돼지는 꿀꿀거린다 !\n");
        int youDamage = rand() % 10 + 20;
        printf("으악! %d의 피해를 입었다!\n", youDamage);
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        totalHealth -= youDamage;
        status();
        Sleep(1000);

        if (totalHealth <= 0) {
            print_slow_at(15, 45, "모든 체력이 소모 되었다...\n");
            Sleep(1000);
            print_at(15, 45, "                                                       ");
            Heart(1);
            status();
            Sleep(1000);
            return 0;
        }
        else if (total_youHealth <= 0) {
            print_slow_at(15, 45, "멧돼지를 처치했다 ! !");
            Sleep(1000);
            print_at(15, 45, "                                                           ");
            print_slow_at(15, 45, "멧돼지를 처치하여 20G를 얻었다 !");
            Sleep(1000);
            print_at(15, 45, "                                                           ");
            Gold(20);
            status();
            Sleep(1000);
            print_at(15, 45, "                                                       ");

            return 0;
        }
    }

}