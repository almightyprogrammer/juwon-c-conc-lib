#ifndef JUWON_CONC_LIB_JTHREADATTR_H
#define JUWON_CONC_LIB_JTHREADATTR_H

#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct JThreadAttr {
    pthread_attr_t attributes;
    int is_initialised;
} JThreadAttr;

void jthread_attr_init(JThreadAttr *attr);
void jthread_attr_detachable(JThreadAttr *attr);
void jthread_attr_joinable(JThreadAttr *attr);

#endif