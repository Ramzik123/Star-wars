#include <string>

class Character {
public:
    Character(int id);
    void printInfo();
private:
    int id;
    std::string name;
    std::string height;
    std::string mass;
    std::string hair_color;
    std::string skin_color;
    std::string eye_color;
    std::string birth_year;
    std::string gender;
    void fetchData();
};
