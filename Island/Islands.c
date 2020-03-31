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

    for(; i!=NULL; i = i->next){
        printf("Name: %s; Open: %s-%s\n", i->name,i->opens,i->closes);
    }
}

island* create(char *name){
    island *i = malloc(sizeof(island));
    i -> name = name;
    i -> opens = "09:00";
    i -> closes = "17:00";
    i -> next = NULL;
    return i;
}

int main()
{
    island amity = {"Friendship", "09:00", "17:00", NULL};
    island craggy = {"Rocky", "09:00", "17:00", NULL};
    island isla_nublar = {"Fog", "09:00", "17:00", NULL};
    island shutter = {"Cursed", "09:00", "17:00", NULL};

    amity.next = &craggy;
    craggy.next = &isla_nublar;
    isla_nublar.next = &shutter;

    island skull = {"Skull island", "09:00", "17:00", NULL};
    isla_nublar.next = &skull;
    skull.next = &shutter;


    display(&amity);

    return 0;
}

