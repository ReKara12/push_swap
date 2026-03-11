#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int value;
    struct  stack   *next;
}   stack;

void    sa(stack    **a)
{
    int tmp;

    if (!a || !*a || !(*a)->next)
        return;
    tmp = (*a)->value;
    (*a)->value = (*a)->next->value;
    (*a)->next->value = tmp;

    printf("sa\n");
}

void    ra(stack **a)
{
    stack   *first;
    stack   *last;

    if(!a || !*a || !(*a)->next)
        return;
    first = *a;
    last = *a;
    while (last->next != NULL)
        last = last->next;
    *a = first->next;
    first->next = NULL;
    last->next = first;

    print("ra\n");
}

void    bubbly_wobbly(t_stack)