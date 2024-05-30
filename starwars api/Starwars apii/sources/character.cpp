#include "Character.h"
#include <iostream>
#include <cpr/cpr.h>
#include <json/json.h>

Character::Character(int id) : id(id) {
    fetchData();
}

void Character::fetchData() {
    std::string url = "https://swapi.dev/api/people/" + std::to_string(id) + "/";
    cpr::Response r = cpr::Get(cpr::Url{ url });

    if (r.status_code == 200) {
        Json::Value data;
        Json::Reader reader;
        reader.parse(r.text, data);

        name = data["name"].asString();
        height = data["height"].asString();
        mass = data["mass"].asString();
        hair_color = data["hair_color"].asString();
        skin_color = data["skin_color"].asString();
        eye_color = data["eye_color"].asString();
        birth_year = data["birth_year"].asString();
        gender = data["gender"].asString();
    }


void Character::printInfo() {
    std::cout << "Name: " << name << "\n"
        << "Height: " << height << "\n"
        << "Mass: " << mass << "\n"
        << "Hair Color: " << hair_color << "\n"
        << "Skin Color: " << skin_color << "\n"
        << "Eye Color: " << eye_color << "\n"
        << "Birth Year: " << birth_year << "\n"
        << "Gender: " << gender << "\n";
}