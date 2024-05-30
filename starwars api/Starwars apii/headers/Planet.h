#include <string>

class Planet {
public:
    Planet(int id);
    void printInfo();
private:
    int id;
    std::string name;
    std::string rotation_period;
    std::string orbital_period;
    std::string diameter;
    std::string climate;
    std::string gravity;
    std::string terrain;
    void fetchData();
};