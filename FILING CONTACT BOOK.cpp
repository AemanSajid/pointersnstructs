#include <stdio.h>

#define MAX_CONTACTS 100

int main() {
    FILE *file;
    char path[100];
    char name[100], address[100], phone[100];

    printf("Enter the file path: ");
    scanf("%s", path);

    file = fopen(path, "w");

    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    printf("Enter the contact information:\n");
    printf("Name: ");
    scanf(" %[^\n]", name);
    printf("Address: ");
    scanf(" %[^\n]", address);
    printf("Phone: ");
    scanf(" %[^\n]", phone);

    fprintf(file, "%s, %s, %s\n", name, address, phone);

    printf("Contact added to the phone book.\n");

    fclose(file);
    return 0;
}


