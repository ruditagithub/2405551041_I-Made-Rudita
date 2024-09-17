
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Tukar elemen jika elemen yang sekarang lebih besar dari elemen selanjutnya
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    
    // Input jumlah nilai
    scanf("%d", &n);
    
    int nilai[n];
    
    // Input nilai-nilai
    for (int i = 0; i < n; i++) {
        scanf("%d", &nilai[i]);
    }
    
    // Mengurutkan nilai-nilai menggunakan Bubble Sort
    bubble_sort(nilai, n);
    
    // Output nilai-nilai yang sudah terurut
    for (int i = 0; i < n; i++) {
        printf("%d\n", nilai[i]);
    }
    
    return 0;
}