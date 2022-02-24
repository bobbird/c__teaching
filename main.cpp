#include <iostream>

struct Money {
    int dollars;
    int pence;
    void display() {
        std::cout << "$" << dollars << "." << pence << std::endl;
    }
};

int main() {
    char ca[100];
    std::string str;
    std::string_view

    Money myMoney;
    Money yourMoney;
    myMoney.display();
    return 0;
}
