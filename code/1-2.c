#include <stdio.h>

int Square(int num);

int main() {
    void Printer();

    int num = 5;
    int result = Square(num);
    printf("%d %d\n", num, result);

    return 0;
}

void Printer() {
printf("Welcome to Computer Programming 03 Lab!\n");
}

int Square(int n) {
return n * n;
}
