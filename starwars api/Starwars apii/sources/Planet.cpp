#include "Planet.h"
#include <iostream>
#include <cpr/cpr.h>
#include <json/json.h>

Planet::Planet(int id) : id(id) {
    fetchData();
}

void Planet::fetchData() {
    std::string url = "https://swapi.dev/api/planets/" + std::to_string(id) + "/";
    cpr::Response r = cpr::Get(cpr::Url{ url });

    if (r.status_code == 200) {
        Json::Value data;
        Json::Reader reader;
        reader.parse(r.text, data);

        name = data["name"].asString();
        rotation_period = data["rotation_period"].asString();
        orbital_period = data["orbital_period"].asString();
        diameter = data["diameter"].asString();
        climate = data["climate"].asString();
        gravity = data["gravity"].asString();
        terrain = data["terrain"].asString();
}

void Planet::printInfo() {
    std::cout << "Name: " << name << "\n"
        << "Rotation Period: " << rotation_period << "\n"
        << "Orbital Period: " << orbital_period << "\n"
        << "Diameter: " << diameter << "\n"
        << "Climate: " << climate << "\n"
        << "Gravity: " << gravity << "\n"
        << "Terrain: " << terrain << "\n";
}