/********************************************************************************************************
* Course: CS33211 Operating Systems
* Assignment: Producer-Consumer Problem
* Name: Carlton Canaday
* Version: 2.1
* Description: Have a producer create random values in a buffer and have the consumer pull the data out.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>

/*
* Setting up global variables that can work in the program
*/
#define BUFFER_SIZE 2     // Setting the size of the buffer
int buffer[BUFFER_SIZE];    // Creating the buffer
int next_in = 0;            // Keep track of the location of the producer
int next_out = 0;           // Keep track of the location of the consumer

sem_t full;                 // Semaphore to call the producer when the buffer is empty
sem_t empty;                // Semaphore to call the consumer when the buffer is full

void producer () {
    int data;                                       // Holds the value of the data
    while (1) {
        sem_wait(&full);                            // Starts when the buffer is empty
        for (int i = 0; i < BUFFER_SIZE; i++) {     // Forces to fill the buffer
            data = rand() % 100;                    // Holds a random value from 0 to 100
            buffer[next_in] = data;                 // Places the value into the buffer
            next_in = (next_in + 1) % BUFFER_SIZE;  // Updates the next location of the buffer
        }
        sem_post(&empty);                           // Calls when the buffer is full and needs to be empty
    }
}
void consumer () {
    int data;                                       // Holds the value of the data
    while (1) {
        sem_wait(&empty);                           // Starts when the buffer is full
        for (int i = 0; i < BUFFER_SIZE; i++) {     // Forces to empty the buffer
            data = buffer[next_out];                // Places the value from the buffer into data
            buffer[next_out] = 0;                   // Consumes the value of the buffer
            next_out = (next_out + 1) % BUFFER_SIZE;// Updates the next location of the buffer
            printf("Consumer takes %d\n", data);    // Prints the value that was consumed in the buffer
            sleep(1);                               // Slows down the process to make it eaiser to see what is going on
        }

        sem_post(&full);                            // Calls when the buffer is empty
        sleep(1);                                   // make sure the consumer buffer stops until it is ready again. 
    }
}

int main() {
    sem_init(&full, 0, 0);                                              // Initialize the full semaphore
    sem_init(&empty, 0, BUFFER_SIZE);                                   // Initialize the empty semaphore
    
    pthread_t producer_thread, consumer_thread;                         // Create the producer and consumer thread

    pthread_create(&producer_thread, NULL, (void *)producer, NULL);     // Starts the producer thread
    pthread_create(&consumer_thread, NULL, (void *)consumer, NULL);     // Starts the consumer thread

    pthread_join(producer_thread, NULL);                                // Waits for the producer thread to finish
    pthread_join(consumer_thread, NULL);                                // Waits for the consumer thread to finish
    
    return 0;                                                           // Exits the program
}
