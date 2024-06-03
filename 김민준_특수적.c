//김민준
void specials2() {
    clear_text();
    Fight_UI();
    print_at(46, 24, "_________");
    print_at(46, 25, "|   O   |");
    print_at(46, 26, "|  /|\  |");
    print_at(46, 27, "| / | \ |");
    print_at(46, 28, "|  / \  |");
    print_at(46, 29, "| /   \ |");
    print_at(46, 30, "---------");
    print_slow_at(15, 45, "어디서 콜록거리는 소리가 나는거 같은데...");
    printf("                                                         ");
    Sleep(1000);
    print_slow_at(15, 45, "혹시 특수적인가?? 어서 무찌르자!");
    while (0) {
        int choice;
        move_cursor(15, 46);
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            move_cursor(15, 45);
            print_slow("당신은 매우허약한김민준과 전투를 시작..");
            Sleep(1000);
            print_at(15, 45, "                                                ");
            print_slow("...하려고 했는데....?");
            Sleep(1000);
            print_at(15, 45, "                                                ");
            print_slow("매우허약한김민준은 이미 쓰러져있다... 이딴게 특수적?");
            Sleep(1000);
            print_at(15, 45, "                                                ");

            break;
        case 2:
            move_cursor(15, 45);
            print_slow("방어하기를 선택했다.");
            Sleep(1000);
            print_at(15, 45, "                                                ");
            print_slow("....틱....(대충엄청약하게공격하는소리)");
            Sleep(1000);
            print_at(15, 45, "                                                ");
            print_slow("음? 맞은건가?");
            Sleep(1000);
            print_at(15, 45, "                                                ");

            break;

        case 3:
            move_cursor(15, 45);
            print_slow("도망가기 전에 한번 말이라도 걸어보자");
            Sleep(1000);
            print_at(15, 45, "                                                ");
            print_slow("저기...");
            Sleep(1000);
            print_at(15, 45, "                                                ");
            print_slow("매우허약한김민준: ㅅ..사..살려주세요!!!! 갖고있는 거 다 드릴게요ㅠㅠㅠㅠ");
            Sleep(1000);
            print_at(15, 45, "                                                ");
            print_slow("뭐지 저 녀석..? 나에게 100골드를 주고 자기가 도망갔다....");
            Sleep(1000);
            print_at(15, 45, "                                                ");
            Gold(100);
            
            break;

        default:
            print_at(15, 45, "아무것도하기싫다");
            break;

        }

    }


}