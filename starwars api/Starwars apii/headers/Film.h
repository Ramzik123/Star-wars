#include <string>

class Film {
public:
    Film(int id);
    void printInfo();
private:
    int id;
    std::string title;
    std::string director;
    std::string producer;
    std::string release_date;
    void fetchData();
};
