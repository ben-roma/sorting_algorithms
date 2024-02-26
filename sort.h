#ifndef SORT_H
#define SORT_H

#include <stdlib.h> /* Inclusion de la bibliothèque standard pour size_t */

/* Définition de la structure pour une liste doublement chaînée */
typedef struct listint_s
{
    const int n;                /* Entier stocké dans le nœud */
    struct listint_s *prev;     /* Pointeur vers l'élément précédent de la liste */
    struct listint_s *next;     /* Pointeur vers l'élément suivant de la liste */
} listint_t;

/* Prototype de la fonction print_array */
void print_array(const int *array, size_t size);

/* Prototype de la fonction print_list */
void print_list(const listint_t *list);

/* Prototype de la fonction bubble_sort si nécessaire */
void bubble_sort(int *array, size_t size);

#endif /* SORT_H */
