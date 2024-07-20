#include <stdio.h>

int i, j = 0;

int main() {

    for(i = 1; i <= 9; i++) {
        printf("=======%d단=======\n\n", i);

        for(j = 1; j <= 9; j++) {
            printf("%d X %d = %d\n\n", i, j, i * j);
        }

    printf("\n\n");

    }

return 0;
}