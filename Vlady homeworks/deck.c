#include <stdio.h>
#include "card.h"
#include "deck.h"



int main (){

    struct card_t Enigma = {"Enigma", 3, 3, 3};
    struct card_t Kunkka = {"Kunkka", 2, 2, 2};
    struct card_t Invoker = {"Invoker", 4, 2, 3};
    struct deck_t deck;

    /*important*/ deck.top = 0;

    push_card(Enigma, &deck);
    push_card(Kunkka, &deck);
    push_card(Invoker, &deck);

    printf("=======Player's deck=======\n\n");
    print_deck(&deck);
    printf("\n===========================\n\n");

    return 0;
}
