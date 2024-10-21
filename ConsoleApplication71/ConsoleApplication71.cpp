#include <stdio.h>

int de() {
    int* p = NULL;
    return *p;
}

int main() {
    printf("%d\n", de());
    return 0;
}
