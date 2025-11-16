#include "JThreadAttr.h"


void jthread_attr_init(JThreadAttr *attr) {
    pthread_attr_init(&(attr->attributes));
    attr->is_initialised = 1;
}

void jthread_attr_detachable(JThreadAttr *attr) {
    if (attr->is_initialised != 1) {
        fprintf(stderr, "[ERROR] Attempted to set detachable attribute without initialising attributes first.\n");
        exit(EXIT_FAILURE);
    }
    pthread_attr_setdetachstate(&(attr->attributes), PTHREAD_CREATE_DETACHED);
}

void jthread_attr_joinable(JThreadAttr *attr) {
    if (attr->is_initialised != 1) {
        fprintf(stderr, "[ERROR] Attempted to set joinable attribute without initialising attributes first.\n");
        exit(EXIT_FAILURE);
    }

    pthread_attr_setdetachstate(&(attr->attributes), PTHREAD_CREATE_JOINABLE);
}