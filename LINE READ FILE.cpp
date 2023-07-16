#include <stdio.h>

int main() {
    FILE *file;
    char path[100];
    char line[100];

    printf("Enter the file path: ");
    scanf("%s", path);

    file = fopen(path, "r");

    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    printf("Lines read from the file:\n");

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}

