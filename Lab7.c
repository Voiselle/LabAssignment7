#include <stdio.h>

int main() {
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = sizeof(arr) / sizeof(arr[0]);
    int swaps[n];
    
    // Initialize swaps array to 0
    for (int i = 0; i < n; i++) {
        swaps[i] = 0;
    }
    
    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        int pass_swaps = 0;  // Counter for swaps during current pass
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                pass_swaps++;
            }
        }
        swaps[i] = pass_swaps;
    }
    
    // Print swaps for each pass
    for (int i = 0; i < n - 1; i++) {
        printf("pass #%d: %d\n", i + 1, swaps[i]);
    }
    
    return 0;
}
