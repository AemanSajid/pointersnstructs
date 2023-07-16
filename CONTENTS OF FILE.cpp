#include <stdio.h>

int main() {
    FILE *file;
    char path[100];
    char ch;

    printf("Enter the file path: ");
    scanf("%s", path);

    file = fopen(path, "r");

    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    printf("Contents of the file:\n");

    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
    return 0;
}

