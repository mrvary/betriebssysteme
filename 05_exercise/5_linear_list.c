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
void printElements( Element *head );

int main() {

    List *list;
    list = (List*) malloc(sizeof(List) * 10);
    list->head = NULL;

    insert(list, 1);
    insert(list, 2);
    add(list, 0);

    printElements( list->head );

    return 0;
}

Element *add( List *list, int value) {
    Element *last = list->head;
    while ( last->next != NULL ) {
        last = last->next;
    }

    Element *new = (Element*) malloc(sizeof(Element));
    last->next = new;
    new->value = value;
    new->next = NULL;
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

void printElements( Element *head ) {
    while ( head != NULL ) {
        printf("%d\n", head->value);
        head = head->next;
    }
}