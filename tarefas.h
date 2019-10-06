#ifndef TAREFAS_H
#define TAREFAS_H

#include <pthread.h>
extern pthread_t *threads;
extern pthread_mutex_t lock;
extern pthread_mutex_t *pointMutexes;

#endif