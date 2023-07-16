#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 100

typedef struct {
    int itemNumber;
    char itemName[100];
    float price;
    int stock;
} Item;

void displayMenu() {
    printf("Menu:\n");
    printf("1. Add a new item\n");
    printf("2. Change the values of an item\n");
    printf("3. Delete an item\n");
    printf("4. Create a receipt\n");
    printf("5. Exit\n");
}

int findItem(Item items[], int itemCount, int itemNumber) {
    for (int i = 0; i < itemCount; i++) {
        if (items[i].itemNumber == itemNumber) {
            return i;
        }
    }
    return -1;
}

void addNewItem(Item items[], int *itemCount) {
    Item newItem;

    printf("Enter item number: ");
    scanf("%d", &newItem.itemNumber);
    printf("Enter item name: ");
    scanf(" %[^\n]", newItem.itemName);
    printf("Enter item price: ");
    scanf("%f", &newItem.price);
    printf("Enter item stock: ");
    scanf("%d", &newItem.stock);

    items[*itemCount] = newItem;
    (*itemCount)++;

    printf("New item added.\n");
}

void changeItemValues(Item items[], int itemCount) {
    int itemNumber;
    int index;

    printf("Enter item number: ");
    scanf("%d", &itemNumber);

    index = findItem(items, itemCount, itemNumber);

    if (index == -1) {
        printf("Item not found.\n");
    } else {
        printf("Enter new item name: ");
        scanf(" %[^\n]", items[index].itemName);
        printf("Enter new item price: ");
        scanf("%f", &items[index].price);
        printf("Enter new item stock: ");
        scanf("%d", &items[index].stock);
        printf("Item values changed.\n");
    }
}

void deleteItem(Item items[], int *itemCount) {
    int itemNumber;
    int index;

    printf("Enter item number: ");
    scanf("%d", &itemNumber);

    index = findItem(items, *itemCount, itemNumber);

    if (index == -1) {
        printf("Item not found.\n");
    } else {
        for (int i = index; i < (*itemCount) - 1; i++) {
            items[i] = items[i + 1];
        }
        (*itemCount)--;
        printf("Item deleted.\n");
    }
}

void createReceipt(Item items[], int itemCount) {
    int itemNumber;
    int quantity;
    float totalAmount = 0;

    printf("Enter item number and quantity (separated by a space). Enter -1 0 to finish.\n");

    while (1) {
        printf("Item number and quantity: ");
        scanf("%d %d", &itemNumber, &quantity);

        if (itemNumber == -1 && quantity == 0) {
            break;
        }

        int index = findItem(items, itemCount, itemNumber);

        if (index == -1) {
            printf("Item not found.\n");
        } else {
            float itemPrice = items[index].price;
            float itemTotal = itemPrice * quantity;
            totalAmount += itemTotal;

            printf("Item name: %s\n", items[index].itemName);
            printf("Unit price: %.2f\n", itemPrice);
            printf("Total price: %.2f\n", itemTotal);
        }
    }

    printf("Total amount: %.2f\n", totalAmount);
}

void displayItems(Item items[], int itemCount) {
    printf("Inventory Items:\n");
    for (int i = 0; i < itemCount; i++) {
        printf("Item Number: %d\n", items[i].itemNumber);
        printf("Item Name: %s\n", items[i].itemName);
}

