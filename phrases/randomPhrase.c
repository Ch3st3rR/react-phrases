#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	char *article[] = {"the" , "a" , "one" , "some", "any"};
    char *noun[] = {"boy" , "girl" , "dog" , "town", "car"};
    char *verb[] = {"drove" , "jumped" , "ran" , "walked", "skipped"};
    char *preposition[] = {"to" , "from" , "over" , "under", "on"};

	const int number_of_words = 5;

    printf("%s %s %s %s %s %s\n", article[rand() % number_of_words], noun[rand() % number_of_words], verb[rand() % number_of_words], preposition[rand() % number_of_words], article[rand() % number_of_words], noun[rand() % number_of_words]);
	return 0;
}
