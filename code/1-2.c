#include <stdio.h>

int main() {
    void Print();
    int square();
    int num = 5;
    int result = square(num);
    printf("%d %d\n", num, result);

    return 0;
}

void Print() {
printf("Welcome to Computer Programming 03 Lab!\n");
}

int square(int n) {
return n * n;
}
