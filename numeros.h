#pragma once

#include<stdlib.h>
#include<stdbool.h>

bool num_exists(int n, int *p, int lim){
    for(int i = 0; i < lim; i++)
        if(n == p[i])
            return true;
   return false;
}


int num_aleatorio(int *p, int limite){
    
    int random_buff = 0;
    
    do{
    
        random_buff = rand() % (limite + 1);

    }while(num_exists(random_buff, p, limite));

    return random_buff;
}

void zera_vet(int *p, int n){
    for(int i = 0; i < n; i++)
        p[i] = 0;
}