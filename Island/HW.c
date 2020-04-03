#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Создаем рекурсию, структуры островов, которые включают названия, время открытия, закрытия и ссылку на следующий остров*/
int main_function(){
    int n;
    printf("Choose an option:\n1) Create first element\n2) Add last element\n3) Delete last element\n4) Show list\n5) Delete list\n6) Find an element\n7) Quit\n");
    scanf("%d",&n);
    if(n == 1){
        printf("First element was created\n");
        printf("------------------------------------\n");
        main_function();
    }
    if(n == 2){
        printf("Last element was added\n");
        printf("------------------------------------\n");
        main_function();
    }
    if(n == 3){
        printf("Last element was deleted\n");
        printf("------------------------------------\n");
        main_function();
    }
    if(n == 4){
        printf("Show\n");
        printf("------------------------------------\n");
        main_function();
    }
    if(n == 5){
        printf("Delete\n");
        printf("------------------------------------\n");
        main_function();
    }
    if(n == 6){
        printf("Searching\n");
        printf("------------------------------------\n");
        main_function();
    }
    if(n == 7){
        printf("Quit\n");
        printf("------------------------------------\n");
    }
}

int main()
{
    main_function();
    return 0;
}
