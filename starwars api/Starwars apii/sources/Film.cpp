#include "Film.h"
#include <iostream>
#include <cpr/cpr.h>
#include <json/json.h>

Film::Film(int id) : id(id) {
    fetchData();
}

void Film::fetchData() {
    std::string url = "https://swapi.dev/api/films/" + std::to_string(id) + "/";
    cpr::Response r = cpr::Get(cpr::Url{ url });

    if (r.status_code == 200) {
        Json::Value data;
        Json::Reader reader;
        reader.parse(r.text, data);

        title = data["title"].asString();
        director = data["director"].asString();
        producer = data["producer"].asString();
        release_date = data["release_date"].asString();

}

void Film::printInfo() {
    std::cout << "Title: " << title << "\n"
        << "Director: " << director << "\n"
        << "Producer: " << producer << "\n"
        << "Release Date: " << release_date << "\n";
}