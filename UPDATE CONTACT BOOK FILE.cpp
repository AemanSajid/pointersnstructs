#include <stdio.h>

#define MAX_CONTACTS 100

typedef struct {
    char name[100];
    char address[100];
    char phone[100];
} Contact;

int main() {
    FILE *file;
    char path[100];
    Contact contacts[MAX_CONTACTS];
    int contactCount = 0;

    printf("Enter the file path: ");
    scanf("%s", path);

    file = fopen(path, "w");

    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    printf("Enter the contact information:\n");
    printf("Name: ");
    scanf(" %[^\n]", contacts[contactCount].name);
    printf("Address: ");
    scanf(" %[^\n]", contacts[contactCount].address);
    printf("Phone: ");
    scanf(" %[^\n]", contacts[contactCount].phone);

    fprintf(file, "%s, %s, %s\n", contacts[contactCount].name, contacts[contactCount].address, contacts[contactCount].phone);

    printf("Contact added to the phone book.\n");

    fclose(file);
    return 0;
}

