#include <stdlib.h>
#include <stdio.h>

int strLength (char str[]) {

    int counter;

    for (counter=0; str[counter] != '\0'; counter++);

    return (counter);

};

int main () {
    
    int n;
    scanf("%d", &n);

    while (n > 0) {
        char word[100];
        scanf("%s", &word);

        int wordSize = strLength(word); /* you can also use strlen() | Tu peux utiliser strlen() aussi */
        if (wordSize > 10) {

            char firstLetter = word[0];
            char lastLetter = word[wordSize - 1];
            int newLenght = wordSize - 2;
            printf("%c%d%c\n", firstLetter, newLenght, lastLetter);
           --n;
        } else {

            printf(word);
            printf("\n");
            --n;

        }

    }

    return 0;
    
}