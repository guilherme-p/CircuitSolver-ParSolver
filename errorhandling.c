#include <stdlib.h>
#include <pthread.h>
#include <errno.h>
#include <string.h>
#include "router.h"

void pthread_mutex_init_eh(pthread_mutex_t *lockPtr) {
    if (pthread_mutex_init(lockPtr, NULL) != 0) {
        perror("mutex_init error");
        exit(EXIT_FAILURE);
    }
}

void pthread_create_eh(pthread_t *threadPtr, void *router_solve, router_solve_arg_t *routerArg) {
    if (pthread_create(threadPtr, NULL, router_solve, (void*)routerArg) != 0) {
        perror("Error creating thread");
        exit(EXIT_FAILURE);
    }
}

void pthread_join_eh(pthread_t thread) {
    if (pthread_join(thread, NULL) != 0) {
        perror("Error joining thread") ;
        exit(EXIT_FAILURE);
    }
}

void pthread_mutex_destroy_eh(pthread_mutex_t *lockPtr) {
    if (pthread_mutex_destroy(lockPtr) != 0) {
        perror("mutex_destroy error");
        exit(EXIT_FAILURE);
    }
}

void pthread_mutex_lock_eh(pthread_mutex_t *lockPtr) {
    if (pthread_mutex_lock(lockPtr) != 0) {
        perror("mutex_lock error");
        exit(EXIT_FAILURE);
    }
}

void pthread_mutex_unlock_eh(pthread_mutex_t *lockPtr) {
    if (pthread_mutex_unlock(lockPtr) != 0) {
        perror("mutex_unlock error");
        exit(EXIT_FAILURE);
    }
}

void nanosleep_eh(struct timespec *timPtr) {
    if (nanosleep(timPtr, NULL) != 0) {
        perror("nanosleep error");
        exit(EXIT_FAILURE);
    }
}
