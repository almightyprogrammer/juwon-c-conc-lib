#ifndef JUWON_CONC_LIB_JTHREAD_H
#define JUWON_CONC_LIB_JTHREAD_H

#include <stdatomic.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include "JThreadAttr.h"


typedef struct JThread {
    pthread_t handle;
    int is_joined;
} JThread;


void jthread_start(JThread *jthd, JThreadAttr *attr, void *fn, void *args);
void jthread_join(JThread *jthd, void **retval);
#endif