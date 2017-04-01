/**
* @file async.c
* @author Cameron A. Craig
* @date 1 Oct 2016
* @copyright 2016 Cameron A. Craig
* @brief A tutorial introducing the concept of asynchronous programming.
*				Giving an example of where asynchronus programming works well.
*
*/


#include "async.h"

void read_thread(void* threadargs){

}

void write_thread(void *threadargs){

}

void main(int argc, char* argv[]){
	//Set up shared memory between read and write threads

	pthread_create();

	//Wait until both threads have completed
	pthread_join();

	//
}
