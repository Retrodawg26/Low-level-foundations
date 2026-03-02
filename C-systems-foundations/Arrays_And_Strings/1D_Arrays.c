#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);  // Step 1: Read the number of elements

    int *arr = malloc(n * sizeof(int));  // Step 2: allocate memory

    // Step 3: read n integers
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 4: calculate sum
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Step 5: print result
    printf("%d\n", sum);

    // Step 6: free memory
    free(arr);
    
    return 0;
}
