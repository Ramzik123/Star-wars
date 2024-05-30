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
        std::cout << "�������� �����:";
        std::cout << "1. �������� ���������� � ���������";
        std::cout << "2. �������� ���������� � ������";
        std::cout << "3. �������� ���������� � �������";
        std::cout << "4. �����";
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
            std::cout << "������\n";
        }
    }

    return 0;
}