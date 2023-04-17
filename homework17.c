#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void * counting(void * arg){
    for(int i = 1; i <=100; i++){
        printf("%d\n", i);
    }
    return NULL;
}

int main(){
    pthread_t t_id[3];
    for (int i = 0; i < 3; i++){
        pthread_create(&t_id[i], NULL, counting, NULL);
    }
    for(int i = 0; i < 3; i++){
        pthread_join(t_id[i], NULL);
    }
    return 0;
}