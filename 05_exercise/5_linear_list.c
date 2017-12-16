#include <stdio.h>
#include <stdlib.h>

typedef struct element {
    int value;
    struct element *next;
} Element;

typedef struct list {
    Element element;
} List;

Element *insert( Element *head, int value );
Element *add( Element *head, int value);
void printElements( Element *head );

int main() {
    Element *head;
    head = (Element*) malloc(sizeof(Element));
    head->value = 1;

    Element *second = (Element*) malloc(sizeof(Element));
    second->value = 2;
    head->next = second;
    second->next = NULL;

    printElements( head );
    printf("---\n");
    head = add( head, 3);
    printElements( head );

    printf("---\n");
    Element *newhead;
    newhead = insert( head, 0);
    printElements( newhead );

    return 0;
}

Element *add( Element *head, int value) {
    Element *start = head;
    while ( head->next != NULL ) {
        head = head->next;
    }

    Element *new = (Element*) malloc(sizeof(Element));
    head->next = new;
    new->value = value;
    new->next = NULL;
    return start;
}

Element *insert( Element *head, int value ) {
    Element *new = (Element*) malloc(sizeof(Element));
    new->value = value;
    new->next = head;
    return new;
}

void printElements( Element *head ) {
    while ( head != NULL ) {
        printf("%d\n", head->value);
        head = head->next;
    }
}