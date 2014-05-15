#ifndef Y_CODE_H
#define Y_CODE_H 1

#include "global.h"
#include <stdio.h>

/* types */
typedef struct {
    Yaddr addr;
    int   count;
    Ybyte ins[5];
    char  _padding[3];
} Y_code;

typedef struct _x{
    struct _x *next;
    Y_code *code;
} Y_code_list;

/* functions */
Y_code_list *y_code_new(FILE *f);//TODO
void y_code_free(Y_code_list *l);

#endif /*Y_CODE_H*/
