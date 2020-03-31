#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Создаем рекурсию, структуры островов, которые включают названия, время открытия, закрытия и ссылку на следующий остров*/
typedef struct island{
    char *name;
    char *opens;
    char * closes;
    struct island *next;
} island;

void display(island *start){
    island *i = start;

    for
}

int main()
{
    island amity = {"Friendship", "09:00", "17:00", NULL}
    island craggy = {"Rocky", "09:00", "17:00", NULL}
    island isla_nublar = {"Fog", "09:00", "17:00", NULL}
    island shitter = {"Cursed", "09:00", "17:00", NULL}

    amity.next = &craggy;
    cruggy.next = &isla_nublar;
    isla_nublar.next = &shutter;

    island sckull = {"Skull island", "09:00", "17:00", NULL};
    isla_nublar.next = &skull;
    skull.next = &shutter;


    char str[] = "54321";

    printf("%d\n",fatoi(str));

    return 0;
}
