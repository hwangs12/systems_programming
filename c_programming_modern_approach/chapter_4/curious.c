#include <stdio.h>

int addSweets(int sweetLevel) {
    sweetLevel++;
    return sweetLevel;
}

int main(void)
{
    int sweetness = 0;
    int updatedSweetness;

    // sweetness as 0 is passed down as the value of argument for addSweets
    updatedSweetness = addSweets(sweetness--);
    
    printf("result is %d\n", updatedSweetness); // the result is 1
    
    sweetness = 0;

    updatedSweetness = addSweets(--sweetness);
    
    printf("result is %d", updatedSweetness); // the result is 1


}