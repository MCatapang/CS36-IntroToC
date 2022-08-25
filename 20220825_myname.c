#include <stdio.h>

/* Produces warning */
// void main() {
//     printf("Michael Catapang");
// }

/* Does not produce warning */
int main(void) {
    char name[] = "Michael Catapang";
    printf("%s", name);
    return 0;
}