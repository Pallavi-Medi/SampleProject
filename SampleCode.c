#include <stdio.h>

int main() {
    char name[40];
    printf("Enter Name:");
    fgets(name, 40, stdin);
    printf("Hello %s", name);
    return 0;
}
