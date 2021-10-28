#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()

{
    char menu [50][5000] = {"Spaghetti","Sushi","Ramen","Krapow","Udon","Fried chicken with garlic","Sandwich",
							"Hamburger","Omelette","Fried rice","Noodles","Pizza Company","KFC","Mcdonald","Shabu-Buffet",
							"Texus","Steak","Papaya Salad","Fried egg","Tokbukki"};
    srand(time(NULL));
    int number = rand() % 20;
    printf("%s", menu[number]);
    return 0;
}












