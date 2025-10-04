/*
 * Author      : Nandakoumar Logesan
 * GitHub      : https://github.com/tom-nandu/POSIX
 * Date        : 04/10/2025
 * Description : This program demonstrates basic POSIX thread creation and synchronization.
 *               It includes examples of pthread_create, pthread_join, and mutex usage.
 *
 * Compilation : gcc -pthread -o single_thread single_thread.c
 * Execution   : ./single_thread
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
        pid_t thread_processid = getpid() ;                             // checking the Process id is same , becoz Process ID within a program will be same . It wont vary for threads .
        printf("%d : Process ID of the thread in Thread_function  \n ",thread_processid);   
        printf("%ld : TID in Thread_function \n",pthread_self());          //Whereas Thread ID will differ . 

        return NULL ; 
    }

int main()
    {
        pid_t main_processid = getpid();
        pthread_t thread_id ; 
        printf("%d : Process ID of the thread in Main_Function \n ",main_processid);   
        printf("%ld : TID in Main_function \n",pthread_self()); 
        printf("CALLING THREAD !!! \n");
        if(pthread_create(&thread_id , NULL , thread_function , NULL ) == 0 )
            {
                printf("Thread created successfully ! \n") ; 
                pthread_join(thread_id , NULL);
            }
        else 
            {
                printf("Thread not created successfully ! \n");
            }
        
        printf("TERMINATION OF THE PROGRAM !!");
        return 0 ;   
        
    }