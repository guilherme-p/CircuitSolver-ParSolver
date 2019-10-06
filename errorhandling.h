#ifndef ERROR_HANDLING_H
#define ERROR_HANDLING_H

#include <pthread.h>

void pthread_mutex_init_eh(pthread_mutex_t *lockPtr);

void pthread_create_eh(pthread_t *threadPtr, void *router_solve, router_solve_arg_t *routerArg);

void pthread_join_eh(pthread_t thread);

void pthread_mutex_destroy_eh(pthread_mutex_t *lockPtr);

void pthread_mutex_lock_eh(pthread_mutex_t *lockPtr);

void pthread_mutex_unlock_eh(pthread_mutex_t *lockPtr);

void nanosleep_eh(struct timespec *timPtr);

#endif