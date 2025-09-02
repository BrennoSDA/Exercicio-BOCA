#include <stdio.h>
#include <math.h>

long long mdc(long long a, long long b) {
    long long temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    double N, parte_int, parte_frac;
    long long num, den, d;
    int casas;

    scanf("%lf", &N);

    parte_frac = modf(N, &parte_int);

    num = (long long)parte_int;
    den = 1;
    casas = 0;

    if (parte_frac > 1e-9) {
        while (fabs(parte_frac - round(parte_frac)) > 1e-9 && casas < 10) {
            parte_frac *= 10;
            den *= 10;
            casas++;
        }
        num = (long long)parte_int * den + (long long)round(parte_frac);
    }

    d = mdc(num, den);
    num /= d;
    den /= d;

    printf("%lld/%lld\n", num, den);

    return 0;
}
