int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a, b);

}

int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(b, a);

}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int count_a = 0, count_b = 0;
    int char_count[30] = {0};

    for (const char* p = a; *p; p++) {
        if (!char_count[*p - 'a']) {
            char_count[*p - 'a'] = 1;
            count_a++;
        }
    }

    memset(char_count, 0, sizeof(char_count));

    for (const char* p = b; *p != '\0'; p++) {
        if (!char_count[*p - 'a']) {
            char_count[*p - 'a'] = 1;
            count_b++;
        }
    }

    if (count_a == count_b) {
        return strcmp(a, b);
    } else {
        return count_a - count_b;
    }
    
}

int sort_by_length(const char* a, const char* b) {
    int len_a = strlen(a);
    int len_b = strlen(b);

    if (len_a == len_b) {
        return strcmp(a, b);
    } else {
        return len_a - len_b;
    }
    
}


void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
            for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (cmp_func(arr[i], arr[j]) > 0) {
                char* temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
