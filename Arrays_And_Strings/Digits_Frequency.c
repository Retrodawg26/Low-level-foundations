#include <stdio.h>

int main() {
    char num[1000];
    int counts[10] = {0}; // Array to store counts for digits 0-9

    fgets(num, sizeof(num), stdin);

    for (int i = 0; num[i] != '\0'; i++) {
        if (num[i] >= '0' && num[i] <= '9') { // Check if character is a digit
            counts[num[i] - '0']++; // Increment the corresponding count
        }
    }

    // Print the counts for digits 0-9
    for (int i = 0; i < 10; i++) {
        printf("%d ", counts[i]);
    }
    printf("\n");

    return 0;
}
