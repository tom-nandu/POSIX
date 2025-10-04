/*
 * Author      : Nandakoumar Logesan
 * GitHub      : https://github.com/tom-nandu/POSIX
 * Date        : 04/10/2025
 * Description : This program demonstrates basic POSIX multi thread creation and synchronization.
 *               It includes examples of pthread_create, pthread_join, and mutex usage.
 *
 * Compilation : gcc -pthread -o multi_thread single_thread.c
 * Execution   : ./multi_thread
 *
 * Notes       :
 *   - This is part of my learning journey in multithreading using POSIX APIs.
 *   - Feedback and suggestions are welcome via GitHub issues or discussions.

*/

#include<stdio.h>
#include<pthread.h>
#include<unistd.h>


//Function which will be used in thread 
void* thread_function (void* arg)
{
    pid_t thread_processid = getpid();
    printf("%lu : Process ID \n",thread_processid);
    printf("%d : Thread ID \n",pthread_self());

    return NULL ;
}

int main()
{
    pid_t main_processid = getpid();
    pthread_t thread_id_1 , thread_id_2;
    printf("%d : Process ID \n",main_processid);
    printf("%lu : Thread ID \n",pthread_self());
    printf("CALLING THREADS ! \n");
    pthread_create(&thread_id_1 , NULL , thread_function , NULL);
    pthread_create(&thread_id_2 , NULL , thread_function , NULL);
    pthread_join(thread_id_1, NULL);
    pthread_join(thread_id_2,NULL);
    printf("EXITING THREADS ! \n");
    return 0 ;
}