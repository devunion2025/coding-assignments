#include <stdio.h>

int main() {

    void gugudan() {
        int N;

        printf("몇 단을 출력할까요? : ");
        scanf("%d", &N);

        for(int i=1; i<10; i++) {
            printf("%d x %d = %d\n", N, i, N*i);
        }
    }

    void star() {
        int N;

        printf("정수를 입력하시오 : ");
        scanf("%d", &N);

        for(int i=1; i<=N; i++) {
            for(int j=1; j<=i; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    
    int N = 0;

    printf("구구단은 1, 별찍기는 2를 누르세요 : ");
    scanf("%d", &N);
    
    if(N == 1) {
        gugudan();
    }
    else if(N == 2) {
        star();
    }
    else {
        printf("다시 시작하세요");
    }

    return 0;

}
