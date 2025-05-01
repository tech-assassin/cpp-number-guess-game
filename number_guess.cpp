#include <iostream>
#include <cstdlib>
#include <ctime>

int main () {
    std::srand(static_cast<unsigned int>(std::time(0))); // Seed random number
    int secretNumber = std::rand() % 100 + 1; // Random number from 1 to 100
    int guess;
    int tries = 0;

    std::cout <<"🎯 Welcome to the Number Guessing Game!\n";
    std::cout << "I'm thinking of a number between 1 and 100...\n";

    do {
        std::cout << "Enter your guess ";
        std::cin >> guess;
        tries++;

        if (guess <secretNumber) {
            std::cout << "Too low! Try again. \n";
        } else if (guess > secretNumber) {
            std::cout <<"Too high! Try again. \n";
        }else {
            std::cout << "💥 You got it in " <<tries << "tries!\n";
        } 
    } while (guess !=secretNumber);

    return 0;
}
