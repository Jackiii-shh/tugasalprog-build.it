#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isPrime(long long number) { 
    if (number <= 1) return 0;
    if (number == 2) return 1;
    if (number % 2 == 0) return 0;

    for (long long divisor = 3; divisor * divisor <= number; divisor += 2) { 
        if (number % divisor == 0) return 0;
    }

    return 1;
}

int main() {
    long long number; 

    scanf("%lld", &number); 

    if (isPrime(number)) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }

    return 0;
}
