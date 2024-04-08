#include <stdio.h>

long rf(int n);
long rf_calculation(int i, int level);

int main() {
    int n;
    puts("Enter number");
    scanf("%d", &n);
    printf("For: %d! = %ld \n", n, rf(n));
    return 0;
}

long rf_calculation(int n, int level) {
    printf(" |Level: %d|\t|Recursive descent:%d|\n", level, n);
    if (n == 1|| n == 0) {
        printf(" |Level: %d|\t|Recursive descent:%d|\t|Current value: %d|\n", level, n, 1);
        return 1;
    }
        long int result = n * rf_calculation(n - 1, level+1);
        printf(" |Level: %d|\t|Recursive descent:%d|\t|Current value: %ld|\n", level, n, result);
        return result;
}

long rf(int n) {
    return rf_calculation(n, 1);
}