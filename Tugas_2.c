#include <stdio.h>
#include <string.h>

void compare_strings(const char* first_string, const char* second_string) {
    int length_first = strlen(first_string);
    int length_second = strlen(second_string);

    if (length_first != length_second) {
        printf("BERBEDA\n");
    } else {
        int comparison_result = strcmp(first_string, second_string);
        if (comparison_result == 0) {
            printf("IDENTIK\n");
        } else {
            printf("MIRIP\n");
        }
    }
}

int main() {
    char input_string1[101];
    char input_string2[101];

    fgets(input_string1, sizeof(input_string1), stdin);
    input_string1[strcspn(input_string1, "\n")] = '\0';

    fgets(input_string2, sizeof(input_string2), stdin);
    input_string2[strcspn(input_string2, "\n")] = '\0';

    compare_strings(input_string1, input_string2);

    return 0;
}
