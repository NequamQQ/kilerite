#include <stdio.h>
#include "manapool.h"

int main() {
    struct card_t Enigma= {"Enigma", 2, 2, 2};
    struct manapool_t pool;
    set_mana(&pool, 5);

    if (can_put_card(Enigma, &pool) == 1 )
        printf("Can be put\n");
    else
        printf("Can't be put\n");

    return 0;
}
