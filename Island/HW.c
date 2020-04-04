#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct island{
    char *name;
    struct island *next;
    struct island *prev;
} island;

island* create(island *last){
    island *i = malloc(sizeof(island));
    char isl_name[20];
    printf("Enter new island name: ");
    scanf("%19s", isl_name);
    i -> name = malloc(strlen(isl_name) + 1);
    i->name = strdup(isl_name);
    i -> next = NULL;
    i -> prev = NULL;

    return i;
}

island* add(island *last){
    char isl_name[20];
    printf("Enter new island name: ");
    scanf("%19s", isl_name);
    island *i = malloc(sizeof(island));
    i -> name = malloc(strlen(isl_name) + 1);
    i->name = strdup(isl_name);
    i -> prev = last;
    last -> next = i;
    i -> next = NULL;
    return i;
}

void display(island *start){
    island *i = start;
    for(;i!=NULL;i=i->next){
        printf("%s  ", i -> name);
    }
    printf("\n");
}



int main()
{
    int n;
    island *start = NULL;
    island *last = NULL;
    island *i = NULL;

    while(1){
        printf("Choose an option:\n1) Create first element\n2) Add last element\n3) Delete last element\n4) Show list\n5) Delete list\n6) Find an element\n7) Quit\n");
        scanf("%d",&n);
        if(n == 1){
            i = create(last);
            printf("------------------------------------\n");
            start = i;
            last = i;
        }
        if(n == 2){
            i = add(last);
            printf("------------------------------------\n");
            last = i;
        }
        if(n == 3){
            printf("Last element was deleted\n");
            printf("------------------------------------\n");

        }
        if(n == 4){
            display(start);
            printf("------------------------------------\n");

        }
        if(n == 5){
            printf("Delete\n");
            printf("------------------------------------\n");

        }
        if(n == 6){
            printf("Searching\n");
            printf("------------------------------------\n");

        }
        if(n == 7){
            printf("Quit\n");
            printf("------------------------------------\n");
        }
    }
    return 0;
}
