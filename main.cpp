#include "header.h"

struct listData {
    std::string listPos;
    std::string gender;
    std::string title;
    std::string givenName;
    std::string initial;
    std::string surname;
    std::string streetAddress;
    std::string city;
    std::string state;
    std::string zipCode;
    std::string emailAddress;
    std::string birthday;
} ;

int main() {
    std::string temp;
    std::vector<listData> test;
    std::ifstream list;
    list.open("FakeNames.csv", std::ios::in);
    int count, first, last = 0;
    

    for (int i = 0; list ; i++) {
        test.push_back(listData());
        getline(list, test[i].listPos, ',');
        getline(list, test[i].gender, ',');
        getline(list, test[i].title, ',');
        getline(list, test[i].givenName, ',');
        getline(list, test[i].initial, ',');
        getline(list, test[i].surname, ',');
        getline(list, test[i].streetAddress, ',');
        getline(list, test[i].city, ',');
        getline(list, test[i].state, ',');
        getline(list, test[i].zipCode, ',');
        getline(list, test[i].emailAddress, ',');
        getline(list, test[i].birthday, '\n');
    }

    return 0;
}