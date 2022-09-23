#include "Header.h"

int main() {
	//Guessing game
	srand(time(0));
	int guess, answer = (rand() % 10 + 1), tries = 0, limit = 3;
	do{
		cout << "Enter a number:";
		cin >> guess;
		if (guess < answer) {
			cout << "Too small\n";
		}
		else if (guess > answer) {
			cout << "Too big\n";
		}
		tries++;
	} while (tries != limit && guess != answer);

	if (guess == answer) {
		cout << "You win" << endl;
	}
	else {
		cout << "Next time,answer:" << answer << endl;
	}
}