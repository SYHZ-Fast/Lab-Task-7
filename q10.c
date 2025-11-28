#include <stdio.h>

int main() {
    int array[12];
    int window_size;
    int max_values[12];
    int max_window[6];
    int overall_max = -2147483648;
    int max_window_index = 0;
    
    printf("Enter 12 integers: ");
    for(int i = 0; i < 12; i++) {
        scanf("%d", &array[i]);
    }
    
    printf("Enter window size (3-6): ");
    scanf("%d", &window_size);
    
    int num_windows = 12 - window_size + 1;
    
    for(int i = 0; i < num_windows; i++) {
        int window_max = array[i];
        
        for(int j = i; j < i + window_size; j++) {
            if(array[j] > window_max) {
                window_max = array[j];
            }
        }
        
        max_values[i] = window_max;
        
        if(window_max > overall_max) {
            overall_max = window_max;
            max_window_index = i;
        }
    }
    
    printf("Maximums of each window: ");
    for(int i = 0; i < num_windows; i++) {
        printf("%d ", max_values[i]);
    }
    printf("\n");
    
    printf("Overall max window: [");
    for(int i = 0; i < window_size; i++) {
        printf("%d", array[max_window_index + i]);
        if(i < window_size - 1) printf(" ");
    }
    printf("] with max value %d\n", overall_max);
    
    return 0;
}