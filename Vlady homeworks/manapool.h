#include "card.h"
#include "deck.h"

struct manapool_t {
    int mana;
};

int can_put_card(struct card_t card_to_put, struct manapool_t *pool) {
    if(card_to_put.cost <= pool->mana)
        return 1;
    else
        return 0;
}

int set_mana(struct manapool_t *pool, int mana_to_put) {
    if(mana_to_put <= 10 && mana_to_put >= 1) {
        pool->mana = mana_to_put;
        return 1;
    }
    return 0;
}
