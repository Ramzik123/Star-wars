#include <iostream>
#include "Character.h"
#include "Film.h"
#include "Planet.h"

void printCharacterInfo(int id) {
    Character character(id);
    character.printInfo();
}

void printFilmInfo(int id) {
    Film film(id);
    film.printInfo();
}

void printPlanetInfo(int id) {
    Planet planet(id);
    planet.printInfo();
}

int main() {
    int choice, id;

    while (true) {
        std::cout << "Выберите опцию:";
        std::cout << "1. Получить информацию о персонаже";
        std::cout << "2. Получить информацию о фильме";
        std::cout << "3. Получить информацию о планете";
        std::cout << "4. Выход";
        std::cin >> choice;

        if (choice == 4) break;

        std::cout << "Enter ID: ";
        std::cin >> id;

        switch (choice) {
        case 1:
            printCharacterInfo(id);
            break;
        case 2:
            printFilmInfo(id);
            break;
        case 3:
            printPlanetInfo(id);
            break;
        default:
            std::cout << "Ошибка\n";
        }
    }

    return 0;
}