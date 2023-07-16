#include <stdio.h>

#define MAX_CONTACTS 100

typedef struct {
    char name[100];
    char address[100];
    char phone[100];
} Contact;

void displayContacts(Contact contacts[], int contactCount) {
    printf("Phone Book Contacts:\n");
    for (int i = 0; i < contactCount; i++) {
        printf("Contact %d:\n", i+1);
        printf("Name: %s\n", contacts[i].name);
        printf("Address: %s\n", contacts[i].address);
        printf("Phone: %s\n", contacts[i].phone);
        printf("--------------------\n");
    }
}

int main() {
    FILE *file;
    char path[100];
    Contact contacts[MAX_CONTACTS];
    int contactCount = 0;

    printf("Enter the file path: ");
    scanf("%s", path);

    file = fopen(path, "r");

    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    while (fscanf(file, "%[^,], %[^,], %[^\n]\n", contacts[contactCount].name, contacts[contactCount].address, contacts[contactCount].phone) == 3) {
        contactCount++;
        if (contactCount >= MAX_CONTACTS) {
            break;
        }
    }

    displayContacts(contacts, contactCount);

    fclose(file);
    return 0;
}

