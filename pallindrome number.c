#include <stdio.h>
int main() {
  int n, s = 0, r, c;
    printf("Enter an integer: ");
    scanf("%d", &n);
    c = n;

    while (n != 0) {
        r = n % 10;
        s = s * 10 + r;
        n /= 10;
    }

    if (c == s)
        printf("%d is a palindrome.", c);
    else
        printf("%d not ", c);

    return 0;
}