#include <stdio.h>

#define MAX_LINES 100
#define MAX_LENGTH 100

int main() {
    FILE *file;
    char path[100];
    char lines[MAX_LINES][MAX_LENGTH];
    int lineCount = 0;

    printf("Enter the file path: ");
    scanf("%s", path);

    file = fopen(path, "r");

    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    while (fgets(lines[lineCount], MAX_LENGTH, file) != NULL) {
        lineCount++;
        if (lineCount >= MAX_LINES) {
            break;
        }
    }

    printf("Lines read from the file:\n");

    for (int i = 0; i < lineCount; i++) {
        printf("%s", lines[i]);
    }

    fclose(file);
    return 0;
}

