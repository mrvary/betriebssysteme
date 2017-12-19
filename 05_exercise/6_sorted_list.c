#include <stdio.h>
#include <stdlib.h>

typedef struct element {
    int value;
    struct element *next;
} Element;

typedef struct list {
    Element *head;
} List;

void insert( List *head, int value );
Element *add( List *list, int value);
void printElements( const List *list );
int listSize( const List *list);
int contains ( const List *list, int value );

int main() {

    List *list;
    list = (List*) malloc(sizeof(List) * 10);
    list->head = NULL;

    add(list, 4);
    add(list, 8);
    add(list, 1);
    add(list, 6);
    add(list, 0);

    printElements( list );

    printf("size: %d\n", listSize ( list ));

    return 0;
}

Element *add( List *list, int value) {
    Element *current = list->head;
    Element *before = (Element*) malloc(sizeof(Element));

    Element *new = (Element*) malloc(sizeof(Element));
    new->value = value;
    new->next = NULL;

    if ( listSize(list) == 0) {
        list->head = new;
    } else if ( listSize(list) == 1) {

        if (value < current->value) {
            new->next = current;
            list->head = new;
        } else {
            current->next = new;
        }
    } else {
        if ( current-> value > value) {
            insert(list, value);
            free(new);
            new = NULL;
        } else {
            while ( current->value < value && current->next != NULL) {
                before = current;
                current = current->next;
            }

            before->next = new;
            new->next = current;
        }
    }

    return new;
}

void insert( List *list, int value ) {
    Element *new = (Element*) malloc(sizeof(Element));
    new->value = value;
    if ( list->head == NULL) {
        new->next = NULL;
    } else {
        new->next = list->head;
    }
    list->head = new;
}

void printElements( const List *list ) {
    Element *current = list->head;
    printf("=> ");
    while ( current != NULL ) {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
}

int listSize( const List *list) {
    Element *current = list->head;
    int counter = 0;

    while ( current != NULL ) {
        current = current->next;
        counter++;
    }

    return counter;
}

int contains ( const List *list, int value ) {
    int valueIsPresent = 0;

    Element *current = list->head;

    while ( current != NULL ) {
        if ( current->value == value ) {
            valueIsPresent = 1;
            break;
        }
        current = current->next;
    }

    return valueIsPresent;
}