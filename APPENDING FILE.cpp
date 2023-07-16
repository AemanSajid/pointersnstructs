#include <stdio.h>

int main() {
    FILE *file;
    char path[100];
    char text[100];

    printf("Enter the file path: ");
    scanf("%s", path);

    file = fopen(path, "a");

    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    printf("Enter the text to append: ");
    scanf(" %[^\n]", text);

    fprintf(file, "%s", text);

    printf("Text appended to the file successfully.\n");

    fclose(file);
    return 0;
}

