#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define deck_length 52
typedef struct  {
    int number;
    char type;
}Card;


void init_deck(Card deck[]) {
    for (int j = 0; j < 4; j++) {
       char type;
        switch (j) {
            case 0:
                type = 'h';
                break;
            case 1:
                type = 'd';
                break;
            case 2:
                type = 'c';
                break;
            case 3:
                type = 's';
                break;
                default:
                type='h';
                break;
        }
        for (int i = 0; i < 13; i++) {
                deck[j*13 +i] = (Card){i + 1, type};
        }
    }

}
void print_deck(Card deck[]) {
    for (int i=0;i < deck_length;i++) {
        printf("card %d, number: %d type %c \n",i+1,  deck[i].number , deck[i].type);
    }
}
void shuffle_deck(Card deck[]) {

}

int main(void) {
    srand(time(NULL));
    Card deck[deck_length];
    init_deck(deck);

    return 0;
}
