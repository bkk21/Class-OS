#include <pthread.h>
#include <stdio.h>

void * X(void *p);
void Y();
int global = 0;

int main()
{
    pthread_t t1;
    void *status;
    printf("\n");
    pthread_create(&t1, NULL, X, NULL);
    Y();
    pthread_join(t1, &status);
    printf("%d\n", global);
}

void * X(void *p) //자식 스레드 
{
    global += 1;
    pthread_exit((void *)NULL);
}

void Y() //부모 스레드 
{
    global += 1;
}

//어떤 스레드가 문제가 생기면 프로세스가 다 날라간다. 