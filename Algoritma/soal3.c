#include <stdio.h>
#include <math.h>

int main() {
    long long number, divisor;
    int isPrime = 1; // Mengasumsikan bilangan prima secara default

    // Input bilangan
    scanf("%lld", &number);

    // Cek jika bilangan kurang dari atau sama dengan 1
    if (number <= 1) {
        printf("BUKAN\n");
        return 0;
    }

    // Cek pembagian dari 2 hingga akar kuadrat bilangan
    for (divisor = 2; divisor <= sqrt(number); divisor++) {
        if (number % divisor == 0) {
            isPrime = 0; // Menandakan bilangan bukan prima
            break;
        }
    }

    // Output hasil
    if (isPrime) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }

    return 0;
}