#include <stdio.h>

int main() {

    int w;
    scanf("%d", &w);
    int division = w%2;

    if ( division == 0 && w != 2 ) {

        printf("YES");

    } else {

        printf("NO");

    };

    return 0;

}