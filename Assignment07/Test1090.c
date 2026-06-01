#include <stdio.h>

int main() {
    long long a, r, n;

    scanf("%lld %lld %lld", &a, &r, &n);

    while(n > 1) {
        a = a * r;
        n--;
    }

    printf("%lld", a);

    return 0;
}
