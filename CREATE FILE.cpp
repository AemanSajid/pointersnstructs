#include <stdio.h>

int main() {
    FILE *file;
    char path[100];

    printf("Enter the file path: ");
    scanf("%s", path);

    file = fopen(path, "w");

    if (file == NULL) {
        printf("Unable to create the file.\n");
        return 1;
    }

    printf("File created successfully at %s\n", path);

    fclose(file);
    return 0;
}

