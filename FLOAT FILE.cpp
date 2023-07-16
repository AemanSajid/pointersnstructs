 #include <stdio.h>

int main() {
    FILE *file;
    char path[100];
    float num, sum = 0;

    printf("Enter the file path: ");
    scanf("%s", path);

    file = fopen(path, "r");

    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    while (fscanf(file, "%f", &num) == 1) {
        sum += num;
    }

    printf("Sum of float values: %.2f\n", sum);

    fclose(file);
    return 0;
}

