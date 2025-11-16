#include "JThread.h"



void jthread_start(JThread *jthd, JThreadAttr *attr, void *fn, void *args) {
    if (attr) {
        pthread_create(&(jthd->handle), &(attr->attributes), fn, args);
        printf("Ran with attributes\n");
    } else {
        pthread_create(&(jthd->handle), nullptr, fn, args);
        printf("Ran without attributes\n");
    }
}


void jthread_join(JThread *jthd, void** retval) {
    pthread_join(jthd->handle, retval);
}
