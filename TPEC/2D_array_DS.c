#include <stdio.h>
#include <limits.h>

// Function to calculate the hourglass sum
int hourglassSum(int arr[6][6]) {
    int hourGlassMax = INT_MIN;
    int hourGlassCurrent = 0;

    // Iterate over each possible hourglass
    for (int x = 0; x < 4; x++) {  // 4 is the number of valid row positions for the top of the hourglass
        for (int y = 0; y < 4; y++) {  // 4 is the number of valid column positions for the left of the hourglass
            // Calculate the sum of the current hourglass
            hourGlassCurrent = arr[x][y] + arr[x][y + 1] + arr[x][y + 2] + 
                               arr[x + 1][y + 1] + 
                               arr[x + 2][y] + arr[x + 2][y + 1] + arr[x + 2][y + 2];

            // Update the maximum hourglass sum
            if (hourGlassCurrent > hourGlassMax) {
                hourGlassMax = hourGlassCurrent;
            }
        }
    }
    
    return hourGlassMax;
}

int main() {
    // Declare a 6x6 array
    int arr[6][6];
    
    // Read input for the 6x6 array
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Call the hourglassSum function and store the result
    int result = hourglassSum(arr);

    // Output the result
    printf("%d\n", result);

    return 0;
}
