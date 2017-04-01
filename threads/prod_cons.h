#ifndef PROD_CONS_H
#define PROD_CONS_H

#include <pthread.h>
#include <stdbool.h>

struct thread_args_s {
	pthread_mutex mutex;
	int number;
	bool stop;
}

#endif
