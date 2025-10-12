## C 코드

```c
#include <stdio.h>

int main(void) {
    int choice, num;
    while (1) {
        printf("\n===== 메뉴 =====\n");
        printf("1. 구구단 출력\n");
        printf("2. 별찍기 출력\n");
        printf("0. 종료\n");
        printf("메뉴를 선택하세요: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("프로그램을 종료합니다.\n");
            break;
        }

        switch (choice) {
        case 1:
            printf("몇 단을 출력할까요? ");
            scanf("%d", &num);
            for (int i = 1; i <= 9; i++)
                printf("%d x %d = %d\n", num, i, num * i);
            break;

        case 2:
            printf("정수를 입력하세요: ");
            scanf("%d", &num);
            for (int i = 1; i <= num; i++) {
                for (int j = 1; j <= i; j++) printf("*");
                printf("\n");
            }
            break;

        default:
            printf("잘못된 입력입니다. 다시 선택하세요.\n");
        }
    }
    return 0;
}
