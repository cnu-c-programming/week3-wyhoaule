#include <stdio.h>

int main() {
    void print();
    int square();
    int num = 5;
    int result = square(num);
    print();
    printf("%d %d\n", num, result);

    return 0;
}

void print() {
printf("Welcome to Computer Programming 03 Lab!\n");
}

int square(int n) {
return n * n;
}
