int removeDuplicates(int* nums, int numsSize) {
    // Edge case: if the array is empty, return 0
    if (numsSize == 0) {
        return 0;
    }

    // 'k' will track the number of unique elements
    int k = 1;  // The first element is always unique

    // Iterate through the array starting from the second element
    for (int i = 1; i < numsSize; i++) {
        // If the current element is not equal to the previous one, it's unique
        if (nums[i] != nums[i - 1]) {
            // Assign the unique element to the next available position
            nums[k] = nums[i];
            // Increment 'k' to move the index forward for the next unique element
            k++;
        }
    }

    // Return the number of unique elements
    return k;
}
