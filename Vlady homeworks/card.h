struct  card_t {
        char *name;
        int attack;
        int health;
        int cost;
        int heal;
        int destroyable;
};

int attack(struct card_t *attacker, struct card_t *defender) {
    // if both cards are destroyed
    if(attacker->attack >= defender->health && attacker->health <= defender->attack) {
            return 0;
    }

    //if  attacker wins
    else if(attacker->attack >= defender->health && attacker->health > defender->attack) {
             if(defender->destroyable == 1) {
                return 0;
             }
             else if(attacker->heal > 0 && attacker->health > defender->attack){
                attacker->health = (attacker->health - defender->attack + attacker->heal);
                return 1;
             }
             else
                return 1;

    }

    //if defender winds
    else if(attacker->attack < defender->health && attacker->health <= defender->attack) {
        if(attacker->destroyable == 1) {
                return 0;
        }
        else if(defender->heal > 0 && defender->health > attacker->attack){
                defender->health = (defender->health - attacker->attack + defender->heal);
                return 2;
        }
        else
            return 2;
    }

    //if both cards survive
    else if(attacker->attack < defender->health && attacker->health > defender->attack) {
        if(attacker->heal > 0) {
            attacker->health = (attacker->health - defender->attack + attacker->heal);
        }
        if(defender->heal >0) {
            defender->health = (defender->health - attacker->attack + defender->heal);
        }
        return 3;
    }
}


