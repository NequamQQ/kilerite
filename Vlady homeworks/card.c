#include <stdio.h>
#include "card.h"


int main(){


    /* Name; Attack; Health; Cost; Heal; Is Destroyable(0,1)*/
    struct card_t Kunkka = {"Kunkka", 4, 4, 2, 3, 0};
    struct card_t Lich = {"Lich", 2, 3, 4, 0, 1};
    struct card_t Invoker ={"Invoker", 5, 2, 3, 0, 0};



    printf("Name: %s\nHealth: %d\nAttack: %d\nSelfHeal: %d\nDestroyable: %d\n\n",  Lich.name,
                                                                                   Lich.health,
                                                                                   Lich.attack,
                                                                                   Lich.heal,
                                                                                   Lich.destroyable);
    printf("Name: %s\nHealth: %d\nAttack: %d\nSelfHeal: %d\nDestroyable: %d\n\n",  Kunkka.name,
                                                                                   Kunkka.health,
                                                                                   Kunkka.attack,
                                                                                   Kunkka.heal,
                                                                                   Kunkka.destroyable);

    int fight = attack(&Lich, &Kunkka);

        printf("========FIGHT!=========\n");

        if (fight == 0)
                printf("Both cards are destroyed\n");
        else if (fight == 1)
                printf("Attacker wins\n");
        else if (fight == 2)
                printf("Defender wins\n");
        else if (fight == 3)
                printf("Both cards survive\n");

        printf("========================\n\n\n");


       /* printf("Name: %s\nHealth: %d\nAttack: %d\nCost: %d\n\n\n",  Enigma.name,
                                                                    Enigma.health,
                                                                    Enigma.attack,
                                                                    Enigma.cost);

        printf("Name: %s\nHealth: %d\nAttack: %d\nCost: %d\n\n",  Kunkka.name,
                                                                  Kunkka.health,
                                                                  Kunkka.attack,
                                                                  Kunkka.cost); */


    return 0;

}


