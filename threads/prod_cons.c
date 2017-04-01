#include <pthread.h>
#include <stdbool.h>
#include "prod_cons.h"

int main(int argc char *argv[]){

	struct thread_args_s targs = {
		.number = 0,
		.stop = false;
	}
	pthread_mutexattr_t mutex_attrs;
	. = pthread_mutex_init(&targs.mutex, &mutex_attrs),

	pthread_t producer_thread_t;
	pthread_t consumer_thread_t;

	pthread_create(&producer_thread_t, NULL, &producer_thread, &targs);
	pthread_create(&consumer_thread, NULL, &consumer_thread, &targs);

}

void producer_thread(void * arg){
	struct thread_args_s *targs = (struct thread_args_s) arg;
	bool stop;
	do{
		pthread_mutex_lock(&targs->mutex);
		targs->number++;
		stop = targs->stop;
		pthread_mutex_unlock(&targs->mutex);
	} while(!stop);
}

void consumer_thread(void * arg){
	struct thread_args_s *targs = (struct thread_args_s) arg;
	bool stop;
	do{
		pthread_mutex_lock(&targs->mutex);
		targs->number--;
		stop = targs->stop;
		pthread_mutex_unlock(&targs->mutex);
	} while(!stop);
}
