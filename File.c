#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
#include <fcntl.h>
#include <io.h>


//글씨한글자씩 출력해주는 함수
void print_slow(const char* str) {
    for (int i = 0; i < strlen(str); i++) {
        printf("%c", str[i]);
        fflush(stdout);
        Sleep(30);
    }
}

//출력 속도를 조절
void print_slow2(const char* str, int speed) {
    for (int j = 0; j < strlen(str); j++) {
        printf("%c", str[j]);
        fflush(stdout);
        Sleep(speed);
    }
}
//정수 출력할수있게해주는거
void print_slow3(const char* str, int speed, int* replace_int, int replace_count) {
    int replace_index = 0;
    for (int j = 0; j < strlen(str); j++) {
        if (str[j] == '%') {
            printf("%d", replace_int[replace_index]);
            replace_index++;
        }
        else {
            printf("%c", str[j]);
        }
        fflush(stdout);
        Sleep(speed);
    }
}
//원하는 좌표에 글자 출력하는 함수
void print_at(int x, int y, const char* str) {
    COORD pos = { x, y };
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, pos);
    printf("%s", str);
}

void nemo() {
    print_at(0, 1, "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
    print_at(0, 2, "■");
    print_at(0, 3, "■");
    print_at(0, 4, "■");
    print_at(0, 5, "■");
    print_at(0, 6, "■");
    print_at(0, 7, "■");
    print_at(0, 8, "■");
    print_at(0, 9, "■");
    print_at(0, 10, "■");
    print_at(0, 11, "■");
    print_at(0, 12, "■");
    print_at(0, 13, "■");
    print_at(0, 14, "■");
    print_at(0, 15, "■");
    print_at(0, 16, "■");
    print_at(0, 17, "■");
    print_at(0, 18, "■");
    print_at(0, 19, "■");
    print_at(0, 20, "■");
    print_at(0, 21, "■");
    print_at(0, 22, "■");
    print_at(0, 23, "■");
    print_at(0, 24, "■");
    print_at(0, 25, "■");
    print_at(0, 26, "■");
    print_at(0, 27, "■");
    print_at(0, 28, "■");
    print_at(0, 29, "■");
    print_at(0, 30, "■");
    print_at(0, 31, "■");
    print_at(0, 32, "■");
    print_at(0, 33, "■");
    print_at(0, 34, "■");
    print_at(0, 35, "■");
    print_at(0, 36, "■");
    print_at(0, 37, "■");
    print_at(0, 38, "■");
    print_at(0, 39, "■");
    print_at(0, 40, "■");
    print_at(0, 41, "■");
    print_at(0, 42, "■");
    print_at(0, 43, "■");
    print_at(0, 44, "■");
    print_at(0, 45, "■");
    print_at(0, 46, "■");
    print_at(0, 47, "■");
    print_at(0, 48, "■");
    print_at(0, 49, "■");
    print_at(98, 1, "■");
    print_at(98, 2, "■");
    print_at(98, 3, "■");
    print_at(98, 4, "■");
    print_at(98, 5, "■");
    print_at(98, 6, "■");
    print_at(98, 7, "■");
    print_at(98, 8, "■");
    print_at(98, 9, "■");
    print_at(98, 10, "■");
    print_at(98, 11, "■");
    print_at(98, 12, "■");
    print_at(98, 13, "■");
    print_at(98, 14, "■");
    print_at(98, 15, "■");
    print_at(98, 16, "■");
    print_at(98, 17, "■");
    print_at(98, 18, "■");
    print_at(98, 19, "■");
    print_at(98, 20, "■");
    print_at(98, 21, "■");
    print_at(98, 22, "■");
    print_at(98, 23, "■");
    print_at(98, 24, "■");
    print_at(98, 25, "■");
    print_at(98, 26, "■");
    print_at(98, 27, "■");
    print_at(98, 28, "■");
    print_at(98, 29, "■");
    print_at(98, 30, "■");
    print_at(98, 31, "■");
    print_at(98, 32, "■");
    print_at(98, 33, "■");
    print_at(98, 34, "■");
    print_at(98, 35, "■");
    print_at(98, 36, "■");
    print_at(98, 37, "■");
    print_at(98, 38, "■");
    print_at(98, 39, "■");
    print_at(98, 40, "■");
    print_at(98, 41, "■");
    print_at(98, 42, "■");
    print_at(98, 43, "■");
    print_at(98, 44, "■");
    print_at(98, 45, "■");
    print_at(98, 46, "■");
    print_at(98, 47, "■");
    print_at(98, 48, "■");
    print_at(98, 49, "■");
    print_at(98, 50, "■");
    print_at(0, 49, "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
}

//터미널창 크기 변환해주는 함수
void set_console_size(int width, int height) {
    char command[100];
    sprintf(command, "mode con: cols=%d lines=%d", width, height);
    system(command);
    nemo();
}


// 좌표로 커서변경해주는 함수
void move_cursor(int x, int y) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = { (SHORT)x, (SHORT)y };
    SetConsoleCursorPosition(hConsole, pos);
}
//좌표에 유니코드 출력해주는 함수
void print_at_unicode(int x, int y, const wchar_t* str) {
    move_cursor(x, y);
    _setmode(_fileno(stdout), _O_U16TEXT);
    wprintf(L"%ls", str);
    _setmode(_fileno(stdout), _O_TEXT);
}
//좌표에 천천히 출력
void print_slow_at(int x, int y, const char* str) {
    move_cursor(x, y);
    print_slow(str);
}
//좌표에천천히출력하는속도조절함수
void print_slow_at2(int x, int y, const char* str, int speed) {
    move_cursor(x, y);
    print_slow2(str, speed);
}
//텍스트 지워주는 함수
void clear_text() {
    system("cls");
}
//텍스트좌표지워주는함수
void clear_line() {
    print_at(10, 45, "                                                                               ");
}
//목숨0일때 죽는거
void Death() {
    clear_text();
    print_slow_at(3, 5, "당신은 침대에서 일어났습니다...");
    print_slow_at2(3, 7, "\"...뭐지 이상한 꿈을 꾼 거 같은데...\"",40);
    print_slow_at(3, 9, "당신은 찝찝한 기분을 느낍니다...");
    print_slow_at(3, 11, "당신은 그리움을 느낍니다...");
    print_slow_at2(3, 12, "\"...뭔가 슬픈기분이네... 중요한 걸 잊은것만 같아\"",40);
    print_slow_at(3, 14, "마음이 아파온다");
    print_slow_at2(3, 16, "아 나는 무엇을 잊어 버린걸까...",40);
    print_slow_at(3, 18, "아려오는 마음을 추스리며 다시 눈을 감는다...");
    Sleep(5000);
    print_slow_at2(3, 25, "...",50);
    print_slow_at2(3, 27, "\"좋은 꿈을 꾸길\"",50);

    Sleep(1000);
    exit(0);
}

//함수값 초기화
int totalGold = 0;
int totalStrength = 0;
int totalHeart = 3;
int totalHealth = 100;
//일반 적 체력
int total_anemyHealth = 100;
//보스 체력
int total_bossHealth = 200;
//방어시도확인변수
int ifGuard = 0;
//적 턴확인변수
int monster_turn = 0;
//일반적 데미지
int anemyDamage = 20;
//보스기본데미지
int boss_Damage = 30;
//마왕호감도
int totaldoki = 0;
//골드
void Gold(int amount) {
    totalGold += amount;
    if (totalGold <= 0) {
        totalGold = 0;
    }
}
//공격력
void Strength(int amount) {
    totalStrength += amount;
    if (totalStrength <= 0) {
        totalStrength = 0;
    }
}
//목숨
void Heart(int amount) {
    totalHeart += amount;
    if (totalHeart > 3) {
        totalHeart = 3;
    }
    if (totalHeart <= 0) {
        Death();
    }
}
//체력
void Health(int amount) {
    totalHealth += amount;
    if (totalHealth <= 0) {
        totalHealth = 100;
        print_slow_at(15, 45, "목숨이 하나 줄어들었다...");
        Sleep(1000);
        print_at(15, 45, "                             ");
        totalHeart -= 1;

    }
}
void doki(int amount) {
    totaldoki += amount;
}
//일반적체력
void anemyHealth(int amount) {
    total_anemyHealth += amount;
}
//보스체력
void bossHealth(int amount) {
    total_bossHealth += amount;
}
// 네모의 위치를 업데이트하고 화면을 새로 그리는 함수
void drawSquare(int position) {
    clear_text();
    // 네모 출력
    for (int i = 0; i < position; i++) {
        printf(" ");
    }
    printf("■\n\n타이밍에 맞춰 'p'키를 눌러 공격하세요!\n");

    // 화살표 출력
    printf("        ↓\n");
}
//스탯
void status() {
    print_at(4, 15, "________상 태 창________");
    print_at(4, 16, "|                      |");
    move_cursor(4, 17);
    printf("| > 소지금: %4d       |\n", totalGold);
    print_at(4, 18, "|                      |");
    move_cursor(4, 19);
    printf("| > 공격력: %4d       |\n", totalStrength);
    print_at(4, 20, "|                      |");
    move_cursor(4, 21);
    printf("| > 체력  : %4d       |\n", totalHealth);
    print_at(4, 22, "|                      |");
    move_cursor(4, 23);
    printf("| > 목숨  : %4d       |\n", totalHeart);
    print_at(4, 24, "|______________________|");
}
//스탯창 지워주는 함수 (글자겹침버그방지)
void status_clear() {
    print_at(4, 14, "                          ");
    print_at(4, 15, "                          ");
    print_at(4, 16, "                          ");
    print_at(4, 17, "                          ");
    print_at(4, 18, "                          ");
    print_at(4, 19, "                          ");
    print_at(4, 20, "                          ");
    print_at(4, 21, "                          ");
    print_at(4, 22, "                          ");
    print_at(4, 23, "                          ");
    print_at(4, 24, "                          ");
    print_at(4, 25, "                          ");
    print_at(4, 26, "                          ");
}
// 게임 로직을 처리하는 함수
int updateGame(int* position, int* direction) {
    // 네모의 위치와 방향 조정
    *position += *direction;
    if (*position == 0 || *position == 20) {
        *direction *= -1;
    }

    // 키 입력 처리
    if (_kbhit()) {
        char ch = _getch();
        if (ch == 'p') {
            if (*position >= 8 && *position <= 12) {
                printf("Great!\n");
                return 1; // 성공
            }
            else {
                printf("Miss...\n");
                return 0; // 실패
            }
        }
    }
    return -1;
}

// 메인 게임 루프 함수
void gameLoop() {
    int position = 0; // 네모의 위치
    int direction = 1; // 네모의 이동 방향
    int result;

    while (1) {
        drawSquare(position);
        result = updateGame(&position, &direction);
        if (result != -1) {
            break; // 게임 종료
        }
        Sleep(100); // 0.1초 대기
    }
}
//방어퍼즐함수
void guardPuzzle(int anemyDamage) {
    int selection = 0;
    int attackDirection = 0;
    int subtraction = 0;
    int totalDamage = 0;
    

    srand(time(NULL));
    attackDirection = rand() % 4 + 1;
    print_at(12, 19, "______________");
    print_at(12, 20, "|            |");
    print_at(12, 21, "|  1 > 상    |");
    print_at(12, 22, "|            |");
    print_at(12, 23, "|  2 > 하    |");
    print_at(12, 24, "|            |");
    print_at(12, 25, "|  3 > 좌    |");
    print_at(12, 26, "|            |");
    print_at(12, 27, "|  4 > 우    |");
    print_at(12, 28, "|____________|");
    do {

        print_slow_at(15, 45, "1, 2, 3, 4 중 골라야해..!!");
        Sleep(1000);
        clear_line();
        move_cursor(15, 46);
        scanf("%d", &selection);
        print_at(12, 19, "              ");
        print_at(12, 20, "               ");
        print_at(12, 21, "               ");
        print_at(12, 22, "               ");
        print_at(12, 23, "               ");
        print_at(12, 24, "               ");
        print_at(12, 25, "                ");
        print_at(12, 26, "               ");
        print_at(12, 27, "               ");
        print_at(12, 28, "               ");
    } while ((selection < 1) || (selection > 4));

    subtraction = attackDirection - selection;

    if (subtraction < 0) {
        subtraction *= -1;
    }

    //가드 성공 시 피해량 없음
    if (subtraction == 0) {
        print_slow_at(15, 45, "완벽하게 막아냈다 !");
        Sleep(1000);
        clear_line();
        return;
    }

    //일부 가드시 0.5배의 피해량
    else if (subtraction == 1) {
        totalDamage = anemyDamage / 2;
        move_cursor(15, 45);
        int word[] = { totalDamage };
        print_slow3("아쉬웠다, % 만큼의 피해를 입었다", 30, word, 1);
        Sleep(1000);
        clear_line();
        Health(-totalDamage);
        return;
    }

    //가드 실패시 기존의 피해량
    else {
        totalDamage = anemyDamage;
        move_cursor(15, 45);
        int word1[] = { totalDamage };
        print_slow3("실패했다... % 만큼의 피해를 입었다.", 30, word1, 1);
        Sleep(1000);
        clear_line();
        Health(-totalDamage);
        return;
    }
}
//이경민특수적공격함수
void exgameLoop() {
    int position = 0; // 네모의 위치
    int direction = 1; // 네모의 이동 방향
    int result;
    int successCount = 0; // 성공 횟수

    while (1) {
        drawSquare(position);
        result = updateGame(&position, &direction);
        if (result == 1) {
            successCount++;
            if (successCount == 3) {
                printf("3번 성공했습니다! 적을 쓰러트렸습니다!\n");
                break;
            }
        }
        else if (result == 0) {
            successCount = 0; // 실패하면 성공 횟수 초기화
        }
        Sleep(100); // 0.1초 대기
    }
}
//전투방식
int randomfight = 0;
//적의 번호를 통해 fight_start 함수를 호출
int fight_start(int anemyNumber) {

    //적의 번호를 통해 호출받은 값으로 적의 스탯을 조정함.
    if (randomfight == 0) {
        switch (anemyNumber) {
        case 1:
            total_anemyHealth = 80, anemyDamage = rand() % 10 + 20;
            break;
        case 2:
            total_anemyHealth = 120, anemyDamage = rand() % 10 + 20;
            break;
        case 3:
            total_anemyHealth = 140, anemyDamage = rand() % 10 + 20;
            break;
        case 4:
            total_anemyHealth = 60, anemyDamage = rand() % 10 + 20;
            break;
        case 5:
            total_anemyHealth = 40, anemyDamage = rand() % 10 + 20;
            break;
        case 6:
            total_anemyHealth = 120, anemyDamage = rand() % 10 + 20;
            break;
        case 7:
            total_anemyHealth = 180, anemyDamage = rand() % 10 + 20;
            break;
        case 8:
            total_anemyHealth = 50, anemyDamage = rand() % 10 + 20;
            break;
        case 9:
            total_anemyHealth = 109, anemyDamage = rand() % 10 + 20;
            break;
        case 10:
            total_anemyHealth = 44, anemyDamage = rand() % 10 + 20;
            break;
        }
        randomfight += 1;
    }
    else {

        int choice;
        print_slow_at(15, 45, "무엇을 할까?");
        move_cursor(15, 46);
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            print_slow_at(15, 45, "공격하기를 선택했다 !");
            move_cursor(4, 30);
            printf("체력 : %3d", total_anemyHealth);
            Sleep(1000);
            print_at(15, 45, "                                                 ");
            move_cursor(15, 45);
            int replace[] = { totalStrength };
            print_slow3("% 만큼의 피해를 입혔다 !", 30, replace, 1);
            Sleep(1000);
            print_at(15, 45, "                                                 ");
            anemyHealth(-totalStrength);
            move_cursor(4, 30);
            printf("체력 : %3d", total_anemyHealth);

            break;

        case 2:
            move_cursor(15, 45);
            print_slow("방어하기를 선택했다 ! 어디로 공격이 들어올까 ?? ");
            Sleep(1000);
            print_at(15, 45, "                                                ");
            guardPuzzle(anemyDamage);
            ifGuard = 1;
            status_clear();
            status();
            break;


        case 3:
            move_cursor(15, 45);
            print_slow("도망가기를 선택했다 ! 도망칠수 있을까 ...?");
            Sleep(1000);
            print_at(15, 45, "                                                ");
            int run = rand() % 30;
            Sleep(1000);

            if (run < 20) {
                move_cursor(15, 45);
                print_slow("도망가기에 성공했다 ! 나이스 !!!");
                Sleep(1000);
                print_at(15, 45, "                                                ");
                return;
            }

            else {
                move_cursor(15, 45);
                print_slow("도망치기에 실패했다... 다시 맞써 싸워야해");
                Sleep(1000);
                print_at(15, 45, "                                                ");
                break;
            }

        default:
            print_at(15, 45, "지금 뭐하는거야 !!! 소중한 한 턴을 낭비 했다...");
            Sleep(1000);
            print_at(15, 45, "                                                ");
            break;

        }
        return;
    }
    return;
}


//이벤트 구조체
typedef struct {
    char* event_name;
    void (*event_Function)(void);
} Event;
//전투 구조체
typedef struct {
    char* fight_name;
    void (*fight_Function)(void);
} Fight;
//장비 구조체
typedef struct {
    char* weapon_name;
    void (*weapon_Function)(int*, int*);
    int price;
} Weapon;
//특수적 구조체
typedef struct {
    char* special_name;
    void (*special_Function)(void);
} Special;

//상점전용 스탯창
void status_store() {
    print_at(70, 11, "________상 태 창________");
    print_at(70, 12, "|                      |");
    move_cursor(70, 13);
    printf("| > 소지금: %4d       |\n", totalGold);
    print_at(70, 14, "|                      |");
    move_cursor(70, 15);
    printf("| > 공격력: %4d       |\n", totalStrength);
    print_at(70, 16, "|                      |");
    move_cursor(70, 17);
    printf("| > 체력: %4d         |\n", totalHealth);
    print_at(70, 18, "|                      |");
    move_cursor(70, 19);
    printf("| > 목숨: %4d         |\n", totalHeart);
    print_at(70, 20, "|______________________|");

}




//전투 ui
void Fight_UI() {
    status();
    print_at(4, 4, "________공 격 창________\n");
    print_at(4, 5, "|                      |\n");
    print_at(4, 6, "|   > 1. 공격하기      |\n");
    print_at(4, 7, "|                      |\n");
    print_at(4, 8, "|                      |\n");
    print_at(4, 9, "|   > 2. 방어하기      |\n");
    print_at(4, 10, "|                      |\n");
    print_at(4, 11, "|                      |\n");
    print_at(4, 12, "|   > 3. 도망가기      |\n");
    print_at(4, 13, "|______________________|\n");
    print_at(0, 40, "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
}
//특수 적 및 보스 ui
void Fight_UI2() {
    status();
    print_at(4, 4, "________공 격 창________\n");
    print_at(4, 5, "|                      |\n");
    print_at(4, 6, "|   > 1. 공격하기      |\n");
    print_at(4, 7, "|                      |\n");
    print_at(4, 8, "|                      |\n");
    print_at(4, 9, "|   > 2. 방어하기      |\n");
    print_at(4, 10, "|                      |\n");
    print_at(4, 11, "|                      |\n");
    print_at(4, 12, "|   > 3. 대화하기      |\n");
    print_at(4, 13, "|______________________|\n");
    print_at(0, 40, "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
}
//마왕 ui
void Fight_UI3() {
    status();
    print_at(4, 4, "_______대 화 창________\n");
    print_at(4, 5, "|                     |\n");
    print_at(4, 6, "|   > 1. 대화하기     |\n");
    print_at(4, 7, "|                     |\n");
    print_at(4, 8, "|                     |\n");
    print_at(4, 9, "|   > 2. 생각하기     |\n");
    print_at(4, 10, "|                     |\n");
    print_at(4, 11, "|                     |\n");
    print_at(4, 12, "|   > 3. ? ? 하기     |\n");
    print_at(4, 13, "|_____________________|\n");
    print_at(0, 40, "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
}
//마왕엔딩분기UI1
void Fight_UI3_kill() {
    status();
    print_at(4, 4, "_______대 화 창________\n");
    print_at(4, 5, "|                     |\n");
    print_at(4, 6, "|   > 1. 대화하기     |\n");
    print_at(4, 7, "|                     |\n");
    print_at(4, 8, "|                     |\n");
    print_at(4, 9, "|   > 2. 생각하기     |\n");
    print_at(4, 10, "|                     |\n");
    print_at(4, 11, "|                     |\n");
    print_at(4, 12, "|   > 3. 살해하기     |\n");
    print_at(4, 13, "|_____________________|\n");
    print_at(0, 40, "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
}
//마왕엔딩분기UI2
void Fight_UI3_pro() {
    status();
    print_at(4, 4, "_______대 화 창________\n");
    print_at(4, 5, "|                     |\n");
    print_at(4, 6, "|   > 1. 대화하기     |\n");
    print_at(4, 7, "|                     |\n");
    print_at(4, 8, "|                     |\n");
    print_at(4, 9, "|   > 2. 생각하기     |\n");
    print_at(4, 10, "|                     |\n");
    print_at(4, 11, "|                     |\n");
    print_at(4, 12, "|   > 3. 설득하기     |\n");
    print_at(4, 13, "|_____________________|\n");
    print_at(0, 40, "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
}

//적들

//야생멧돼지
void fight1() {
    clear_text();
    Fight_UI();
    nemo();
    print_at_unicode(49, 24, L" ╭━━━━╮___         ");
    print_at_unicode(49, 25, L" | :::::::::: / ___ /  ");
    print_at_unicode(49, 26, L" | :::::::::(｡ ●ω●｡)");
    print_at_unicode(49, 27, L" し------し-- - Ｊ     ");
    move_cursor(15, 35);
    print_slow("야생멧돼지가 나타났다 ! 귀여워 !");
    Sleep(1000);
    print_at(15, 45, "                                                           ");
    while (totalHealth > 0 && total_anemyHealth > 0) {
        print_slow_at(15, 45, "돼지는 앞발을 햝으며 나를 쳐다 본다...");
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        int success = fight_start(1);
        if (success == 1) {
            return;
        }

        if (ifGuard != 1 && monster_turn % 2 == 1) {
            print_slow_at(15, 45, "돼지 ? 멧돼지 ? 는 꿀꿀 거린다 !!!");
            Sleep(1000);
            print_at(15, 45, "                                                    ");
            move_cursor(15, 45);
            int replace[] = { anemyDamage };
            print_slow3("이런, 귀엽잖아 ! 심장에 무리가 가 % 의 피해를 입었다 !\n", 30, replace, 1);
            Sleep(1000);
            print_at(15, 45, "                                                              ");
            Health(-anemyDamage);
            status_clear();
            status();
            Sleep(1000);
        }
        else {
            print_slow_at(15, 45, "돼지는 꿀꿀거리기를 준비한다... 멧돼지 아니야 ?");
            Sleep(1000);
            print_at(15, 45, "                                                    ");
        }
        ifGuard = 0;
        monster_turn++;
    }
    if (totalHealth <= 0) {
        print_slow_at(15, 45, "모든 체력이 소모 되었다...\n");
        Sleep(1000);
        return;
    }
    else if (total_anemyHealth <= 0) {
        print_slow_at(15, 45, "멧돼지를 처치했다 ! !");
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        print_slow_at(15, 45, "멧돼지를 처치하여 20G 를 얻고 공격력이 5 올랐다 !");
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        Gold(20);
        Strength(5);
        status_clear();
        status();
        Sleep(1000);
        print_at(15, 45, "                                                       ");

        return;
    }
    return;

}

//과제에미친수뭉이
void fight2() {
    clear_text();
    Fight_UI();
    nemo();
    print_at(49, 16, "        @         @@@@@        ");
    print_at(49, 17, "      # @ #       @   @        ");
    print_at(49, 18, "     @  @  @      @   @        ");
    print_at(49, 19, "        @         @@@@@        ");
    print_at(49, 20, "      @@@@@         @          ");
    print_at(49, 21, "        @         @@@@@        ");
    print_at(49, 22, "        @           @          ");
    print_at(49, 23, "       @@@@@@@@@@@@@@          ");
    print_at(49, 24, "    @@@@             @@@@      ");
    print_at(49, 25, "   @                      @    ");
    print_at(49, 26, "    @                    @     ");
    print_at(49, 27, "   @     \\        /      @    ");
    print_at(49, 28, "   @     ●       ●      @    ");
    print_at(49, 29, "    @         ㅅ         @     ");
    print_at(49, 29, "      @     _______    @      ");
    print_at(49, 30, "    /@#@#@ |       | @#@#@\\    ");
    print_at(49, 31, "    @      @ 과 제 @       @   ");
    print_at(49, 32, "    \\@#@#@|       |,@#@#@/    ");
    print_at(49, 33, "       @    ---------  @       ");
    print_at(49, 34, "        @     ____    @        ");
    print_at(49, 35, "        @    @   @    @        ");
    print_at(49, 36, "         @@@@@   @@@@@         ");
    move_cursor(15, 35);
    print_slow("과제에 미친 수뭉이가 나타났다 ! 무서워 !");
    
    Sleep(1000);
    print_at(15, 45, "                                                           ");
    while (totalHealth > 0 && total_anemyHealth > 0) {
        print_at(15, 45, "수뭉이는 과제를 든 채로 나를 바라본다...");
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        int success = fight_start(2);
        if (success == 1) {
            return;
        }

        if (ifGuard != 1 && monster_turn % 2 == 1) {
            print_slow_at(15, 45, "수뭉이는 과제를 던진다 !!! ");
            Sleep(1000);
            print_at(15, 45, "                                                    ");
            move_cursor(15, 45);
            int replace[] = { anemyDamage };
            print_slow3("과제 던지기는 치명적이였다 ! % 의 피해를 입었다 !\n", 30, replace, 1);
            Sleep(1000);
            print_at(15, 45, "                                                           ");
            Health(-anemyDamage);
            status_clear();
            status();
            Sleep(1000);
        }
        else {
            print_slow_at(15, 45, "수뭉이는 과제던지기를 준비한다 !");
            Sleep(1000);
            print_at(15, 45, "                                                    ");
        }
        ifGuard = 0;
        monster_turn++;
        
    }

    if (totalHealth <= 0) {
        print_slow_at(15, 45, "모든 체력이 소모 되었다...\n");
        Sleep(1000);
        print_at(15, 45, "                                                       ");
        Heart(-1);
        status_clear();
        status();
        Sleep(1000);
        return;
    }
    else if (total_anemyHealth <= 0) {
        print_slow_at(15, 45, "과제에 미친 수뭉이를 처치했다 ! !");
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        print_slow_at2(15, 45, "\"수뭉아... 과제 힘내\"", 45);
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        print_slow_at(15, 45, "수뭉이를 편하게 해주어 20G 를 얻고 공격력이 5 올랐다. 어쩐지 눈물이...");
        Sleep(1000);
        print_at(15, 45, "                                                                              ");
        Gold(20);
        Strength(5);
        status_clear();
        status();
        Sleep(1000);
        print_at(15, 45, "                                                       ");
        return;
    }
    return;
}

//조별과제응원빌런
void fight3() {
    clear_text();
    Fight_UI();
    nemo();
    print_at(49, 20, "       _ ");
    print_at(49, 21, "      |)`");
    print_at(49, 22, "      | |");
    print_at(49, 23, "      | |_____");
    print_at(49, 24, "     /    (]__)");
    print_at(49, 25, "    /    (]___)");
    print_at(49, 26, "   /    (]___)");
    print_at(49, 27, "      ___(]_)");
    print_at(49, 28, "     /");
    print_at(49, 29, "    /");

    move_cursor(15, 35);
    print_slow("조별과제응원빌런이 나타났다 ! 저리가 !");
    Sleep(1000);
    print_at(15, 45, "                                                           ");
    print_slow_at(15, 45, "갑자기 짜증이 막 난다... 하아 나도자고싶은데");
    Sleep(1000);
    print_at(15, 45, "                                                           ");
    while (totalHealth > 0 && total_anemyHealth > 0) {
        print_at(15, 45, "조별과제응원빌런은 카톡 안읽씹을 하는중이다...");
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        int success = fight_start(3);
        if (success == 1) {
            return;
        }

        if (ifGuard != 1 && monster_turn % 2 == 1) {
            print_slow_at(15, 45, "조별과제응원빌런은 아무것도 하지 않는다... ");
            Sleep(1000);
            print_at(15, 45, "                                                    ");
            move_cursor(15, 45);
            anemyDamage += 20;
            int replace[] = { anemyDamage };
            print_slow3("짜증나 ! 죽을 것 같아 ! 나도 자고 싶어 ! % 의 피해를 입었다..!\n", 30, replace, 1);
            Sleep(1000);
            print_at(15, 45, "                                                           ");
            Health(-anemyDamage);
            status_clear();
            status();
            print_slow_at2(15, 45, "\"너무나도 치명적인 공격이네...\"", 50);
            Sleep(1000);
            print_at(15, 45, "                                                    ");
            Sleep(1000);
        }
        else {
            print_slow_at(15, 45, "빌런은 아무것도 안하기를 준비한다... 짜증나");
            Sleep(1000);
            print_at(15, 45, "                                                    ");
        }
        ifGuard = 0;
        monster_turn++;
    }
    if (totalHealth <= 0) {
        print_slow_at(15, 45, "모든 체력이 소모 되었다...\n");
        return;
    }
    else if (total_anemyHealth <= 0) {
        print_slow_at(15, 45, "조별과제빌런을 처치했다 ! ! ! ! ! ! !");
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        print_slow_at2(15, 45, "\"야, 차준영 너 나와.\"", 50);
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        print_slow_at(15, 45, "조화를 편하게 해주고 100G를 얻었다 !!! 덤으로 공격력 10 까지 !!!");
        Sleep(1000);
        print_at(15, 45, "                                                                        ");
        Gold(100);
        Strength(10);
        status_clear();
        status();
        Sleep(1000);
        print_at(15, 45, "                                                                         ");

        return;
    }
    return;
    
}
//다크데빌수뭉
void fight4() {
    clear_text();
    Fight_UI();
    nemo();
    print_at(49, 16, "          @         @@@@@        ");
    print_at(49, 17, "        # @ #       @   @        ");
    print_at(49, 18, "       @  @  @      @   @        ");
    print_at(49, 19, "          @         @@@@@        ");
    print_at(49, 20, "        @@@@@         @          ");
    print_at(49, 21, "          @         @@@@@        ");
    print_at(49, 22, "          @           @          ");
    print_at(49, 23, "          @@@@@@@@@@@@@          ");
    print_at(49, 24, "    @ @@@@             @@@@ @    ");
    print_at(49, 25, "     @                      @    ");
    print_at(49, 26, "      @   888       888    @     ");
    print_at(49, 27, " ####@     ●_______●       @####    ");
    print_at(49, 28, "@    @       |     |         @    @");
    print_at(49, 29, "@     @      |_____|        @    @ ");
    print_at(49, 29, " @     @                  @     @ ");
    print_at(49, 30, "   @    @                @    @    ");
    print_at(49, 31, "     @                     @   ");
    print_at(49, 32, "       @                 @        ");
    print_at(49, 33, "         @             @       ");
    print_at(49, 34, "         @    ____     @        ");
    print_at(49, 35, "         @    @   @    @        ");
    print_at(49, 36, "          @@@@@   @@@@@         ");
    move_cursor(15, 35);
    print_slow("다크데빌수뭉이가 나타났다 ! 무서워 !");
    Sleep(1000);
    print_at(15, 45, "                                                           ");
    print_slow_at(15, 45, "사실 전혀 무섭지 않지만 무서워 해야할거같다...");
    Sleep(1000);
    print_at(15, 45, "                                                           ");
    while (totalHealth > 0 && total_anemyHealth > 0) {
        print_at(15, 45, "다크데빌수뭉이는 어두운 오오라를 내뿜으며 서 있다");
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        int success = fight_start(4);
        if (success == 1) {
            return;
        }


        if (ifGuard != 1 && monster_turn % 2 == 1) {
            print_slow_at(15, 45, "수뭉이는 흑염룡을 풀어놓는다...!");
            Sleep(1000);
            print_at(15, 45, "                                                           ");
            move_cursor(15, 45);
            int replace[] = { anemyDamage };
            print_slow3("이런... 내 오른팔도 꿈틀거린다. 봉인에 집중하느라 % 의 피해를 입었다...", 30, replace, 1);
            Sleep(1000);
            print_at(15, 45, "                                                                         ");
            Health(-anemyDamage);
            status_clear();
            status();
            Sleep(1000);
        }
        else {
            print_slow_at(15, 45, "수뭉이는 흑염룡 봉인해제를 준비한다...");
            Sleep(1000);
            print_at(15, 45, "                                                    ");
        }

        ifGuard = 0;
        monster_turn++;
    }
    if (totalHealth <= 0) {
        print_slow_at(15, 45, "모든 체력이 소모 되었다...\n");
        return;
    }
    else if (total_anemyHealth <= 0) {
        print_slow_at(15, 45, "중2병수뭉이를 처치했다 ! !");
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        print_slow_at2(15, 45, "\"자, 이제 누가 진짜지?\"", 50);
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        print_slow_at2(15, 45, "\"바로 나다.\"", 50);
        Sleep(1000);
        print_at(15, 45, "                                                               ");
        print_slow_at(15, 45, "30G 를 얻고 무사히 봉인에 성공해 공격력 20을 얻었다 !!!");
        Sleep(1000);
        print_at(15, 45, "                                                                ");
        Gold(20);
        Strength(20);
        status_clear();
        status();
        print_slow_at2(15, 45, "\"큿, 왕관을 쓴자 그 무게를 견뎌라. 인가... 후후\"", 50);
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        print_slow_at(15, 45, "그 말에 따라 체력이 10 감소 했다...");
        Sleep(1000);
        print_at(15, 45, "                                                                ");
        Health(-10);
        status_clear();
        status();
        Sleep(1000);
        return;
    }
    return;

}
//다리달린물고기
void fight5() {
    clear_text();
    Fight_UI();
    nemo();
    print_at(49, 22, " !~        ,,;*=*#~       ");
    print_at(49, 23, "  !~!*    ;!#==;!*   #,    ");
    print_at(49, 24, "    ::~;**~=*;!-,:, ● : ●   ");
    print_at(49, 25, "    ::;$;~:~=*-*:=-    :___  ");
    print_at(49, 26, "    !!$#*!$=:!~;-!;    |___  ");
    print_at(49, 27, "   ;~;*.  .@$$#:-!,!; -,    ");
    print_at(49, 28, "  ;;.     .-~,@;*=:=:      ");
    print_at(49, 29, "           ;:    ;        ");
    print_at(49, 30, "           ;-    :.       ");
    print_at(49, 31, "           |__   |__      ");
    move_cursor(15, 35);
    print_slow("저게 뭐야? 다리달린 물고기..? 가? 나타났다?");
    Sleep(1000);
    move_cursor(15, 45);
    print_slow("뭐 저런게 다있담...");
    Sleep(1000);
    print_at(15, 45, "                                                           ");

    while (totalHealth > 0 && total_anemyHealth > 0) {
        print_at(15, 45, "다리달린 물고기는 물을 뚝뚝 떨어뜨리며 서있다. 으...");
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        int success = fight_start(5);
        if (success == 1) {
            return;
        }
        if (ifGuard != 1 && monster_turn % 2 == 1) {
            print_slow_at(15, 45, "물고기는 날라차기를 갈겼다 !");
            Sleep(1000);
            print_at(15, 45, "                                                           ");
            move_cursor(15, 45);
            int replace[] = { anemyDamage };
            print_slow3("철퍽소리가 난다. 으으... 찝찝해... % 의 피해를 입었다.\n", 30, replace, 1);
            Sleep(1000);
            print_at(15, 45, "                                                                 ");
            Health(-anemyDamage);
            status_clear();
            status();
            Sleep(1000);
        }
        else {
            print_slow_at(15, 45, "다리달린 물고기는 발차기를 준비한다... 왜 ???");
            Sleep(1000);
            print_at(15, 45, "                                                    ");
        }
        ifGuard = 0;
        monster_turn++;
    }
    if (totalHealth <= 0) {
        print_slow_at(15, 45, "모든 체력이 소모 되었다...\n");
        return;
    }
    else if (total_anemyHealth <= 0) {
        print_slow_at(15, 45, "물고기를 처치했다 ! 저거 먹을 수 있나?");
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        print_slow_at(15, 45, "농담입니다. 착한 어린이는 먹어보지 않아요");
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        print_slow_at(15, 45, "20G 를 얻었다. 그런데 비린내 나는거 같고... 찝찝해...");
        Sleep(1000);
        print_at(15, 45, "                                                             ");
        Gold(20);
        status_clear();
        status();
        print_slow_at(15, 45, "찝찝함에 기분이 너무 나빠졌다... 체력이 10 감소했다");
        Sleep(1000);
        print_at(15, 45, "                                                                 ");
        Health(-10);
        status_clear();
        status();
        Sleep(1000);
        return;
    }
    return;

}
//거대한바퀴벌레
void fight6() {
    clear_text();
    Fight_UI();
    nemo();
    print_at_unicode(40, 4, L"    ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠀⣀⠀⠀⠀⠀⠀⠀⠀");
    print_at_unicode(40, 5, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡤⠶⠚⠉⢉⣩⠽⠟⠛⠛⠛⠃⠀⠀⠀⠀⠀⠀⠀⠀");
    print_at_unicode(40, 6, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠞⠉⠀⢀⣠⠞⠉⠀⠀⠀⠀⠀⠀⠀");
    print_at_unicode(40, 7, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡞⠁⠀⠀⣰⠋⠀⠀⠀⠀⠀⠀⠀⠀");
    print_at_unicode(40, 8, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⠀⠀⠀⡼⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣠⡤⠤⠄⢤⣄⣀⣀⣀⠀⠀⠀");
    print_at_unicode(40, 9, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⢰⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⠴⠒⠋⠉⠀⠀⠀⣀⣤⠴⠒⠋⠉⠉⠀⠀⠀");
    print_at_unicode(40, 10, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠻⡄⠀⠀⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠞⢳⡄⢀⡴⠚⠉⠀⠀⠀⠀⠀⣠⠴⠚⠉⠀⠀⠀⠀");
    print_at_unicode(40, 11, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢦⡀⠘⣧⠀⠀⠀⠀⠀⠀⠀⠀⣰⠃⠀⠀⠹⡏⠀⠀⠀⠀⠀⣀⣴⠟⠁⠀⠀⠀⠀");
    print_at_unicode(40, 12, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠳⢬⣳⣄⣠⠤⠤⠶⠶⠒⠋⠀⠀⠀⠀⠹⡀⠀⠀⠀⠀⠈⠉⠛⠲⢦⣄⡀⠀⠀⠀");
    print_at_unicode(40, 13, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⠤⠖⠋⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠱⡀⠀⠁⠀⠀⠀⠀⠀⠀⠀⠉⢳⠦⣄⡀⠀⠀⠀");
    print_at_unicode(40, 14, L"⠀⠀⠀⠀⠀⠀⠀⠀⣠⠖⠋⠀⠀⠀⣠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢱⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⠀⢃⠈⠙⠲⣄⡀⠀⠀⠀⠀");
    print_at_unicode(40, 15, L"⠀⠀⠀⠀⠀⠀⢠⠞⠁⠀⠀⠀⢀⢾⠃⠀⠀⠀⠀⠀⠀⠀⠀⢢⠀⠀⠀⠀⠀⠀⠀⢣⠀⠀⠀⠀⠀⠀⠀⠀⠀⣹⠮⣄⠀⠀⠀⠙⢦⡀⠀⠀⠀⠀");
    print_at_unicode(40, 16, L"⠀⠀⠀⠀⠀⣰⠋⠀⠀⢀⡤⡴⠃⠈⠦⣀⠀⠀⠀⠀⠀⠀⢀⣷⢸⠀⠀⠀⠀⢀⣀⠘⡄⠤⠤⢤⠔⠒⠂⠉⠁⠀⠀⠀⠑⢄⡀⠀⠀⠙⢦⡀⠀⠀");
    print_at_unicode(40, 17, L"⠀⠀⠀⠀⣼⠃⠀⠀⢠⣞⠟⠀⠀⠀⡄⠀⠉⠒⠢⣤⣤⠄⣼⢻⠸⠀⠀⠀⠀⠉⢤⠀⢿⡖⠒⠊⢦⠤⠤⣀⣀⡀⠀⠀⠀⠈⠻⡝⠲⢤⣀⠙⢦⠀⠀");
    print_at_unicode(40, 18, L"⠀⠀⠀⢰⠃⠀⠀⣴⣿⠎⠀⠀⢀⣜⠤⠄⢲⠎⠉⠀⠀⡼⠸⠘⡄⡇⠀⠀⠀⠀⢸⠀⢸⠘⢆⠀⠘⡄⠀⠀⠀⢢⠉⠉⠀⠒⠒⠽⡄⠀⠈⠙⠮⣷⡀");
    print_at_unicode(40, 19, L"⠀⠀⠀⡟⠀⠀⣼⢻⠧⠐⠂⠉⡜⠀⠀⡰⡟⠀⠀⠀⡰⠁⡇⠀⡇⡇⠀⠀⠀⠀⢺⠇⠀⣆⡨⢆⠀⢽⠀⠀⠀⠈⡷⡄⠀⠀⠀⠀⠹⡄⠀⠀⠀⠈⠁");
    print_at_unicode(40, 20, L"⠀⠀⢸⠃⠀⠀⢃⠎⠀⠀⠀⣴⠃⠀⡜⠹⠁⠀⠀⡰⠁⢠⠁⠀⢸⢸⠀⠀⠀⢠⡸⢣⠔⡏⠀⠈⢆⠀⣗⠒⠀⠀⢸⠘⢆⠀⠀⠀⠀⢳⠀⠀⠀");
    print_at_unicode(40, 21, L"⠀⠀⢸⠀⠀⠀⡜⠀⠀⢀⡜⡞⠀⡜⠈⠏⠀⠈⡹⠑⠒⠼⡀⠀⠀⢿⠀⠀⠀⢀⡇⠀⢇⢁⠀⠀⠈⢆⢰⠀⠀⠀⠈⡄⠈⢢⠀⠀⠀⠈⣇⠀⠀");
    print_at_unicode(40, 22, L"⠀⠀⢸⡀⠀⢰⠁⠀⢀⢮⠀⠇⡜⠀⠘⠀⠀⢰⠃⠀⠀⡇⠈⠁⠀⢘⡄⠀⠀⢸⠀⠀⣘⣼⠤⠤⠤⣈⡞⡀⠀⠀⠀⡇⠰⡄⢣⡀⠀⠀⢻⠀⠀");
    print_at_unicode(40, 23, L"⠀⠀⠈⡇⠀⡜⠀⢀⠎⢸⢸⢰⠁⠀⠄⠀⢠⠃⠀⠀⢸⠀⠀⠀⠀⠀⡇⠀⠀⡆⠀⠀⣶⣿⡿⠿⡛⢻⡟⡇⠀⠀⠀⡇⠀⣿⣆⢡⠀⠀⢸⡇⠀");
    print_at_unicode(40, 24, L"⠀⠀⢠⡏⠀⠉⢢⡎⠀⡇⣿⠊⠀⠀⠀⢠⡏⠀⠀⠀⠎⠀⠀⠀⠀⠀⡇⠀⡸⠀⠀⠀⡇⠀⢰⡆⡇⢸⢠⢹⠀⠀⠀⡇⠀⢹⠈⢧⣣⠀⠘⡇⠀⠀");
    print_at_unicode(40, 25, L"⠀⠀⢸⡇⠀⠀⠀⡇⠀⡇⢹⠀⠀⠀⢀⡾⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⢠⠃⠀⠀⠠⠟⡯⣻⣇⢃⠇⢠⠏⡇⠀⢸⡆⠀⢸⠀⠈⢳⡀⠀⡇⠀");
    print_at_unicode(40, 26, L"⠀⠀⠀⣇⠀⡔⠋⡇⠀⢱⢼⠀⠀⡂⣼⡇⢹⣶⣶⣶⣤⣤⣀⠀⠀⠀⣇⠇⠀⠀⠀⠀⣶⡭⢃⣏⡘⠀⡎⠀⠇⠀⡾⣷⠀⣼⠀⠀⠀⢻⡄⡇⠀");
    print_at_unicode(40, 27, L"⠀⠀⠀⣹⠜⠋⠉⠓⢄⡏⢸⠀⠀⢳⡏⢸⠹⢀⣉⢭⣻⡽⠿⠛⠓⠀⠋⠀⠀⠀⠀⠀⠘⠛⠛⠓⠀⡄⡇⠀⢸⢰⡇⢸⡄⡟⠀⠀⠀⠀⢳⡇⠀⠀");
    print_at_unicode(40, 28, L"⠀⣠⠞⠁⠀⠀⠀⠀⠀⢙⠌⡇⠀⣿⠁⠀⡇⡗⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠰⠀⠀⠀⠀⠀⠀⠁⠁⠀⢸⣼⠀⠈⣇⡇⠀⠀⠀⠀");
    print_at_unicode(40, 29, L"⢸⠁⠀⠀⢀⡠⠔⠚⠉⠉⢱⣇⢸⢧⠀⠀⠸⣱⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⡤⠦⡔⠀⠀⠀⠀⠀⢀⡼⠀⠀⣼⡏⠀⠀⢹⡇⠀⠀");
    print_at_unicode(40, 30, L"⢸⠀⠀⠀⠋⠀⠀⠀⢀⡠⠤⣿⣾⣇⣧⠀⠀⢫⡆⠀⠀⠀⠀⠀⠀⠀⢨⠀⠀⣠⠇⠀⠀⢀⡠⣶⠋⠀⠀⡸⣾⠁⠀⠀⠈⠁⠀");
    print_at_unicode(40, 31, L"⢸⡄⠀⠀⠀⠀⠠⠊⠁⠀⠀⢸⢃⠘⡜⡵⡀⠈⢿⡱⢲⡤⠤⢀⣀⣀⡀⠉⠉⣀⡠⡴⠚⠉⣸⢸⠀⠀⢠⣿⣿⠀⠀");
    print_at_unicode(40, 32, L"⠀⢧⠀⠀⠀⠀⠀⠀⠀⣀⠤⠚⠚⣤⣵⡰⡑⡄⠀⢣⡈⠳⡀⠀⠀⠀⢨⡋⠙⣆⢸⠀⠀⣰⢻⡎⠀⠀⡎⡇⡇⠀⠀");
    print_at_unicode(40, 33, L"⠀⠈⢷⡀⠀⠀⠀⠀⠀⠁⠀⠀⠀⡸⢌⣳⣵⡈⢦⡀⠳⡀⠈⢦⡀⠀⠘⠏⠲⣌⠙⢒⠴⡧⣸⡇⠀⡸⢸⠇⡇⠀");
    print_at_unicode(40, 34, L"⠀⠀⢠⣿⠢⡀⠀⠀⠀⠠⠄⡖⠋⠀⠀⠙⢿⣳⡀⠑⢄⠹⣄⡀⠙⢄⡠⠤⠒⠚⡖⡇⠀⠘⣽⡇⢠⠃⢸⢀⡇⠀");
    print_at_unicode(40, 35, L"⠀⠀⣾⠃⠀⠀⠀⠀⠀⢀⡼⣄⠀⠀⠀⠀⠀⠑⣽⣆⠀⠑⢝⡍⠒⠬⢧⣀⡠⠊⠀⠸⡀⠀⢹⡇⡎⠀⡿⢸⠇⠀⠀");
    print_at_unicode(40, 36, L"⠀⡼⠁⠀⠀⠀⠀⠀⠀⢀⠻⣺⣧⠀⠀⠀⠰⢢⠈⢪⡷⡀⠀⠙⡄⠀⠀⠱⡄⠀⠀⠀⢧⠀⢸⡻⠀⢠⡇⣾⠀⠀");
    print_at_unicode(40, 37, L"⢰⠇⠀⠀⠀⠀⠀⠀⠀⢸⠀⡏⣿⠀⠀⠀⠀⢣⢇⠀⠑⣄⠀⠀⠸⡄⠀⠀⠘⡄⠀⠀⠸⡀⢸⠁⠀⡾⢰⡏⢳⡀⠀");

    print_slow_at(15, 35, "거대한 바퀴벌레가 나타났다 ! 징그러워,,,,");
    Sleep(1000);
    print_at(15, 45, "                                                           ");


    while (totalHealth > 0 && total_anemyHealth > 0) {
        print_slow_at(15, 45, "바퀴벌레는 그냥 있다... 그게 더 싫어...");
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        int success = fight_start(6);
        if (success == 1) {
            return;
        }


        if (ifGuard != 1 && monster_turn % 2 == 1) {
            print_slow_at(15, 45, "바퀴벌레는 움직였다.\n");
            Sleep(1000);
            print_at(15, 45, "                                                           ");
            move_cursor(15, 45);
            int replace[] = { anemyDamage };
            print_slow3("으아아아아아아아아아아아아아아!!!!! % 의 피해를 입었다 !!!!1!", 30, replace, 1);
            Sleep(1000);
            print_at(15, 45, "                                                             ");
            Health(-anemyDamage);
            status_clear();
            status();
            Sleep(1000);
        }
        else {
            print_slow_at(15, 45, "바퀴벌레는 더듬이 흔들기를 준비한다...으으으");
            Sleep(1000);
            print_at(15, 45, "                                                    ");
        }
        ifGuard = 0;
        monster_turn++;
    }
    if (totalHealth <= 0) {
        print_slow_at(15, 45, "모든 체력이 소모 되었다...\n");
        Sleep(1000);
        return 0;
    }
    else if (total_anemyHealth <= 0) {
        print_slow_at(15, 45, "바퀴벌레를... 처치했다...");
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        print_slow_at(15, 45, "아 제발 다시는 만나지 말기를 제발요 제발요 제발요 제발");
        Sleep(1000);
        print_at(15, 45, "                                                                ");
        print_slow_at2(15, 45, "\"일단 20G를 얻긴 했는데 기분이 안좋아...\"", 50);
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        Gold(20);
        status_clear();
        status();
        Sleep(1000);
        print_slow_at(15, 45, "기분이 너무 안좋아져서 공격력이 5 감소했다...");
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        Strength(-5);
        status_clear();
        status();
        Sleep(1000);
        return 0;
    }
    return;

}
//귀엽지만은않은수뭉이
void fight7() {
    clear_text();
    Fight_UI();
    nemo();
    print_at(49, 16, "        @         @@@@@        ");
    print_at(49, 17, "      # @ #       @   @        ");
    print_at(49, 18, "     @  @  @      @   @        ");
    print_at(49, 19, "        @         @@@@@        ");
    print_at(49, 20, "      @@@@@         @          ");
    print_at(49, 21, "        @         @@@@@        ");
    print_at(49, 22, "        @           @          ");
    print_at(49, 23, "        @@@@@@@@@@@@@          ");
    print_at(49, 24, "  @ @@@@             @@@@ @    ");
    print_at(49, 25, "   @                      @    ");
    print_at(49, 26, "    @                    @     ");
    print_at(49, 27, "   @     ●       ●      @    ");
    print_at(49, 28, "   @    ///  ㅅ   ///     @    ");
    print_at(49, 29, "    @                    @     ");
    print_at(49, 29, "      @                 @      ");
    print_at(49, 30, "     @                   @     ");
    print_at(49, 31, "    @   @             @   @   ");
    print_at(49, 32, "   @   @               @   @   ");
    print_at(49, 33, "   @$$$@               @$$$@    ");
    print_at(49, 34, "        @    ____     @        ");
    print_at(49, 35, "        @    @   @    @        ");
    print_at(49, 36, "         @@@@@   @@@@@         ");
    move_cursor(15, 35);
    print_slow("귀엽지만은않은수뭉이가 나타났다 ! 젠장 귀여워 !");
    Sleep(1000);
    print_at(15, 45, "                                                           ");

    while (totalHealth > 0 && total_anemyHealth > 0) {
        print_slow_at(15, 45, "수뭉이는 귀여움을 뿜뿜 뽐내며 서있다 !");
        Sleep(1000);
        print_at(15, 45, "                                                               ");
        int success = fight_start(7);
        if (success == 1) {
            return;
        }

        if (ifGuard != 1 && monster_turn % 2 == 1) {
            print_slow_at2(15, 45, "수뭉이 : 흐,흥! 난 귀엽지 않다고 !", 45);
            Sleep(1000);
            print_at(15, 45, "                                                           ");
            move_cursor(15, 45);
            int replace[] = { anemyDamage };
            print_slow3("흡!... 귀여움을 참느라 숨이 넘어갔다 % 의 피해를 입었다...", 30, replace, 1);
            Sleep(1000);
            print_at(15, 45, "                                                             ");
            Health(-anemyDamage);
            status_clear();
            status();
            Sleep(1000);
        }
        else {
            print_slow_at(15, 45, "수뭉이는 츤데레행동을 준비한다 !!! 어떻게 하지...?????????");
            Sleep(1000);
            print_at(15, 45, "                                                    ");
        }
        ifGuard = 0;
        monster_turn++;
    }

    if (totalHealth <= 0) {
        print_slow_at(15, 45, "모든 체력이 소모 되었다...\n");
        Sleep(1000);
        return;
    }
    else if (total_anemyHealth <= 0) {
        print_slow_at(15, 45, "수뭉이가 귀엽다고 엉망진창 인정하게 만들어줬다");
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        print_slow_at2(15, 45, "수뭉이 : 난 귀여워...", 45);
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        print_slow_at(15, 45, "수뭉이와의 커플링을 사느라 20G 를 소비했다");
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        Gold(-20);
        status_clear();
        status();
        Sleep(1000);
        print_slow_at2(15, 45, "\"음, 수뭉이는 역시 귀여워.\"", 50);
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        print_slow_at(15, 45, "수뭉이의 귀여움에 마음이 충만해진다 ! 공격력 15를 얻었다.");
        Sleep(1000);
        print_at(15, 45, "                                                               ");
        Strength(20);
        status_clear();
        status();
        return;
    }
    return;
}

//무언가
void fight8() {
    clear_text();
    Fight_UI();
    nemo();
    print_at_unicode(46, 15, L"                                                   ");
    print_at_unicode(46, 16, L"                  __ooooooooo__                    ");
    print_at_unicode(46, 17, L"              oOOOOOOOOOOOOOOOOOOOOOo              ");
    print_at_unicode(46, 18, L"          oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo          ");
    print_at_unicode(46, 19, L"       oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo       ");
    print_at_unicode(46, 20, L"     oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo     ");
    print_at_unicode(46, 21, L"   oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo   ");
    print_at_unicode(46, 22, L"  oOOOOOOOOOOO*  *OOOOOOOOOOOOOO*  *OOOOOOOOOOOOo  ");
    print_at_unicode(46, 23, L" oOOOOOOOOOOO      OOOOOOOOOOOO      OOOOOOOOOOOOo ");
    print_at_unicode(46, 24, L" oOOOOOOOOOOOOo  oOOOOOOOOOOOOOOo  oOOOOOOOOOOOOOo ");
    print_at_unicode(46, 25, L"oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo");
    print_at_unicode(46, 26, L"oOOOO     OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO     OOOOo");
    print_at_unicode(46, 27, L"oOOOOOO OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO OOOOOOo");
    print_at_unicode(46, 28, L" *OOOOO  OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  OOOOO* ");
    print_at_unicode(46, 29, L" *OOOOOO  *OOOOOOOOOOOOOOOOOOOOOOOOOOOOO*  OOOOOO* ");
    print_at_unicode(46, 30, L"  *OOOOOO  *OOOOOOOOOOOOOOOOOOOOOOOOOOO*  OOOOOO*  ");
    print_at_unicode(46, 31, L"   *OOOOOOo  *OOOOOOOOOOOOOOOOOOOOOOO*  oOOOOOO*   ");
    print_at_unicode(46, 32, L"     *OOOOOOOo  *OOOOOOOOOOOOOOOOO*  oOOOOOOO*     ");
    print_at_unicode(46, 33, L"       *OOOOOOOOo  *OOOOOOOOOOO*  oOOOOOOOO*       ");
    print_at_unicode(46, 34, L"          *OOOOOOOOo           oOOOOOOOO*          ");
    print_at_unicode(46, 35, L"              *OOOOOOOOOOOOOOOOOOOOO*              ");
    print_at_unicode(46, 36, L"                  ""ooooooooo""                   ");

    move_cursor(15, 35);
    print_slow("무언가가 나타났다...");
    Sleep(1000);
    print_at(15, 45, "                        ");
    move_cursor(15, 35);
    print_slow("진짜 뭐지... 무섭다...");
    Sleep(1000);
    print_at(15, 45, "                       ");

    while (totalHealth > 0 && total_anemyHealth > 0) {
        print_at(15, 45, "무언가는 가만히 서있다... 무엇을 하려고...?");
        Sleep(1000);
        print_at(15, 45, "                                                ");
        int success = fight_start(8);
        if (success == 1) {
            return;
        }

        if (ifGuard != 1 && monster_turn % 2 == 1) {
            print_slow_at(15, 45, "무언가는...무언가 무언가를 무언가 했다...");
            Sleep(1000);
            print_at(15, 45, "                                                           ");
            move_cursor(15, 45);
            anemyDamage -= 10;
            int replace[] = { anemyDamage };
            print_slow3("무엇... 뭐지... 뭣... % 의 피해를 입었다.", 30, replace, 1);
            Sleep(1000);
            print_at(15, 45, "                                                           ");
            Health(-anemyDamage);
            status_clear();
            status();
            Sleep(1000);
        }
        else {
            print_slow_at(15, 45, "무언가는 무언가를 준비한다...");
            Sleep(1000);
            print_at(15, 45, "                                                    ");
        }
        ifGuard = 0;
        monster_turn++;
    }
    if (totalHealth <= 0) {
        print_slow_at(15, 45, "모든 체력이 소모 되었다...\n");
        return;
    }
    else if (total_anemyHealth <= 0) {
        print_slow_at(15, 45, "무언가를 무언가 해버렸다...");
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        print_slow_at(15, 45, "무언가는 무언가 무언가인채로 있다...");
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        print_slow_at(15, 45, "뭔지 모르겠고 아무일도 일어나지 않았다...");
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        return;
    }
    return;
}
//상점주인
void fight9() {
    clear_text();
    Fight_UI();
    nemo();
    print_at_unicode(46, 19, L"     ∩＿＿＿∩    $   $      ");
    print_at_unicode(46, 20, L"     | ノ　　　ヽ /⌒)   $    ");
    print_at_unicode(46, 21, L"    / ⌒)(ﾟ)　(ﾟ)   /         ");
    print_at_unicode(46, 22, L"  /　/　  (_●)ミ  /  $  $    ");
    print_at_unicode(46, 23, L" （　ヽ   | ∪ | ／           ");
    print_at_unicode(46, 24, L"    ＼　　 ヽノ /     $       ");
    print_at_unicode(46, 25, L"    /　　　   /               ");
    print_at_unicode(46, 26, L"   ｜　　　  /    $           ");
    print_at_unicode(46, 27, L"   ｜　／＼  ＼        $      ");
    print_at_unicode(46, 28, L"   ｜ /    )　 )              ");
    print_at_unicode(46, 29, L"   (_ﾉ　　(   ＼   $    $     ");
    print_at_unicode(46, 30, L"           ＼ ＿)  $  $ $ $ $ ");

    print_slow_at(15, 35, "상점 주인이 나타났다...? 왜..?");
    print_at(15, 45, "                                                ");
    print_slow_at(15, 35, "모르겠지만... 일단 준비하자");
    print_at(15, 45, "                                                ");
    while (totalHealth > 0 && total_anemyHealth > 0) {
        print_slow_at(15, 45, "상점 주인은 골드를 주섬주섬 모으고 있다...");
        Sleep(1000);
        print_at(15, 45, "                                                ");
        int success = fight_start(9);
        if (success == 1) {
            return;
        }


        if (ifGuard != 1 && monster_turn % 2 == 1) {
            print_slow_at(15, 45, "상점 주인은 돈을 던진다 !!! \n");
            Sleep(1000);
            print_at(15, 45, "                                                           ");
            move_cursor(15, 45);
            int replace[] = { anemyDamage };
            print_slow3("우왓! 아프지만 기분은 좋아... %의 피해를 입었다", 30, replace, 1);
            Sleep(1000);
            print_at(15, 45, "                                                           ");
            Health(-anemyDamage);
            status_clear();
            status();
            Sleep(1000);
        }
        else {
            print_slow_at(15, 45, "상점주인은 골드던지기를 준비한다... 어떻게 할까...?");
            Sleep(1000);
            print_at(15, 45, "                                                    ");
        }
        ifGuard = 0;
        monster_turn++;
    }
    if (totalHealth <= 0) {
        print_slow_at(15, 45, "모든 체력이 소모 되었다...\n");

        return;
    }
    else if (total_anemyHealth <= 0) {
        print_slow_at(15, 45, "상점주인을 상대로 마작을 이겼다 !");
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        print_slow_at2(15, 45, "\"너를 인정하도록 하마...\"", 50);
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        print_slow_at2(15, 45, "\"왜... 그런대사를 하시는거죠...갑자기 마작은 뭐고...\"", 50);
        Sleep(1000);
        print_at(15, 45, "                                                                    ");
        print_slow_at(15, 45, "아무튼 상점주인은 돈이 많다!! 200G를 얻었다");
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        Gold(200);
        status_clear();
        status();
        Sleep(1000);
        return;
    }
    return;
}
//벌레떼
void fight10() {
    clear_text();
    Fight_UI();
    nemo();
    print_at_unicode(46, 15, L"   ﾟ●゜ 　 ｡｡   ");
    print_at_unicode(46, 16, L" ｡｡　　　　ﾟ●゜ ");
    print_at_unicode(46, 17, L"ﾟ●゜ 　         ");
    print_at_unicode(46, 18, L"　　　 ｡｡        ");
    print_at_unicode(46, 19, L"　　　ﾟ●゜      ");
    print_at_unicode(46, 20, L" ｡｡              ");
    print_at_unicode(46, 21, L"ﾟ●゜ 　　 ｡｡    ");
    print_at_unicode(46, 22, L"　　　　　ﾟ●゜  ");
    print_at_unicode(46, 23, L"                 ");
    print_at_unicode(46, 24, L"　ﾟ●゜   ｡｡     ");
    print_at_unicode(46, 25, L"         ﾟ●゜   ");
    print_at_unicode(46, 26, L"　 ｡｡            ");
    print_at_unicode(46, 27, L"　ﾟ●゜          ");
    print_at_unicode(46, 28, L"                 ");
    print_at_unicode(46, 29, L"         ﾟ●゜   ");
    print_at_unicode(46, 30, L"ﾟ●              ");

    print_slow_at(15, 35, "벌레떼가 나타났다 !!!!!! 으악!!!!!");

    while (totalHealth > 0 && total_anemyHealth > 0) {
        print_slow_at(15, 45, "벌레떼가 저멀리에 있다...!");
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        int success = fight_start(10);
        if (success == 1) {
            return;
        }

        if (ifGuard != 1 && monster_turn % 2 == 1) {
            print_slow_at(15, 45, "벌레떼는 다가왔다 !!!!!!!!!!!!!!!!!!!!");
            Sleep(1000);
            print_at(15, 45, "                                                           ");
            move_cursor(15, 45);
            int replace[] = { anemyDamage };
            print_slow3("오지마세요제발요제발요제발ㅇ %의 피해를 입었다아아아아", 30, replace, 1);
            Sleep(1000);
            print_at(15, 45, "                                                                  ");
            Health(-anemyDamage);
            status_clear();
            status();
            Sleep(1000);
        }
        else {
            print_slow_at(15, 45, "벌레떼는 다가오기를 준비한다...!!!!!!!!!!!!");
            Sleep(1000);
            print_at(15, 45, "                                                    ");
        }
        ifGuard = 0;
        monster_turn++;
    }
    if (totalHealth <= 0) {
        print_slow_at(15, 45, "살아있고 싶지 않아...\n");
        return;
    }
    else if (total_anemyHealth <= 0) {
        print_slow_at(15, 45, "정신없이 에프킬라를 마구마구 뿌렸더니 벌레떼는 사라졌다");
        Sleep(1000);
        print_at(15, 45, "                                                              ");
        print_slow_at2(15, 45, "\"정말 다행이야... 다시는 보지않길\"", 50);
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        print_slow_at(15, 45, "에프킬라를 여러통 쓰느라 돈이 나갔다... 내 40G...");
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        Gold(-40);
        status_clear();
        status();
        Sleep(1000);
        print_slow_at(15, 45, "그래도 정신력이 강해져서 공격력이 15 올랐다...");
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        Strength(15);
        status_clear();
        status();
        Sleep(1000);
        return;
    }
    return;
}
//무기
//황금검
void weapons1(int* totalStrength, int* totalHealth) {
    print_slow_at(3, 40,"@ 반짝반짝 빛나는 검이다\n");
    print_slow_at(5, 42, " -> 공격력 +10");

    *totalStrength += 10;
}
//언더아머
void weapons2(int* totalStrength, int* totalHealth) {
    print_slow_at(3, 40, "@ 3대 1000미만 착용 금지. -김민준-\n");
    print_slow_at(5, 42, " -> 체력 + 20");

    *totalHealth += 20;
}
//애플비전프로
void weapons3(int* totalStrength, int* totalHealth) {
    print_slow_at(3, 40, "@ 애플에서 만든 완전비싼거, 적 파라미터 가동기능");
    print_slow_at(5, 42, " -> 공격력 + 50, 체력 - 15");
    *totalStrength += 50;
    *totalHealth -= 15;
}
//휠리스
void weapons4(int* totalStrength, int* totalHealth) {
    print_slow_at(3, 40, "@ 이거 타고다니면 재미있음 진짜로");
    print_slow_at(5, 42, " -> 공격력 + 10, 체력 + 20");

    *totalHealth += 20;
    *totalStrength += 10;

}
//저주받은검
void weapons5(int* totalStrength, int* totalHealth) {
    print_slow_at(3, 40, "@ 이름에 편견 가져야죠 암");
    print_slow_at(5, 42, " -> 공격력 - 10, 체력 - 30");

    *totalHealth -= 30;
    *totalStrength -= 10;
}
//신비한갑옷
void weapons6(int* totalStrength, int* totalHealth) {
    print_slow_at(3, 40, "@ 시스루 나시와 바지 세트");
    print_slow_at(5, 42, " -> 공격력 +10, 체력 + 5");

    *totalHealth += 5;
    *totalStrength += 10;

}
//활력의귀걸이
void weapons7(int* totalStrength, int* totalHealth) {
    print_slow_at(3, 40, "@ 자라에서 파는 20cm 왕 귀걸이");
    print_slow_at(5, 42, " -> 공격력 + 10, 체력 + 10");

    *totalHealth += 10;
    *totalStrength += 10;
}
//24과잠
void weapons8(int* totalStrength, int* totalHealth) {
    print_slow_at(3, 40, "@ 대체 언제 만드냐고요? 저도 몰라요");
    print_slow_at(5, 42, " -> 공격력 + 5, 체력 + 10");

    *totalHealth += 10;
    *totalStrength += 5;
}
//나팔바지
void weapons9(int* totalStrength, int* totalHealth) {
    print_slow_at(3, 40, "@ 박진영이 입던 거다. 초레어희귀템. 따뜻하다");
    print_slow_at(5, 42, " -> 공격력 + 8");

    *totalStrength += 8;
}
//보급형강인함의반지
void weapons10(int* totalStrength, int* totalHealth) {
    print_slow_at(3, 40, "@ 전사라면 누구나 하나씩은 가지고 있는 반지\n");
    print_slow_at(5, 42, " -> 공격력 + 5, 체력 + 10");

    *totalHealth += 10;
    *totalStrength += 5;
}
//누군가의커플링
void weapons11(int* totalStrength, int* totalHealth) {
    print_slow_at(3, 40, "@ 눈물자국이 묻어있는것만 같다...\n");
    print_slow_at(5, 42, " -> 공격력 + 30, 체력 - 20");

    *totalStrength += 30;
    *totalHealth -= 20;
}
//본크러셔오함마
void weapons12(int* totalStrength, int* totalHealth) {
    print_slow_at(3, 40, "@ 뼈를 가루내버릴수 있다...\n");
    print_slow_at(5, 42, " -> 공격력 + 30, 체력 - 10");

    *totalStrength += 30;
    *totalHealth -= 10;
}
//저주받은목걸이
void weapons13(int* totalStrength, int* totalHealth) {
    print_slow_at(3, 40, "@ 편견을 가지지 말 것.");
    print_slow_at(5, 42, " -> 공격력 + 20, 체력 + 20 ");

    *totalStrength += 20;
    *totalHealth += 20;
}
//수뭉이키링
void weapons14(int* totalStrength, int* totalHealth) {
    print_slow_at(3, 40, "@ 샹명대애 어셔오새오 ");
    print_slow_at(5, 42, " -> 공격력 + 20 , 체력 + 20 ");

    *totalStrength += 20;
    *totalHealth += 20;
}

//장비 배열
Weapon weapons[14] = {
    {"황금검", weapons1,100},
    {"언더아머",weapons2, 150 },
    {"애플비전프로",weapons3,400 },
    {"휠리스",weapons4,300 },
    {"저주받은검",weapons5, 500 },
    {"신비한갑옷",weapons6, 300 },
    {"활력의귀걸이",weapons7, 200 },
    {"24과잠",weapons8, 50 },
    {"나팔바지",weapons9, 800 },
    {"보급형강인함의반지",weapons10, 150 },
    {"누군가의커플링",weapons11, 300 },
    {"본크러셔오함마",weapons12, 350 },
    {"저주받은목걸이",weapons13, 20 },
    {"수뭉이키링",weapons14, 800 },
};
//특수적
//정재웅
void specials1() {
    clear_text();
    Fight_UI2();
    print_at(46, 24, " ___________");
    print_at(46, 25, "|          |");
    print_at(46, 26, "|   ^오^   |");
    print_at(46, 27, "|          |");
    print_at(46, 28, "|  개재웅  |");
    print_at(46, 29, "|__________|");
    print_slow_at(15, 45, "당신은 길을 걷다 목마르고 돈이 없는 개재웅을 마주쳤다.");
    Sleep(1000);
    print_at(15, 45, "                                                             ");
    print_slow_at(15, 45, "이걸 어떻게 해야할까");
    Sleep(1000);
    print_at(15, 45, "                                                         ");
    Sleep(1000);

    int choice;
    do {
        print_slow_at(15, 45, "무엇을 할까 ? ");
        Sleep(1000);
        print_at(15, 45, "                                                ");
        move_cursor(15, 47);
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            move_cursor(15, 45);
            print_slow_at(15, 45, "공격하기를 선택하자, 정재웅이 돈을 훔쳐갔다. 10골드를 잃었다.");
            Sleep(1000);
            print_at(15, 45, "                                                                   ");
            Gold(-10);
            status_clear();
            status();
            break;
        case 2:
            move_cursor(15, 45);
            print_slow_at(15, 45, "방어하기를 선택하자, 정재웅이 돈을 훔쳐갔다. 10골드를 잃었다.");
            Sleep(1000);
            print_at(15, 45, "                                                                    ");
            Gold(-10);
            status_clear();
            status();
            break;
        case 3:
            move_cursor(15, 45);
            print_slow_at2(15, 45, "\"안녕하세요?\"", 50);
            Sleep(1000);
            print_at(15, 45, "                                                ");
            print_slow_at(15, 45, "말을 걸자마자, 정재웅이 돈을 훔쳐갔다. 10골드를 잃었다.");
            Sleep(1000);
            print_at(15, 45, "                                                              ");
            Gold(-10);
            status_clear();
            status();
            print_slow_at2(15, 45, "\"뭐야 저녀석..?\"", 50);
            Sleep(1000);
            print_at(15, 45, "                                                ");
            break;
        default:
            move_cursor(15, 45);
            print_slow_at(15, 45, "저항을 안 해서 정재웅이 돈을 훔쳐갔다. 10골드를 잃었다.");
            Sleep(1000);
            print_at(15, 45, "                                                                  ");
            Gold(-10);
            status_clear();
            status();
            break;
        }
    } while ((choice < 1) || (choice > 3));
}
//김민준
void specials2() {
    clear_text();
    Fight_UI();
    print_at(46, 24, "_________");
    print_at(46, 25, "|   O   |");
    print_at(46, 26, "|  /|\\  |");
    print_at(46, 27, "| / | \\ |");
    print_at(46, 28, "|  / \\  |");
    print_at(46, 29, "| /   \\ |");
    print_at(46, 30, "---------");
    print_slow_at(15, 45, "어디서 콜록거리는 소리가 나는거 같은데...");
    Sleep(1000);
    print_at(15, 45, "                                                            ");
    print_slow_at(15, 45, "혹시 특수적인가?? 어서 무찌르자!");
    Sleep(1000);
    print_at(15, 45, "                                                ");
    while (1) {
        int choice;
        print_slow_at(15, 45, "무엇을 할까 ? ");
        Sleep(1000);
        print_at(15, 45, "                                                ");
        move_cursor(15, 46);
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            print_slow_at(15, 45, "당신은 매우허약한김민준과 전투를 시작..");
            Sleep(1000);
            print_at(15, 45, "                                                  ");
            print_slow_at(15, 45, "...하려고 했는데....?");
            Sleep(1000);
            print_at(15, 45, "                                                  ");
            print_slow_at(15, 45, "매우허약한김민준은 이미 쓰러져있다... 이딴게 특수적?");
            Sleep(1000);
            print_at(15, 45, "                                                                 ");

            break;
        case 2:
            move_cursor(15, 45);
            print_slow_at(15, 45, "방어하기를 선택했다.");
            Sleep(1000);
            print_at(15, 45, "                                                ");
            print_slow_at(15, 45, "....틱....(대충엄청약하게공격하는소리)");
            Sleep(1000);
            print_at(15, 45, "                                                ");
            print_slow_at2(15, 45, "\"음? 맞은건가?\"", 50);
            Sleep(1000);
            print_at(15, 45, "                                                ");

            break;

        case 3:
            move_cursor(15, 45);
            print_slow_at(15, 45, "도망가기 전에 한번 말이라도 걸어보자");
            Sleep(1000);
            print_at(15, 45, "                                                ");
            print_slow_at2(15, 45, "\"저기...\"", 50);
            Sleep(1000);
            print_at(15, 45, "                                                ");
            print_slow_at2(15, 45, "매우허약한김민준: ㅅ..사..살려주세요!!!! 갖고있는 거 다 드릴게요ㅠㅠㅠㅠ", 45);
            Sleep(1000);
            print_at(15, 45, "                                                                                      ");
            print_slow_at2(15, 45, "\"뭐지 저 녀석..? 나에게 100골드를 주고 자기가 도망갔다...\"", 50);
            Sleep(1000);
            print_at(15, 45, "                                                                              ");
            Gold(100);
            status_clear();
            status();
            return;

        default:
            print_slow_at(15, 45, "아무것도하기싫다");
            Sleep(1000);
            print_at(15, 45, "                              ");
            break;

        }
    }
}



//이경민
void specials3() {
    clear_text();
    Fight_UI2();
    int choice;
    print_at(46, 24, " ____________________");
    print_at(46, 25, "|    ________        |");
    print_at(46, 26, "|   /        \\___    |");
    print_at(46, 27, "|  /   ｀Д´    \\   |");
    print_at(46, 28, "|  |              |  |");
    print_at(46, 29, "|  \\______________/  |");
    print_at(46, 30, "|____________________|");
    print_slow_at(15, 45, "당신은 길을 걷다 화가 나있는 이경민과 마주쳤다. ");
    Sleep(1000);
    print_at(15, 45, "                                                     ");
    print_slow_at(15, 45, "전투를 피할 수 없을 것 같다...");
    Sleep(1000);
    print_at(15, 45, "                                                      ");
    print_slow_at(15, 45, "연속으로 공격에 성공하면 이길 수 있을 것 같다.");
    Sleep(1000);
    print_at(15, 45, "                                                      ");
    print_slow_at(15, 48, "");
    Sleep(1000);
    scanf("%d", &choice);
    print_slow_at(15, 45, "무엇을 할까 ? ");
    Sleep(1000);
    print_at(15, 45, "                                                ");
    if (choice == 1) {
        exgameLoop();
    }
    else if (choice == 2) {
        print_slow_at(15, 45, "그럴 수는 없다. 공격하자. ");
        Sleep(1000);
        print_at(15, 45, "                                                      ");
        exgameLoop();
        return;

    }
    else if (choice == 3) {
        print_slow_at(15, 45, "그럴 수는 없다. 공격하자. ");
        Sleep(1000);
        print_at(15, 45, "                                                      ");
        exgameLoop();
        return;
    }
    else {
        print_slow_at(15, 45, "그럴 수는 없다. 공격하자. ");
        Sleep(1000);
        print_at(15, 45, "                                                      ");
        exgameLoop();
        return;
    }
}
//박조화
void specials4() {
    clear_text();
    Fight_UI();
    print_at_unicode(46, 24, L" ∩――――∩");
    print_at_unicode(46, 25, L" ||  ∧ ﾍ  || ");
    print_at_unicode(46, 26, L" || (* ´ ｰ`) ZZzz");
    print_at_unicode(46, 27, L" |ﾉ^⌒⌒づ`￣  ＼");
    print_at_unicode(46, 28, L" (　ノ　　⌒ ヽ ＼");
    print_at_unicode(46, 29, L"  ＼　　||￣￣￣￣￣||");
    print_at_unicode(46, 30, L"　  ＼,ﾉ||―――――||");

    print_slow_at(15, 45, "당신은 길을 걷다 자고있는 나는조화를 마주쳤다...");
    Sleep(1000);
    print_slow_at(15, 45, "                                                                      ");
    print_slow_at(15, 45, "음... 말을 걸어볼까 ? 공격대신 말을 걸어보자");
    Sleep(1000);
    print_slow_at(15, 45, "                                                                      ");
    while (1) {
        int choice;
        print_slow_at(15, 45, "무엇을 할까 ? ");
        Sleep(1000);
        print_at(15, 45, "                                                ");
        scanf("%d", &choice);
        move_cursor(15, 46);
        switch (choice) {
        case 1:
            print_slow_at(15, 45, "당신은 나는조화에게 대화를 건넸다 ");
            Sleep(1000);
            print_at(15, 45, "                                                  ");
            print_slow_at2(15, 45, "\"저기요 좀 지나갈게요...\"", 50);
            Sleep(1000);
            print_at(15, 45, "                                                 ");
            print_slow_at(15, 45, "나는 조화는 그냥 자고있다...");
            Sleep(1000);
            print_at(15, 45, "                                                 ");
            break;
        case 2:
            move_cursor(15, 45);
            print_slow("방어하기를 선택했다... 대체 무엇을 방어하려고 ? ");
            Sleep(1000);
            print_at(15, 45, "                                                  ");
            break;

        case 3:
            move_cursor(15, 45);
            print_slow("도망가기를 선택했다... 누구에게서 ?");
            Sleep(1000);
            print_at(15, 45, "                                                ");
            int run = rand() % 50;
            Sleep(1000);

            if (run < 30) {
                move_cursor(15, 45);
                print_slow("도망가기에 성공했다... 사실 그냥 뛰어넘었을 뿐이다");
                Sleep(1000);
                print_at(15, 45, "                                                 ");
                return;
            }

            else {
                move_cursor(15, 45);
                print_slow("도망치기에 실패했다... 다시 말을 한번 걸어볼까");
                Sleep(1000);
                print_at(15, 45, "                                                ");
                print_slow("애초에 왜 도망치려 하는 거지...");
                Sleep(1000);
                print_at(15, 45, "                                                ");
                break;
            }
        default:
            print_at(15, 45, "음... 뭐 가끔은 아무것도 안해도 괜찮을것 같아");
            Sleep(1000);
            print_at(15, 45, "                                                ");
            break;

        }
        print_slow_at(15, 45, "나는조화는 대꾸도 안하고 자고있다...");
        Sleep(1000);
        printf("                                                         ");

        status();

        if (totalHealth <= 50) {
            print_slow_at(15, 45, "갑자기 나는조화가 벌떡 일어났다 !!!!\n");
            Sleep(1000);
            print_at(15, 45, "                                                       ");
            print_slow_at2(15, 45, "\"아 깜짝이야\"", 50);
            Sleep(1000);
            print_at(15, 45, "                                                       ");
            print_slow_at2(15, 45, "나는조화 : 너 조심해.\n", 50);
            Sleep(1000);
            print_at(15, 45, "                                                       ");
            print_slow_at(15, 45, "\"네????\"\n");
            Sleep(1000);
            print_at(15, 45, "                                                       ");
            print_slow_at(15, 45, "그 말을 끝으로 나는조화는 사라졌다...\n");
            Sleep(1000);
            print_at(15, 45, "                                                       ");
            print_slow_at(15, 45, "당신의 체력이 모두 회복되었습니다...흐응 ?\n");
            Sleep(1000);
            print_at(15, 45, "                                                       ");
            Health(totalHealth);
            status_clear();
            status();
            status();
            Sleep(1000);
            return;
        }
        else {
            print_slow_at(15, 45, "나는 조화를 한번 건드려 봤다");
            Sleep(1000);
            print_at(15, 45, "                                                              ");
            print_slow_at(15, 45, "가만히 자고있다...");
            Sleep(1000);
            print_at(15, 45, "                                                           ");
            print_slow_at(15, 45, "그냥 무시하고 지나가는게 나을것 같다...");
            Sleep(1000);
            print_at(15, 45, "                                                           ");
            print_slow_at(15, 45, "갑자기 벌에 쏘였다. 아야 ! 뭐지 진짜 ???");
            Sleep(1000);
            print_at(15, 45, "                                                             ");
            print_slow_at(15, 45, "나는조화를 쳐다봤지만 여전히 자고 있을 뿐 이었다...");
            Sleep(1000);
            print_at(15, 45, "                                                             ");
            Health(-10);
            status_clear();
            status();
            break;
        }
    }
}
//동앗줄의길태숙
void specials5() {
    print_at(15, 20, "동앗줄의 길태숙이 나타났다. 도망쳐!");
    Sleep(1000);
    clear_text();
    printf("                                                 /===-_---~~~~~~~~~------____\n");
    printf("                                                |===-~___                _,-'\n");
    printf("                 -==\\\\                         `//~\\\\   ~~~~`---.___.-~~\n");
    printf("             ______-==|                         | |  \\\\           _-~`\n");
    printf("       __--~~~  ,-/-==\\\\                        | |   `\\        ,'\n");
    printf("    _-~       /'    |  \\\\                      / /      \\      /\n");
    printf("  .'        /       |   \\\\                   /' /        \\   /'\n");
    printf(" /  ____  /         |    `\\\\.__/-~~ ~ \\ _ _/'  /          \\/'\n");
    printf("/-'~    ~~~~~---__  |     ~-/~         ( )   /'        _--~`\n");
    printf("                  \\_|      /        _)   ;  ),   __--~~\n");
    printf("                    '~~--_/      _-~/-  / \\   '-~ \\\n");
    printf("                   {\\__--_/}    / \\\\_&gt;- )&lt;__\\      \\\n");
    printf("                   /'   (_/  _-~  | |__&gt;--&lt;__|      |\n");
    printf("                  |0  0 _/) )-~     | |__&gt;--&lt;__|     |\n");
    printf("                  / /~ ,_/       / /__&gt;---&lt;__/      |\n");
    printf("                 o o _//        /-~_&gt;---&lt;__-~      /\n");
    printf("                 (^(~          /~_&gt;---&lt;__-      _-~\n");
    printf("                              /__&gt;--&lt;__/     _-~\n");
    printf("                             |__&gt;--&lt;__|     /                  .----_\n");
    printf("                             |__&gt;--&lt;__|    |                 /' _---_~\\ \n");
    printf("                             |__&gt;--&lt;__|    |               /'  /     ~\\`\\\n");
    printf("                              \\__&gt;--&lt;__\\    \\            /'  //        ||\n");
    printf("                               ~-__&gt;--&lt;_~-_  ~--____---~' _/'/        /'\n");
    printf("                                  ~-_~&gt;--&lt;_/-__       __-~ _/\n");
    printf("                                     ~~-'_/_/ /~~~~~~~__--~\n");
    printf("                                            ~~~~~~~~~~\n");

    Sleep(300); // 0.5초 대기
    clear_text();

    printf("                                                 /===-_---~~~~~~~~~------____\n");
    printf("                                                |===-~___                _,-'\n");
    printf("                 -==\\\\                         `//~\\\\   ~~~~`---.___.-~~\n");
    printf("             ______-==|                         | |  \\\\           _-~`\n");
    printf("       __--~~~  ,-/-==\\\\                        | |   `\\        ,'\n");
    printf("    _-~       /'    |  \\\\                      / /      \\      /\n");
    printf("  .'        /       |   \\\\                   /' /        \\   /'\n");
    printf(" /  ____  /         |    `\\\\.__/-~~ ~ \\ _ _/'  /          \\/'\n");
    printf("/-'~    ~~~~~---__  |     ~-/~         ( )   /'        _--~`\n");
    printf("                  \\_|      /        _)   ;  ),   __--~~\n");
    printf("                    '~~--_/      _-~/-  / \\   '-~ \\\n");
    printf("                   {\\__--_/}    / \\\\_&gt;- )&lt;__\\      \\\n");
    printf("                   /'   (_/  _-~  | |__&gt;--&lt;__|      |\n");
    printf("                  |0  0 _/) )-~     | |__&gt;--&lt;__|     |\n");
    printf("                  / /~ ,_/       / /__&gt;---&lt;__/      |\n");
    printf("                 o o _//        /-~_&gt;---&lt;__-~      /\n");
    printf("                 (^(~          /~_&gt;---&lt;__-      _-~\n");
    printf("                ,/|           /__&gt;--&lt;__/     _-~\n");
    printf("                             |__&gt;--&lt;__|     /                  .----_\n");
    printf("                             |__&gt;--&lt;__|    |                 /' _---_~\\ \n");
    printf("                             |__&gt;--&lt;__|    |               /'  /     ~\\`\\\n");
    printf("                              \\__&gt;--&lt;__\\    \\            /'  //        ||\n");
    printf("                               ~-__&gt;--&lt;_~-_  ~--____---~' _/'/        /'\n");
    printf("                                  ~-_~&gt;--&lt;_/-__       __-~ _/\n");
    printf("                                     ~~-'_/_/ /~~~~~~~__--~\n");
    printf("                                            ~~~~~~~~~~\n");
    Sleep(300); // 0.5초 대기
    clear_text();

    printf("                                                 /===-_---~~~~~~~~~------____\n");
    printf("                                                |===-~___                _,-'\n");
    printf("                 -==\\\\                         `//~\\\\   ~~~~`---.___.-~~\n");
    printf("             ______-==|                         | |  \\\\           _-~`\n");
    printf("       __--~~~  ,-/-==\\\\                        | |   `\\        ,'\n");
    printf("    _-~       /'    |  \\\\                      / /      \\      /\n");
    printf("  .'        /       |   \\\\                   /' /        \\   /'\n");
    printf(" /  ____  /         |    `\\\\.__/-~~ ~ \\ _ _/'  /          \\/'\n");
    printf("/-'~    ~~~~~---__  |     ~-/~         ( )   /'        _--~`\n");
    printf("                  \\_|      /        _)   ;  ),   __--~~\n");
    printf("                    '~~--_/      _-~/-  / \\   '-~ \\\n");
    printf("                   {\\__--_/}    / \\\\_&gt;- )&lt;__\\      \\\n");
    printf("                   /'   (_/  _-~  | |__&gt;--&lt;__|      |\n");
    printf("                  |0  0 _/) )-~     | |__&gt;--&lt;__|     |\n");
    printf("                  / /~ ,_/       / /__&gt;---&lt;__/      |\n");
    printf("                 o o _//        /-~_&gt;---&lt;__-~      /\n");
    printf("                 (^(~          /~_&gt;---&lt;__-      _-~\n");
    printf("                ,/|           /__&gt;--&lt;__/     _-~\n");
    printf("             ,//('(          |__&gt;--&lt;__|     /                  .----_\n");
    printf("                             |__&gt;--&lt;__|    |                 /' _---_~\\ \n");
    printf("                             |__&gt;--&lt;__|    |               /'  /     ~\\`\\\n");
    printf("                              \\__&gt;--&lt;__\\    \\            /'  //        ||\n");
    printf("                               ~-__&gt;--&lt;_~-_  ~--____---~' _/'/        /'\n");
    printf("                                  ~-_~&gt;--&lt;_/-__       __-~ _/\n");
    printf("                                     ~~-'_/_/ /~~~~~~~__--~\n");
    printf("                                            ~~~~~~~~~~\n");
    Sleep(300); // 0.5초 대기
    clear_text();

    printf("                                                 /===-_---~~~~~~~~~------____\n");
    printf("                                                |===-~___                _,-'\n");
    printf("                 -==\\\\                         `//~\\\\   ~~~~`---.___.-~~\n");
    printf("             ______-==|                         | |  \\\\           _-~`\n");
    printf("       __--~~~  ,-/-==\\\\                        | |   `\\        ,'\n");
    printf("    _-~       /'    |  \\\\                      / /      \\      /\n");
    printf("  .'        /       |   \\\\                   /' /        \\   /'\n");
    printf(" /  ____  /         |    `\\\\.__/-~~ ~ \\ _ _/'  /          \\/'\n");
    printf("/-'~    ~~~~~---__  |     ~-/~         ( )   /'        _--~`\n");
    printf("                  \\_|      /        _)   ;  ),   __--~~\n");
    printf("                    '~~--_/      _-~/-  / \\   '-~ \\\n");
    printf("                   {\\__--_/}    / \\\\_&gt;- )&lt;__\\      \\\n");
    printf("                   /'   (_/  _-~  | |__&gt;--&lt;__|      |\n");
    printf("                  |0  0 _/) )-~     | |__&gt;--&lt;__|     |\n");
    printf("                  / /~ ,_/       / /__&gt;---&lt;__/      |\n");
    printf("                 o o _//        /-~_&gt;---&lt;__-~      /\n");
    printf("                 (^(~          /~_&gt;---&lt;__-      _-~\n");
    printf("                ,/|           /__&gt;--&lt;__/     _-~\n");
    printf("             ,//('(          |__&gt;--&lt;__|     /                  .----_\n");
    printf("            ( ( '))          |__&gt;--&lt;__|    |                 /' _---_~\\ \n");
    printf("                             |__&gt;--&lt;__|    |               /'  /     ~\\`\\\n");
    printf("                              \\__&gt;--&lt;__\\    \\            /'  //        ||\n");
    printf("                               ~-__&gt;--&lt;_~-_  ~--____---~' _/'/        /'\n");
    printf("                                  ~-_~&gt;--&lt;_/-__       __-~ _/\n");
    printf("                                     ~~-'_/_/ /~~~~~~~__--~\n");
    printf("                                            ~~~~~~~~~~\n");
    Sleep(300); // 0.5초 대기
    clear_text();

    printf("                                                 /===-_---~~~~~~~~~------____\n");
    printf("                                                |===-~___                _,-'\n");
    printf("                 -==\\\\                         `//~\\\\   ~~~~`---.___.-~~\n");
    printf("             ______-==|                         | |  \\\\           _-~`\n");
    printf("       __--~~~  ,-/-==\\\\                        | |   `\\        ,'\n");
    printf("    _-~       /'    |  \\\\                      / /      \\      /\n");
    printf("  .'        /       |   \\\\                   /' /        \\   /'\n");
    printf(" /  ____  /         |    `\\\\.__/-~~ ~ \\ _ _/'  /          \\/'\n");
    printf("/-'~    ~~~~~---__  |     ~-/~         ( )   /'        _--~`\n");
    printf("                  \\_|      /        _)   ;  ),   __--~~\n");
    printf("                    '~~--_/      _-~/-  / \\   '-~ \\\n");
    printf("                   {\\__--_/}    / \\\\_&gt;- )&lt;__\\      \\\n");
    printf("                   /'   (_/  _-~  | |__&gt;--&lt;__|      |\n");
    printf("                  |0  0 _/) )-~     | |__&gt;--&lt;__|     |\n");
    printf("                  / /~ ,_/       / /__&gt;---&lt;__/      |\n");
    printf("                 o o _//        /-~_&gt;---&lt;__-~      /\n");
    printf("                 (^(~          /~_&gt;---&lt;__-      _-~\n");
    printf("                ,/|           /__&gt;--&lt;__/     _-~\n");
    printf("             ,//('(          |__&gt;--&lt;__|     /                  .----_\n");
    printf("            ( ( '))          |__&gt;--&lt;__|    |                 /' _---_~\\ \n");
    printf("         `-)) )) (           |__&gt;--&lt;__|    |               /'  /     ~\\`\\\n");
    printf("                              \\__&gt;--&lt;__\\    \\            /'  //        ||\n");
    printf("                               ~-__&gt;--&lt;_~-_  ~--____---~' _/'/        /'\n");
    printf("                                  ~-_~&gt;--&lt;_/-__       __-~ _/\n");
    printf("                                     ~~-'_/_/ /~~~~~~~__--~\n");
    printf("                                            ~~~~~~~~~~\n");
    Sleep(300); // 0.5초 대기
    clear_text();

    printf("                                                 /===-_---~~~~~~~~~------____\n");
    printf("                                                |===-~___                _,-'\n");
    printf("                 -==\\\\                         `//~\\\\   ~~~~`---.___.-~~\n");
    printf("             ______-==|                         | |  \\\\           _-~`\n");
    printf("       __--~~~  ,-/-==\\\\                        | |   `\\        ,'\n");
    printf("    _-~       /'    |  \\\\                      / /      \\      /\n");
    printf("  .'        /       |   \\\\                   /' /        \\   /'\n");
    printf(" /  ____  /         |    `\\\\.__/-~~ ~ \\ _ _/'  /          \\/'\n");
    printf("/-'~    ~~~~~---__  |     ~-/~         ( )   /'        _--~`\n");
    printf("                  \\_|      /        _)   ;  ),   __--~~\n");
    printf("                    '~~--_/      _-~/-  / \\   '-~ \\\n");
    printf("                   {\\__--_/}    / \\\\_&gt;- )&lt;__\\      \\\n");
    printf("                   /'   (_/  _-~  | |__&gt;--&lt;__|      |\n");
    printf("                  |0  0 _/) )-~     | |__&gt;--&lt;__|     |\n");
    printf("                  / /~ ,_/       / /__&gt;---&lt;__/      |\n");
    printf("                 o o _//        /-~_&gt;---&lt;__-~      /\n");
    printf("                 (^(~          /~_&gt;---&lt;__-      _-~\n");
    printf("                ,/|           /__&gt;--&lt;__/     _-~\n");
    printf("             ,//('(          |__&gt;--&lt;__|     /                  .----_\n");
    printf("            ( ( '))          |__&gt;--&lt;__|    |                 /' _---_~\\ \n");
    printf("         `-)) )) (           |__&gt;--&lt;__|    |               /'  /     ~\\`\\\n");
    printf("        ,/,'//( (             \\__&gt;--&lt;__\\    \\            /'  //        ||\n");
    printf("                               ~-__&gt;--&lt;_~-_  ~--____---~' _/'/        /'\n");
    printf("                                  ~-_~&gt;--&lt;_/-__       __-~ _/\n");
    printf("                                     ~~-'_/_/ /~~~~~~~__--~\n");
    printf("                                            ~~~~~~~~~~\n");
    Sleep(300); // 0.5초 대기
    clear_text();

    printf("                                                 /===-_---~~~~~~~~~------____\n");
    printf("                                                |===-~___                _,-'\n");
    printf("                 -==\\\\                         `//~\\\\   ~~~~`---.___.-~~\n");
    printf("             ______-==|                         | |  \\\\           _-~`\n");
    printf("       __--~~~  ,-/-==\\\\                        | |   `\\        ,'\n");
    printf("    _-~       /'    |  \\\\                      / /      \\      /\n");
    printf("  .'        /       |   \\\\                   /' /        \\   /'\n");
    printf(" /  ____  /         |    `\\\\.__/-~~ ~ \\ _ _/'  /          \\/'\n");
    printf("/-'~    ~~~~~---__  |     ~-/~         ( )   /'        _--~`\n");
    printf("                  \\_|      /        _)   ;  ),   __--~~\n");
    printf("                    '~~--_/      _-~/-  / \\   '-~ \\\n");
    printf("                   {\\__--_/}    / \\\\_&gt;- )&lt;__\\      \\\n");
    printf("                   /'   (_/  _-~  | |__&gt;--&lt;__|      |\n");
    printf("                  |0  0 _/) )-~     | |__&gt;--&lt;__|     |\n");
    printf("                  / /~ ,_/       / /__&gt;---&lt;__/      |\n");
    printf("                 o o _//        /-~_&gt;---&lt;__-~      /\n");
    printf("                 (^(~          /~_&gt;---&lt;__-      _-~\n");
    printf("                ,/|           /__&gt;--&lt;__/     _-~\n");
    printf("             ,//('(          |__&gt;--&lt;__|     /                  .----_\n");
    printf("            ( ( '))          |__&gt;--&lt;__|    |                 /' _---_~\\ \n");
    printf("         `-)) )) (           |__&gt;--&lt;__|    |               /'  /     ~\\`\\\n");
    printf("        ,/,'//( (             \\__&gt;--&lt;__\\    \\            /'  //        ||\n");
    printf("     ,( ( ((, ))               ~-__&gt;--&lt;_~-_  ~--____---~' _/'/        /'\n");
    printf("                                  ~-_~&gt;--&lt;_/-__       __-~ _/\n");
    printf("                                     ~~-'_/_/ /~~~~~~~__--~\n");
    printf("                                            ~~~~~~~~~~\n");
    Sleep(300); // 0.5초 대기
    clear_text();

    printf("                                                 /===-_---~~~~~~~~~------____\n");
    printf("                                                |===-~___                _,-'\n");
    printf("                 -==\\\\                         `//~\\\\   ~~~~`---.___.-~~\n");
    printf("             ______-==|                         | |  \\\\           _-~`\n");
    printf("       __--~~~  ,-/-==\\\\                        | |   `\\        ,'\n");
    printf("    _-~       /'    |  \\\\                      / /      \\      /\n");
    printf("  .'        /       |   \\\\                   /' /        \\   /'\n");
    printf(" /  ____  /         |    `\\\\.__/-~~ ~ \\ _ _/'  /          \\/'\n");
    printf("/-'~    ~~~~~---__  |     ~-/~         ( )   /'        _--~`\n");
    printf("                  \\_|      /        _)   ;  ),   __--~~\n");
    printf("                    '~~--_/      _-~/-  / \\   '-~ \\\n");
    printf("                   {\\__--_/}    / \\\\_&gt;- )&lt;__\\      \\\n");
    printf("                   /'   (_/  _-~  | |__&gt;--&lt;__|      |\n");
    printf("                  |0  0 _/) )-~     | |__&gt;--&lt;__|     |\n");
    printf("                  / /~ ,_/       / /__&gt;---&lt;__/      |\n");
    printf("                 o o _//        /-~_&gt;---&lt;__-~      /\n");
    printf("                 (^(~          /~_&gt;---&lt;__-      _-~\n");
    printf("                ,/|           /__&gt;--&lt;__/     _-~\n");
    printf("             ,//('(          |__&gt;--&lt;__|     /                  .----_\n");
    printf("            ( ( '))          |__&gt;--&lt;__|    |                 /' _---_~\\ \n");
    printf("         `-)) )) (           |__&gt;--&lt;__|    |               /'  /     ~\\`\\\n");
    printf("        ,/,'//( (             \\__&gt;--&lt;__\\    \\            /'  //        ||\n");
    printf("     ,( ( ((, ))               ~-__&gt;--&lt;_~-_  ~--____---~' _/'/        /'\n");
    printf("                                  ~-_~&gt;--&lt;_/-__       __-~ _/\n");
    printf("                                     ~~-'_/_/ /~~~~~~~__--~\n");
    printf("                                            ~~~~~~~~~~\n");
    Sleep(300); // 0.5초 대기
    clear_text();

    printf("                                                 /===-_---~~~~~~~~~------____\n");
    printf("                                                |===-~___                _,-'\n");
    printf("                 -==\\\\                         `//~\\\\   ~~~~`---.___.-~~\n");
    printf("             ______-==|                         | |  \\\\           _-~`\n");
    printf("       __--~~~  ,-/-==\\\\                        | |   `\\        ,'\n");
    printf("    _-~       /'    |  \\\\                      / /      \\      /\n");
    printf("  .'        /       |   \\\\                   /' /        \\   /'\n");
    printf(" /  ____  /         |    `\\\\.__/-~~ ~ \\ _ _/'  /          \\/'\n");
    printf("/-'~    ~~~~~---__  |     ~-/~         ( )   /'        _--~`\n");
    printf("                  \\_|      /        _)   ;  ),   __--~~\n");
    printf("                    '~~--_/      _-~/-  / \\   '-~ \\\n");
    printf("                   {\\__--_/}    / \\\\_&gt;- )&lt;__\\      \\\n");
    printf("                   /'   (_/  _-~  | |__&gt;--&lt;__|      |\n");
    printf("                  |0  0 _/) )-~     | |__&gt;--&lt;__|     |\n");
    printf("                  / /~ ,_/       / /__&gt;---&lt;__/      |\n");
    printf("                 o o _//        /-~_&gt;---&lt;__-~      /\n");
    printf("                 (^(~          /~_&gt;---&lt;__-      _-~\n");
    printf("                ,/|           /__&gt;--&lt;__/     _-~\n");
    printf("             ,//('(          |__&gt;--&lt;__|     /                  .----_\n");
    printf("            ( ( '))          |__&gt;--&lt;__|    |                 /' _---_~\\ \n");
    printf("         `-)) )) (           |__&gt;--&lt;__|    |               /'  /     ~\\`\\\n");
    printf("        ,/,'//( (             \\__&gt;--&lt;__\\    \\            /'  //        ||\n");
    printf("     ,( ( ((, ))               ~-__&gt;--&lt;_~-_  ~--____---~' _/'/        /'\n");
    printf("    `~/  )` ) ,/|                 ~-_~&gt;--&lt;_/-__       __-~ _/\n");
    printf("                                     ~~-'_/_/ /~~~~~~~__--~\n");
    printf("                                            ~~~~~~~~~~\n");
    Sleep(300); // 0.5초 대기
    clear_text();

    printf("                                                 /===-_---~~~~~~~~~------____\n");
    printf("                                                |===-~___                _,-'\n");
    printf("                 -==\\\\                         `//~\\\\   ~~~~`---.___.-~~\n");
    printf("             ______-==|                         | |  \\\\           _-~`\n");
    printf("       __--~~~  ,-/-==\\\\                        | |   `\\        ,'\n");
    printf("    _-~       /'    |  \\\\                      / /      \\      /\n");
    printf("  .'        /       |   \\\\                   /' /        \\   /'\n");
    printf(" /  ____  /         |    `\\\\.__/-~~ ~ \\ _ _/'  /          \\/'\n");
    printf("/-'~    ~~~~~---__  |     ~-/~         ( )   /'        _--~`\n");
    printf("                  \\_|      /        _)   ;  ),   __--~~\n");
    printf("                    '~~--_/      _-~/-  / \\   '-~ \\\n");
    printf("                   {\\__--_/}    / \\\\_&gt;- )&lt;__\\      \\\n");
    printf("                   /'   (_/  _-~  | |__&gt;--&lt;__|      |\n");
    printf("                  |0  0 _/) )-~     | |__&gt;--&lt;__|     |\n");
    printf("                  / /~ ,_/       / /__&gt;---&lt;__/      |\n");
    printf("                 o o _//        /-~_&gt;---&lt;__-~      /\n");
    printf("                 (^(~          /~_&gt;---&lt;__-      _-~\n");
    printf("                ,/|           /__&gt;--&lt;__/     _-~\n");
    printf("             ,//('(          |__&gt;--&lt;__|     /                  .----_\n");
    printf("            ( ( '))          |__&gt;--&lt;__|    |                 /' _---_~\\ \n");
    printf("         `-)) )) (           |__&gt;--&lt;__|    |               /'  /     ~\\`\\\n");
    printf("        ,/,'//( (             \\__&gt;--&lt;__\\    \\            /'  //        ||\n");
    printf("     ,( ( ((, ))               ~-__&gt;--&lt;_~-_  ~--____---~' _/'/        /'\n");
    printf("    `~/  )` ) ,/|                 ~-_~&gt;--&lt;_/-__       __-~ _/\n");
    printf("   ._-~//( )/ )) `                   ~~-'_/_/ /~~~~~~~__--~\n");
    printf("                                            ~~~~~~~~~~\n");
    Sleep(300); // 0.5초 대기
    clear_text();

    printf("                                                 /===-_---~~~~~~~~~------____\n");
    printf("                                                |===-~___                _,-'\n");
    printf("                 -==\\\\                         `//~\\\\   ~~~~`---.___.-~~\n");
    printf("             ______-==|                         | |  \\\\           _-~`\n");
    printf("       __--~~~  ,-/-==\\\\                        | |   `\\        ,'\n");
    printf("    _-~       /'    |  \\\\                      / /      \\      /\n");
    printf("  .'        /       |   \\\\                   /' /        \\   /'\n");
    printf(" /  ____  /         |    `\\\\.__/-~~ ~ \\ _ _/'  /          \\/'\n");
    printf("/-'~    ~~~~~---__  |     ~-/~         ( )   /'        _--~`\n");
    printf("                  \\_|      /        _)   ;  ),   __--~~\n");
    printf("                    '~~--_/      _-~/-  / \\   '-~ \\\n");
    printf("                   {\\__--_/}    / \\\\_&gt;- )&lt;__\\      \\\n");
    printf("                   /'   (_/  _-~  | |__&gt;--&lt;__|      |\n");
    printf("                  |0  0 _/) )-~     | |__&gt;--&lt;__|     |\n");
    printf("                  / /~ ,_/       / /__&gt;---&lt;__/      |\n");
    printf("                 o o _//        /-~_&gt;---&lt;__-~      /\n");
    printf("                 (^(~          /~_&gt;---&lt;__-      _-~\n");
    printf("                ,/|           /__&gt;--&lt;__/     _-~\n");
    printf("             ,//('(          |__&gt;--&lt;__|     /                  .----_\n");
    printf("            ( ( '))          |__&gt;--&lt;__|    |                 /' _---_~\\ \n");
    printf("         `-)) )) (           |__&gt;--&lt;__|    |               /'  /     ~\\`\\\n");
    printf("        ,/,'//( (             \\__&gt;--&lt;__\\    \\            /'  //        ||\n");
    printf("     ,( ( ((, ))               ~-__&gt;--&lt;_~-_  ~--____---~' _/'/        /'\n");
    printf("    `~/  )` ) ,/|                 ~-_~&gt;--&lt;_/-__       __-~ _/\n");
    printf("   ._-~//( )/ )) `                   ~~-'_/_/ /~~~~~~~__--~\n");
    printf("   ;'( ')/ ,)(                              ~~~~~~~~~~\n");
    Sleep(300); // 0.5초 대기
    clear_text();

    printf("                                                 /===-_---~~~~~~~~~------____\n");
    printf("                                                |===-~___                _,-'\n");
    printf("                 -==\\\\                         `//~\\\\   ~~~~`---.___.-~~\n");
    printf("             ______-==|                         | |  \\\\           _-~`\n");
    printf("       __--~~~  ,-/-==\\\\                        | |   `\\        ,'\n");
    printf("    _-~       /'    |  \\\\                      / /      \\      /\n");
    printf("  .'        /       |   \\\\                   /' /        \\   /'\n");
    printf(" /  ____  /         |    `\\\\.__/-~~ ~ \\ _ _/'  /          \\/'\n");
    printf("/-'~    ~~~~~---__  |     ~-/~         ( )   /'        _--~`\n");
    printf("                  \\_|      /        _)   ;  ),   __--~~\n");
    printf("                    '~~--_/      _-~/-  / \\   '-~ \\\n");
    printf("                   {\\__--_/}    / \\\\_&gt;- )&lt;__\\      \\\n");
    printf("                   /'   (_/  _-~  | |__&gt;--&lt;__|      |\n");
    printf("                  |0  0 _/) )-~     | |__&gt;--&lt;__|     |\n");
    printf("                  / /~ ,_/       / /__&gt;---&lt;__/      |\n");
    printf("                 o o _//        /-~_&gt;---&lt;__-~      /\n");
    printf("                 (^(~          /~_&gt;---&lt;__-      _-~\n");
    printf("                ,/|           /__&gt;--&lt;__/     _-~\n");
    printf("             ,//('(          |__&gt;--&lt;__|     /                  .----_\n");
    printf("            ( ( '))          |__&gt;--&lt;__|    |                 /' _---_~\\ \n");
    printf("         `-)) )) (           |__&gt;--&lt;__|    |               /'  /     ~\\`\\\n");
    printf("        ,/,'//( (             \\__&gt;--&lt;__\\    \\            /'  //        ||\n");
    printf("     ,( ( ((, ))               ~-__&gt;--&lt;_~-_  ~--____---~' _/'/        /'\n");
    printf("    `~/  )` ) ,/|                 ~-_~&gt;--&lt;_/-__       __-~ _/\n");
    printf("   ._-~//( )/ )) `                   ~~-'_/_/ /~~~~~~~__--~\n");
    printf("   ;'( ')/ ,)(                              ~~~~~~~~~~\n");
    printf("  ' ') '( (/\n");

    print_slow_at(15, 45, " 동앗줄의 길태숙이 공격합니다....!!!");
    Sleep(1000);
    print_at(15, 45, "                                          ");
    print_slow_at2(15, 45, "\"크앗 너무 강하다 !!!\"", 50);
    Sleep(1000);
    print_at(15, 45, "                                         ");
    print_slow_at(15, 45, "근데 갑자기 ???? 왜지???");
    Sleep(1000);
    print_at(15, 45, "                                                 ");
    print_slow_at(15, 45, "아무튼 당신은 30의 피해를 입었습니다...");
    Sleep(1000);
    print_at(15, 45, "                                                       ");
    print_slow_at(15, 45, " 동앗줄의 길태숙은 이유없이 공격하고는 날아갔습니다...");
    Sleep(1000);
    print_at(15, 45, "                                                   ");

    return;
}


//쌍동앗줄날개성한울
void specials6() {
    clear_text();
    Fight_UI2();
    print_slow_at(13, 45, "???: 야... 쉬엄쉬엄해....");
    Sleep(1000);
    print_at(13, 45, "                                                                ");
    print_slow_at(13, 45, "???: 나, 쌍동앗줄 날개 성한울에게는 어차피 질거니까...");
    Sleep(1000);
    print_at(13, 45, "                                                                ");
    print_slow_at(15, 45, "엄청 강해보이는 적이다... 어떻게 할까?");
    Sleep(1000);
    print_at(13, 45, "                                                                ");

    while (1) {
        int choice;
        print_slow_at(15, 45, "무엇을 할까 ? ");
        Sleep(1000);
        print_at(15, 45, "                                                ");
        move_cursor(15, 46);
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            print_slow_at(15, 45, "당신은 자신있게 쌍동앗줄 날개 성한울에게 전투를 신청했다.");
            Sleep(1000);
            print_at(15, 45, "                                                                ");
            print_slow_at2(13, 45, "쌍동앗줄 날개 성한울: ..... 넌 아직 약해", 50);
            Health(-30);
            status_clear();
            status();
            Sleep(1000);
            print_at(13, 45, "                                                                    ");
            print_slow_at(15, 45, "당신은 적과의 압도적인 실력차를 느끼고 전의를 상실했다...");
            Sleep(1000);
            print_at(15, 45, "                                                                ");
            return;
        case 2:
            move_cursor(15, 45);
            print_slow_at(15, 45, "방어하기를 선택했다.");
            Sleep(1000);
            print_at(15, 45, "                                                                      ");
            print_slow_at(15, 45, "쌍동앗줄의 쏟아지는 공격을 막는 것도 벅차다. 체력을 너무 많이 소진했다.....");
            status_clear();
            status();
            Health(-20);
            Sleep(1000);
            print_at(15, 45, "                                                                       ");
            print_slow_at2(13, 45, "\"쌍동앗줄날개성한울: 나약하네. 좀 더 강해져서 돌아와.\"", 50);
            Sleep(1000);
            print_at(15, 45, "                                                                        ");
            print_slow_at(15, 45, "하... 좀 더 강해져야겠다.");
            Sleep(1000);
            return;

        case 3:
            move_cursor(15, 45);
            print_slow_at(15, 45, "도저히 이길 수 없을 것 같다. 대화로 풀어보자.");
            Sleep(1000);
            print_at(15, 45, "                                                                              ");
            print_slow_at2(15, 45, "\"안녕하세요. 혹시 그냥 지나가도 될까요?\"", 50);
            Sleep(1000);
            print_at(15, 45, "                                                                                ");
            print_slow_at2(13, 45, "쌍동앗줄날개성한울: 나약한 주제에 아무런 대가를 치를 생각조차 하지 않는거야?", 50);
            Sleep(1000);
            print_at(15, 45, "                                                                                ");
            print_slow_at2(13, 45, "쌍동앗줄날개성한울: 50골드 내놔.", 50);
            print_at(15, 45, "                                                                ");
            Gold(-50);
            status_clear();
            status();
            Sleep(1000);
            return;

        default:
            move_cursor(15, 45);
            print_slow_at(15, 45, "잘못된 선택을 한 것 같다.. 치명상을 입었다....");
            print_at(15, 45, "                                                                ");
            Health(-30);
            Gold(-50);
            status_clear();
            status();
            return;
        }
    }
}

//이벤트들
//노상강도
void event1() {
    clear_text();
    nemo();
    int choice;
    print_slow_at(3, 5, "당신은 길을 걷다 일진무리를 마주쳤습니다. PTSD가 온다...");
    print_slow_at(3, 7, "\"야 너 이리와봐 (찍), 멍청해 보이는게 마음에 안드는데?\"\n");
    print_slow_at(3, 9, "\"가지고 있는 돈 전부다 내놔\"\n");
    print_slow_at(3, 11, "\"네?\"");

    print_at(10, 15, "_________________________");
    print_at(10, 16, "|                       |");
    print_at(10, 17, "|   > 1. 도망치기       |");
    print_at(10, 18, "|                       |");
    print_at(10, 19, "|   > 2. 싸우기         |");
    print_at(10, 20, "|                       |");
    print_at(10, 21, "|   > 3. 주기           |");
    print_at(10, 22, "|_______________________|");

    print_at(10, 25, "어떻게 할까..? ");
    move_cursor(10, 27);
    scanf("%d", &choice);

    switch (choice) {
    case 1:
        clear_text();
        nemo();
        print_slow_at(3, 10, "당신은 도망치기로 했습니다.");
        if (rand() % 2) {
            print_slow_at(3, 12, "당신은 민첩하게 샤샤샥 일진들을 피해갔습니다. 다행이네요 !");
            Sleep(1000);
        }
        else {
            print_slow_at(3, 10, "당신은 도망치려 하다가 일진들에게 붙잡혔습니다. 일진들은 화가 많이 난거 같습니다.");
            print_slow_at(3, 12, "결국 당신은 돈이 모두 나올때까지 두들겨 맞았습니다.");
            print_slow_at(3, 14, "당신은 체력을 20 잃고 소지금을 모두 잃었다. 저런...");
            Health(-20);
            Gold(-totalGold);
            Sleep(1000);
        }
        break;
    case 2:
        clear_text();
        nemo();
        print_slow_at(3, 10, "당신은 일진들과 맞서 싸우기로 결심했습니다. 트라우마를 위하여 !");
        Sleep(1000);
        if (totalStrength >= 20) {
            print_slow_at(3, 12, "당신은 트라우마 타파에 성공했습니다! 역으로 일진들의 돈도 뺏었습니다! 이시대의 홍길동!");
            Sleep(1000);
            Gold(50);
        }
        else {
            print_slow_at(3, 12, "당신의 어설프게 싸우려 하는 모습이 재밌었는지 일진들은 눈물까지 흘리며 웃습니다...");
            print_slow_at(3, 14, "\"아 찐따가 아니라 광대였네 재미있었다. 자 여기 관람료. 재능있어 너.\"");
            print_slow_at(3, 16, "일진에게서 돈을 10G 받았습니다.");
            print_slow_at(3, 18, "울어야 할지 웃어야 할지 모른채로 당신은 길을 나섰습니다... 화이팅");
            Sleep(1000);
            Gold(10);
        }
        break;
    case 3:
        clear_text();
        nemo();
        print_slow_at(3, 10, "압도당한 당신은 아무것도 할 수 없었습니다...");
        print_slow_at(3, 12, "얌전히 돈을 주었습니다.");
        print_slow_at(3, 14, "당신의 소지금이 0G가 되었습니다...");
        print_slow_at(3, 16, "당신은 씁쓸하게 앞으로 나아갑니다...");
        Gold(-totalGold);
        Sleep(1000);
        break;
    default:
        clear_text();
        nemo();
        print_slow_at(3, 10, "다른 선택은 없다...");
        Sleep(1000);
        event1();
        break;
    }
}
//길잃음
void event2() {
    clear_text();
    nemo();
    int health_lost = 10;
    Health(-health_lost);
    print_slow_at(3, 10, "당신은 무성한 나무들에 길이 가려져 가야하는 길을 놓쳐버렸습니다.");
    Sleep(1000);
    print_slow_at2(3, 12, "...당신은 너무 무섭습니다...", 40);
    Sleep(1000);
    print_slow_at2(3, 14, "이상한 소리가 들려오는 것 같습니다...", 40);
    Sleep(1000);
    print_slow_at2(3, 16, "점점 해가 져 갑니다... 주변이 어두워 집니다...", 40);
    Sleep(1000);
    print_slow_at2(3, 18, "당신은 최선을 다해 길을 찾아봅니다... 이미 해는 졌습니다...", 40);
    Sleep(1000);
    print_slow_at(3, 20, "너무... 무섭습니다...");
    Sleep(1000);
    print_slow_at(3, 22, "...");
    Sleep(1000);
    print_slow_at(3, 24, "...");
    Sleep(1000);
    print_slow_at2(3, 26, "\"헉...허억...드디어...!\"", 50);
    print_slow_at(3, 28, "당신은 해가 다시 뜰 때 가 되어서야 길을 찾아냈습니다...");
    print_slow_at(3, 30, "공포에 휩쌓여 마구잡이로 수풀을 헤치느라 팔이 상처 투성이 입니다...");
    move_cursor(3, 32);
    int replace[] = { health_lost, totalHealth };
    print_slow3("당신은 체력을 % 잃어 %가 되었습니다...", 30, replace, 2);
    print_slow_at(3, 34, "당신은 주저 앉아 멍하니 허공을 바라보다...");
    print_slow_at(3, 36, "또 다시 길을 잃을 것이라는 공포감에 휩쌓여...");
    print_slow_at(3, 38, "서둘러 일어나, 아픈 몸을 이끌고 앞으로 나아갔습니다...");
    Sleep(1000);
}
//돈주움
void event3() {
    clear_text();
    nemo();
    int gold_found = rand() % 100 + 1;
    Gold(gold_found);
    print_slow_at(3, 10, "당신은 길을 걷다가 지쳐, 잠시 쉬어가려 나무등치에 앉았습니다");
    print_slow_at2(3, 12, "\"아오, 힘들어 죽겠네 마왕성은 대체 언제 도착하는거야\"", 50);
    print_slow_at(3, 14, "당신은 나무등치에 기대어 풍경을 바라보다가... 저 멀리 무언가 반짝이는 것을 보았습니다 !");
    print_slow_at(3, 16, "\"엇 저게 뭐시당가 함 가보까\"", 50);
    print_slow_at(3, 18, "아하하.. 당신이 일어나서 그곳으로 달려가자 그곳에는...");
    Sleep(2000);
    print_slow_at(3, 20, "금화가 있었습니다 ! 세상에나 이런 행운이 ? ?");
    print_slow_at2(3, 22, "\"오옷! 이겄은 고생하는 나를 위한 수뭉신의 선물??? 아싸바리덩실덩실\"", 40);
    print_slow_at(3, 24, "당신은 신나하며 금화를 주웠습니다 ! 기뻐하니 다행이네요 !");
    move_cursor(3, 26);
    int replace[] = { totalGold };
    print_slow3("당신은 떨어진 금화들을 모두 주워 소지금이 %G가 되었습니다 !", 30, replace, 1);
    print_slow_at(3, 28, "당신은 신나는 기분으로 앞으로 나아갔습니다 ! 좋은일도 가끔씩은 있어야죠 ! 후후");
    Sleep(1000);
}
//음식주움
void event4() {
    clear_text();
    nemo();
    int health_plus = 20;
    Health(health_plus);
    print_slow_at(3, 10, "당신은 길을 걷다 땅바닥에 떨어진 마라탕을 발견했습니다 ! ! ! ! ! \n");
    print_slow_at(3, 12, "\"마라탕 !!!!!! 당장 먹어야겠어. 버섯은 무조건 빼고. 숙주 많이. 고수 추가.\"\n");
    int replace[] = { health_plus, totalHealth };
    print_slow_at(3, 14, "당신의 체력이 % 회복 되어, %가 되었습니다 ! 맛있게 먹어요", 30, replace, 2);
    Sleep(1000);
}
//보물상자
void event5() {
    clear_text();
    nemo();
    srand(time(NULL));
    int random_weapon_index = rand() % 14;
    const char* item = weapons[random_weapon_index].weapon_name;
    print_slow_at(3, 5, "당신은 길을 걷다 바닥에 떨어진 보물상자를 발견했습니다 ! !");
    print_slow_at2(3, 7, "\"와 보물상자!!! 당장 열어봐야겠어 !!!\"", 50);
    print_slow_at(3, 9, "잠시만요, 뭐가 나올지 모르는데 열어보겠다고요 ? 신중하게 다가가는게 좋아보입니다...");
    print_slow_at2(3, 11, "\"음... 일리가 있어\"", 50);
    Sleep(1000);
    print_at(9, 15, "______________________");
    print_at(9, 16, "|                    |");
    print_at(9, 17, "|  > 1. 열어본다     |");
    print_at(9, 18, "|                    |");
    print_at(9, 19, "|  > 2. 열지않는다   |");
    print_at(9, 20, "|____________________|");
    print_slow_at2(3, 24, "\"흠... 어떻게 할까 ?\"", 50);
    move_cursor(3, 26);
    int choice;
    scanf("%d", &choice);
    switch (choice) {
    case 1:
        print_slow_at2(3, 28, "\"당연히 열어봐야지 ㅋㅋ 이세계는 모험심과 함께다. 가자 랜뽑 !\"", 50);
        print_slow_at(3, 30, "못말리는 사람...");
        print_slow_at(3, 32, "당신은 뭐가 나올지 기대하며 보물상자를 열었습니다. 두근두근 아자아자");
        print_slow_at2(3, 34, "보물상자를 여는 중 . . .", 40);
        Sleep(1000);
        move_cursor(3, 36);
        char get[] = { item };
        print_slow3("당신은 %를 획득해 능력치가 변화했습니다", 30, get, 1);
        print_slow_at(3, 38, "당신은 일단 아이템을 얻은 것에 기뻐하며 앞으로 나아갔습니다...");
        print_slow_at(3, 40, "좋은 아이템을 얻었길 빌어요");
        Sleep(1000);
        break;
    case 2:
        print_slow_at2(3, 28, "\"무슨 소리를 하는 거지 ? 당연히 열어본다. 안여는건 없어 !\"", 50);
        print_slow_at2(3, 30, "\"이세계는 모험심과 함께다. 가자 랜뽑 !\"", 50);
        print_slow_at(3, 32, "못말리는 사람...");
        print_slow_at(3, 34, "당신은 뭐가 나올지 기대하며 보물상자를 열었습니다. 두근두근 아자아자");
        print_slow_at2(3, 36, "보물상자를 여는 중 . . .", 40);
        Sleep(1000);
        move_cursor(3, 38);
        char get1[] = { item };
        print_slow3("당신은 %를 획득해 능력치가 변화했습니다", 30, get1, 1);
        print_slow_at(3, 40, "당신은 일단 아이템을 얻은 것에 기뻐하며 앞으로 나아갔습니다...");
        print_slow_at(3, 42, "좋은 아이템을 얻었길 빌어요");
        Sleep(1000);
        break;
    default:
        print_slow_at2(3, 28, "\"사실 뭘 고르던 열 생각이야, 선택지가 왜 있는거지 ?\"", 50);
        print_slow_at(3, 30, "...");
        print_slow_at2(3, 32, "\"이세계는 모험심과 함께다. 가자 랜뽑 !\"", 50);
        print_slow_at(3, 34, "못말리는 사람...");
        print_slow_at(3, 36, "당신은 뭐가 나올지 기대하며 보물상자를 열었습니다. 두근두근 아자아자");
        print_slow_at2(3, 38, "보물상자를 여는 중 . . .", 40);
        Sleep(1000);
        move_cursor(3, 40);
        char get2[] = { item };
        print_slow3("당신은 %를 획득해 능력치가 변화했습니다", 30, get2, 1);
        print_slow_at(3, 42, "당신은 일단 아이템을 얻은 것에 기뻐하며 앞으로 나아갔습니다...");
        print_slow_at(3, 44, "좋은 아이템을 얻었길 빌어요");
        Sleep(1000);
        break;
    }
}
//엑스칼리버
void event6() {
    clear_text();
    nemo();
    int choice;
    print_slow_at(3, 10, "길 앞에는 검이 꽃힌 거대한 비석이 있었습니다.");
    print_slow_at2(3, 12, "\"이건 바로... 엑스칼리버??? 역시 이세계 물은 이정도는 해줘야지. ㅋㅋ\"", 50);
    print_slow_at(3, 14, "당신은 검을 뽑으려 했지만, 뽑히지 않았습니다.");
    print_slow_at2(3, 16, "\"끄응...으으... 왜 안 뽑히는 거지... 힘들어 죽겄다.\"", 50);
    print_slow_at(3, 18, "지친 당신은 길바닥에 앉아 쉬다 비석에 적힌 글을 발견했습니다.");
    print_slow_at2(3, 20, "\"...피를 바치세요 ?\"", 50);
    print_at(9, 24, "________________________");
    print_at(9, 25, "|                      |");
    print_at(9, 26, "|  > 1. 피를 바친다    |");
    print_at(9, 27, "|                      |");
    print_at(9, 28, "|  > 2. 바치지 않는다  |");
    print_at(9, 29, "|______________________|");
    print_slow_at2(3, 33, "\"흐음... 어떻게 할까\"", 50);
    move_cursor(3, 35);
    scanf("%d", &choice);
    switch (choice) {
    case 1:
        clear_text();
        nemo();
        print_slow_at(3, 10, "당신은 피를 바치기로 결정했습니다...");
        print_slow_at2(3, 12, "\"이건 못참지. 가즈아 ㅋㅋ\"", 50);
        print_slow_at(3, 14, "당신은 손바닥을 그어, 피가 철철 흐르는 손으로 칼을 잡았습니다.");
        print_slow_at2(3, 16, "\"으으,,, 아프다... 이 방법이 아닌가 ? 왜 안 뽑히지 ?\"", 50);
        print_slow_at(3, 18, "당신이 어리둥절하며 후회하려던 찰나, 피에 충분히 적셔진 칼이...");
        Sleep(1000);
        print_slow_at(3, 20, "환하게 빛나며 스르륵 뽑혀나왔습니다. 당신은 {엑스칼리버}를 획득 했습니다");
        print_slow_at2(3, 22, "\"우왓, 엑스칼리버를 얻었다 !!! \"", 50);
        print_slow_at2(3, 24, "\"...근데 피에 적셔져있어서 좀 기괴하네...\"", 50);
        print_slow_at(3, 26, "네...굳이 이렇게 까지 했어야 했을까요... 부디 많이 아프진 않길");
        Strength(25);
        Health(-20);
        move_cursor(3, 28);
        int replace[] = { totalStrength };
        print_slow3("아무튼, 당신은 칼을 얻어 공격력이 %가 되었습니다.", 30, replace, 1);
        print_slow_at2(3, 30, "\"아...으으...피를 너무 흘렸나 어지럽다...\"", 50);
        Sleep(1000);
        print_slow_at(3, 32, "당신은 휘청 휘청 거리다가 균형을 잃고 칼을 든채로 땅바닥을 굴렀습니다...");
        move_cursor(3, 34);
        int replace2[] = { totalHealth };
        print_slow3("어휴...피를 흘린채로 땅바닥을 굴러 체력이 %가 되었습니다.", 30, replace2, 1);
        print_slow_at(3, 36, "당신은 한참동안 땅바닥에 누운채로 있다가 가까스로 일어나서...");
        print_slow_at2(3, 38, "{엑스칼리버} 로 몸을 지탱하며 비척,,비척,, 앞으로 걸어나갔습니다...", 40);
        Sleep(1000);
        break;
    case 2:
        print_slow_at(3, 37, "당신은 바치지 않기로 결심했습니다.");
        print_slow_at2(3, 39, "\"역시 진짜일지 가짜일지도 모르는 도박에 피를 흘리는건 좀 그래..\"", 50);
        print_slow_at(3, 41, "잘했어요 ! 모험은 좋지 않아요, 피를 흘리지 않아서 정말 다행입니다");
        print_slow_at(3, 43, "당신은 비석을 보며 살짝 주저하다, 앞으로 나아갔습니다.");
        Sleep(1000);
        break;
    default:
        clear_text();
        nemo();
        print_slow_at2(3, 10, "\"다른 선택은 하기가 싫은 걸...\"", 45);
        Sleep(1000);
        event6();
        break;
    }
}
//마약꽃
void event7() {
    clear_text();
    nemo();
    int health_loss = 15;
    int strength_gain = 5;
    print_slow_at(3, 10, "당신은 앞으로 걷다 빨간꽃이 만개한 초원을 발견했습니다.");
    print_slow_at2(3, 12, "어쩐지 기분이 좋아지는 것만 같다...", 50);
    print_slow_at2(3, 14, "아름 답지 않나요 ? 후후,,,", 50);
    print_slow_at2(3, 16, "\"아름다워...\"\n", 50);
    Sleep(1000);
    print_slow_at2(3, 18, "나는 시간이 흐른다는 사실도 잊은 채로... 꽃밭에 누워 행복한 꿈을 꿨다...", 40);
    Sleep(1000);
    print_slow_at(3, 20, "한참 뒤 나는 정신을 차렸고,");
    Sleep(1000);
    print_slow_at(3, 22, "주변에는 썩은, 시체, 뿐 이라는 사실을 깨달은 뒤...");
    Sleep(1000);
    print_slow_at(3, 24, "공포감에 휩싸인 채, 그 자리에 서서...");
    Sleep(1000);
    print_slow_at2(3, 26, "...", 50);
    Sleep(2000);
    print_slow_at2(3, 29, "아름다운 것을 보여주고 싶었는데...", 80);
    Sleep(1000);
    print_slow_at(3, 32, "어디선가 들려오는 목소리를 듣고 정신이 든 나는.");
    Sleep(1000);
    print_slow_at(3, 34, "곧 끊이 놓아 질 것 만 같은 정신을 어떻게든, 부여잡고.");
    Sleep(1000);
    print_slow_at(3, 36, "이미 다 바스러지고, 녹아 없어진 시체들을 헤치며,");
    Sleep(1000);
    print_slow_at2(3, 37, "정신 없이 달려나갔다 . . .", 25);
    Health(-health_loss);
    Strength(strength_gain);
    move_cursor(3, 40);
    int replace[] = { totalHealth, totalStrength };
    print_slow3("당신의 체력과 공격력이 %, %가 되었습니다.", 30, replace, 2);
    Sleep(1000);

}
//구덩이
void event8() {
    clear_text();
    nemo();
    print_slow_at(3, 10, "당신을 길을 가다 저 멀리 빛나는 물건이 보이는걸 발견 했습니다. ");
    print_slow_at(3, 12, "당신은 설레는 마음으로 빛나는 물건을 향해 서둘러 달려갔습니다...");
    print_slow_at(3, 14, "아쉽게도, 빛나는 물건은 함정이였습니다. ");
    print_slow_at(3, 16, "당신은 헤어나올수 없는 심연의...히, 아니, 구덩이에 빠졌습니다.");
    print_slow_at(3, 18, "당신은 어떻게든 빠져나오려 애를 써봤지만 아쉽게도 역부족이였습니다.");
    Sleep(1000);
    print_slow_at(3, 20, "당신이 구덩이에서 헤어나왔을 때는 이미 날이 샌 뒤였습니다...");
    Health(-20);
    print_slow_at(3, 22, "진이 모두 빠져버린 당신은 망신창이가 되었습니다...");
    move_cursor(3, 24);
    int replace[] = { totalHealth };
    print_slow3("체력을 20 잃어 % 가 되었습니다.", 30, replace, 1);
    print_slow_at(3, 26, "당신은 넝마가 된 몸을 이끌고 터벅터벅 걸어나갔습니다...");
    Sleep(1000);

}
//황금수뭉이
void event9() {
    clear_text();
    nemo();
    int choice;
    print_slow_at(3, 8, "당신은 길을 걷다 행운의 황금수뭉이 조각상을 마주쳤습니다.");
    print_slow_at(3, 10, "소원을 빌수있을거 같습니다, 빌어볼까 ?");

    print_at_unicode(9, 14, L"    ㅅ   ㅁ  ");
    print_at_unicode(9, 15, L" ミ ・ 。・ ミ ");
    print_at_unicode(9, 16, L"|—○———○—————————————————————————————————————————————|");
    print_at(12, 19, "> 1. 돈 많이 벌게 해주세요 !");
    print_slow_at(15, 22, "] 이런, 욕심많은 사람 같으니라고");
    print_at(12, 24, "> 2. 건강하게 살수있게 해주세요 !");
    print_slow_at(15, 27, "] 귀여운 소원이네요 ");
    print_at(12, 30, "> 3. 조각상을 훔쳐간다.");
    print_slow_at(15, 33, "] 하아 ? ");
    print_at_unicode(9, 36, L"|—————————————————————————————————————————————————————|");
    print_slow_at(10, 38, "어떤 소원을 빌까 ? ");
    move_cursor(10, 40);
    scanf("%d", &choice);

    switch (choice) {
    case 1:
        clear_text();
        nemo();
        print_slow_at2(3, 10, "\"돈 많이 벌게 해주세요 !! 깁미머니 !\"", 50);
        print_slow_at(3, 12, "수뭉이는 실존했다 !!!!!! 하늘에서 돈이 떨어진다 !");
        print_slow_at(3, 14, "당신은 잽싸게 하늘에서 떨어지는 모든 돈을 주웠습니다.");
        Gold(200);
        move_cursor(3, 16);
        int replace[] = { totalGold };
        print_slow3("당신은 200G를 얻어, 소지금이 %G가 되었습니다\n", 30, replace, 1);
        Sleep(1000);
        break;
    case 2:
        clear_text();
        nemo();
        print_slow_at2(3, 10, "\"나는 건강한게 제일 인거같아 나이먹으니까 힘들어...\"", 50);
        print_slow_at(3, 12, "소원을 빌자, 하늘에서 뭔가 떨어졌다. 이게 뭐지 ?");
        print_slow_at(3, 14, "당신은 무언가를 주워 무엇인지 확인했습니다.");
        print_slow_at(3, 16, "무언가의 정체는 정x장홍삼주스 였다...!");
        print_slow_at(3, 18, "당신은 재빠르게 x관장홍삼주스를 원샷 때렸습니다");
        print_slow_at2(3, 20, "\"뭔가 벌써 건강해진 기분이야...\"", 50);
        print_slow_at(3, 22, "다행이네요 !");
        Health(20);
        move_cursor(3, 24);
        int replace2[] = { totalHealth };
        print_slow3("당신의 체력이 20 회복 되어 체력이 %가 되었습니다.", 30, replace2, 1);
        Sleep(1000);
        break;
    case 3:
        clear_text();
        nemo();
        print_slow_at(3, 10, "당신은 조각상을 훔쳐가기로 결심했습니다.");
        print_slow_at(3, 12, "하지만 조각상은 엄청... 무거워 보이는데요.");
        print_slow_at(3, 14, "당신은 그런것 따윈 개의치 않고 조각상을 훔칠 생각에 신이 났습니다.");
        print_slow_at(3, 16, "저런, 욕심많은 사람");
        print_slow_at2(3, 18, "\"흐흐흐 상점에 팔면 한탕 하는건데 이걸 참아 ? 바로 갈겨 ㅋㅋ\"", 50);
        srand(time(0));
        if (rand() % 10 < 4) {
            Sleep(1000);
            print_slow_at(3, 20, "성공했습니다 !!!");
            print_slow_at(3, 22, "당신은 조각상을 상점에 매우 비싸게 팔습니다!");
            print_slow_at(3, 24, "...어떻게 했지...?");
            Gold(1000);
            print_slow_at(3, 26, "무려 1000G 나 되는 거금을 얻었습니다...");
            print_slow_at(3, 28, "어디에다 쓰려고...?");
            Sleep(1000);
        }
        else {
            print_slow_at(3, 20, "실패했습니다...");
            print_slow_at(3, 22, " 당신은 조각상을 들려다, 조각상에 깔려 사망 직전까지 갔다가 겨우 살았습니다...");
            Health(-30);
            print_slow_at(3, 24, "당신은 체력을 30이나 잃었습니다... 바보같은 사람");
            move_cursor(3, 26);
            int replace3[] = { totalHealth };
            print_slow3("체력을 30 잃어 %가 되었습니다...", 30, replace3, 1);
            Sleep(1000);
        }
        break;
    default:
        print_slow_at(3, 20, "다른 선택은 없을거 같은데, 나는 이거면 돼");
        Sleep(1000);
        event9();
        break;
    }
}
//연못
void event10() {
    clear_text();
    nemo();
    int choice;
    print_slow_at(3, 10, "당신은 길을 가다 앞에 연못을 발견했습니다.");
    Sleep(1000);
    print_at(9, 14, "____________________________");
    print_at(9, 15, "|                          |");
    print_at(9, 16, "|  > 1. 달려가서 마신다.   |");
    print_at(9, 17, "|                          |");
    print_at(9, 18, "|  > 2. 그냥 지나간다.     |");
    print_at(9, 19, "|__________________________|");
    Sleep(1000);
    print_at(3, 23, "어떻게 할까? ");
    move_cursor(3, 25);
    scanf("%d", &choice);

    switch (choice) {
    case 1:
        print_slow_at(3, 27, "당신은 신나게 달려가다가 나무에 걸려 넘어졌습니다...");
        print_slow_at(3, 29, "주머니에서 돈이 빠져나와 연못에 들어갔습니다...아이고야");
        Gold(-20);
        move_cursor(3, 31);
        int replace[] = { totalGold };
        print_slow3("소지금을 20원만큼 잃어서 %G가 되었습니다...어휴", 30, replace, 1);
        Sleep(1000);
        break;
    case 2:
        print_slow_at(3, 27, "당신은 그냥 무시하고 걸어가기로 했습니다.");
        print_slow_at(3, 29, "하지만 무시하고 걸어가자, 당신은 목이 굉장히 마르기 시작했습니다.");
        print_slow_at2(3, 31, "\"젠장... 목이 너무 말라...\"", 50);
        Health(-5);
        move_cursor(3, 33);
        int replace2[] = { totalHealth };
        print_slow3("당신은 갈증을 참을 수 없습니다... 체력이 5감소 해서 %가 되었습니다,..", 30, replace2, 1);
        Sleep(1000);
        break;
    default:
        print_slow_at(3, 27, "다른 선택은 없다...");
        Sleep(1000);
        event10();
        break;
    }
}
//상점주인
void event11() {
    clear_text();
    nemo();
    print_slow_at(3, 10, "당신은 길을 걷다 떠돌이 상인을 만났습니다 !");
    print_slow_at2(3, 12, "\"킬킬킬,,,구경만 하다 가는건 안될세,,,\"", 50);
    print_slow_at(3, 14, "좀... 이상한 사람인거 같은데 그냥 지나칠까요 ?");
    print_at(9, 18, "______________________________");
    print_at(9, 19, "|                            |");
    print_at(9, 20, "|   > 1. 지나친다            |");
    print_at(9, 21, "|                            |");
    print_at(9, 22, "|   > 2. 구매하고 가지 뭐    |");
    print_at(9, 23, "|____________________________|");
    move_cursor(3, 27);
    int choice;
    scanf("%d", &choice);

    switch (choice) {
    case 1:
        print_slow_at(3, 29, "당신은 그냥 지나치기로 했습니다...");
        print_slow_at2(3, 31, "\"생긴게 너무 음험해...\"", 50);
        print_slow_at(3, 33, "사람은 외모로 평가하는게 아니에요.");
        print_slow_at(3, 35, "아무튼, 나쁜사람");
        print_slow_at(3, 37, "아무일도 벌어지지 않았고 당신은 킬킬웃는 상인을 쳐다보다 길을 나섰습니다");
        Sleep(1000);
        return;
    case 2:
        print_slow_at(3, 29, "당신은 호기심에 무언가를 구매하기로 결정했습니다\n");
        print_slow_at2(3, 31, "\"흠, 한번 보고 갈까\"\n", 50);
        print_slow_at2(3, 33, "\"켈켈켈,,,구경만 하면 안되네,,,자 오늘의 상품일세,,,\"\n", 50);
        Sleep(1000);

        while (1) {
            clear_text();
            nemo();
            status_store();
            print_slow_at(3, 4, "\"끌끌끌,,,골라보게나,,,효과는 비밀일세,,,\"\n");
            print_slow_at(3, 6, "\"한 번 구입하면 새로고침 된다네,,,큭큭\"\n");
            
            srand(time(NULL));
            
            //아이템랜덤변수정의
            int random_index1 = rand() % 14;
            int random_index2 = rand() % 14;
            int random_index3 = rand() % 14;
            int random_index4 = rand() % 14;
            int random_index5 = rand() % 14;
            int i = 0;
            move_cursor(15, 9);
            int text[] = { totalGold };
            print_slow3("현재 소지금: %G", 30, text, 1);
            print_at(9, 11, "_____________무기 목록_____________");
            print_at(9, 12, "|                                 |");
            move_cursor(9, 13);
            printf("   > %d. %s -%d G    ",i + 1, weapons[random_index1].weapon_name, weapons[random_index1].price);
            move_cursor(9, 15);
            printf("   > %d. %s -%d G    ",i + 2, weapons[random_index2].weapon_name, weapons[random_index2].price);
            move_cursor(9, 17);
            printf("   > %d. %s -%d G    ",i + 3, weapons[random_index3].weapon_name, weapons[random_index3].price);
            move_cursor(9, 19);
            printf("   > %d. %s -%d G    ",i + 4, weapons[random_index4].weapon_name, weapons[random_index4].price); 
            move_cursor(9, 21);
            printf("   > %d. %s -%d G    ",i + 5, weapons[random_index5].weapon_name, weapons[random_index5].price);
            print_at(9, 22, "|_________________________________|");

            print_slow_at2(3, 26, "\"끌끌끌,,,구매하려면 번호를 입력하면 된다네,,,\"", 50);
            print_slow_at(3, 28, "쇼핑을 멈추려면 아무키나 입력하면 된답니다 !");
            print_slow_at2(3, 30, "\"크흠...\"", 50);
            move_cursor(3, 32);
            int choice;
            scanf("%d", &choice);

            Weapon selected_weapon;
            switch (choice) {
            case 1:
                selected_weapon = weapons[random_index1];
                if (totalGold >= selected_weapon.price) {
                    totalGold -= selected_weapon.price;
                    move_cursor(3, 35);
                    printf("%s을 %d gold에 구매했습니다 !", selected_weapon.weapon_name, selected_weapon.price);
                    selected_weapon.weapon_Function(&totalStrength, &totalHealth);
                    status_store();
                    Sleep(2000);
                    break;
                }
                else {
                    print_slow_at(3, 40, "돈이 부족합니다 !");
                    break;
                }
                break;
            case 2:
                selected_weapon = weapons[random_index2];
                if (totalGold >= selected_weapon.price) {
                    totalGold -= selected_weapon.price;
                    move_cursor(3, 35);
                    printf("%s을 %d gold에 구매했습니다 !", selected_weapon.weapon_name, selected_weapon.price);
                    selected_weapon.weapon_Function(&totalStrength, &totalHealth);
                    status_store();
                    Sleep(2000);
                    break;
                }
                else {
                    print_slow_at(3, 40, "돈이 부족합니다!");
                    break;
                }
                break;
            case 3:
                selected_weapon = weapons[random_index3];
                if (totalGold >= selected_weapon.price) {
                    totalGold -= selected_weapon.price;
                    move_cursor(3, 35);
                    printf("%s을 %d gold에 구매했습니다 !", selected_weapon.weapon_name, selected_weapon.price);
                    selected_weapon.weapon_Function(&totalStrength, &totalHealth);
                    status_store();
                    Sleep(2000);
                    break;
                }
                else {
                    print_slow_at(3, 40, "돈이 부족합니다!");
                    break;
                }
                break;
            case 4:
                selected_weapon = weapons[random_index4];
                if (totalGold >= selected_weapon.price) {
                    totalGold -= selected_weapon.price;
                    move_cursor(3, 35);
                    printf("%s을 %d gold에 구매했습니다 !", selected_weapon.weapon_name, selected_weapon.price);
                    selected_weapon.weapon_Function(&totalStrength, &totalHealth);
                    status_store();
                    Sleep(2000);
                    break;
                }
                else {
                    print_slow_at(3, 40, "돈이 부족합니다!");
                    break;
                }
                break;
            case 5:
                selected_weapon = weapons[random_index5];
                if (totalGold >= selected_weapon.price) {
                    totalGold -= selected_weapon.price;
                    move_cursor(3, 35);
                    printf("%s을 %d gold에 구매했습니다 !", selected_weapon.weapon_name, selected_weapon.price);
                    selected_weapon.weapon_Function(&totalStrength, &totalHealth);
                    status_store();
                    Sleep(2000);
                    break;
                }
                else {
                    print_slow_at(3, 40, "돈이 부족합니다!");
                    break;
                }
                break;

            default:
                print_slow_at(3, 34,"구매 할 마음이 없으신건가요 ?");
                print_slow_at(3, 36, "그렇다면 내보내 드릴게요 !");
                return;
            }
            return;
        }
    }return;
}


//이벤트 배열
Event events[11] = {
    {"노상강도", event1},
    {"길잃음",event2 },
    {"돈주움",event3 },
    {"음식찾음",event4 },
    {"보물상자",event5 },
    {"파묻힌검",event6 },
    {"마약꽃",event7 },
    {"빛나는물건",event8 },
    {"황금수뭉이",event9 },
    {"연못",event10 },
    {"상점주인",event11}
};
//전투 배열
Fight fights[10] = {
    {"야생멧돼지", fight1},
    {"과제에미친수뭉이",fight2 },
    {"조별과제응원빌런",fight3 },
    {"다크데빌수뭉",fight4 },
    {"다리달린물고기",fight5 },
    {"거대한바퀴벌레",fight6 },
    {"귀엽지만은않은수뭉이",fight7 },
    {"무언가",fight8 },
    {"상점주인",fight9 },
    {"벌레떼",fight10 },
};

//특수적 배열
Special specials[6] = {
    {"정재웅", specials1},
    {"김민준",specials2 },
    {"이경민",specials3 },
    {"박조화",specials4 },
    {"동앗줄의길태숙",specials5 },
    {"쌍동앗줄날개성한울",specials6 },

};
//마왕대사변수초기화
int teat_bose3 = 0;
//마왕에게 고백할수있는 수치
int pro_boss3 = 0;
int kill_boss3 = 0;
//마왕첫번째선택지전투(기쁜상태)
void bose3_fight1() {
    clear_text();
    nemo();
    Fight_UI3();
    print_at_unicode(45, 9, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⣀⢀⢀⣀⣀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
    print_at_unicode(45, 10, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡠⡤⡴⡴⡤⡴⣞⡯⡿⡽⡯⣗⡗⣗⣝⣗⢵⢄⣄⢤⢄⡄⠀⠀⠀⠀⠀⠀");
    print_at_unicode(45, 11, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⢖⢝⣝⢵⢯⣫⣫⢯⣗⣯⢟⣮⣻⡳⡽⣮⡳⣳⢽⢜⢮⣫⣗⢽⡳⡦⡀⠀⠀⠀");
    print_at_unicode(45, 12, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡣⣳⢫⣪⢯⣗⢗⢽⡳⣯⢾⣫⢾⣜⡮⣟⣾⢽⣽⢝⡵⣳⣳⡳⣕⢽⣝⢞⡄⠀⠀⠀");
    print_at_unicode(45, 13, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⢧⣳⢯⡺⡾⣽⢪⢣⢗⢏⠿⡽⣽⣟⣾⣻⣟⢾⣟⢞⡵⡱⡳⣕⡿⣕⣧⣳⣝⢞⡄⠀⠀");
    print_at_unicode(45, 14, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡼⣕⡿⣕⢽⢯⣳⢯⡺⣕⣕⣝⢾⢹⢚⢞⢏⢞⢜⢜⣜⢮⡪⣞⢵⢯⣗⣗⡧⣗⢯⣺⢢⠀⠀⠀");
    print_at_unicode(45, 15, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⢼⣝⢞⣞⡾⣽⣫⢾⢽⢝⣞⡾⣺⢽⢮⣳⢽⣺⣺⢽⢵⢯⡳⣝⣞⡽⡵⣳⣳⢯⣗⢽⡺⡦⠱⡀⠀");
    print_at_unicode(45, 16, L"⠀⠀⠀⠀⠀⠀⠀⠀⢀⢮⣗⣗⣟⢾⣝⢾⣪⢯⢯⣳⣳⣫⢗⡯⡯⡮⣻⣺⢵⡻⣝⣗⢽⡺⡮⣗⢯⢷⢽⢽⡾⣕⢯⢯⡃⢑⠀⠀⠀⠀");
    print_at_unicode(45, 17, L"⠀⠀⠀⠀⠀⠀⠀⠀⣜⢗⢗⣗⣗⣽⢾⢽⣺⢽⡽⣪⢮⡺⣕⢯⡺⣝⢗⢗⣝⢞⡵⡽⡪⣞⢽⣺⡝⣗⢽⢯⣿⣪⢯⢯⡇⠐⠀⠀");
    print_at_unicode(45, 18, L"⠀⠀⠀⠀⠀⠀⠀⠠⣟⠸⣝⣞⡾⣜⡯⡯⣺⢵⡯⣟⢼⢘⡎⣗⣝⢮⡫⢕⢮⢣⡳⡝⡵⣝⢵⡳⡽⣝⡿⣯⣗⣗⢯⢷⣳⠀⠀⠀");
    print_at_unicode(45, 19, L"⠀⠀⠀⠀ ⠀⠀⢸⠕⣸⡣⢵⣻⢮⣻⣪⡳⣻⢝⠎⠣⠐⢝⢼⡺⡸⡘⠜⢕⠱⡱⢑⢇⣟⢞⢼⢽⡪⣟⣗⢧⢯⣻⣽⡺⡅⠀⠀⠀");
    print_at_unicode(45, 20, L"⠀⠀⠀⠀⠀⠀⠀⠨⡇⣾⡂⢏⣯⣿⣺⡲⣝⡵⣵⠼⠶⢶⣄⢁  ⠀⠀  ⠀  ⠀⠀⠑⠨⢫⢪⣻⡪⣟⣷⣹⡯⣷⢳⠅⡇⠀⠀");
    print_at_unicode(45, 21, L"⠀⠀⠀⠀⠀⠀⠀⠀⢫⣞⡆⢱⣻⣺⣳⣝⢞⣞⠀⢚⠼⠸⡘⠀⠀⠀     ⢠⡠⠵⠴⣔⣜⢜⣞⢮⡿⣗⣗⣟⡾⡸⠀⠂⠀⠀");
    print_at_unicode(45, 22, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⢳⠳⡄⣗⢷⣽⡮⣻⢮⡂⢂⠡⢈⠀   ⠀⠀⠀       ⡪⡳⡯⣳⣟⡯⣞⠽⠀⠁⠀⠀⠀");
    print_at_unicode(45, 23, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠣⠌⠈⢷⢿⢿⣪⡃⠎                 ⢎⢊⢿⣿⡪⡏⠁⠀⠀⠀");
    print_at_unicode(45, 24, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡼⣿⣝⢷⣻⣷⡄    ⠐⠠⢐⢀⠐⡠⠀   ⣨⣶⢯⢻⣟⢮⡃⠀⠀");
    print_at_unicode(45, 25, L"⠀⠀⠀⠀⠀ ⠀⠀⠀⠀⠀⠀⢰⣫⡷⣳⣻⡽⣞⡿⣕⣄⠀⠀  ⠐⠀⠊⠀⠀ ⢀⡰⡼⣿⣳⢯⣫⣯⢗⣇⠀⠀⠀");
    print_at_unicode(45, 26, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡮⠈⠳⢝⢾⠵⠁⢁⠋⠳⡯⠯⡢⡡⡀   ⡠⡰⡨⢝⠽⠉⠛⠊⡁⠘⡾⡝⠎⡢⡢⠀⠀");
    print_at_unicode(45, 27, L"⠀⠀      ⠀⠀⠄⠪⡪⠐⡀⠂⠑⠁⠄⠁⠄⢂⠉⠬⣢⢊⢒⠔⢔⢑⣜⠌⠄⠈⠄⠈⠢⠈⡃⠂⠐⡌⢎⢀⠀⠀⠀");
    print_at_unicode(45, 28, L"⠀⠀⠀⠀⠀⠀⠀⠀⡘⡨⠐⠌⠢⠐⠈⠄⠀ ⠂⠐⠀⠂⠁⢯⢯⣗⣷⣻⡽⣊⠠⢀⠁⠀⠂ ⠀⢨⠈⢆⠪⡂⢐⠈⡂⠀");
    print_at_unicode(45, 29, L"⠀⠀⠀⠀⠀⠀⠀⠀⢅⠂⠡⠑⠕⠈⠠⠁⣆⠀ ⠀⠀⠌⡠⡯⣟⢷⢑⢗⠿⣽⢶⠀⠀⠀ ⠀⣠⡇⡐⢤⢑⠐⢀⠂⡑⡀⠀");
    print_at_unicode(45, 30, L"⠀⠀⠀⠀⠀⠀⠀⢈⠢⠨⠐⠈⠄⢁⢈⢰⣣⠃⠄ ⠀⠀⠩⠉⢐⡯⡂⣻⢇⠪⠀⠀⠀ ⢀⠈⡾⡕⡈⠄⢅⠈⠄⡀⢂⠂⠀");
    print_at_unicode(45, 31, L"⠀⠀⠀⠀⠀⠀⠀⠠⢑⠈⠄⡈⠨⡠⠠⡯⡲⡠⢃⡂ ⠀ ⢅⡚⡇⠈⢸⠧⠃⠀⠄⡈⠄⠢⠡⢙⠕⢰⢘⠀⠄⡁⠄⢂⠂⠀");
    print_at_unicode(45, 32, L"⠀⠀⠀⠀⠀⠀⠀⠀⢕⠈⡐⡀⠄⢂⢯⢺⠐⢐⠀⠂⠂⠂⡀⠂⠂⢐⠀⠨⡌⠄⡁⢐⠀⠨⢀⠐⠄⣕⠨⢂⠠⠁⠄⢀⠢⠀⠀⠀");
    print_at_unicode(45, 33, L"⠀⠀⠀⠀⠀⠀⠀⡰⡅⠂⢀⠂⢄⢮⢳⠕⠈⠄⠌⡐⢈⢀⠢⢨⢬⠠⠀⠨⣟⡆⠔⠐⠄⡁⠂⠅⢣⢫⡢⠡⠂⢁⠀⡂⢨⠄⠀⠀");
    print_at_unicode(45, 34, L"⠀⠀⠀⠀⠀⠀⣔⠝⡬⠐⠀⢨⢎⢗⢵⠑⠈⠄⠁⡀⢂⠐⡈⠈⢯⠠⠀⠀⣿⡪⢀⠁⠄⠠⠁⠨⢀⠓⡧⡡⠁⡀⠄⢂⠨⡯⡀⠀⠀");
    print_at_unicode(45, 35, L"⠀⠀⠀⠀⢀⣜⠎⠨⣎⠐⣈⠎⡎⡯⡂⠅⠐⡀⠡⠐⡀⠁⠄⡁⣗⠄⡀⡐⡵⣯⠄⠠⠀⡁⠨⠀⠂⡀⠝⡮⣂⠄⠨⠀⢸⡹⡵⡀⠀");
    print_at_unicode(45, 36, L"⠀⠀⠀⢀⡮⠎⢀⢞⢕⡐⡎⢐⠱⡓⠐⠀⠂⢀⠁⠠⠀⠌⡀⠺⠃⠔⡀⠄⢺⣳⠈⠄⡁⠄⠠⠈⢀⠠⠐⡩⢺⢬⠀⡈⢔⢕⠝⣖⠀⠀⠀⠀");
    print_at_unicode(45, 37, L"⠀⠀⡠⣳⠍⠀⡼⡑⢕⠅⡃⡘⡈⠄⠈⠠⠈⢀⠀⡂⠡⠐⠠⠡⡈⢄⢀⠄⡠⠘⢄⠂⠄⢂⠐⠀⠄⠠⠀⠄⠡⠣⡣⡀⡪⡪⢅⢳⢅⠀⠀⠀");
    print_at_unicode(45, 38, L"⠀⡐⣜⠗⠀⡰⡫⡘⡜⠄⠌⡐⠀⠠⢈⠀⢐⠀⢂⠐⠀⠌⡨⠨⡐⠐⠔⢌⠄⠑⠐⡁⠂⢐⠀⡁⠠⠐⠀⠐⠀⢑⢘⢆⢪⠪⡸⠈ ⡮⡀⠀⠀");
    print_at_unicode(45, 39, L"⠀⡐⣜⠗⠀⡰⡫⡘⡜⠄⠌⡐⠀⠠⢈⠀⢐⠀⢂⠐⠀⠌⡨⠨⡐⠐⠔⢌⠄⠑⠐⡁⠂⢐⠀⡁⠠⠐⠀⠐⠀⢑⢘⢆⢪⠪⡸⠈  ⡮⡀⠀⠀");


    print_at(15, 45, "                                                                    ");
    print_slow_at2(15, 45, "\"안녕 ? 기다렸어 지금 까지 계속... 계속,\"\n", 40);
    Sleep(1000);
    print_at(15, 45, "                                                                    ");
    print_slow_at2(15, 45, "\"나는 당신이 찾던 마왕, 조강현이야. \"\n", 40);
    Sleep(1000);
    print_at(15, 45, "                                                                   ");
    print_slow_at(15, 45, "드디어 마왕을 조우했다...");
    Sleep(1000);
    print_at(15, 45, "                                                                   ");
    move_cursor(43, 4);
    printf("호감도 : %d", totaldoki);
    while (1) {
        int choice;
        print_slow_at(15, 45, "무엇을 할까 ? ");
        Sleep(1000);
        print_at(15, 45, "                                                                ");
        move_cursor(15, 46);
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            switch (teat_bose3) {
            case 0:
                print_slow_at2(15, 45, "\"어, 어엇 안녕하세요...?\"", 40);
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_slow_at2(15, 45, "\"응, 기다렸어. \"", 40);
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_at(4, 28, "_______________________________");
                print_at(4, 29, "|                             |");
                print_at(4, 30, "|    1. > 왜 기다리셨죠 ?     |");
                print_at(4, 31, "|                             |");
                print_at(4, 32, "|    2. > 저도 기다렸어요     |");
                print_at(4, 33, "|_____________________________|");
                Sleep(1000);
                int choice1;
                scanf("%d", &choice1);
                move_cursor(15, 46);
                print_at(4, 28, "                               ");
                print_at(4, 29, "                               ");
                print_at(4, 30, "                               ");
                print_at(4, 31, "                               ");
                print_at(4, 32, "                               ");
                print_at(4, 33, "                               ");
                switch (choice1) {
                case 1:
                    print_slow_at(15, 45, "\"...몰라서 묻는거야 ? ");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"좀 심각하네...\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"내가 원한 용사님은 이런게 아니였는데\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"처음부터 다시 경험하고 오도록 해.\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    exit(0);
                case 2:
                    print_slow_at(15, 45, "'젠장 무슨 소리를 하는거지 나는 ?'");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\" 그럴 줄 알았어 ! 지금까지 지켜봤으니까...\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"... 제 모험 내내 조언해주시던분, 마왕님 맞으시죠?\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    teat_bose3++;
                    totaldoki += 10;
                    move_cursor(43, 4);
                    printf("호감도 : %d", totaldoki);
                    break;
                default:
                    print_slow_at(15, 45, "\"뭐하는거야 ?\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    break;
                }
            case 1:
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_slow_at(15, 45, "\"맞아, 전부 다 나였어,\"");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_slow_at(15, 45, "\"그러면 한 번 더 질문할게, 내가 왜 너를 도와줬을까 ?\"");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_slow_at(15, 45, "\"너는 용사고 나는 마왕인데 말이야...\"");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_slow_at(15, 45, "엇.... 이유가 뭐지");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_at(4, 28, "_______________________________");
                print_at(4, 29, "|                             |");
                print_at(4, 30, "|    1. > 솔직히 모르겠어요   |");
                print_at(4, 31, "|                             |");
                print_at(4, 32, "|    2. > ...좋아해서 ?       |");
                print_at(4, 33, "|_____________________________|");
                int choice2;
                scanf("%d", &choice2);
                move_cursor(15, 46);
                print_at(4, 28, "                               ");
                print_at(4, 29, "                               ");
                print_at(4, 30, "                               ");
                print_at(4, 31, "                               ");
                print_at(4, 32, "                               ");
                print_at(4, 33, "                               ");
                switch (choice2) {
                case 1:
                    print_slow_at(15, 45, "\"솔직하네, 난 그런게 좋아\"");
                    Sleep(1000);
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"처음엔, 호기심 때문이었지, 나를 무찌를 용사가 또 왔다 잖아 ?\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "\"알고 있겠지만 지금까지... 수많은 용사가 소환됐었어\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"아아... 지치지도 않나 걔네는. \"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "피로함이 느껴지는 말이다");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"뭐, 그래 호기심이였지... 처음에는\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "\"근데 지금은 좀 다른거 같아\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                                      ");
                    print_slow_at(15, 45, "\"이게 뭔지는 모르겠지만...\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "\"...넌 좀 그동안의 용사들이랑 다른것 같거든\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "조강현은 희미하게 웃는다");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"이런건, 처음인걸...\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    teat_bose3++;
                    totaldoki += 10;
                    move_cursor(43, 4);
                    printf("호감도 : %d", totaldoki);
                    break;

                case 2:
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"하아... 무슨 끔찍한 소리야 ?\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"기분나쁘네, 사라지도록 해\"");
                    Sleep(1000);
                    exit(0);
                default:
                    print_slow_at(15, 45, "\"뭐하는거야 ?\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    break;
                }
            case 2:
                print_slow_at(15, 45, "그동안 얼마나 많은 용사가 그녀를 거쳐갔을까...");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_slow_at(15, 45, "그리고 전부 나한테 했던 것 처럼 도와줬을까");
                Sleep(1000);
                print_at(15, 45, "                                                                          ");
                print_slow_at(15, 45, "'음, 이런생각을 하니까 살짝 질투심이 느껴지네'");
                Sleep(1000);
                print_at(15, 45, "                                                                                      ");
                print_slow_at(15, 45, "마왕의 얼굴이 조금 빨개진거 같다, 기분 탓 인가 ?");
                Sleep(1000);
                print_at(15, 45, "                                                                          ");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_slow_at(15, 45, "\"정말로... 도움이 많이 됐어요\"");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_slow_at(15, 45, "\"그런데 궁금한게 있어요... 왜 사람들은 당신이 사라지길 바라는거죠 ?\"");
                Sleep(1000);
                print_at(15, 45, "                                                                            ");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_slow_at(15, 45, "\"...그건\"");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_slow_at(15, 45, "\"...\"");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_at(4, 28, "_______________________________");
                print_at(4, 29, "|                             |");
                print_at(4, 30, "|    1. > 말하기 힘드시면     |");
                print_at(4, 31, "|         안해도 돼요         |");
                print_at(4, 32, "|                             |");
                print_at(4, 33, "|    2. > 세상을 멸망시킬     |");
                print_at(4, 34, "|         건가요?             |");
                print_at(4, 35, "|_____________________________|");
                int choice3;
                scanf("%d", &choice3);
                move_cursor(15, 46);
                print_at(4, 28, "                               ");
                print_at(4, 29, "                               ");
                print_at(4, 30, "                               ");
                print_at(4, 31, "                               ");
                print_at(4, 32, "                               ");
                print_at(4, 33, "                               ");
                print_at(4, 34, "                               ");
                print_at(4, 35, "                               ");
                switch (choice3) {
                case 1:
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"아니, 그런건 아니야... 그냥 이런 질문을 하는게 신선해서\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "\"많은 용사가 왔다 갔지만, 나에게 말을 거는 존재는 별로 없었거든\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "\"도와줘도, 나를 무서워 하기만 했었지\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"...사람과 대화하는건 오랜만이야 사실\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "\"정말로... 세상을 멸망시킬 건 가요?\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"글쎄... 그럴지도 몰라, 나는 모르겠지만.\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"사람들은 그렇게 생각하거든...\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "\"내가 너무 강하게 태어나서,\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"세상을 멸망시킬 운명이라나 뭐라나...\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    totaldoki += 10;
                    teat_bose3++;
                    move_cursor(43, 4);
                    printf("호감도 : %d", totaldoki);
                    teat_bose3++;
                    break;

                case 2:
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"글쎄... 그럴지도 몰라, 나는 모르겠지만.\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"사람들은 그렇게 생각하거든...\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "\"내가 너무 강하게 태어나서,\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"세상을 멸망시킬 운명이라나 뭐라나...\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    move_cursor(43, 4);
                    printf("호감도 : %d", totaldoki);
                    teat_bose3++;
                    break;

                default:
                    print_slow_at(15, 45, "\"뭐하는거야 ?\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    totaldoki -= 10;
                    break;
                }

            case 3:
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_slow_at(15, 45, "...그녀의 표정에서 씁쓸함이 느껴진다...");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_slow_at(15, 45, "그녀의 삶이 보이는 느낌이다... ");
                Sleep(1000);
                print_at(15, 45, "                                                                            ");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_slow_at(15, 45, "\"...지금까지 그러면 혼자서 지내오신거에요 ?\"");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_slow_at(15, 45, "\"음... 키우던 고양이 두마리가 말을 할 수 있게 되기 전까진\"");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_slow_at(15, 45, "\"아마 만번째 용사가 나를 없애러 오기까진 혼자였었던가...\"");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_slow_at(15, 45, "말하는 마디 마디 마다 외로움이 느껴진다...");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_slow_at(15, 45, "\"그래서 ? 너도 날 물리칠 거야 ?\"");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_slow_at(15, 45, "갑자기 마왕이 내뿜는 기세가 강해졌다 하지만...");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_slow_at(15, 45, "어딘가 울 것 같은 모습인건 기분탓이 아니겠지");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_at(4, 28, "_______________________________");
                print_at(4, 29, "|                             |");
                print_at(4, 30, "|    1. > 저는...친구가       |");
                print_at(4, 31, "|         되고싶어요          |");
                print_at(4, 32, "|                             |");
                print_at(4, 33, "|    2. > ..세상을 멸망시킬   |");
                print_at(4, 34, "|         건가요?             |");
                print_at(4, 35, "|_____________________________|");
                int choice4;
                scanf("%d", &choice4);
                move_cursor(15, 46);
                print_at(4, 28, "                               ");
                print_at(4, 29, "                               ");
                print_at(4, 30, "                               ");
                print_at(4, 31, "                               ");
                print_at(4, 32, "                               ");
                print_at(4, 33, "                               ");
                print_at(4, 34, "                               ");
                print_at(4, 35, "                               ");
                switch (choice4) {
                case 1:
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"...뭐 ?\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "\"그냥... 사실 궁금 했거든요 날 도와주는 사람이 누구인지\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                     ");
                    print_slow_at(15, 45, "\"그리고 마왕이 위협적이라기엔 마을은 너무 활기차 보였고\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                      ");
                    print_slow_at(15, 45, "\"음... 위협적이셨다면 저에게 고작 검 한자루와 돈 몇푼만 줬을까 싶고\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "\"그래서 궁금했어요, 어떤 사람일지\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"그런데 역시 제 예상이 맞았던 것 같아요 하하\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "마왕은, 아니 조강현은. 이상한 표정을 한 채로 날 처다본다");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"뭐야 그게... 진짜 바보 같아...\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"그런가요? 하지만 진실이에요\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"그리고 이렇게 귀여울줄은 몰랐고...\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"뭐, 뭣???? 무, 무슨 소리를 하는거얏...?\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "조강현은 얼굴이 새빨개진채로 생전 처음듣는 소리를 듣는 사람의 표정을 하고있다");
                    Sleep(1000);
                    print_at(15, 45, "                                                                                    ");
                    print_slow_at(15, 45, "\"...귀여워요\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "얼굴이 더 빨개진다. 이거 좀 재미있을 지도?");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"놀리지마아... 지금까지 도와준 보람이 없어 ! 멍청해서 도와준건데 !\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                         ");
                    print_slow_at(15, 45, "\"이렇게 이상한 사람이었다니...!!!\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                ");
                    print_slow_at(15, 45, "토라진 표정으로 화내는 조강현의 모습이 너무 귀여워보인다");
                    Sleep(1000);
                    print_at(15, 45, "                                                                ");
                    print_slow_at(15, 45, "...큰일난건 내쪽일지도");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    totaldoki += 40;
                    teat_bose3++;
                    move_cursor(43, 4);
                    printf("호감도 : %d", totaldoki);
                    teat_bose3++;
                    break;

                case 2:
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "마왕은 씁쓸한 표정을 지은채로 말한다");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"...내가 그러고 싶었다면 이미 멸망 시키고도 남았겠지\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "\"사람은... 많이 약한 존재야\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"...\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "마왕의 표정을 보자 나까지 심장이 아려오는 기분이다....");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "...얼마나 외로웠을까");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    move_cursor(43, 4);
                    printf("호감도 : %d", totaldoki);
                    teat_bose3++;
                    break;
                default:
                    print_slow_at(15, 45, "\"뭐하는거야 ?\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    teat_bose3++;
                    break;
                }
            case 4:
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_slow_at(15, 45, "큰일났다 그녀가 너무 귀여워 보인다");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_slow_at(15, 45, "그리고 그녀를 방치해둔 인간들에게 화가난다");
                Sleep(1000);
                print_at(15, 45, "                                                                            ");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_slow_at(15, 45, "추측해 보건데, 아마 그녀는 너무 강하게 태어난 죄로 척살령이 내려졌겠지");
                Sleep(1000);
                print_at(15, 45, "                                                                            ");
                print_slow_at(15, 45, "...인간들은 자신들과 다르면 배척하거나 두려워 하니까");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_slow_at(15, 45, "아주 어렸을 때 부터 혼자 지내왔겠지...");
                Sleep(1000);
                print_at(15, 45, "                                                              ");
                print_slow_at(15, 45, "... 그녀를 행복하게 해주고 싶다");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_slow_at(15, 45, "하지만 마음에 걸리는게 있다");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_slow_at(15, 45, "그동안 그 많던 용사들을, 그녀는 어떻게 한거지 ?");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_slow_at(15, 45, "\"...그런데 혹시 질문 하나만 해도 되나요?\"");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_at(4, 28, "_______________________________");
                print_at(4, 29, "|                             |");
                print_at(4, 30, "|    1. > 용사들을 죽였       |");
                print_at(4, 31, "|         나요 ?              |");
                print_at(4, 32, "|                             |");
                print_at(4, 33, "|    2. > 그래서 친구가       |");
                print_at(4, 34, "|         되어 주실래요?      |");
                print_at(4, 35, "|_____________________________|");
                int choice5;
                scanf("%d", &choice5);
                move_cursor(15, 46);
                print_at(4, 28, "                               ");
                print_at(4, 29, "                               ");
                print_at(4, 30, "                               ");
                print_at(4, 31, "                               ");
                print_at(4, 32, "                               ");
                print_at(4, 33, "                               ");
                print_at(4, 34, "                               ");
                print_at(4, 35, "                               ");
                switch (choice5) {
                case 1:
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"...\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "\"너도 내가 무서운거지?\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                     ");
                    print_slow_at(15, 45, "조강현은 상처받은 표정을 지어보인다");
                    Sleep(1000);
                    print_at(15, 45, "                                                                      ");
                    print_slow_at(15, 45, "\"아, 아니에요 그냥 궁금해져서...\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                       2");
                    print_slow_at(15, 45, "\"... 표정에서 다 보여\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"... 너도 똑같구나\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "조강현은 무척이나 실망한 표정을 짓는다");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"아아... 나는 그렇게 많은 용사들을 봐와놓고 또,\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"말도, 안되는. 기대를 해버린거구나\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "갑자기 조강현의 분위기가 달라졌다... 어린아이 같았던 모습은 온데간데 없다");
                    Sleep(1000);
                    print_at(15, 45, "                                                                                 ");
                    print_slow_at(15, 45, "조강현은 씁쓸하게 웃으면서 말을 이어한다");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"죽일 거면 진작에 죽였는데, 손가락만 까딱해도 죽는 걸...\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                                    ");
                    print_slow_at(15, 45, "기세가 점점 강해진다... 숨이 조여오는 것 같다");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "그렇다... 아 인간들의 적이 되고도 살아있을 수 있던 건... ");
                    Sleep(1000);
                    print_at(15, 45, "                                                                   ");
                    print_slow_at(15, 45, "이건... 있으면 안된다. 존재하면 많은... 종말이 올것이다");
                    Sleep(1000);
                    print_at(15, 45, "                                                                         ");
                    print_slow_at(15, 45, "강한 공포심이 느껴진다");
                    Sleep(1000);
                    print_at(15, 45, "                                                                ");
                    print_slow_at(15, 45, "\"...괴물\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                ");
                    print_slow_at(15, 45, "그 말을 들은 조강현, 마왕은 웃는다");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"응, 나는 괴물, 조강현, 세계를 멸망시킬 예지를 받은 아이\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                   ");
                    print_slow_at(15, 45, "\"용사들을 어떻게 했냐고 ? 무슨 대답을 기대했어 ?\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                         ");
                    print_slow_at(15, 45, "미소지으며 웃는 모습이 섬뜩하다");
                    Sleep(1000);
                    print_at(15, 45, "                                                                ");
                    print_slow_at(15, 45, "\"...\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                ");
                    print_slow_at(15, 45, "\"죽이진, 않았지\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "히죽웃으며 말하는 내용은 가히 충격적이였다");
                    Sleep(1000);
                    print_at(15, 45, "                                                                   ");
                    print_slow_at(15, 45, "\"친구라는건 동등한 존재잖아 ? 나한테 친구하자는 용사는 지금것 꽤 많았어\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                                 ");
                    print_slow_at(15, 45, "\"뭐, 난 외로웠으니까 아무나 좋았지만 말이야...\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                ");
                    print_slow_at(15, 45, "\"날 공포심에 가득 찬 눈으로 바라보며, 떨리는 목소리를 감추고\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                   ");
                    print_slow_at(15, 45, "\"...비위를 맞춰주려 노력하는 모습을 보는건, 더 외로웠거든\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                       ");
                    print_slow_at(15, 45, "\"... 그래서. 죽이진 않았지, 다만...\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                   ");
                    print_slow_at(15, 45, "\"용사는 어디선가 소환된 존재들이잖아 ?\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                         ");
                    print_slow_at(15, 45, "\"기억을 읽어, 영원한 꿈 속에 가둬버렸지...\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                ");
                    print_slow_at(15, 45, "\"나도 깨울 수 없는 영원한 꿈 속 으로...\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                ");
                    print_slow_at(15, 45, "\"아아 그리고 나에게 우호적이지 않았던 '진짜' 용사들은 모두...\"");
                    Sleep(1000);
                    print_at(15, 45, "\"뭐 이건 상상에 맡길게\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                   ");
                    print_slow_at(15, 45, "...");
                    Sleep(1000);
                    print_at(15, 45, "                                                                   ");
                    print_slow_at(15, 45, "\"자, 이번엔 너의 차례야\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                                 ");
                    print_slow_at(15, 45, "\"고양이들이 죽지 않았던 건 처음이라서...\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                ");
                    print_slow_at(15, 45, "\"다를거라, 날 무서워 하지 않을거라 기대했던 내가 멍청했지\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                   ");
                    print_slow_at(15, 45, "마왕은 싱긋 웃으며 다가온다");
                    Sleep(1000);
                    print_at(15, 45, "                                                                       ");
                    print_slow_at(15, 45, "공포심에 몸이 움직이지 않는다");
                    Sleep(1000);
                    print_at(15, 45, "                                                                   ");
                    print_slow_at(15, 45, "아아... 그 꽃밭의 정체는 전부...");
                    Sleep(5000);
                    print_at(15, 45, "                                                                         ");
                    print_slow_at2(15, 45, "\"잘 자\"", 50);
                    Sleep(1000);
                    Death();
                    break;

                case 2:
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "뭐, 조강현 그녀가 용사들을 죽였을 것 같지는 않다...");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "그리고 그녀는 음... 척 봐도 강해보이는데 어련히 잘 했겠지");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "'그보다 그녀랑 친구가 되고싶어, 행복하게 해주고싶다'");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "'그녀가 나를 도와줬던 것 처럼 나도 도와주고 싶다'");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "'나는 약하니까... 그녀가 아니였다면 이세계에서 살아남기는 힘들었겠지'");
                    Sleep(1000);
                    print_at(15, 45, "                                                                                ");
                    print_slow_at(15, 45, "뭐 그리고 조강현은....");
                    Sleep(1000);
                    print_at(15, 45, "                                                                           ");
                    print_slow_at(15, 45, "'...이런말 좀 그렇지만 너무 내 스타일이다. 한눈에 반해버린거같아...'");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "'그녀가 용사들을 죽였던 말던 상관없을것 같아'");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "'음 다짜고짜 결혼하자고하면 좀 부담스럽겠지... 일단 친구부터 하자'");
                    Sleep(1000);
                    print_at(15, 45, "                                                                      ");
                    print_slow_at(15, 45, "\"아까 대답을 못들었는데. 저랑 친구가 되어주시곘어요?\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "친구가 되어달라는 말을 들은 조강현은 벙 찐 표정을 지은채로 굳어있다");
                    Sleep(1000);
                    print_at(15, 45, "                                                                           ");
                    print_slow_at(15, 45, "\"...\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "\"...제가 주제넘었나요? 그렇다면 죄송...\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "조강현은 내 말을 끊으며, 말했다");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"...물어보지 않는거야 ?\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"네 ? 무엇을요 ?\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "\"...생각, 했잖아. 전임용사들은 어떻게 됐는지\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                           ");
                    print_slow_at(15, 45, "'헉 독심술 능력을 가지고 계신건가...?'");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "\"독심술도 할 줄 아시나요 ?\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"...응, 할 수 있어. 그래서 ?\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "그러면 내가 한 생각들을 모두...?");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "예상치 못한 상황에 당황스러워서 가만히 있자");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "조강현은 나를 쳐다보더니");
                    Sleep(4000);
                    print_at(15, 45, "                                                                           ");
                    print_slow_at(15, 45, "얼굴이..... 엄청 달아올랐다");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "\"너, 넛, 너, 너. 뭣, 무,무슨 생각을, 뭐하는, 이게,\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "'아 독심술은 액티브인건가'");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "강현이는 얼굴이 새빨개진 채로 엄청 굳었다...");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "...고장난건 아니겠지? ");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "'음 생각해보니 나도 좀 부끄럽다...'");
                    Sleep(1000);
                    print_at(15, 45, "                                                                           ");
                    print_slow_at(15, 45, "\"너... 아니, \"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "강현이는 울먹거리면서 말을 엄청 더듬으며 말한다");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"벼,변태....변태....\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "'아 귀엽다'");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "쥐어짜내며 말하는 문장이 변태라니... 컨셉과다다");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "\"...그래서 친구가 되어주시겠어요?\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                           ");
                    print_slow_at(15, 45, "\"... 내가, 무섭지 않아 ?\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "음 무서운가? 잘 모르겠다 귀여운건 잘 알겠는데...");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"그, 그만 ! 귀엽, 그, 그런생각은 그만해... !\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "강현이는 한참을 빨개진채로 있더니 겨우 침착한 건지 말을 이어내렸다");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "\"나는 나쁜, 괴물이야\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "\"지금까지 사람도 많이 죽였고... 무엇보다 용사들을 어떻게 했는지 알아?\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                           ");
                    print_slow_at(15, 45, "\"궁금해 했었지, 대답해줄게\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "마왕이 앉아있던 곳의 뒤편에 위치한 문에서 범상치 않은 기운이 느껴진다....");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"...용사들은 모두 잠들어있어 이곳에\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "조강현은 문을 가리키며 말했다");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"...너희는 차원이동을 해서 온 거, 잖아 ?\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "\"내가 보여줬던 꽃밭...기억해 ?\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                           ");
                    print_slow_at(15, 45, "\"그 시체들은 모두... 네 전에 왔던 용사들의 시체야\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "\"... 영원한 꿈을 꾸게 했어\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"살아있으면... 날 항상 무서워 하길래\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"그들이 왔던 곳의 모습을 무대로한. 꿈이라는 이름의 감옥에,\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"...그 마법은 너무나도 방대해서 내가 풀 수 없어\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "\"이 말은 깨어날 일도 없다는 거지...\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                           ");
                    print_slow_at(15, 45, "\"...그들을 재우고, 행복한 꿈을 꾸게 한 뒤\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "\"행복해 하는 그들을 앞에 두고... 같이... 해골이 되어 바스러질때까지...\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                                ");
                    print_slow_at(15, 45, "... 그녀의 표정이 너무나도 외로워 보인다");
                    Sleep(1000);
                    print_at(15, 45, "                                                                                ");
                    print_slow_at(15, 45, "어떤말을 꺼내야 좋을까... 그녀는 어떤 마음으로 살아있는 거지");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"...이런 내가 징그럽지 않아?\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "\"전에 왔었던 이 사실을 안 용사들은 하나같이 겁에 질리거나, 날 혐오했는데...\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                                      ");
                    print_slow_at(15, 45, "전혀, 이런, 표정을 짓는 사람을... 누가 감히 그렇게 생각할 수 있을까");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "\"...넌 확실히 다른 용사들과 다르구나\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "조강현은 희미하게 웃는다");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"다음이 마지막 용사라서 조급했는데...\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "\"난 널 만나기 위해서 기다렸던 거구나\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "아아...");
                    Sleep(2000);
                    print_at(15, 45, "                                                                                      ");
                    print_slow_at(15, 45, "\"응, 친구부터 시작해볼까...?\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                                          ");
                    print_slow_at(15, 45, "강현이는 얼굴을 붉히며 말했다");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    print_slow_at(15, 45, "그녀를 행복하게, 해주고싶다");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    totaldoki += 50;
                    move_cursor(43, 4);
                    printf("호감도 : %d", totaldoki);
                    teat_bose3++;
                    break;
                default:
                    print_slow_at(15, 45, "\"뭐하는거야 ?\"");
                    Sleep(1000);
                    print_at(15, 45, "                                                            ");
                    break;
                }
            default:
                print_slow_at(15, 45, "선택할 때다");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                break;
            }
            break;
    case 2:
        if (pro_boss3 == 1 || kill_boss3 == 1) {
            print_slow_at(15, 45, "...방법은 하나다");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            break;
        }
        
        if (teat_bose3 == 0) {
            print_slow_at(15, 45, "무엇하려고 ? 일단 마왕과 대화를 해보는게 좋을거같아...");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
        }
        else if(totaldoki < 100 && kill_boss3 == 0 && pro_boss3 == 0) {
            print_slow_at(15, 45, "마왕은 세상을 멸망 시킬 것 같지는 않지만... 내가 화가 난다");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "그녀는 왜 그런 수모를 겪었어야 했지?");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "내가 2147483536번 째 용사라 했다 ");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "직감적으로 느껴진다. 내 다음이 마지막 용사라는걸");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "그 뒤에는 그녀는 어떻게 되는거지?");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "자신을 찾아오는 용사도 없는채로 혼자서 고양이 두마리와 지내는건가 ?");
            Sleep(1000);
            print_at(15, 45, "                                                                         ");
            print_slow_at(15, 45, "...그건 너무 외롭잖아");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "그녀는 아마 불로불사인것 같았는데");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "그렇다면 죽지도 않는채로 평생을 혼자서...");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "... 마음이 찢어질 것 같다");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "의지가 불타오른다...");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "그녀를 행복하게 해주고 싶다");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "하지만... 그녀를 어떻게 행복하게 해 주지?");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "...");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "그녀를 편히 보내주자");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "이 끝없는 지옥에서...");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "그녀를... 해방시켜주자");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            kill_boss3 += 1;
            clear_text();
            Fight_UI3_kill();
            print_at_unicode(45, 5, L"⣿⣿⣿⣿⣿⣿⣿⣿⣶⣤⣄⡀⠀⢿⡿⣁⠀⢆⡘⠤⡘⠠⢰⠃⡄⠂⠄⠀⠀⠀⠀⡀⡆⠌⢄⠀⠀⢠⡇⠂⡌⠄⠀⠀⠀⠀⠀⠀⠡⣖⠀⢃⠸⠀⠸⣟⡄⠘⡽⡜⡄⠀⠀⠀⠈⠦⠀⠀⠀⠸");
            print_at_unicode(45, 6, L"⣿⣿⣿⣿⣿⣿⡿⠁⠈⢻⡝⣟⣷⡿⢁⠤⢀⠢⢌⠰⡀⠂⡟⠠⡄⠈⠀⠀⣀⠤⠐⣰⠌⡈⢄⠂⡡⣺⠄⡇⠰⠈⡄⢃⠰⢀⠰⢀⠂⢽⠂⢼⠐⡠⠄⣿⡼⡀⠱⢹⡰⠀⠀⠀⠀⠀⣆⠀⠀⠀");
            print_at_unicode(45, 7, L"⣿⣿⣿⣿⣿⣿⠁⢄⠠⢀⣹⣞⡿⢁⢊⠰⢀⠎⡐⢂⠁⢳⠋⠴⠁⠀⣠⠞⡠⢁⣺⡇⠤⢁⠢⠘⢠⡿⢰⡏⠄⢃⡐⢈⠰⢈⠰⢸⠌⣸⠌⢺⡐⠤⢈⣽⣧⢩⡄⢉⢧⠡⠉⡍⠒⠤⣸⡀⠀⠀");
            print_at_unicode(45, 8, L"⣿⣿⣿⣿⣿⣿⠩⡐⠌⢿⡯⣿⠇⡌⠢⢡⠈⡔⠈⠂⠃⢾⢈⠒⠀⡴⢁⡾⠑⣸⢻⢀⠒⢠⠂⡉⢼⡇⢸⡇⠌⠄⡄⢃⠰⢈⠰⠸⡂⢼⢈⢹⠆⠰⢸⢿⠸⡆⢷⢈⠸⣄⠃⠤⢉⡐⠨⣧⠀⡀");
            print_at_unicode(45, 9, L"⣿⣿⣿⣿⣿⣿⡟⣿⣻⢾⡷⣿⠐⡄⢃⠆⠈⠐⠁⠀⠀⣾⠸⠀⢀⡇⣼⠇⢡⡏⣇⠢⠘⡀⠆⢡⡎⡇⢺⣇⠘⢠⠐⠨⡐⢂⠢⢡⡇⠾⢈⢸⡃⡘⢼⢸⠀⢻⠈⣇⠌⣷⢈⡐⠂⠤⢱⢿⠀⠔");
            print_at_unicode(45, 10, L"⣿⣿⣿⣿⣿⣿⣯⡚⢧⡻⣽⡏⠰⡈⢄⠈⠀⡀⠀⠀⠀⣿⢸⢀⢂⢸⡟⡈⢼⢳⠁⢂⡁⠆⡑⢺⢱⡇⣼⢿⠈⠄⡈⠡⢐⠠⢁⢺⡄⡟⡀⢺⢁⡴⡿⢸⢄⠈⡇⢺⡆⢸⡆⠤⢉⠰⢐⣸⠈⠔");
            print_at_unicode(45, 11, L"⣿⣿⣿⣿⣿⣿⣿⣷⠁⢿⣹⡇⠡⠌⠀⠀⠀⠀⠀⠀⢀⡿⣸⠀⢂⣿⢃⠐⡞⡼⢈⣄⣐⣤⡴⡯⢼⠴⡿⢼⠾⠶⠶⠶⣤⠂⠌⣹⢰⡇⡐⡏⢸⢡⡇⡽⡀⠑⢳⠐⣷⠀⢿⡇⠌⡐⠂⡽⢈⡐");
            print_at_unicode(45, 12, L"⣿⣿⣿⣿⣿⣿⣿⡏⠠⣄⣿⠄⠀⠀⠀⠀⠀⡅⠀⠠⢠⡟⣧⠈⣰⣿⠀⣼⠴⡗⢉⠉⡐⢠⢷⠃⢸⢠⠃⢸⣿⠀⢀⠂⢸⠀⢂⡏⣼⠁⣸⠁⡏⡜⡇⡧⠬⣴⣼⣀⢿⢇⢸⣹⠀⠀⡁⠇⡃⠄");
            print_at_unicode(45, 13, L"⣿⣿⣿⣿⣿⣿⣿⣇⡷⠊⢸⠀⠀⠀⢠⣦⣄⠇⡈⢁⠆⣿⣧⠐⣽⡇⠐⣾⢰⡇⢂⠡⢈⡏⡞⠀⡼⣸⠀⠀⣿⠀⠀⠂⣏⠐⢸⢡⡟⢀⡏⣼⢱⠁⣧⠁⠀⠀⠈⡟⣻⠺⣤⣿⡆⠐⠀⡇⠄⡈");
            print_at_unicode(45, 14, L"⣿⣿⣿⣿⣿⣿⣿⣿⣄⠂⣿⠀⠀⢠⠃⢿⣣⠐⠠⠌⠠⣿⣿⠀⢿⠃⢌⣿⠸⡇⢀⢂⡼⡼⠀⢀⢧⡯⠄⡀⣿⠀⠌⢰⡇⠈⣼⡿⠁⡞⣸⢇⠇⢰⡟⠀⠀⠀⠈⡇⡝⠀⢇⡟⡧⣄⠂⡇⠀⢰");
            print_at_unicode(45, 15, L"⣿⣿⣿⣿⣿⡿⢭⢿⣿⣶⣻⡆⠀⡏⠠⠸⡽⣏⠐⡈⡐⢿⣻⡠⣿⠈⢸⡍⣆⣧⣾⣾⣿⣿⣶⣾⣾⣆⠄⠀⣿⡆⠀⣸⠁⣸⡿⢁⡞⡕⡹⡌⠀⣼⢁⠤⠤⢀⣀⡇⡇⠀⠸⣼⡇⠀⠑⣷⠈⣸");
            print_at_unicode(45, 16, L"⣿⣿⣿⣿⣿⡹⢎⣗⡻⣿⣷⣇⠘⣇⠄⡁⢻⣽⡆⠡⠠⢹⣿⡓⣿⣴⣿⣿⣿⣿⡿⣟⣿⢫⣟⣏⠉⠙⠛⠶⣿⢿⠀⡞⢀⡟⢡⣾⠊⣰⠟⠀⣼⠃⣐⣤⣴⣦⣤⣧⣇⣠⠀⣿⡇⠀⡁⡏⠀⡿");
            print_at_unicode(45, 17, L"⣿⣿⣿⡟⣧⣛⡭⢶⡙⣿⢻⣿⡄⢻⡔⠠⡈⢧⢿⡆⢡⠈⢿⣇⣷⣿⡿⠛⣯⢽⡳⢧⡞⠀⠀⣽⡀⠀⠀⠀⠛⠘⠻⢣⣞⣴⠟⠁⠠⠏⠀⠐⠁⢸⣿⢿⣟⠿⣿⡿⣿⣷⣤⣸⡂⠀⢸⠃⢰⠇");
            print_at_unicode(45, 18, L"⣿⣿⡿⣹⣧⡓⢾⢷⡟⢸⣯⢹⣷⡌⢻⣄⠱⣌⠳⣿⣦⠲⠾⣿⣿⣿⠁⠈⣟⠊⢿⡧⢿⠃⡜⣸⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣏⣟⡑⢀⡻⡴⢷⠈⠻⣿⣿⣟⠋⡟⢀⡎⠄");
            print_at_unicode(45, 19, L"⣿⣿⠳⣽⠲⣝⡿⢸⡇⣸⠙⣷⢺⣿⣧⡻⣷⣌⢢⡙⢽⣷⣤⠘⢧⠙⢦⡀⢻⡌⠀⢠⢁⠒⢯⡀⠀⠀⠀⠀⠀⡀⠀⢀⠀⢀⠀⠀⠀⠀⠀⠀⠀⡏⣷⣹⡏⠵⡙⣺⠀⠀⠸⣿⣿⣾⢁⡾⠀⣲");
            print_at_unicode(45, 20, L"⣿⢫⡝⣾⢹⣾⢃⢹⡇⢼⠂⣿⣹⠋⢉⡿⣾⣿⣷⣌⠲⣽⢿⣿⣮⣷⣀⠈⠀⠙⠗⠒⠚⡋⠉⠀⠀⠀⠀⣺⠂⠀⠀⢀⠀⠠⠐⣀⡀⠂⠀⠀⠀⢷⢈⠩⠀⡡⠲⠏⠀⠀⣸⢟⣽⣫⡟⢁⣴⢏");
            print_at_unicode(45, 21, L"⣏⢷⣙⣮⠟⡐⠢⢼⡇⢸⡿⢧⣟⠀⡇⡄⣤⢩⢿⣛⢷⣤⣭⣛⢿⣮⠉⠳⠦⣤⠁⠁⡡⢈⢄⠡⠅⡆⠂⠀⠀⡈⠀⢈⡠⠆⠨⢀⠀⠀⠀⠄⠐⠈⠙⡲⢷⡼⡆⠀⠄⡐⠁⣿⣿⣋⣴⣾⢋⣾");
            print_at_unicode(45, 22, L"⣞⢺⣼⠏⡐⠌⡁⣿⡇⢸⡇⠼⣿⠀⢷⠀⢹⡆⣿⡉⠚⠶⣭⣻⣿⡟⠢⢄⢤⢇⡀⡅⠦⠠⡴⠀⠀⠐⢐⠀⠆⠃⠄⠖⠉⠂⠅⠊⠁⢒⠄⠐⣀⠀⠂⠉⣀⠁⡄⠁⠈⠐⢸⣿⢫⣿⡳⣵⡿⢿");
            print_at_unicode(45, 23, L"⣎⡿⢼⠂⡅⢊⠔⣿⣵⢺⡏⠄⣿⣧⡈⠓⢌⠷⢾⡇⢁⠢⢀⢹⠑⣷⠈⡠⠏⠤⠨⣁⢃⠕⠋⡫⢗⠉⠈⡂⠁⠀⢂⠐⢁⠣⠀⠁⠀⠘⠒⠥⠴⢄⢀⠐⠁⠀⠐⠀⠀⠈⡿⣬⡿⢣⡓⣸⣇⢻");
            print_at_unicode(45, 24, L"⣾⣃⡯⢼⣀⠣⣈⣿⡽⣺⠛⢠⠹⡻⣿⣦⡀⠑⠪⣇⠂⠔⡈⡾⠊⣿⠎⠵⠃⡓⠀⡀⠉⠄⠆⠁⠉⠀⠈⠡⠂⠀⠀⡀⢈⣀⠊⣡⠂⠀⡐⠛⠊⢁⠰⠖⠃⠀⠁⢀⡀⢰⠟⡞⠡⢠⢰⣿⠸⣸");
            print_at_unicode(45, 25, L"⣿⣿⣳⢯⣿⣿⣿⣷⣽⣹⡇⠌⣷⢳⢋⠻⢿⣦⣀⡟⡀⠊⢰⡇⠂⣿⡇⠠⠁⠀⠁⠀⡐⠀⠀⠀⠀⠀⠀⠀⠀⠀⡠⡔⠁⠀⠉⠢⢀⠀⠀⠀⠀⠈⠈⠁⢀⠠⠊⠀⠈⢺⡞⠠⢁⢂⣯⡏⠵⡘");
            print_at_unicode(45, 26, L"⣿⣿⡜⣿⣿⣿⣿⣿⢾⣻⣧⡂⢹⣏⣿⡄⠌⢻⣿⣧⠀⠡⣸⠠⠁⣾⡇⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⠀⢀⡠⠐⠁⠀⠀⠀⠀⠀⠀⠀⠉⠫⣦⠀⠀⢀⠔⠁⠀⠀⠀⡀⠀⠙⢦⢁⡞⣼⡙⢦⠑");
            print_at_unicode(45, 27, L"⣿⣿⡽⣹⣿⣿⣿⣿⡯⣷⣯⢿⣄⠻⣜⣷⡈⠄⢻⣷⠈⢠⡗⠠⠁⣿⢸⣄⠀⠀⠀⠀⠀⠀⢀⡔⠊⠉⠀⠀⠀⠀⠀⠀⡰⠂⠤⣀⠀⠀⢀⣃⠀⣰⠁⠀⠀⡴⢴⣧⠀⡀⠀⠀⠙⢦⡏⡝⢢⠌");
            print_at_unicode(45, 28, L"⡿⣿⣿⣽⣿⢿⣿⣿⡷⣣⢿⣯⣻⢷⣽⢞⣿⡄⠂⣿⠀⣸⠃⠠⢁⣷⠸⡇⠑⢤⡀⠀⣠⠞⠁⠀⠀⠀⠀⠀⠀⣀⠔⠀⠀⠀⠀⠈⢧⡀⢿⣿⣾⡿⠁⡠⢊⣴⣿⢸⡷⣄⣐⠀⢀⠄⠙⠓⠧⣌");
            print_at_unicode(45, 29, L"⣿⣷⣿⣿⣿⣿⣿⣿⡿⣵⢫⣷⣏⣟⣾⣻⣾⣿⣆⢿⠀⡿⠀⠀⠂⣼⠐⣿⡀⢀⡼⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠒⢄⡀⠀⠀⠀⠀⠑⠮⠿⠛⠒⢈⣴⣿⣿⡏⡾⢁⠈⣿⠖⠁⠀⠀⠀⠀⠀");
            print_at_unicode(45, 30, L"⣿⣿⣿⣿⣿⣿⣿⣿⣿⣳⣿⣿⣿⣯⣟⣷⢯⣿⣿⣿⢰⠃⠀⠀⠐⢸⠀⣻⠟⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠲⠄⡀⠀⠀⠀⢀⣠⣾⣿⣿⣿⣿⣃⠇⢂⢡⠏⠀⠀⠀⠀⢀⠀⠀");
            print_at_unicode(45, 31, L"⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣞⢾⡻⢷⣯⣿⣼⠀⠀⠀⢀⡼⠞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠲⣤⣀⡀⠀⠀⠀⠀⠈⠢⣤⣾⣿⣿⣿⣿⣿⣿⣿⢸⠠⡱⠃⠀⠀⠀⣠⣶⠋⠀⠀");
            print_at_unicode(45, 32, L"⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⢾⣽⣯⣞⣽⡟⠀⣠⠔⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠿⣷⣤⡀⠀⠀⠀⠀⠙⢿⣿⣿⣿⣿⣷⣿⢀⡜⠁⠀⠀⣠⡞⡱⠁⠀⠀⠀");
            print_at_unicode(45, 33, L"⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢯⢿⣿⣿⣿⣧⠞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠠⢀⠀⠀⠀⠀⠀⠀⠙⢿⣷⣄⡀⠀⠀⠀⠹⢿⣿⣿⣿⣿⡼⠀⠀⢀⣾⣿⡟⠀⠀⠀⠀⠀");
            print_at_unicode(45, 34, L"⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡻⣞⢾⡹⡿⠀⠀⠀⢀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠂⢄⡀⠀⠀⣠⣿⣿⣿⣿⣦⣄⠀⠀⠀⠻⣿⣿⡟⢀⠀⣡⠂⢺⣿⡣⢀⢀⠄⠀⠀");
            print_at_unicode(45, 35, L"⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⣝⣾⣿⣧⢶⡶⣿⢿⣿⣦⣤⣀⣀⣀⣤⣀⣴⣶⣤⣤⣄⡀⠀⠀⢀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣄⠀⢠⣾⣿⣾⡷⣰⠉⡆⣹⣿⣿⣶⣿⣆⡀⢀");
            print_at_unicode(45, 36, L"⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡞⣯⢷⣏⡿⣽⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣦⣽⣿⡿⠕⠉⢆⢱⢸⣿⣿⣿⣿⣿⣿⣿");
            print_at_unicode(45, 37, L"⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⡽⣾⣹⡞⣷⡽⣞⡽⣯⢿⣹⢯⣿⣿⣿⣿⣯⣿⡿⣿⣿⣿⣿⣿⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡀⠀⠀⢪⢿⣿⣿⣿⣿⣿⣿⣿");
            print_at_unicode(45, 38, L"⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⡽⣶⢯⡽⣞⣳⢯⡽⣞⣯⣽⢫⣿⡟⣿⣻⢿⡽⣿⣿⣿⣿⣻⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡈⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿");
            print_at_unicode(45, 39, L"⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⢷⣛⡾⣽⣹⡽⢾⣹⠷⣞⣞⠿⣼⣿⡘⣯⣾⣿⢿⣹⢯⣟⡿⣿⢿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣄⠀⠀⠈⠻⣿⣿⣿⣿⣿");
            break;
        }
        else if (totaldoki >= 100 && kill_boss3 == 0 && pro_boss3 == 0) {
            print_slow_at(15, 45, "마왕은 세상을 멸망 시킬 것 같지는 않지만... 내가 화가 난다");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "그녀는 왜 그런 수모를 겪었어야 했지?");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "내가 2147483536번 째 용사라 했다 ");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "직감적으로 느껴진다. 내 다음이 마지막 용사라는걸");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "그 뒤에는 그녀는 어떻게 되는거지?");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "자신을 찾아오는 용사도 없는채로 혼자서 고양이 두마리와 지내는건가 ?");
            Sleep(1000);
            print_at(15, 45, "                                                                         ");
            print_slow_at(15, 45, "...그건 너무 외롭잖아");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "그녀는 아마 불로불사인것 같았는데");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "그렇다면 죽지도 않는채로 평생을 혼자서...");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "... 마음이 찢어질 것 같다");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "의지가 불타오른다...");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "그녀를 행복하게 해주고 싶다");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "그리고 이렇게 착하고 귀여운 그녀를 방치하고 행복하게 지낸");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "이곳의 인간들에게, 화가난다");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "그녀를 행복하게 해주고 싶다");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "하지만... 그녀를 어떻게 행복하게 해 주지?");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "생각 났다, 그녀를 행복하게 해줄 방법이");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "그녀를 설득해서, 세계를 멸망 시키자고 해보자.");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "그녀는 나만 알면 된다. 내가 행복하게 해줄거니까");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "그렇게 하려면... 우선 복수부터 해야겠지");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "고양이 두마리, 나, 그녀. 이렇게만 있어도 그녀에게 행복을 알려줄 수있어");
            Sleep(1000);
            print_at(15, 45, "                                                                              ");
            print_slow_at(15, 45, "그게 아니더라도 이곳의 인간들에게 화가난다");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "가자, 그녀를 설득하러");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            pro_boss3 += 1;
            clear_text();
            Fight_UI3_pro();
            print_at_unicode(45, 5, L"⣿⣿⣿⣿⣿⣿⣿⣿⣶⣤⣄⡀⠀⢿⡿⣁⠀⢆⡘⠤⡘⠠⢰⠃⡄⠂⠄⠀⠀⠀⠀⡀⡆⠌⢄⠀⠀⢠⡇⠂⡌⠄⠀⠀⠀⠀⠀⠀⠡⣖⠀⢃⠸⠀⠸⣟⡄⠘⡽⡜⡄⠀⠀⠀⠈⠦⠀⠀⠀⠸");
            print_at_unicode(45, 6, L"⣿⣿⣿⣿⣿⣿⡿⠁⠈⢻⡝⣟⣷⡿⢁⠤⢀⠢⢌⠰⡀⠂⡟⠠⡄⠈⠀⠀⣀⠤⠐⣰⠌⡈⢄⠂⡡⣺⠄⡇⠰⠈⡄⢃⠰⢀⠰⢀⠂⢽⠂⢼⠐⡠⠄⣿⡼⡀⠱⢹⡰⠀⠀⠀⠀⠀⣆⠀⠀⠀");
            print_at_unicode(45, 7, L"⣿⣿⣿⣿⣿⣿⠁⢄⠠⢀⣹⣞⡿⢁⢊⠰⢀⠎⡐⢂⠁⢳⠋⠴⠁⠀⣠⠞⡠⢁⣺⡇⠤⢁⠢⠘⢠⡿⢰⡏⠄⢃⡐⢈⠰⢈⠰⢸⠌⣸⠌⢺⡐⠤⢈⣽⣧⢩⡄⢉⢧⠡⠉⡍⠒⠤⣸⡀⠀⠀");
            print_at_unicode(45, 8, L"⣿⣿⣿⣿⣿⣿⠩⡐⠌⢿⡯⣿⠇⡌⠢⢡⠈⡔⠈⠂⠃⢾⢈⠒⠀⡴⢁⡾⠑⣸⢻⢀⠒⢠⠂⡉⢼⡇⢸⡇⠌⠄⡄⢃⠰⢈⠰⠸⡂⢼⢈⢹⠆⠰⢸⢿⠸⡆⢷⢈⠸⣄⠃⠤⢉⡐⠨⣧⠀⡀");
            print_at_unicode(45, 9, L"⣿⣿⣿⣿⣿⣿⡟⣿⣻⢾⡷⣿⠐⡄⢃⠆⠈⠐⠁⠀⠀⣾⠸⠀⢀⡇⣼⠇⢡⡏⣇⠢⠘⡀⠆⢡⡎⡇⢺⣇⠘⢠⠐⠨⡐⢂⠢⢡⡇⠾⢈⢸⡃⡘⢼⢸⠀⢻⠈⣇⠌⣷⢈⡐⠂⠤⢱⢿⠀⠔");
            print_at_unicode(45, 10, L"⣿⣿⣿⣿⣿⣿⣯⡚⢧⡻⣽⡏⠰⡈⢄⠈⠀⡀⠀⠀⠀⣿⢸⢀⢂⢸⡟⡈⢼⢳⠁⢂⡁⠆⡑⢺⢱⡇⣼⢿⠈⠄⡈⠡⢐⠠⢁⢺⡄⡟⡀⢺⢁⡴⡿⢸⢄⠈⡇⢺⡆⢸⡆⠤⢉⠰⢐⣸⠈⠔");
            print_at_unicode(45, 11, L"⣿⣿⣿⣿⣿⣿⣿⣷⠁⢿⣹⡇⠡⠌⠀⠀⠀⠀⠀⠀⢀⡿⣸⠀⢂⣿⢃⠐⡞⡼⢈⣄⣐⣤⡴⡯⢼⠴⡿⢼⠾⠶⠶⠶⣤⠂⠌⣹⢰⡇⡐⡏⢸⢡⡇⡽⡀⠑⢳⠐⣷⠀⢿⡇⠌⡐⠂⡽⢈⡐");
            print_at_unicode(45, 12, L"⣿⣿⣿⣿⣿⣿⣿⡏⠠⣄⣿⠄⠀⠀⠀⠀⠀⡅⠀⠠⢠⡟⣧⠈⣰⣿⠀⣼⠴⡗⢉⠉⡐⢠⢷⠃⢸⢠⠃⢸⣿⠀⢀⠂⢸⠀⢂⡏⣼⠁⣸⠁⡏⡜⡇⡧⠬⣴⣼⣀⢿⢇⢸⣹⠀⠀⡁⠇⡃⠄");
            print_at_unicode(45, 13, L"⣿⣿⣿⣿⣿⣿⣿⣇⡷⠊⢸⠀⠀⠀⢠⣦⣄⠇⡈⢁⠆⣿⣧⠐⣽⡇⠐⣾⢰⡇⢂⠡⢈⡏⡞⠀⡼⣸⠀⠀⣿⠀⠀⠂⣏⠐⢸⢡⡟⢀⡏⣼⢱⠁⣧⠁⠀⠀⠈⡟⣻⠺⣤⣿⡆⠐⠀⡇⠄⡈");
            print_at_unicode(45, 14, L"⣿⣿⣿⣿⣿⣿⣿⣿⣄⠂⣿⠀⠀⢠⠃⢿⣣⠐⠠⠌⠠⣿⣿⠀⢿⠃⢌⣿⠸⡇⢀⢂⡼⡼⠀⢀⢧⡯⠄⡀⣿⠀⠌⢰⡇⠈⣼⡿⠁⡞⣸⢇⠇⢰⡟⠀⠀⠀⠈⡇⡝⠀⢇⡟⡧⣄⠂⡇⠀⢰");
            print_at_unicode(45, 15, L"⣿⣿⣿⣿⣿⡿⢭⢿⣿⣶⣻⡆⠀⡏⠠⠸⡽⣏⠐⡈⡐⢿⣻⡠⣿⠈⢸⡍⣆⣧⣾⣾⣿⣿⣶⣾⣾⣆⠄⠀⣿⡆⠀⣸⠁⣸⡿⢁⡞⡕⡹⡌⠀⣼⢁⠤⠤⢀⣀⡇⡇⠀⠸⣼⡇⠀⠑⣷⠈⣸");
            print_at_unicode(45, 16, L"⣿⣿⣿⣿⣿⡹⢎⣗⡻⣿⣷⣇⠘⣇⠄⡁⢻⣽⡆⠡⠠⢹⣿⡓⣿⣴⣿⣿⣿⣿⡿⣟⣿⢫⣟⣏⠉⠙⠛⠶⣿⢿⠀⡞⢀⡟⢡⣾⠊⣰⠟⠀⣼⠃⣐⣤⣴⣦⣤⣧⣇⣠⠀⣿⡇⠀⡁⡏⠀⡿");
            print_at_unicode(45, 17, L"⣿⣿⣿⡟⣧⣛⡭⢶⡙⣿⢻⣿⡄⢻⡔⠠⡈⢧⢿⡆⢡⠈⢿⣇⣷⣿⡿⠛⣯⢽⡳⢧⡞⠀⠀⣽⡀⠀⠀⠀⠛⠘⠻⢣⣞⣴⠟⠁⠠⠏⠀⠐⠁⢸⣿⢿⣟⠿⣿⡿⣿⣷⣤⣸⡂⠀⢸⠃⢰⠇");
            print_at_unicode(45, 18, L"⣿⣿⡿⣹⣧⡓⢾⢷⡟⢸⣯⢹⣷⡌⢻⣄⠱⣌⠳⣿⣦⠲⠾⣿⣿⣿⠁⠈⣟⠊⢿⡧⢿⠃⡜⣸⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣏⣟⡑⢀⡻⡴⢷⠈⠻⣿⣿⣟⠋⡟⢀⡎⠄");
            print_at_unicode(45, 19, L"⣿⣿⠳⣽⠲⣝⡿⢸⡇⣸⠙⣷⢺⣿⣧⡻⣷⣌⢢⡙⢽⣷⣤⠘⢧⠙⢦⡀⢻⡌⠀⢠⢁⠒⢯⡀⠀⠀⠀⠀⠀⡀⠀⢀⠀⢀⠀⠀⠀⠀⠀⠀⠀⡏⣷⣹⡏⠵⡙⣺⠀⠀⠸⣿⣿⣾⢁⡾⠀⣲");
            print_at_unicode(45, 20, L"⣿⢫⡝⣾⢹⣾⢃⢹⡇⢼⠂⣿⣹⠋⢉⡿⣾⣿⣷⣌⠲⣽⢿⣿⣮⣷⣀⠈⠀⠙⠗⠒⠚⡋⠉⠀⠀⠀⠀⣺⠂⠀⠀⢀⠀⠠⠐⣀⡀⠂⠀⠀⠀⢷⢈⠩⠀⡡⠲⠏⠀⠀⣸⢟⣽⣫⡟⢁⣴⢏");
            print_at_unicode(45, 21, L"⣏⢷⣙⣮⠟⡐⠢⢼⡇⢸⡿⢧⣟⠀⡇⡄⣤⢩⢿⣛⢷⣤⣭⣛⢿⣮⠉⠳⠦⣤⠁⠁⡡⢈⢄⠡⠅⡆⠂⠀⠀⡈⠀⢈⡠⠆⠨⢀⠀⠀⠀⠄⠐⠈⠙⡲⢷⡼⡆⠀⠄⡐⠁⣿⣿⣋⣴⣾⢋⣾");
            print_at_unicode(45, 22, L"⣞⢺⣼⠏⡐⠌⡁⣿⡇⢸⡇⠼⣿⠀⢷⠀⢹⡆⣿⡉⠚⠶⣭⣻⣿⡟⠢⢄⢤⢇⡀⡅⠦⠠⡴⠀⠀⠐⢐⠀⠆⠃⠄⠖⠉⠂⠅⠊⠁⢒⠄⠐⣀⠀⠂⠉⣀⠁⡄⠁⠈⠐⢸⣿⢫⣿⡳⣵⡿⢿");
            print_at_unicode(45, 23, L"⣎⡿⢼⠂⡅⢊⠔⣿⣵⢺⡏⠄⣿⣧⡈⠓⢌⠷⢾⡇⢁⠢⢀⢹⠑⣷⠈⡠⠏⠤⠨⣁⢃⠕⠋⡫⢗⠉⠈⡂⠁⠀⢂⠐⢁⠣⠀⠁⠀⠘⠒⠥⠴⢄⢀⠐⠁⠀⠐⠀⠀⠈⡿⣬⡿⢣⡓⣸⣇⢻");
            print_at_unicode(45, 24, L"⣾⣃⡯⢼⣀⠣⣈⣿⡽⣺⠛⢠⠹⡻⣿⣦⡀⠑⠪⣇⠂⠔⡈⡾⠊⣿⠎⠵⠃⡓⠀⡀⠉⠄⠆⠁⠉⠀⠈⠡⠂⠀⠀⡀⢈⣀⠊⣡⠂⠀⡐⠛⠊⢁⠰⠖⠃⠀⠁⢀⡀⢰⠟⡞⠡⢠⢰⣿⠸⣸");
            print_at_unicode(45, 25, L"⣿⣿⣳⢯⣿⣿⣿⣷⣽⣹⡇⠌⣷⢳⢋⠻⢿⣦⣀⡟⡀⠊⢰⡇⠂⣿⡇⠠⠁⠀⠁⠀⡐⠀⠀⠀⠀⠀⠀⠀⠀⠀⡠⡔⠁⠀⠉⠢⢀⠀⠀⠀⠀⠈⠈⠁⢀⠠⠊⠀⠈⢺⡞⠠⢁⢂⣯⡏⠵⡘");
            print_at_unicode(45, 26, L"⣿⣿⡜⣿⣿⣿⣿⣿⢾⣻⣧⡂⢹⣏⣿⡄⠌⢻⣿⣧⠀⠡⣸⠠⠁⣾⡇⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⠀⢀⡠⠐⠁⠀⠀⠀⠀⠀⠀⠀⠉⠫⣦⠀⠀⢀⠔⠁⠀⠀⠀⡀⠀⠙⢦⢁⡞⣼⡙⢦⠑");
            print_at_unicode(45, 27, L"⣿⣿⡽⣹⣿⣿⣿⣿⡯⣷⣯⢿⣄⠻⣜⣷⡈⠄⢻⣷⠈⢠⡗⠠⠁⣿⢸⣄⠀⠀⠀⠀⠀⠀⢀⡔⠊⠉⠀⠀⠀⠀⠀⠀⡰⠂⠤⣀⠀⠀⢀⣃⠀⣰⠁⠀⠀⡴⢴⣧⠀⡀⠀⠀⠙⢦⡏⡝⢢⠌");
            print_at_unicode(45, 28, L"⡿⣿⣿⣽⣿⢿⣿⣿⡷⣣⢿⣯⣻⢷⣽⢞⣿⡄⠂⣿⠀⣸⠃⠠⢁⣷⠸⡇⠑⢤⡀⠀⣠⠞⠁⠀⠀⠀⠀⠀⠀⣀⠔⠀⠀⠀⠀⠈⢧⡀⢿⣿⣾⡿⠁⡠⢊⣴⣿⢸⡷⣄⣐⠀⢀⠄⠙⠓⠧⣌");
            print_at_unicode(45, 29, L"⣿⣷⣿⣿⣿⣿⣿⣿⡿⣵⢫⣷⣏⣟⣾⣻⣾⣿⣆⢿⠀⡿⠀⠀⠂⣼⠐⣿⡀⢀⡼⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠒⢄⡀⠀⠀⠀⠀⠑⠮⠿⠛⠒⢈⣴⣿⣿⡏⡾⢁⠈⣿⠖⠁⠀⠀⠀⠀⠀");
            print_at_unicode(45, 30, L"⣿⣿⣿⣿⣿⣿⣿⣿⣿⣳⣿⣿⣿⣯⣟⣷⢯⣿⣿⣿⢰⠃⠀⠀⠐⢸⠀⣻⠟⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠲⠄⡀⠀⠀⠀⢀⣠⣾⣿⣿⣿⣿⣃⠇⢂⢡⠏⠀⠀⠀⠀⢀⠀⠀");
            print_at_unicode(45, 31, L"⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣞⢾⡻⢷⣯⣿⣼⠀⠀⠀⢀⡼⠞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠲⣤⣀⡀⠀⠀⠀⠀⠈⠢⣤⣾⣿⣿⣿⣿⣿⣿⣿⢸⠠⡱⠃⠀⠀⠀⣠⣶⠋⠀⠀");
            print_at_unicode(45, 32, L"⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⢾⣽⣯⣞⣽⡟⠀⣠⠔⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠿⣷⣤⡀⠀⠀⠀⠀⠙⢿⣿⣿⣿⣿⣷⣿⢀⡜⠁⠀⠀⣠⡞⡱⠁⠀⠀⠀");
            print_at_unicode(45, 33, L"⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢯⢿⣿⣿⣿⣧⠞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠠⢀⠀⠀⠀⠀⠀⠀⠙⢿⣷⣄⡀⠀⠀⠀⠹⢿⣿⣿⣿⣿⡼⠀⠀⢀⣾⣿⡟⠀⠀⠀⠀⠀");
            print_at_unicode(45, 34, L"⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡻⣞⢾⡹⡿⠀⠀⠀⢀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠂⢄⡀⠀⠀⣠⣿⣿⣿⣿⣦⣄⠀⠀⠀⠻⣿⣿⡟⢀⠀⣡⠂⢺⣿⡣⢀⢀⠄⠀⠀");
            print_at_unicode(45, 35, L"⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⣝⣾⣿⣧⢶⡶⣿⢿⣿⣦⣤⣀⣀⣀⣤⣀⣴⣶⣤⣤⣄⡀⠀⠀⢀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣄⠀⢠⣾⣿⣾⡷⣰⠉⡆⣹⣿⣿⣶⣿⣆⡀⢀");
            print_at_unicode(45, 36, L"⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡞⣯⢷⣏⡿⣽⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣦⣽⣿⡿⠕⠉⢆⢱⢸⣿⣿⣿⣿⣿⣿⣿");
            print_at_unicode(45, 37, L"⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⡽⣾⣹⡞⣷⡽⣞⡽⣯⢿⣹⢯⣿⣿⣿⣿⣯⣿⡿⣿⣿⣿⣿⣿⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡀⠀⠀⢪⢿⣿⣿⣿⣿⣿⣿⣿");
            print_at_unicode(45, 38, L"⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⡽⣶⢯⡽⣞⣳⢯⡽⣞⣯⣽⢫⣿⡟⣿⣻⢿⡽⣿⣿⣿⣿⣻⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡈⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿");
            print_at_unicode(45, 39, L"⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⢷⣛⡾⣽⣹⡽⢾⣹⠷⣞⣞⠿⣼⣿⡘⣯⣾⣿⢿⣹⢯⣟⡿⣿⢿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣄⠀⠀⠈⠻⣿⣿⣿⣿⣿");
        }
        break;

    case 3:
        if (teat_bose3 == 0) {
            print_slow_at(15, 45, "뭘하려고? 일단 마왕과 대화를 해보자");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
        }
        if( pro_boss3 == 1) {
            print_slow_at(15, 45, "... 고백하자 그녀, 조강현 에게");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "\"강현씨, 친구부터 시작해도 좋지만 하고 싶은 말이 있어요\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "\"...세상을 멸망시키자고?\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "\"저는 사람들을 용서할 수 없어요\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "\"하지만...\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "\"아뇨, 제가 평생 같이 있을겁니다\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "\"내가 죽으면 영혼이 되어서라도,\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "\"평생 옆에 같이 있어 줄 겁니다 제가\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "\"하지만,,,그들은 내게 아무것도 하지 않았는걸\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "\"...이렇게 태어난 내 잘못인걸...\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "화가난다. 이렇게 착한 사람을 그들은 얼마동안이나 보려하지 않았던거지");
            Sleep(1000);
            print_at(15, 45, "                                                                         ");
            print_slow_at(15, 45, "\"당신이 하지 않으면 제가 할 겁니다.\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "\"저는, 나는 사람들을 용서못할거 같아 강현아\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "\"용사들이 사라지는걸 알면서도 계속 소환한거나, 널 방치한거나\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "\"네가 손 쓰지 않겠다면 내가 직접 하겠어\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "\"그런... 그렇게까지 해야할까...\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_at(15, 45, "                                                            ");
            print_slow_at(15, 45, "웅성 웅성");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "\"\"무슨 소리지 ?\"\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "밖에서 소리가 들려온다");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "\"뭐지..? 사람들이 이렇게나 많이...\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "강현이의 눈이 파랗게 빛나며 강현이가 중얼거렸다");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "\"그거, 지금 밖을 보고 있는거지?\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "\"나도 보여줘\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "\"...응\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "강현이가 보여준 것은 충격적이었다");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "각종 병기창을 든 사람들이 수십...수백..수천... 아니 이정도면 수만까지도,");
            Sleep(1000);
            print_at(15, 45, "                                                                                ");
            print_slow_at(15, 45, "맨 앞에 익숙한 얼굴이 보인다");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "날 소환한 사람, 성녀가");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "아아 강현이를 물리치러 온 거다. 내가 당연히 실패 할 거라 생각했구나");
            Sleep(1000);
            print_at(15, 45, "                                                                          ");
            print_slow_at(15, 45, "알면서 계속 소환 한 거였구나, 나는 마루타 였구나");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "...");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "\"강현아. 봐, 이런 세계를 왜 내버려 두는거야 ?\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "\"...\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "강현이는 멍한 표정으로 대답하지 않는다");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "\"이렇게까지...했던, 적은...\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "\"...용서하지 마 맞서 싸우자\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "강현이는 아직도 주저하는것 같다");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "\"네가 생각이 그렇다면 어쩔수없는 거지만,\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "\"나는 가만히 있지 않아\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "\"널위해서, 날 위해서 복수를 하자\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "\"...\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_at(4, 28, "_______________________________");  
            print_at(4, 29, "|                             |");
            print_at(4, 30, "|    1. > 혼자 싸우러 간다    |");
            print_at(4, 31, "|                             |");
            print_at(4, 32, "|                             |");
            print_at(4, 33, "|    2. > 계속 설득한다       |");
            print_at(4, 34, "|_____________________________|");
            int choice2_1;
            scanf("%d", &choice2_1);
            move_cursor(15, 46);
            print_at(4, 28, "                               ");
            print_at(4, 29, "                               ");
            print_at(4, 30, "                               ");
            print_at(4, 31, "                               ");
            print_at(4, 32, "                               ");
            print_at(4, 33, "                               ");
            print_at(4, 34, "                               ");
            print_at(4, 35, "                               ");
            switch (choice2_1) {
            case 1:
                print_slow_at(15, 45, "밖으로 나가 수많은 사람 앞에 섰다");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"저기 이번대 용사 아니야 ?\"");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"누군가가 그런말을 하자, 웅성거리던 목소리가 멎고 나에게 시선이 모였다\"");
                Sleep(1000);
                print_at(15, 45, "                                                                               ");
                print_slow_at(15, 45, "나는 그 수많은 시선을 한 몸에 받으며 입을 열었다");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"... 굳이 이렇게 까지 해야 하나요? \"");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"마왕이 대체 당신들에게 어떤 피해를 끼쳤죠?\"");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"내가 떨리는 목소리로 말하자, 성녀가 대답했다\"");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"아아 이번대 용사도 매혹됐네, 멍청해보이는게 그럴 줄 알았어.\"");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"뭐...?\"");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"여러분 저것의 말은 무시하셔도 됩니다. 자 이번에야 말로 마왕타도를 위하여\"");
                Sleep(1000);
                print_at(15, 45, "                                                                                    ");
                print_slow_at(15, 45, "\"\"\"\"위하여 !!!!!!!!!!!!!\"\"\"\"\"");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"...강현아 저게 무슨 소리야...?\"");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "갑자기 시야가 정지하며...");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"아아... 이번에야 말로 성공하나 했더니\"");
                Sleep(4000);
                clear_text();
                print_slow_at2(15, 45, "당 신 은 의 식 을 잃 었 다",100);
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                Death();
                      
            case 2:
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_slow_at(15, 45, "\"강현아 제발\"");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_slow_at(15, 45, "\"... 저들을 믿지 않아도 돼?\"");
                Sleep(1000);
                print_at(15, 45, "                                                                          ");
                print_slow_at(15, 45, "\"내가, 세상을 멸망시켜도 돼?\"");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_slow_at(15, 45, "\"...당연하지\"");
                Sleep(1000);
                print_at(15, 45, "                                                                          ");
                print_slow_at(15, 45, "강현이는 어쩐지.... 굉장히.... 신나보이는 표정을 하고있다");
                Sleep(1000);
                print_at(15, 45, "                                                                      ");
                print_slow_at(15, 45, "신나보이는 표정....?");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_slow_at(15, 45, "\"아아 드디어\"");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"그 말을 정말, 정말...기다렸어...\"");
                Sleep(3000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"그게 무슨 소리야...?\"");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"우후후... 그건 알 필요 없어\"");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "강현이의 말투가 변화했다");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"강현...아?\"");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "강현, 마왕의 등에서 이세상것이 아닌 소름끼치는 소리가 들려오며, 강현이의 등을 찢고,");
                Sleep(1000);
                print_at(15, 45, "                                                                                            ");
                print_slow_at(15, 45, "무언가.... 기괴한 날개가 돋아났다...");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"네가...나를 인정하는 말을 듣기 까지 얼마나 기다렸던가...\"");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "마왕은 소름끼치게 웃으며 나를 쳐다본다");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"사실은 있잖아?\"");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"널 소환했던건 나야\"");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"아아 길었지... 2147483647 번이나 기다렸으니 말이야\"");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "마왕은 기괴하게 웃으며 사랑스러운 목소리로 말한다");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"고마워, 평생 내 곁에서 함께할거지 ?\"");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"아....아....\"");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "무언가 말하려 했지만 기억이 나질 않는다");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                clear_text();
                print_slow_at(15, 45, "나는... 누구 였더라?");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "아무것도 기억나지 않는다");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "알 수 있는건...");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "눈 앞에 있는 이 소녀가 미칠듯이 사랑스럽다는 것 뿐...");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "소녀는 예쁘게 웃는다");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at2(15, 45, "\"사랑해, 영원히 함께,\"",100);
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                exit(0);
                break;
            default:
                print_slow_at(15, 45, "\"뭐하는거야 ?\"");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                break;
            }
        }
        break;
        if (kill_boss3 == 1) {
            print_slow_at(15, 45, "그녀를 해방시켜주자. 라고 생각 할 찰나에");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "웅성 웅성");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "\"\"무슨 소리지 ?\"\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "밖에서 소리가 들려온다");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "\"뭐지..? 사람들이 이렇게나 많이...\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "마왕의 눈이 파랗게 빛나며 마왕이 중얼거렸다");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "\"그거, 지금 밖을 보고 있는건가요?\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "\"저도 보여주세요\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "\"...응\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "그녀가 보여준 것은 충격적이었다");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "각종 병기창을 든 사람들이 수십...수백..수천... 아니 이정도면 수만까지도,");
            Sleep(1000);
            print_at(15, 45, "                                                                                ");
            print_slow_at(15, 45, "맨 앞에 익숙한 얼굴이 보인다");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "날 소환한 사람, 성녀가");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "아아 마왕을 물리치러 온 거다. 내가 당연히 실패 할 거라 생각했구나");
            Sleep(1000);
            print_at(15, 45, "                                                                          ");
            print_slow_at(15, 45, "알면서 계속 소환 한 거였구나, 나는 마루타 였구나");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "...");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "이런 세계에서 그녀를... 살아가게 할 수는 없다");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "\"...\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "마왕은 멍한 표정으로 말했다");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "\"이렇게까지...했던, 적은...\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_slow_at(15, 45, "\"...용서하지 마\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            Sleep(1000);
            Sleep(1000);
            print_slow_at(15, 45, "\"...\"");
            Sleep(1000);
            print_at(15, 45, "                                                                     ");
            print_at(4, 28, "_______________________________");
            print_at(4, 29, "|                             |");
            print_at(4, 30, "|    1. > 죽인다              |");
            print_at(4, 31, "|                             |");
            print_at(4, 32, "|                             |");
            print_at(4, 33, "|    2. > 잠시만, 이건아니야  |");
            print_at(4, 34, "|_____________________________|");
            int choice2_1;
            scanf("%d", &choice2_1);
            move_cursor(15, 46);
            print_at(4, 28, "                               ");
            print_at(4, 29, "                               ");
            print_at(4, 30, "                               ");
            print_at(4, 31, "                               ");
            print_at(4, 32, "                               ");
            print_at(4, 33, "                               ");
            print_at(4, 34, "                               ");
            print_at(4, 35, "                               ");
            switch (choice2_1) {
            case 1:
                print_slow_at(15, 45, "마왕이 멍을 때리고 있는 틈을 타,");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "손을 뻗으려던 찰나");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"지금 뭐하는거야...?\"");
                Sleep(1000);
                print_at(15, 45, "                                                                               ");
                print_slow_at(15, 45, "\"...당신을 위해서 입니다\"");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"같이... 빨갛고 예쁜 꽃을 보러가요\"");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"...\"");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"내가 떨리는 목소리로 말하자, 마왕은\"");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"...\"");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"...\"");
                Sleep(4000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"아아 매혹을 잘못 걸었나,,,\"");
                Sleep(1000);
                print_at(15, 45, "                                                                                    ");
                print_slow_at(15, 45, "...?");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"무슨... 소리를...?\"");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "갑자기 시야가 정지하며...");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"아아... 이번에야 말로 성공하나 했더니\"");
                Sleep(4000);
                clear_text();
                print_slow_at2(15, 45, "당 신 은 의 식 을 잃 었 다", 100);
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                Death();

            case 2:
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_slow_at(15, 45, "이건, 아닌 것 같다.");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_slow_at(15, 45, "그녀는 나를 빤히 쳐다본다");
                Sleep(1000);
                print_at(15, 45, "                                                                          ");
                print_slow_at(15, 45, "\"내가, 세상을 멸망시켜도 돼?\"");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_slow_at(15, 45, "\"...\"");
                Sleep(1000);
                print_at(15, 45, "                                                                          ");
                print_slow_at(15, 45, "무슨 소리를 하는걸까... 하지만 너무나도 아름답다");
                Sleep(1000);
                move_cursor(40, 4);
                printf("호감도 : 9999999");
                print_at(15, 45, "                                                                      ");
                print_slow_at(15, 45, "\"당신의... 뜻, 대로\"");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                print_slow_at(15, 45, "\"아아 드디어\"");

                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "마왕은 입이 찢어질듯이 웃으며");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"그 말을 정말, 정말...기다렸어...\"");
                Sleep(3000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "마왕의 등에서 이세상것이 아닌 소름끼치는 소리가 들려오며, 마왕의 등을 찢고,");
                Sleep(1000);
                print_at(15, 45, "                                                                                            ");
                print_slow_at(15, 45, "무언가.... 기괴한 날개가 돋아났다...");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "마왕은 소름끼치게 웃으며 나를 쳐다본다");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"사실은 있잖아?\"");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"널 소환했던건 나야\"");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"아아 길었지... 2147483647 번이나 기다렸으니 말이야\"");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "마왕은 기괴하게 웃으며 사랑스러운 목소리로 말한다");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"고마워, 평생 내 곁에서 함께할거지 ?\"");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "\"아....아....\"");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "무언가 말하려 했지만 기억이 나질 않는다");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                clear_text();
                print_slow_at(15, 45, "나는... 누구 였더라?");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "아무것도 기억나지 않는다");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "알 수 있는건...");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "눈 앞에 있는 이 소녀가 미칠듯이 사랑스럽다는 것 뿐...");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at(15, 45, "소녀는 예쁘게 웃는다");
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                print_slow_at2(15, 45, "\"사랑해, 영원히 함께,\"", 100);
                Sleep(1000);
                print_at(15, 45, "                                                                     ");
                exit(0);
                break;
            default:
                print_slow_at(15, 45, "\"뭐하는거야 ?\"");
                Sleep(1000);
                print_at(15, 45, "                                                            ");
                break;
            }
        }


    default:
        print_slow_at(15, 45, "\"뭐... 그냥 그래\"");
        Sleep(1000);
        print_at(15, 45, "                                                            ");
        break;

        }
    }
}

//마왕
void bosses3() {
    clear_text();
    nemo();
    print_slow_at2(3, 5, "자 이제 당신은 마왕성에 도착했습니다.\n", 45);
    print_slow_at2(3, 7, "그 동안 당신은 괴물도 마주치고 여러 힘든 일도 있었습니다.", 45);
    print_slow_at2(3, 9, "트라우마를 마주쳐야 할때도, 이유없이 다칠 때도 있었습니다.", 45);
    print_slow_at2(3, 11, "하지만, 당신은 굴하지 않고... ", 50);
    print_slow_at2(3, 13, "김석규의 파이썬 뿌리기도, 박소영의 c뿌리기도 모두 이겨냈습니다.", 45);
    print_slow_at2(3, 13, "어쩌면, 아무일도 겪지 않고 누군가의 호의로... 아주, 편하게 왔을 수도 있죠.", 45);
    print_slow_at2(3, 15, "아무튼간에. 자, 여정의 끝이 앞입니다. 아마 마왕을 물리치면 당신은 집으로 돌아갈수 있겠죠.", 45);
    move_cursor(3, 17);
    int word[] = { totalStrength };
    print_slow3("하지만... 아직 마왕을 이기기에는 당신의 공격력은 %밖에 되지 않습니다", 45, word, 1);
    move_cursor(3, 19);
    int word2[] = { totalHeart, totalHealth };
    print_slow3("목숨도 %개 밖에 남지 않았고 체력도 %입니다.", 45, word2, 2);
    print_slow_at2(3, 21, "그래도... 들어갈까요 ?", 45);
    print_at(9, 24, "________________________________");
    print_at(9, 25, "|                              |");
    print_at(9, 26, "|   1. > 들어가자              |");
    print_at(9, 27, "|                              |");
    print_at(9, 28, "|   2. > ...나중에 갈까        |");
    print_at(9, 29, "|______________________________|");
    move_cursor(3, 30);
    int choice;
    scanf("%d", &choice);
    switch (choice) {
    case 1:
        clear_text();
        nemo();
        print_slow_at2(3, 9, "\"당연한거 아니야? 나는 그럼에도 여기까지 왔어.\"", 50);
        print_slow_at2(3, 11, "\"힘들었지만, 즐거웠어 모험은 이제 끝이야.\"", 50);
        print_slow_at2(3, 13, "\"그리고 무엇보다 마왕을 직접 보고싶은걸\"", 50);
        print_slow_at2(3, 15, "\"자 앞으로 나아가자. 가자 마왕에게로\"", 50);
        print_slow_at(3, 17, "어디선가 기뻐하는 웃음소리가 들려온다");
        Sleep(1000);
        print_slow_at2(3, 19, "\"우후후,,, 기다렸답니다. 자 어서오세요, 마왕성에\"", 200);
        Sleep(1000);
        bose3_fight1();
        break;
    case 2:
        clear_text();
        nemo();
        print_slow_at2(3, 9, "...정말로 ?", 50);
        print_slow_at2(3, 11, "지금까지 편하게 와놓고 돌아간다고 ?", 50);
        print_slow_at2(3, 13, "모험도, 수문장 들도, 편하게. 와. 놓고. 돌아.간.다고 ?", 55);
        print_slow_at2(3, 15, "그럴 수는 없지. 당신은, 너는. 못 돌아가.", 50);
        print_slow_at(3, 17, "어디선가 비웃는 웃음소리가 들려온다");
        print_slow_at(3, 19, "몸이 억지로 마왕성으로 끌려간다...!");
        print_slow_at2(3, 21, "\"이게 무슨...!!!\"", 50);
        print_slow_at(3, 23, "몸이 마왕성으로 끌려가자마자 쾅! 소리가 나며 문이 닫혔다");
        Sleep(1000);
        print_slow_at2(3, 25, "\"말했잖아 못 돌아간다고 감히. 선택지를 줬다고 내 편의를. 무시해 ?\"\n", 50);
        Sleep(1000);
        bose3_fight1();
        break;
    default:
        clear_text();
        nemo();
        print_slow_at(3, 9, "내가 이순간을 얼마나 기다렸는데...");
        Sleep(1000);
        bosses3();
    }

}
//보스대화분기초기화
int text_boss2 = 0;
//녹말이쑤시개의박소영
void bosses2() {
    
    clear_text();
    Fight_UI2();
    nemo();
    
    print_at_unicode(33, 7, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠤⠄⢒⣂⠀⠭⠭⠭⠍⠭⠭⠭⠄  ⢒⡠");
    print_at_unicode(33, 8, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⠉⢔⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀   ⠀  ⠁⡎⡣⠀⠀⠀⠀⠀⠀");
    print_at_unicode(33, 9, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠑⠠⢁⡒⠠⠤⠠⠤⠤⠤⠤⠤⠤⠤⠄⣐⣂⠅⠂⠁⠀⠀⠀⠀⠀⠀");
    print_at_unicode(33, 10, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠤⠐⠊⠑⠋⠉⠉⠉⠀⠀⠈⣉⠉⠀⠉⠀⠂⠌⡑⠂⠤⡀⠀⠀⠀⠀⠀");
    print_at_unicode(33, 11, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠤⡰⠊⠁⠐⣀⠴⠚⠉⠉⠀⠀⠀⠀⠉⠁⠚⢦⡀⠀⠀⠔⠈⠠⡀⠉⠉⠉⠁⠒⠀⠤⢀⠀⠀");
    print_at_unicode(33, 12, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠠⠐⠊⠁⠠⠊⠀⠀⢀⠞⠁⠀⢠⠊⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⢢⡀⠀⠀⠑⠌⢂⠀⠀⠀⠀⠀⠀⠀⠉⠉⠤⢀⠀");
    print_at_unicode(33, 13, L"⠀⠀⠀⠀⠀⠀⠀⢀⡠⠄⠉⠉⠀⠀⠀⠀⡰⠁⠀⠀⡠⠃⠀⠀⢠⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢄⠀⠱⡄⠀⠀⠀⠢⢣⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠁⠂⠄⣀⠀⠀");
    print_at_unicode(33, 14, L"⠀⠀⠀⠀⣀⠤⠛⠀⠀⠀⠀⠀⠀⠀⠀⢠⠃⠀⠀⢠⠃⠀⠀⠀⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢃⠀⢻⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⣀⢠⡤⢀⠛⠛⠃⠀⣤⠘⡄");
    print_at_unicode(33, 15, L"⠀⠀⢴⠚⢖⠒⠒⠂⠀⠤⠤⣀⡀⠀⢀⠃⠄⠀⢠⠃⠀⠀⠀⣸⢁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠡⡀⢣⠀⠀⠀⠀⠹⡀⠀⢀⠖⠈⠉⠀⠁⠀⠃⣈⡤⠗⢉⠄⠊⠀");
    print_at_unicode(33, 16, L"⠀⠀⠀⠑⢄⣁⡂⢄⡀⠀⠀⠀⠈⠉⡏⠀⠀⠀⡆⠀⠀⢀⣰⢻⡎⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠱⡈⡆⠀⠀⠀⠀⢇⠚⠅⠀⠀⠀⣀⢔⡊⢍⠀⡠⠒⠁⠀⠀");
    print_at_unicode(33, 17, L"⠀⠀   ⠀⠈⠉⠪⡰⣀⠀⢀⠴⢑⠀⠀⢸⠀⠀⢀⡳⠋⢸⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠱⡸⠀⠀⠀⠀⠸⡀⠀⠀⣤⣖⡪⠃⢀⣸⠁⠀⠀⠀");
    print_at_unicode(33, 18, L"  ⠀⠀⠀⠀  ⠀⠘⡮⣵⣃⣀⡘⠀⠀⡆⠀⡰⡷⠁⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⡆⠀⠀⠀⠀⠀⠀⠀⢣⡇⠀⠀⠀⠀⢣⡠⣤⣶⠏⢻⡛⠢⢀⠀⠀⠀⠀");
    print_at_unicode(33, 19, L" ⠀         ⠀⠀⡯⡾⠙⠃⠀⠀⠀⠇⢠⢃⠃⠀⢀⣸⠠⠀⠀⠀⠀⠀⠀⠀⡀⢱⢠⠀⠀⡄⠀⠀⠀⠘⣧⠀⠀⠀⠀⡆⡜⠁⡸⠀⠈⡘⢄⠀");
    print_at_unicode(33, 20, L" ⠀⠀⠀    ⠀   ⠁⠇⠀⡇⠀⠀⠀⠀⡞⡘⠒⠉⠉⢸⢸⡀⢠⠀⠀⠀⠀⠀⡱⢸⡄⠆⠀⠰⠀⠀⠀⠀⢻⠀⠀⠀⠀⢚⠠⠤⣷⠀⠀⢃⢸⠁⠀⠀");
    print_at_unicode(33, 21, L"⠀           ⠀⢰⠠⢴⠃⠀⠀⠀⣸⡇⠇⠀⠀⠀⠘⣨⢣⠀⠆⠀⢇⠀⠀⠁⢣⡜⢌⣄⠀⢣⡀⠀⡀⢽⠀⠀⠀⠀⢸⠀⠀⢸⡰⠀⠸⠀⡀⠀⠀");
    print_at_unicode(33, 22, L"⠀⠀⠀⠀⠀   ⠀⠀⠀⠸⠐⣸⠰⠀⠀⠀⡟⠸⡀⠀⠀⠀⠀⢻⡈⢆⢘⣄⠈⢆⠀⠀⠀⠳⡠⣑⣦⡀⢱⣄⣑⣼⠀⠀⠀⢇⢸⠇⠀⠈⣇⠄⠀⠀⡟⣄⠀⠀");
    print_at_unicode(33, 23, L"⠀⠀⠀⠀⠀⠀   ⠀⠀⠰⠈⡘⢸⠀⠀⠀⣷⣾⡿⢿⣿⣷⣾⣤⡱⡀⠑⠼⠖⠄⡑⠮⠦⡤⢞⣿⣿⣿⣿⣿⠍⢿⠀⠀⠀⠸⡌⡴⠀⢀⠹⡈⠄⠀⢱⠈⢦⠀⠀");
    print_at_unicode(33, 24, L"⠀⠀⠀⠀⠀⠀⠀⠀ ⢀⠇⢰⢃⣏⠀⠀⠇⢋⢻⠀⢹⣿⣿⢻⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⢿⣽⢿⡟⠀⠸⢸⠀⠀⠀⡏⣵⡆⠸⠀⠱⡘⡀⠈⡄⠀⢓⡀⠀⠀⠀");
    print_at_unicode(33, 25, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⡘⢀⡯⡞⢹⠃⠀⠸⡘⡄⠑⠌⣿⣉⣋⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠒⠒⠚⠀⢀⢇⡎⠀⠀⠀⡇⡇⠛⡦⡇⠀⢡⢱⡄⠘⠄⠀⢎⡄⠀⠀");
    print_at_unicode(33, 26, L"⠀⠀⠀⠀⠀⠀⠀⠀⣐⠔⣝⢿⠀⠘⡴⠀⠀⠱⣵⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣾⠃⠀⠀⠂⡟⣧⠀⢱⢥⠀⠀⠆⡝⢆⠈⠄⠘⢰⠀⠀");
    print_at_unicode(33, 27, L"⠀⠀⠀⠀⠀⠀⣠⢜⠏⡰⢋⠎⠀⠀⡇⢀⠀⠀⠹⡵⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⠜⢹⡉⠀⠀⢠⡄⡇⢻⠀⠈⡏⡄⢡⢸⡃⠈⠢⡊⢆⢩⠀⠀");
    print_at_unicode(33, 28, L"⠀⠀⠀⠀⠈⠉⠀⡍⡰⢩⠎⠀⠀⠀⢧⢸⠀⠀⠀⢷⡈⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣇⠃⠀⠀⢸⡇⢣⠈⡇⠀⡇⡃⠀⣾⢓⠀⠀⠑⡼⠸⡀⠀");
    print_at_unicode(33, 29, L"⠀⠀⠀⠀⠀⠀⢀⢡⠕⠁⡐⠀⠀⢸⢸⢸⠀⠀⠀⠸⠱⣄⠀⠀⠀⠀⠀   ⠉⠉⠉⠀⠀⠀⠀⠀⠀⣠⢾⠉⠀⠀⠀⣼⢡⠸⡀⠡⠀⡇⠼⠔⢱⠈⠀⠀⠀⢸⡆⠑⡀");
    print_at_unicode(33, 30, L"⠀⠀⠀⠀⠀⠀⢠⡞⠀⡞⠀⠀⠀⡜⠊⡜⡆⠀⠀⠀⡆⣿⡕⣦⡄⠀⠀⠀ ⠀⠀⠀⠀⠀⠀⠀⢠⡔⣯⣿⣿⠀⠀⠀⠀⡏⡌⡆⢣⠀⠀⠃⢸⠀⠘⠀⠀⠀⠀⢸⠁⠀⠑⠊");
    print_at_unicode(33, 31, L"⠀⠀⠀⠀⠀⡔⠁⣳⡊⠀⠀⢀⢀⡧⣧⢷⢡⠀⠀⠀⣧⡟⠉⠉⠻⢷⣶⣤⣀⣀⣀⣀⣀⣀⣤⣖⣹⡾⠛⠉⠉⢵⣄⠀⢰⣿⠁⡾⡾⡮⢀⠀⡈⠀⢀⢰⠀⠀  ⠎⠀");
    print_at_unicode(33, 32, L"⠀⠀⠀⢀⠎⡠⡺⠃⠀⠀⠐⠀⣼⣼⡽⢸⠀⡄⠀⢠⠷⠀⠀⠀⠀⠀⠙⠉⠉⠀⠀⠀⠀⠀⠀⠀⠋⠀⠀⠀⠀⠀⠑⢳⣸⣿⠢⠀⡇⠙⠺⠄⡇⠀⢸⢸⠀⠀⢸⠀ ⢸ ");
    print_at_unicode(33, 33, L"⠀⠀⢀⠎⠔⢠⠃⠀⠀⠀⡇⠃⡿⢼⡇⠘⡄⢁⠀⡏⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⣿⡐⠀⢱⠀⠀⡜⠀⢀⣾⠇⠀⠀⠀⢸   ⢦");
    print_at_unicode(33, 34, L"⠀⠀⡜⡜⠀⢸⠀⠀⠀⡄⢇⠀⢿⢸⡇⡌⡇⠠⢰⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢳⡅⠄⢸⢀⠀⠀⠀⣼⠏⠀⠀⢸⠀⠀⠀⢸  ⠊");
    print_at_unicode(33, 35, L"⠀⠀⢣⠁⠀⢸⠀⠀⠀⠀⠘⣤⣼⠟⠛⠉⡇⣠⠋⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠿⡙⠛⠚⠓⠶⢶⡃⠀⠀⠀⢸⠀⠀  ⠀");
    print_at_unicode(33, 36, L"⠀⠀⡞⡄⢠⡾⠀⠀⢠⡝⢫⡿⠁⠀⠀⢰⡱⠁⠀⣀⣀⠀⢰⣿⣿⣷⠉⠉⠉⠉⠉⠁⣿⣿⣿⣿⠀⢀⡀⣀⠀⠀⠀⠀⠀⠱⡀⠀⠀⠀⠀⠀⠙⢢⣤⢸   ⠀⢦⠀");
    print_at_unicode(33, 37, L"⠀⠀⢈⣬⠫⡀⢣⢠⠃⣣⡏⠁⠀⠀⠀⣶⠉⠀⠀⠀⠀⠱⠀⠙⠋⠁⠀  ⠉⠉  ⠀⠈⠉⠉⠁⠀⡃⠀⢈⠆⠀⠀⠀⠀⠐⢧⠀⠀⠀⠀⠀⠀⠀⢈⣿⠀⠀⠀⠀⢦");
    print_at_unicode(33, 38, L"⠀⢀⠞⠀⠱⣨⠖⠁⠂⢻⠀⠀⠀⠀⢜⣇⠤⠐⠆⠉⠉⠈⠉⠒⠢⢄⠀⠀ ⠀⠀⠀⠀⠀⠀⠀⠀⣀⠠⠄⠒⠂⠀⠐⠂⠤⢀⠀⠀⢸⠀⠀⠀⠀⠀⠀  ⣾⠿⣀⠀⠀⠀⠀");

    move_cursor(15, 45);
    print_slow("보스, 녹말이쑤시개의 박소영이 등장했다.");
    Sleep(1000);
    print_at(15, 45, "                                                              ");
    print_slow_at(15, 45, "\"안녕 난 녹말이쑤시개의 박소영이라고 해\"");
    Sleep(1000);
    print_at(15, 45, "                                                              ");
    print_slow_at(15, 45, "\"지금 마왕한테 가는길 인거지?\"");
    Sleep(1000);
    print_at(15, 45, "                                                           ");
    print_slow_at(15, 45, "\"자 그러면 바로 본론으로 들어가자\"");
    Sleep(1000);
    print_at(15, 45, "                                                           ");
    move_cursor(4, 30);
    printf("녹말이쑤시개의박소영 : %d", total_bossHealth);
    while (totalHeart > 0 && total_bossHealth > 0) {
        int choice;
        print_slow_at(15, 45, "무엇을 할까 ? ");
        Sleep(1000);
        print_at(15, 45, "                                                           ");
        move_cursor(15, 46);
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            if (text_boss2 == 0) {
                print_slow_at(15, 45, "공격하기를 선택했다 ! 퀴즈 ? 생각하기 ? 들어와,");
                Sleep(1000);
                print_at(15, 45, "                                                           ");
                move_cursor(15, 45);
                int attack[] = { totalStrength };
                print_slow3( "대단하다 ! %의 피해를 입혔다", 25, attack, 1);
                Sleep(1000);
                print_at(15, 45, "                                                           ");
                bossHealth (- totalStrength);
                move_cursor(4, 30);
                printf("녹말이쑤시개의박소영 : %3d", total_bossHealth);
            }
            else {
                print_slow_at(15, 45, "대화가 통하는데 굳이 공격을 해야할까...");
                Sleep(1000);
                print_at(15, 45, "                                                                  ");
                print_slow_at(15, 45, "시간낭비 하지말고 이어서 대화를 해보자");
                Sleep(1000);
                print_at(15, 45, "                                                               ");
            }
            break;
        case 2:
            if (text_boss2 == 0) {
                print_slow_at(15, 45, "방어하기를 선택했다 ! 박소영 교수님이 어디로 공격을 하실까... ?? ");
                Sleep(1000);
                print_at(15, 45, "                                                                  ");
                print_slow_at(15, 45, "아차, 여기서는 녹말이쑤시개의 박소영이다, 말을 조심하도록 하자");
                Sleep(1000);
                print_at(15, 45, "                                                               ");
                guardPuzzle(boss_Damage);
                ifGuard += 1;
                status();

            }
            else {
                print_slow_at(15, 45, "녹말이쑤시개는 공격 할 마음이 있어보이지 않는다");
                Sleep(1000);
                print_at(15, 45, "                                                                  ");
                print_slow_at(15, 45, "시간낭비 하지말고 이어서 대화를 해보자");
                Sleep(1000);
                print_at(15, 45, "                                                               ");
            }
            break;
        case 3:
            if (text_boss2 == 0) {
                print_slow_at(15, 45, "대화하기를 선택했다 ! 일단은 사슬낫의 김석규도 대화가 통했으니까...");
                Sleep(1000);
                print_at(15, 45, "                                                                    ");
                Sleep(1000);
            }
            else {
                print_slow_at(15, 45, "이어서 대화해보자");
                Sleep(1000);
                print_at(15, 45, "                                                                    ");
                Sleep(1000);
            }
            switch (text_boss2) {
            case 0:
                print_slow_at2(15, 45, "\"저기 녹말이쑤시개의 박소영씨? 님? 아무튼, 마왕은 어떤 사람이죠?\"", 40);
                Sleep(1000);
                print_at(15, 45, "                                                                             ");
                print_slow_at2(15, 45, "\"그게 왜 궁금 한건데? 너도 이제는 알 때도 되지 않았어?\"", 40);
                Sleep(1000);
                print_at(15, 45, "                                                                 ");
                print_slow_at2(15, 45, "녹말이쑤시개는 이상한 소리를 하는 것 같습니다.", 40);
                Sleep(1000);
                print_at(15, 45, "                                                           ");
                print_slow_at2(15, 45, "\"흐음 뭐 잘해봐 난 별로 관심 없어서\"", 40);
                Sleep(1000);
                print_at(15, 45, "                                                           ");
                text_boss2++;
                break;

            case 1:
                print_slow_at2(15, 45, "당신은 곰곰히 생각 해 봅니다. 정말로 모르는지,", 45);
                Sleep(1000);
                print_at(15, 45, "                                                                ");
                print_slow_at2(15, 45, "\"...정말로 모르겠어요. 여러분들이 무슨 말을 하는건지\"", 40);
                Sleep(1000);
                print_at(15, 45, "                                                                   ");
                print_slow_at2(15, 45, "맙소사.", 40);
                Sleep(1000);
                print_at(15, 45, "                                                           ");
                print_slow_at2(15, 45, "\"와, 너 진짜 멍청하구나?\"", 40);
                Sleep(1000);
                print_at(15, 45, "                                                           ");
                text_boss2++;
                break;

            case 2:
                print_slow_at2(15, 45, "\"네???\"", 40);
                Sleep(1000);
                print_at(15, 45, "                                                           ");
                print_slow_at2(15, 45, "\"갑자기 재미있어지네\"", 40);
                Sleep(1000);
                print_at(15, 45, "                                                           ");
                print_slow_at2(15, 45, "\"뭐, 됐어", 40);
                Sleep(1000);
                print_at(15, 45, "                                                           ");
                print_slow_at2(12, 45, "\"저기, 저는 마왕을 물리치고 싶지 않아요. 꼭 만나서 대화를 해보고싶어요\"", 40);
                Sleep(1000);
                print_at(12, 45, "                                                                                 ");
                print_slow_at2(15, 45, "\"흠, 그래? 뭐 그러면 비켜줄 수도 있지\"", 40);
                Sleep(1000);
                print_at(15, 45, "                                                           ");
                print_slow_at(15, 45, "당신은 갑자기 투지가 불타오릅니다");
                Sleep(1000);
                print_at(15, 45, "                                                           ");
                text_boss2++;
                break;

            case 3:
                print_slow_at2(15, 45, "\"아아... 좀 더 같이 있자, 버틸 수 있지?\"", 50);
                Sleep(1000);
                print_at(15, 45, "                                                           ");
                print_slow_at2(15, 45, "\"아뇨... 대화를 하는데 왜 공격을...\"", 50);
                Sleep(1000);
                print_at(15, 45, "                                                           ");
                print_slow_at2(15, 45, "\"'누군가' 가 그걸 원하거든\"", 50);
                Sleep(1000);
                print_at(15, 45, "                                                                  ");
                print_slow_at2(15, 45, "녹말이쑤시개의 박소영은 종일 이상한 얘기만 하네요. 얘기할 가치가 없습니다.", 45);
                Sleep(1000);
                print_at(15, 45, "                                                                                        ");
                text_boss2++;
                break;

            case 4:
                print_slow_at2(15, 45, "\"저기 녹말이쑤시개의 박소영씨? 님? 아무튼, 마왕은 어떤 사람이죠?\"", 50);
                Sleep(1000);
                print_at(15, 45, "                                                                              ");
                print_slow_at2(15, 45, "\"몰라?\"", 50);
                Sleep(1000);
                print_at(15, 45, "                                                                        ");
                print_slow_at(15, 45, "녹말이쑤시개의 박소영은 c 뿌리기 공격을 준비중이다...");
                Sleep(1000);
                print_at(15, 45, "                                                                        ");
                text_boss2++;
                break;

            case 5:
                print_slow_at2(15, 45, "\"너무 아파요...\"", 50);
                Sleep(1000);
                print_at(15, 45, "                                                                              ");
                print_slow_at2(15, 45, "\"그건 내 상관이 아니지\"", 50);
                Sleep(1000);
                print_at(15, 45, "                                                                        ");
                print_slow_at(15, 45, "녹말이쑤시개의 박소영은 매정합니다...");
                Sleep(1000);
                print_at(15, 45, "                                                                        ");
                text_boss2++;
                break;

            }
            break;

        default:
            print_slow_at(15, 45, "지금 뭐하는거야 !!! 소중한 한 턴을 낭비 했다...");
            Sleep(1000);
            print_at(15, 45, "                                                           ");
            break;

        }
        if (ifGuard == 1 && text_boss2 == 0) {
            print_slow_at(15, 45, "녹말이쑤시개의 박소영은 아쉬운 듯이 쳐다본다... 무섭다");
            Sleep(1000);
            print_at(15, 45, "                                                               ");
            ifGuard = 0;
        }
        else if (text_boss2 == 5 || text_boss2 == 0 || text_boss2 == 3) {
            print_slow_at(15, 45, "녹말이쑤시개의 박소영은 c뿌리기를 사용했다 !\n");
            Sleep(1000);
            print_at(15, 45, "                                                           ");
            move_cursor(15, 45);
            int boss2_Damage = rand() % 30 + boss_Damage;
            int replace[] = { boss2_Damage };
            print_slow3("켁, 숨이 안 쉬어진다 %를 받았다... c는 너무 어려워...\n", 50, replace, 1);
            Sleep(1000);
            print_at(15, 45, "                                                           ");
            Health(-boss2_Damage);
            status_clear();
            status();
            Sleep(1000);
            
        }
        else {
            print_slow_at(15, 45, "녹말이쑤시개의 박소영은 공격할 마음이 없어보인다\n");
            print_at(15, 45, "                                                           ");
            status_clear();
            status();
            Sleep(1000);
        }
        if (total_bossHealth <= 0 || text_boss2 == 6) {
            print_slow_at2(15, 45, "\"아, 시간됐다 그럼 이만\"", 50);
            Sleep(1000);
            print_at(15, 45, "                                                              ");
            print_slow_at(15, 45, "녹말이쑤시개의 박소영은 도망쳤다 !");
            Sleep(1000);
            print_at(15, 45, "                                                                           ");
            print_slow_at(15, 45, "녹말이쑤시개의 박소영이 있던자리에는 아무것도 없었다... 실망스러워");
            Sleep(1000);
            print_at(15, 45, "                                                                           ");
            print_slow_at(15, 45, "아하하하,,,! 가끔은 안 좋은 일도 있는 법이죠 ");
            Sleep(1000);
            print_at(15, 45, "                                                               ");
            status_clear();
            status();
            Sleep(1000);
            print_at(15, 45, "                                                       ");
            void handle_load_count(load_count);
            return;
        }
    }
    return;
}

//보스1대화변수초기화
int text_boss1 = 0;

//보스1사슬낫의김석규
void bosses1() {
    clear_text();
    Fight_UI2();
    nemo();
    print_at_unicode(40, 8, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
    print_at_unicode(40, 9, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⠟⠻⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀");
    print_at_unicode(40, 10, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⠀⠀⠈⠻⣦⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣴⣶⣦⡀⠀⠀⠀");
    print_at_unicode(40, 11, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡿⡇⠀⠀⠀⠀⠈⠙⢷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⠾⠋⠁⢸⣿⡇⠀⠀⠀");
    print_at_unicode(40, 12, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣇⡇⠀⠀⠀⠀⠀⠀⠀⠙⢷⣆⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⡾⠛⠁⠀⠀⠀⣿⣼⠀⠀⠀⠀");
    print_at_unicode(40, 13, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⡏⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢿⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⡾⠛⠁⠀⠀⠀⠀⠀⣸⡿⣿⠂⠀⠀⠀");
    print_at_unicode(40, 14, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣇⣿⠀⠀⠀⠀⠀⠶⠶⠶⠶⠶⠶⠿⠷⠶⠶⠤⣤⣤⣀⣀⡀⢀⣤⡾⠛⠁⠀⠀⠀⠀⠀⠀⠀⢠⣿⢣⡟⠀⠀⠀⠀");
    print_at_unicode(40, 15, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⣽⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⡷⣸⠇⠀⠀⠀⠀");
    print_at_unicode(40, 16, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⢣⡿⠁⠀⠀⠀⠀");
    print_at_unicode(40, 17, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣼⠃⠀⠀⠀⠀⠀");
    print_at_unicode(40, 18, L"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⠇⠀⣀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⡏⠀⠀⠀⠀⠀⠀");
    print_at_unicode(40, 19, L"⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⣿⣿⡾⠛⠉⣉⣽⣿⣶⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣴⠶⠛⢛⣿⣿⣷⣶⣤⣀⠀⠀⠀⠀⠀⠀⢸⣿⡀⠀⠀⠀⠀⠀⠀");
    print_at_unicode(40, 20, L"⠀⠀⠀⠀⠀⢰⣾⠛⢉⣵⡟⣃⣤⣶⣿⣿⣿⣿⣿⣿⣷⡄⠀⠀⠀⠀⠀⣠⣾⠏⣡⣴⣾⣿⣿⣿⣿⣿⣿⣿⣷⡄⠀⠀⠀⠀⢈⡹⣇⠀⠀⠀⠀⠀⠀");
    print_at_unicode(40, 21, L"⠀⠀⠀⠀⠀⠀⠙⣷⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣀⣀⣀⣀⣰⣿⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⠶⠖⠲⠾⣿⣿⣦⠀⠀⠀⠀⠀");
    print_at_unicode(40, 22, L"⠀⠀⠀⠀⣠⣴⡾⠋⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠛⠻⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠀⠀⠀⠀⠀⠈⠙⢿⣄⠀⠀⠀⠀");
    print_at_unicode(40, 23, L"⠀⠀⣿⡛⠉⠁⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⠀⠀⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢷⣄⠀⠀");
    print_at_unicode(40, 24, L"⠀⠀⣾⣷⣦⣀⠀⠀⠈⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⠀⠀⠀⠀⠀⠘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠻⣧⠀");
    print_at_unicode(40, 25, L"⠀⡀⠈⠻⢿⣿⣿⣷⠆⠀⠙⠻⠿⣿⣿⡿⢿⣿⠋⠀⠀⠀⣴⠇⠀⠀⠀⠈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⡆");
    print_at_unicode(40, 26, L"⠀⠻⣟⠛⠛⠛⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠿⣿⣆⣀⣠⣼⢿⣧⠀⠀⠀⢀⣿⠿⢿⣿⣿⣿⣿⣿⣿⣿⠿⣛⠹⣮⣿⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣷");
    print_at_unicode(40, 27, L"⠀⠀⠈⠻⢦⣤⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⢩⠿⠻⣯⢻⣷⣶⣿⡿⠋⠀⠀⠀⠉⠉⠉⠉⠁⠀⣐⣭⣾⡿⠋⢻⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿");
    print_at_unicode(40, 28, L"⠀⠀⠀⢀⣰⣿⣻⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⡿⠛⣍⠡⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡟");
    print_at_unicode(40, 29, L"⠀⠀⠀⠛⣿⣿⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣤⡾⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡿⠁");
    print_at_unicode(40, 30, L"⠀⠀⠀⢐⣿⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⠟⠀⠀");
    print_at_unicode(40, 31, L"⠀⠀⠀⣼⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡾⠃⠀⠀⠀");
    print_at_unicode(40, 32, L"⠀⠀⠀⣸⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣶⡟⠀⠀⠀⠀⠀");
    print_at_unicode(40, 33, L"⠀⠀⣰⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⠛⠀⠀⠀⠀⠀⠀");
    print_at_unicode(40, 34, L"⢠⣾⢿⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⡏⠀⠀⠀⠀⠀⠀⠀");
    print_at_unicode(40, 35, L"⠀⣰⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣶⣿⠀⠀⠀⠀⠀⠀⠀⠀");
    print_at_unicode(40, 36, L"⣾⢿⣾⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠛⠀⠀⠀⠀⠀⠀⠀⠀");
    print_at_unicode(40, 37, L"⢀⣾⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⠀⠀⠀⠀⠀⠀⠀⠀⠀");
    print_at_unicode(40, 38, L"⢀⣾⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⠀⠀⠀⠀⠀⠀⠀⠀⠀");

    move_cursor(15, 45);
    print_slow("보스, 사슬낫의 김석규가 등장했다.");
    Sleep(1000);
    print_slow_at(15, 45, "\"음, 나는 사슬낫의김석규다. 여기까지 온 걸 일단 환영하지\"\n");
    Sleep(1000);
    print_at(15, 45, "                                                                             ");
    print_slow_at(15, 45, "\"자네는...음 마왕님을 무찌르러 가는길인건가 ?\"\n");
    Sleep(1000);
    print_at(15, 45, "                                                                              ");
    print_slow_at(15, 45, "\"그렇다면 어쩔수 없지만 나를 먼저 지나가야 합세\"\n");
    Sleep(1000);
    print_at(15, 45, "                                                                              ");
    move_cursor(4, 30);
    printf("사슬낫의김석규 : %3d", total_bossHealth);
    while (totalHealth > 0 && total_bossHealth > 0) {
        int choice;
        print_slow_at(15, 45, "무엇을 할까 ? ");
        Sleep(1000);
        print_at(15, 45, "                                                                ");
        move_cursor(15, 46);
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            move_cursor(15, 45);
            print_slow("공격하기를 선택했다 !");
            Sleep(1000);
            print_at(15, 45, "                                                            ");
            if (text_boss1 == 0) {
                move_cursor(15, 45);
                print_slow_at(15, 45, "\"사슬낫의 김석규, 너를 물리쳐 주마. 미니프로젝트? 어림도없지\"\n");
                Sleep(1000);
                print_at(15, 45, "                                                                       ");
                print_slow_at(15, 45, "\"사슬낫의김석규는 대답하지 않고 공격을 준비하고 있다.\"\n");
                Sleep(1000);
                print_at(15, 45, "                                                                ");
                int attack[] = { totalStrength };
                move_cursor(15, 45);
                print_slow3("대단하다 ! %의 피해를 입혔다 !", 50, attack, 1);
                print_at(15, 45, "                                                                ");
                bossHealth(-totalStrength);
                move_cursor(4, 30);
                printf("사슬낫의김석규 : %3d", total_bossHealth);

            }
            else {
                move_cursor(15, 45);
                print_slow_at(15, 45, "대화가 통하는데 왜 공격을 하는거야");
                Sleep(1000);
                print_at(15, 45, "                                                                       ");
                print_slow_at(15, 45, "시간낭비하지말고 이어서 대화해보자");
                Sleep(1000);
                print_at(15, 45, "                                                                ");
            }
            break;
        case 2:
            move_cursor(15, 45);
            print_slow("방어하기를 선택했다 ! 김석규교수님이 어디로 공격을 하실까... ?? \n");
            Sleep(1000);
            print_at(15, 45, "                                                                        ");
            print_slow("아차, 여기서는 사슬낫의 김석규다, 말을 조심하도록 하자\n");
            Sleep(1000);
            print_at(15, 45, "                                                                       ");
            guardPuzzle(boss_Damage);
            ifGuard += 1;
            status();

            break;
        case 3:
            move_cursor(15, 45);
            if (text_boss1 == 0) {
                print_slow_at(15, 45, "대화하기를 선택했다 ! 일단은 보스도 사람...?이니까 대화를 해보자");
                Sleep(1000);
                print_at(15, 45, "                                                                      ");
                Sleep(1000);
            }
            else {
                print_slow_at(15, 45, "이어서 대화해보자");
                Sleep(1000);
                print_at(15, 45, "                                                              ");
                Sleep(1000);
            }

            switch (text_boss1) {
            case 0:
                move_cursor(15, 45);
                print_slow_at2(15, 45, "\"사슬낫의 김석규... 마왕은 어떤 사람이지 ?\"\n", 50);
                Sleep(1000);
                print_at(15, 45, "                                                                  ");
                print_slow_at(15, 45, "사슬낫의 김석규는 한참을 뜸들이다 대답했다\n");
                Sleep(1000);
                print_at(15, 45, "                                                           ");
                print_slow_at2(15, 45, "\"음... 마왕님은 좀... 특이 취향이시지\"\n", 55);
                Sleep(1000);
                print_at(15, 45, "                                                           ");
                text_boss1++;
                break;

            case 1:
                print_slow_at2(15, 45, "\"어떤 특이 취향을 말하는 거지?\"\n", 50);
                Sleep(1000);
                print_at(15, 45, "                                                           ");
                print_slow_at2(15, 45, "\"글쎄... 자네가 여기까지 잘 왔다면 알 수도\"\n", 55);
                Sleep(1000);
                print_at(15, 45, "                                                           ");
                text_boss1++;
                break;

            case 2:
                print_slow_at2(15, 45, "\"그게 무슨 의미인거지...?\"\n", 50);
                Sleep(1000);
                print_at(15, 45, "                                                           ");
                print_slow_at(15, 45, "사슬낫의 김석규는 이상한 소리를 하는 것 같다\n");
                Sleep(1000);
                print_at(15, 45, "                                                           ");
                print_slow_at2(15, 45, "\"...크흠, 나는 잘 모르겠네만 아무튼,간에\"\n", 55);
                Sleep(1000);
                print_at(15, 45, "                                                           ");
                text_boss1++;
                break;

            case 3:
                print_slow_at2(15, 45, "\"좀 더 자세히 이야기 해줘 ! 마왕은 어떤 인물이지 ?\"", 50);
                Sleep(1000);
                print_at(15, 45, "                                                                         ");
                print_slow_at2(15, 45, "\"마왕이 악인이 아니라면 이야기 해보고 싶어 !\"\n", 50);
                Sleep(1000);
                print_at(15, 45, "                                                                      ");
                print_slow_at2(15, 45, "그건... 정말 좋은 생각인 것 같네요 !\n", 60);
                Sleep(1000);
                print_at(15, 45, "                                                           ");
                print_slow_at2(15, 45, "\"어이쿠야,,, 시간이 벌써, 허허허 이만 가보겠네\"\n", 55);
                Sleep(1000);
                print_at(15, 45, "                                                              ");
                text_boss1++;
                break;

            case 4:
                print_slow_at(15, 45, "\"크흠, 다음에 보도록 하지,,,\"");
                Sleep(1000);
                print_at(15, 45, "                                                           ");
                print_slow_at(15, 45, "사슬낫의 김석규는 도망쳤다 !");
                Sleep(1000);
                print_at(15, 45, "                                                              ");
                print_slow_at(15, 45, "사슬낫의 김석규가 있던자리에는 금은보화가 가득이였다 !");
                Sleep(1000);
                print_at(15, 45, "                                                             ");
                print_slow_at(15, 45, "우후후,, 좋은 날이네요, 이런 날도 있어야죠 ");
                Sleep(1000);
                print_at(15, 45, "                                                           ");
                Gold(500);
                Heart(totalHeart);
                Health(totalHealth);
                status_clear();
                status();
                Sleep(1000);
                print_at(15, 45, "                                                       ");
                void handle_load_count(load_count);
                return;
            }
            break;

        default:
            print_slow_at(15, 45, "지금 뭐하는거야 !!! 소중한 한 턴을 낭비 했다...\n");
            Sleep(1000);
            print_at(15, 45, "                                                           ");
            break;

        }
        
        if (ifGuard == 1) {
            print_slow_at(15, 45, "사슬낫의 김석규는 입맛을 다신다... 위협은 안된다");
            Sleep(1000);
            print_at(15, 45, "                                                               ");
            ifGuard = 0;
        }
        else if (text_boss1 == 0) {
            print_slow_at(15, 45, "사슬낫의김석규는 파이썬뿌리기를 사용했다 !\n");
            move_cursor(15, 45);
            int boss1_Damage = rand() % 20 + boss_Damage;
            move_cursor(15, 45);
            int replace[] = { boss1_Damage };
            print_slow3("크윽, 역시 보스인가... % 의 피해를 입었다...", 50, replace, 1);
            print_at(15, 45, "                                                              ");
            Sleep(1000);
            print_at(15, 45, "                                                           ");
            Health(-boss1_Damage);
            status_clear();
            status();
            Sleep(1000);
        }
        else {
            print_slow_at(15, 45, "사슬낫의김석규는 공격할 마음이 없는 것 같다\n");
            Sleep(1000);
            print_at(15, 45, "                                                     ");
            print_slow_at(15, 45, "다행이네요 ! 계속 대화해봐요 !\n");
            Sleep(1000);
            print_at(15, 45, "                                                           ");
            status_clear();
            status();

        }
        if (total_bossHealth <= 0) {
            print_slow_at(15, 45, "\"음... 아이고야 고양이 살려 너무 강하군 인정하도록 하지\"\n");
            Sleep(1000);
            print_at(15, 45, "                                                                    ");
            print_slow_at(15, 45, "와 ! 사슬낫의 김석규를 무찔렀어요 ! 대박 최고 짱 !");
            Sleep(1000);
            print_at(15, 45, "                                                               ");
            print_slow_at(15, 45, "사슬낫의 김석규가 있던자리에는 금은보화가 가득이였다 !");
            Sleep(1000);
            print_at(15, 45, "                                                               ");
            print_slow_at(15, 45, "우후후,, 노력의 보상이에요");
            Sleep(1000);
            print_at(15, 45, "                                                           ");
            Gold(1000);
            status_clear();
            status();
            Sleep(1000);
            print_at(15, 45, "                                                       ");
            void handle_load_count(load_count);
            return;
        }
    }
}
//길 선택수 초기화
int load_count = 0;
//특수적 선택 초기화
int special_count = 1;
//상인필수 등장 카운트 초기화
int store_count = 0;
//갈림길함수정의
void handle_load_count(int count) {

    while (load_count < 14) {
        clear_text();
        nemo();
        status();
        Sleep(3000);
        clear_text();
        nemo();
        if (load_count != 3 && load_count != 8 && load_count != 13) {
            clear_text();
            nemo();
            print_slow_at(5, 4, "또 다시 갈림길이다.");
            print_at(10, 9, "> a. 뭔가 무시무시한 소리가 들리는 길\n");
            print_slow_at(15, 11, " *피가 끓어 오르는 소리가 들린다. 오른팔이...");
            print_at(10, 16, "> b. 여러가지 소리가 들려오는 복잡하고 어두운 길\n");
            print_slow_at(15, 18, " *가면 무언가 벌어질 것만 같아...");
            print_at(10, 23, "> c. 여기로 가면 안될 것 같다,,,\n");
            print_slow_at(15, 25, " *진짜로 여기는 가지말자 무서워요...");
            print_slow_at2(10, 29, "\"흠... 이번에는 어디로 가야하려나\"", 35);
            move_cursor(10, 31);

            char choice;
            scanf(" %c", &choice);

            switch (choice) {
            case 'a':case 'A':
                clear_text();
                nemo();
                move_cursor(5, 10);
                print_slow("투지가 불 타 오른다\n");
                Sleep(1000);
                int random_fight = rand() % 10;
                fights[random_fight].fight_Function();
                load_count++;
                store_count++;
                break;
            case 'b':case 'B':
                clear_text();
                nemo();
                move_cursor(5, 10);
                print_slow("이상한 기분이다...\n");
                Sleep(1000);
                int random_event = rand() % 11;
                events[random_event].event_Function();
                load_count++;
                store_count++;
                if (store_count == 3 || store_count == 6 || store_count == 9 || store_count == 12) {
                    event11();
                    break;
                }
                break;
            case 'c':case 'C':
                clear_text();
                nemo();
                move_cursor(5, 10);
                print_slow("앞으로 나아가니 이상한게 보인다... 가까이 가면 안될거같은데\n");
                Sleep(1000);
                switch (special_count) {
                case 1:
                    specials1();
                    break;
                case 2:
                    specials2();
                    break;
                case 3:
                    specials3();
                    break;
                case 4:
                    specials4();
                    break;
                case 5:
                    specials5();
                    break;
                case 6:
                    specials6();
                    break;
                case 7:
                    clear_text();
                    nemo();
                    print_slow_at(3, 5, "당신은 지름길을 거쳐 바로 마왕성으로 도착했습니다...!!!!");
                    print_slow_at(3, 7, "들어갈까요 ? 어떻게 할까요 ? 어떻게 하시겠어요 ?");
                    print_slow_at2(3, 9, "\"...뭔가 누군가 신난거 같은 느낌인데\"", 50);
                    print_slow_at(3, 11, "당신은 너무 신난 나머지 이상한 소리를 합니다");
                    print_slow_at2(3, 13, "\"뭐? 아니 뭐라고...?\"", 50);
                    print_slow_at(3, 15, "그래서 어떻게 하시겠어요 ?");
                    Sleep(1000);
                    print_at(9, 19, "_________________________________");
                    print_at(9, 20, "|                               |");
                    print_at(9, 21, "|   1. > 들어가기               |");
                    print_at(9, 22, "|                               |");
                    print_at(9, 23, "|   2. > 오늘만을기다렸다가자   |");
                    print_at(9, 24, "|                               |");
                    print_at(9, 25, "|   3. > 아너무들어가고싶어     |");
                    print_at(9, 26, "|_______________________________|");
                    print_slow_at2(3, 29, "\"아니 무슨...\"", 50);
                    print_slow_at(3, 31, "당신은 선택 해야 합니다");
                    int choice;
                    scanf("%d", &choice);
                    move_cursor(3, 32);
                    switch (choice) {
                    case 1:
                        print_slow_at2(3, 34, "\"음...그래 들어가자...\"", 50);
                        print_slow_at(3, 36, "당신은 마왕성으로 들어갑니다 !");
                        Sleep(1000);
                        bosses3();
                        break;

                    case 2:
                        print_slow_at2(3, 34, "\"기다리진 않았지만 들어가보자...\"", 50);
                        print_slow_at(3, 36, "당신은 마왕성으로 들어갑니다 !");
                        Sleep(1000);
                        bosses3();
                        break;

                    case 3:
                        print_slow_at2(3, 34, "\"아니 무슨 이런 선택지가 있는거야 ? \"", 50);
                        print_slow_at2(3, 36, "\"뭐... 됐나 그냥 들어가자\"", 50);
                        print_slow_at(3, 38, "당신은 마왕성으로 들어갑니다 !");
                        Sleep(1000);
                        bosses3();
                        break;

                    default:
                        print_slow_at2(3, 34, "우후후,,, 다른 방법은 없어요 자, 들어가도록 하죠", 50);
                        print_slow_at2(3, 36, "\"뭐? 무슨...\"", 35);
                        bosses3();
                        break;
                    }
                default:
                    break;
                }
                special_count++;
                break;

            default:
                clear_text();
                nemo();
                move_cursor(5, 10);
                print_slow("다른길은 없는 것 같다. 나아가야 할 때다.\n");
                handle_load_count(load_count);
                break;
            }
        }
        else if (load_count == 3) {
            clear_text();
            nemo();
            print_slow_at(3, 5, "갈림길들을 거친 당신 앞에는 한개의 길밖에 남지 않았습니다.");
            print_slow_at(3, 7, "무시무시한 기운이 느껴집니다. 어떻게 할까요 ?");
            Sleep(1000);
            print_slow_at2(3, 9, "\"당연히 가지, 그 동안 난 강해졌다. 출발할때다. 목표는 마왕, 가자 !\"", 50);
            Sleep(1000);
            clear_text();
            status_clear();
            status();
            bosses1();
            load_count++;
        }
        else if (load_count == 8) {
            clear_text();
            nemo();
            print_slow_at(3, 5, "갈림길들을 거친 당신 앞에는 한개의 길밖에 남지 않았습니다.");
            print_slow_at(3, 7, "무시무시한 기운이 느껴집니다. 어떻게 할까요 ?");
            Sleep(1000);
            print_slow_at2(3, 9, "\"당연히, 그 동안 난 더 강해졌다, 사슬낫의김석규도 물리쳤고 말이야. 가자 !!\"", 50);
            Sleep(1000);
            print_slow_at2(3, 11, "아주,,, 좋은 생각이에요 자 마왕을 향해 가보자구요", 45);
            Sleep(1000);
            clear_text();
            status_clear();
            status();
            bosses2();
            load_count++;
        }
        else if (load_count == 13) {
            bosses3();
        }
    }
}

//대사수정필요
void start_dead() {
    clear_text();
    nemo();
    print_slow_at(3, 5, "마왕성 까지 달려오니 정말 금방이였다.\n");
    print_slow_at2(3, 7, "\"뭐야 별 거 없네... 이제 들어가서 마왕을 무찌르면 되려나...\"\n", 50);
    Sleep(2000);
    clear_text();
    nemo();
    if (totalStrength == 10) {
        print_slow_at(3, 8, "당신에게는 100골드와 철검뿐이다. 그래도 들어갈까?\n");
        Sleep(1000);
        print_at(3, 14, "_____________________________________");
        print_at(3, 15, "|                                   |");
        print_at(3, 16, "|   1. > 들어가자                   |");
        print_at(3, 17, "|                                   |");
        print_at(3, 18, "|   2. > 너무 급한것 같다           |");
        print_at(3, 19, "|___________________________________|");
        print_slow_at(3, 23, "어떻게 할까?");
        move_cursor(3, 24);
        int a;
        scanf("%d", &a);
        if (a == 1) {
            clear_text();
            nemo();
            print_slow_at(5, 8, "당신이 들어가기로 결심하자 마자. . .\n");
            Sleep(1000);
            print_slow_at(5, 10, "시야가 어두워 지며. . .\n");
            Sleep(1000);
            print_slow_at2(5, 12, "\"어머나...? 지금 여기에 오시면 안된답니다 우후후,,,\"\n", 150);
            move_cursor(8, 15);
            print_slow2("당 신 은   의 식 을  잃 었 다. . .", 200);
            print_at(11, 21, "   ####     ##     ##   ##  #######            #####   ##   ##  #######  ###### ");
            print_at(11, 22, "  ##  ##   ####    ### ###   ##   #           ##   ##  ##   ##   ##   #   ##  ##");
            print_at(11, 23, " ##       ##  ##   #######   ## #             ##   ##   ## ##    ## #     ##  ##");
            print_at(11, 24, " ##       ##  ##   #######   ####             ##   ##   ## ##    ####     #####");
            print_at(11, 25, " ##  ###  ######   ## # ##   ## #             ##   ##    ###     ## #     ## ##");
            print_at(11, 26, "  ##  ##  ##  ##   ##   ##   ##   #           ##   ##    ###     ##   #   ##  ##");
            print_at(11, 27, "   #####  ##  ##   ##   ##  #######            #####      #     #######  #### ##");

            Sleep(1000);
            exit(0);

        }
        else if (a == 2) {
            clear_text();
            nemo();
            print_slow_at(5, 8, "당신이 뒤로 돌아가려 하자마자, 돌아가는 길이 사라졌다\n");
            print_slow_at2(5, 10, "\"뭐야?\"\n", 50);
            print_slow_at(5, 12, "돌아가는 길은 없다. 나아가자");
            Sleep(1000);
            clear_text();
            nemo();
            print_slow_at(5, 8, "당신이 들어가기로 결심하자 마자. . .\n");
            Sleep(1000);
            print_slow_at(5, 10, "시야가 어두워 지며. . .\n");
            Sleep(1000);
            print_slow_at2(5, 12, "\"어머나...? 지금 여기에 오시면 안된답니다 우후후,,,\"\n", 150);
            move_cursor(8, 15);
            print_slow2("당 신 은   의 식 을  잃 었 다. . .", 200);
            print_at(11, 21, "   ####     ##     ##   ##  #######            #####   ##   ##  #######  ###### ");
            print_at(11, 22, "  ##  ##   ####    ### ###   ##   #           ##   ##  ##   ##   ##   #   ##  ##");
            print_at(11, 23, " ##       ##  ##   #######   ## #             ##   ##   ## ##    ## #     ##  ##");
            print_at(11, 24, " ##       ##  ##   #######   ####             ##   ##   ## ##    ####     #####");
            print_at(11, 25, " ##  ###  ######   ## # ##   ## #             ##   ##    ###     ## #     ## ##");
            print_at(11, 26, "  ##  ##  ##  ##   ##   ##   ##   #           ##   ##    ###     ##   #   ##  ##");
            print_at(11, 27, "   #####  ##  ##   ##   ##  #######            #####      #     #######  #### ##");
            Sleep(1000);
            exit(0);
        }
    }
    else {
        print_slow_at(3, 8, "당신에게는 50골드와 목검뿐이다. 그래도 들어갈까?\n");
        Sleep(1000);
        print_at(3, 14, "_____________________________________");
        print_at(3, 15, "|                                   |");
        print_at(3, 16, "|   1. > 들어가자                   |");
        print_at(3, 17, "|                                   |");
        print_at(3, 18, "|   2. > 너무 급한것 같다           |");
        print_at(3, 19, "|___________________________________|");
        print_slow_at(3, 23, "어떻게 할까?");
        move_cursor(3, 24);
        int a;
        scanf("%d", &a);
        if (a == 1) {
            clear_text();
            nemo();
            print_slow_at(5, 8, "당신이 들어가기로 결심하자 마자. . .\n");
            Sleep(1000);
            print_slow_at(5, 10, "시야가 어두워 지며. . .\n");
            Sleep(1000);
            print_slow_at2(5, 12, "\"어머나...? 지금 여기에 오시면 안된답니다 우후후,,,\"\n", 150);
            move_cursor(8, 15);
            print_slow2("당 신 은   의 식 을  잃 었 다. . .", 200);
            print_at(11, 21, "   ####     ##     ##   ##  #######            #####   ##   ##  #######  ###### ");
            print_at(11, 22, "  ##  ##   ####    ### ###   ##   #           ##   ##  ##   ##   ##   #   ##  ##");
            print_at(11, 23, " ##       ##  ##   #######   ## #             ##   ##   ## ##    ## #     ##  ##");
            print_at(11, 24, " ##       ##  ##   #######   ####             ##   ##   ## ##    ####     #####");
            print_at(11, 25, " ##  ###  ######   ## # ##   ## #             ##   ##    ###     ## #     ## ##");
            print_at(11, 26, "  ##  ##  ##  ##   ##   ##   ##   #           ##   ##    ###     ##   #   ##  ##");
            print_at(11, 27, "   #####  ##  ##   ##   ##  #######            #####      #     #######  #### ##");
            Sleep(1000);
            exit(0);

        }
        else if (a == 2) {
            clear_text();
            nemo();
            print_slow_at(5, 8, "당신이 뒤로 돌아가려 하자마자, 돌아가는 길이 사라졌다\n");
            print_slow_at(5, 10, "\"뭐야?\"\n");
            print_slow_at(5, 12, "돌아가는 길은 없다. 나아가자");
            clear_text();
            nemo();
            print_slow_at(5, 8, "당신이 들어가기로 결심하자 마자. . .\n");
            Sleep(1000);
            print_slow_at(5, 10, "시야가 어두워 지며. . .\n");
            Sleep(1000);
            print_slow_at2(5, 12, "\"어머나...? 지금 여기에 오시면 안된답니다 우후후,,,\"\n", 150);
            move_cursor(8, 15);
            print_slow2("당 신 은   의 식 을  잃 었 다. . .", 200);
            print_at(11, 21, "   ####     ##     ##   ##  #######            #####   ##   ##  #######  ###### ");
            print_at(11, 22, "  ##  ##   ####    ### ###   ##   #           ##   ##  ##   ##   ##   #   ##  ##");
            print_at(11, 23, " ##       ##  ##   #######   ## #             ##   ##   ## ##    ## #     ##  ##");
            print_at(11, 24, " ##       ##  ##   #######   ####             ##   ##   ## ##    ####     #####");
            print_at(11, 25, " ##  ###  ######   ## # ##   ## #             ##   ##    ###     ## #     ## ##");
            print_at(11, 26, "  ##  ##  ##  ##   ##   ##   ##   #           ##   ##    ###     ##   #   ##  ##");
            print_at(11, 27, "   #####  ##  ##   ##   ##  #######            #####      #     #######  #### ##");
            Sleep(1000);
            exit(0);
        }
    }
}

void story() {
    clear_text();
    nemo();
    print_slow_at(3, 5, "무섭지만 왜인지 쭉 뻗은길은 가면 안될 것만 같다...\n");
    print_slow_at(3, 7, "당신은 숲으로 들어갔다...\n");
    Sleep(1000);
    clear_text();
    nemo();
    print_slow_at(3, 5, "숲으로 들어오자, 당신은 세 갈림 길을 발견했다\n");
    print_slow_at(3, 7, "이번에는 어디로 가야할까. . .?\n");
    Sleep(1000);

    handle_load_count(load_count);
}
//첫번째 길선택 
void street() {
    clear_text();
    nemo();
    status();
    Sleep(2000);
    clear_text();
    nemo();
    print_slow_at(3, 5, "뭔지 하나도 모르겠지만, 아무튼 출발 해볼까...\n");
    print_slow_at2(3, 7, "당신은 당신이 깨어났던 곳을 나와 출발하려던 차에 갈림길을 발견했다. . .\n", 70);
    print_slow_at(3, 9, "어디로 갈까 ?");
    move_cursor(3, 10);
    Sleep(1000);
    clear_text();
    nemo();
    move_cursor(10, 7);
    printf(" > a. 마왕성이 보이는 뻥 뚫린 길");
    move_cursor(14, 9);
    print_slow(" * 이 길로 가면 바로 마왕을 만날 수 있을 것만 같다.");
    move_cursor(10, 16);
    printf(" > b. 울창한 숲이 보이고 이상한 소리들이 들려오는 길");
    move_cursor(14, 18);
    print_slow(" * 무섭다. . . 마왕성 까지 가려면 한참 걸릴 것 같다. . .");
    move_cursor(10, 23);
    print_slow("어디로 갈까 ?");
    move_cursor(10, 24);

    char choice;
    scanf(" %c", &choice);

    switch (choice) {
    case 'a': {
        start_dead();
    }
    case 'b': {
        story();
    }
    default: {
        clear_text();
        nemo();
        move_cursor(5, 20);
        printf("이 외에 다른 길은 없다. 제대로 선택하자. ");
        Sleep(1000);
        street();
    }
    }

}

//첫번째 스탯변환 선택지
void startChoice() {
    clear_text();
    nemo();

    print_slow_at2(3, 7, "\"시간이 없어요 용사님. 빨리 마왕을 무찌르러 가주세요.\"\n", 50);

    print_at(7, 10, "_________________________________________________");
    print_at(7, 11, "|                                               |");
    print_at(7, 12, "|  1. > 알겠습니다! 당장 출발하겠습니다         |");
    print_at(7, 13, "|                                               |");
    print_at(7, 14, "|  2. > 네? 그게 무슨 소리에요. 여긴 어딘데요?  |");
    print_at(7, 15, "|_______________________________________________|");
    print_slow_at(4, 18, "뭐라고 대답하지?");
    move_cursor(4, 19);

    char choice;
    scanf(" %c", &choice);

    if (choice == '1') {
        print_slow_at2(3, 21, "\"감사합니다! 당신의 앞길에 축복이 깃들길! 여기 지원품 입니다!\"\n", 50);
        print_slow_at(3, 23, "당신은 100G와 철 검을 얻었습니다.\n\n");
        Sleep(1000);
        Gold(100);
        Strength(10);
        street();
    }
    else if (choice == '2') {
        print_slow_at2(3, 21, "\"하아, 어서 출발하세요. 여기요.\"\n", 50);
        print_slow_at(3, 23, "당신은 50G와 목검을 얻었습니다.\n\n");
        Gold(50);
        Strength(5);
        Sleep(1000);
        street();

    }
    else {
        print_slow_at2(3, 23, "\"뭐라 하시는거에요?\"\n", 60);
        Sleep(1000);
        startChoice();
    }
}

//인트로
void intro() {
    clear_text();
    nemo();
    print_slow_at(3, 3, "끼--익 !!!! 쾅- !!!!");
    print_slow_at(3, 5, "'아아... 이렇게 트럭에 치여 삶을 마감하는 건가'");
    print_slow_at(3, 7, "눈앞이 점멸하며 주마등이 스쳐 지나가. . .");
    print_slow_at(3, 9, "지 않고 낯선 천장이 날 맞이했다");
    print_slow_at(3, 11, "'아?'");
    print_slow_at(3, 13, "나 트럭에 치였는데?\n");
    print_slow_at(3, 15, "주변을 둘러보니 꽤나 고풍스럽다. 그리고 사람이... 왜이리 많아!??");
    print_slow_at(3, 16, "뭐지여기어디지당신들누구야저너무무서워요");
    print_slow_at(3, 18, "수 많은 사람들 중 한 여성이 날 향해 입을 열었다");
    print_slow_at2(3, 20, "\"일어나세요 용사님. 당신을 기다렸답니다.\"", 80);
    print_slow_at2(3, 22, "'네?'", 80);
    print_slow_at2(3, 24, "\"2147483536번 째 용사님, 마왕을 무찔러 저희를 구해주세요\"", 80);
    print_slow_at2(3, 26, "\"...네?\"", 100);
    Sleep(1000);

    startChoice();
}
//메인함수
int main() {
    
    int width = 100;
    int height = 50;

    set_console_size(width, height);

    
    char choice;
    
    while (1) {
        clear_text();
        nemo(); 
        Strength(10);
        fight10();
        print_at(8, 40, "**원활한 게임 진행을 위해 터미널창 크기를 건드리거나, 전체화면을 누르지 말아주세요**");
        move_cursor(10, 5);
        print_slow2("일어나세요, 용사님\n", 200);
        move_cursor(8, 8);
        print_slow("> 일어나기(a)\n");
        move_cursor(10, 15);
        scanf(" %c", &choice);

        if (choice == 'a') {
            intro();
            break;
        }
        else {
            clear_text();
            move_cursor(10, 5);
            nemo();
            print_slow2("\"하아, 일어나시라니까.\"\n", 100);

        }
    }
    return 0;
}
