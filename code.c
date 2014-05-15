#include "code.h"
#include <stdio.h>
#include <stdlib.h>

Y_code_list *y_code_new(FILE *f)
{
    //TODO 读文件f中的所有指令，去注释，返回链表头
    return NULL;
}

void y_code_free(Y_code_list *l)
{
    Y_code_list *tmp;
    while (l){
        tmp = l;
        l = l -> next;
        free((void *)(tmp->code));
        free((void *)tmp);
    }
}

