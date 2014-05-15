#ifndef Y_REG_H
#define Y_REG_H 1

#include "global.h"

/* stage 0+ */
int y_fetch_mode;
Yaddr y_fetch_addr1, y_fetch_addr2;

/* stage 1+ */
int y_decode_mode;
Yaddr y_decode_addr1, y_predec_addr2;
Ybyte y_decode_ins1[5], y_predec_ins2[5];

#endif /*Y_REG_H*/
