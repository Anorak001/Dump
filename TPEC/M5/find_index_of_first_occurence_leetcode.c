// Function to find the first occurrence of needle in haystack
int strStr(char *haystack, char *needle) {
    // If needle is an empty string, return 0
    if (*needle == '\0') {
        return 0;
    }

    // Traverse haystack to find the first occurrence of needle
    for (int i = 0; haystack[i] != '\0'; i++) {
        // If the remaining part of haystack is shorter than needle, break early
        if (strlen(haystack + i) < strlen(needle)) {
            break;
        }

        // Compare substring starting from haystack[i] with needle
        int j = 0;
        while (haystack[i + j] == needle[j] && needle[j] != '\0') {
            j++;
        }

        // If we found a match, return the starting index
        if (needle[j] == '\0') {
            return i;
        }
    }

    // If no match found, return -1
    return -1;
}
