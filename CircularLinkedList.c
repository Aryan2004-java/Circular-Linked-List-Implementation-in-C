#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;

struct node *create_ll(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);

int main() {
    int ch;
    do {
        printf("\n\n **MAIN MENU **");
        printf("\n 1:  Create a list");
        printf("\n 2:  Display the list");
        printf("\n 3:  Add a node at the beginning");
        printf("\n 4:  Add a node at the end");
        printf("\n 5:  Delete a node from the beginning");
        printf("\n 6:  Delete a node from the end");
        printf("\n 7:  Exit");
        printf("\n\n Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
        case 1:
            start = create_ll(start);
            printf("\n LINKED LIST CREATED");
            break;
        case 2:
            start = display(start);
            break;
        case 3:
            start = insert_beg(start);
            break;
        case 4:
            start = insert_end(start);
            break;
        case 5:
            start = delete_beg(start);
            break;
        case 6:
            start = delete_end(start);
            break;
        case 7:
            printf("\nExiting....\n");
            break;
        default:
            printf("\nInvalid choice! Enter a choice from 1-7.\n");
            break;
        }
    } while (ch != 7);

    return 0;
}

struct node *create_ll(struct node *start) {
    struct node *newnode, *ptr;
    int num;
    printf("\nEnter -1 to end");
    printf("\nEnter the data: ");
    scanf("%d", &num);

    while (num != -1) {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = num;

        if (start == NULL) {
            start = newnode;
            newnode->next = start;
        } else {
            ptr = start;
            while (ptr->next != start) {
                ptr = ptr->next;
            }
            ptr->next = newnode;
            newnode->next = start;
        }

        printf("\nEnter the data: ");
        scanf("%d", &num);
    }
    return start;
}

struct node *display(struct node *start) {
    struct node *ptr;
    if (start == NULL) {
        printf("\nList is empty");
        return start;
    }
    ptr = start;
    printf("\nThe list is: ");
    do {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != start);
    printf("\n");
    return start;
}

struct node *insert_beg(struct node *start) {
    struct node *newnode, *ptr;
    int num;
    printf("\nEnter the data: ");
    scanf("%d", &num);

    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = num;

    if (start == NULL) {
        start = newnode;
        newnode->next = start;
    } else {
        ptr = start;
        while (ptr->next != start) {
            ptr = ptr->next;
        }
        ptr->next = newnode;
        newnode->next = start;
        start = newnode;
    }

    return start;
}

struct node *insert_end(struct node *start) {
    struct node *newnode, *ptr;
    int num;
    printf("\nEnter the data: ");
    scanf("%d", &num);

    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = num;

    if (start == NULL) {
        start = newnode;
        newnode->next = start;
    } else {
        ptr = start;
        while (ptr->next != start) {
            ptr = ptr->next;
        }
        ptr->next = newnode;
        newnode->next = start;
    }

    return start;
}

struct node *delete_beg(struct node *start) {
    struct node *ptr;
    if (start == NULL) {
        printf("\nList is empty");
        return start;
    }

    ptr = start;
    if (start->next == start) {
        free(start);
        start = NULL;
    } else {
        while (ptr->next != start) {
            ptr = ptr->next;
        }
        struct node *temp = start;
        ptr->next = start->next;
        start = start->next;
        free(temp);
    }

    return start;
}

struct node *delete_end(struct node *start) {
    struct node *ptr, *preptr;
    if (start == NULL) {
        printf("\nList is empty");
        return start;
    }

    ptr = start;
    if (start->next == start) {
        free(start);
        start = NULL;
    } else {
        while (ptr->next != start) {
            preptr = ptr;
            ptr = ptr->next;
        }
        preptr->next = start;
        free(ptr);
    }

    return start;
}
