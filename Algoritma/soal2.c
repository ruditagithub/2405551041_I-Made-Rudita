#include <stdio.h>
#include <string.h>

int main() {
    char str1[101], str2[101];

    // Input dua string
    scanf("%s", str1);
    scanf("%s", str2);
    
    // Membandingkan panjang string
    if (strlen(str1) != strlen(str2)) {
        printf("BERBEDA\n");
    } else {
        // Jika panjang sama, periksa apakah string identik
        if (strcmp(str1, str2) == 0) {
            printf("IDENTIK\n");
        } else {
            printf("MIRIP\n");
        }
    }

    return 0;
}