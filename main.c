#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<time.h>

#include "numeros.h"
#include "cartela.h"
#include "rack.h"

// typedef struct {
//     char nome[50];
//     int *cart;
//     int *rack;
// } PLAYER;

// void create_player(PLAYER *p){

//     // printf("Digite o nome: "); 
//     // scanf("%s", p->nome);
    
//     p->cart = (int *)  malloc(sizeof(int) * 25);
//     create_cartela(p->cart);

// }

// void destroy_player(PLAYER *p){
//     destroy_cartela(p->cart);
//     free(p);
// }

void jogar(int *cart, int *rack){
    
    print_cartela(cart, rack);
    
    // print_rack(rack);

    // printf("%d\n", num_marcados(cart, rack));

    int acertos = num_marcados(cart, rack);
    // int last_acerto = 0;
    
    do{
        printf("\n+%d\n", sortear(rack));
        
        print_rack(rack);
        
        int buff = num_marcados(cart, rack);
        
        if(buff > acertos){
            acertos = buff;
            print_cartela(cart, rack);
            // printf("\n+%d\n", last_acerto);
        }
        // print_rack(rack);
    }while(acertos < 24);
    
    // print_cartela(cart, rack);
    
    // print_rack(rack);
}

int main(){
        
    // PLAYER * player = malloc(sizeof(PLAYER));

    // create_player(player);
    
    int * cart = (int *) malloc(sizeof(int) * 25);
    int * rack = (int *) malloc(sizeof(int) * 75);

    zera_vet(rack, 75);

    create_cartela(cart);

    // rack[ cart[0] - 1 ] = cart[0];

    jogar(cart, rack);

    destroy_rack(rack);

    destroy_cartela(cart);
    
    // destroy_player(player);

}