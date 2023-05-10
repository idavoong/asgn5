/*
Name: Ida Voong
Name: Jenna Chan
*/

#include <stdio.h>

char mystring[20];
char end = 10;
int i;
char c;

void readstring(char mystring[]) {
    i = 0;
    while (c != end) {
       mystring[i] = c;
       c = getchar();
       i++;
    }
    mystring[i] = '\0';
}

int main() {
    int j;
    int k;
    printf("Enter word: ");
    c = getchar();
    while (c != end) {
        readstring(mystring);
        printf("Original word: ");
        printf("%s\n", mystring);
        printf("Alphabetized word: ");
        for (j = 33; j <= 126; j++) {
            for (k = 0; k < i; k++) {
                if (mystring[k] == j) {
                    printf("%c", mystring[k]);
                }
            }
        }
        printf("\nEnter word: ");
        c = getchar();
    }
    printf("\nExiting");
    return 0;
}
