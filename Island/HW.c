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
    i -> name = strdup(isl_name);
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
    i -> name = strdup(isl_name);
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

island* del(island *start){
    if(start!=NULL){
            island *i = start;
            island *next = NULL;
            island *prev = NULL;
            if(start->prev != NULL){
                prev = start->prev;
                start->prev->next = NULL;
            }
            for(;i!=NULL;i=next){
                next = i -> next;
                i -> next = NULL;
                free(i -> name);
                free(i);
            }
            return prev;
    }
    else{
        return NULL;
    }
}

island* search(island *start, char *name){
    island *i = start;
    island *result = NULL;

    for(;i!=NULL;i=i->next){
        if(strcmp(i->name,name)==0){
            result = i;
            break;
        }
    }
    return result;
}

int main()
{
    int n;
    char se_name[20];
    island *start = NULL;
    island *last = NULL;
    island *i = NULL;
    island *temp = NULL;

    while(1){
        printf("Choose an option:\n1) Create first element\n2) Add last element\n3) Delete last element\n4) Show list\n5) Delete list\n6) Find an element\n7) Quit\n");
        printf("Your choice: ");
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
            last = del(last);
            printf("------------------------------------\n");
            if(last == NULL){
                start = NULL;
            }
        }
        if(n == 4){
            if(start != NULL){
                display(start);
            }
            printf("------------------------------------\n");

        }
        if(n == 5){
            last = del(start);
            printf("------------------------------------\n");
            start = NULL;
        }
        if(n == 6){
            printf("Enter name of an island: ");
            scanf("%19s", se_name);
            temp = search(start,se_name);
            if(temp!=NULL){
                printf("%s\n",temp->name);
            }
            else{
                printf("There is no such island\n");
            }
            printf("------------------------------------\n");
        }
        if(n == 7){
            last = del(start);
            break;
        }
        if(n<1||n>7){
            printf("There is no such option\n------------------------------------\n");
        }
    }
    return 0;
}
