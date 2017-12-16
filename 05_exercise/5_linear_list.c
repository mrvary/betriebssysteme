#include <stdio.h>
#include <stdlib.h>

typedef struct element {
    int value;
    struct element *next;
} Element;

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

int main() {
    Element *head;
    head = (Element*) malloc(sizeof(Element));
    head->value = 1;

    Element *second = (Element*) malloc(sizeof(Element));
    second->value = 2;
    head->next = second;
    second->next = NULL;

    printElements( head );

    return 0;
}
