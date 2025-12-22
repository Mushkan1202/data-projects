#include <stdio.h>
#include <string.h>

int linearSearch(char *arr[], int size, char *key) {
    for (int i = 0; i < size; i++) {
        if (strcmp(arr[i], key) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    char *fruits[] = {
        "Apple",
        "Banana",
        "Cherry",
        "Grape",
        "Kiwi",
        "Lemon",
        "Mango",
        "Orange",
        "Peach"
    };

    int n = sizeof(fruits) / sizeof(fruits[0]);

    char *key_to_find = "Mango";
    printf("Searching for: %s\n", key_to_find);

    int result = linearSearch(fruits, n, key_to_find);

    if (result != -1) {
        printf("Found '%s' at index: %d\n", key_to_find, result);
    } else {
        printf("'%s' was not found in the list.\n", key_to_find);
    }

    printf("\n-----------------------------------\n\n");

    char *another_key = "Fig";
    printf("Searching for: %s\n", another_key);
    
    result = linearSearch(fruits, n, another_key);

    if (result != -1) {
        printf("Found '%s' at index: %d\n", another_key, result);
    } else {
        printf("'%s' was not found in the list.\n", another_key);
    }

    return 0;
}
