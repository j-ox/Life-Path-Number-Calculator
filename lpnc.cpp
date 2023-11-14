#include <iostream>
#include <string>

int calculateLifePathNumber(int number) {
    while (number > 9) {
        int sum = 0;
        while (number > 0) {
            sum += number % 10;
            number /= 10;
        }
        number = sum;
    }
    return number;
}

int main() {
    std::string birthday;
    std::cout << "**********Life Path Number Calculator**********\n";
    std::cout << "Enter your birthday in digits (MM/DD/YYYY): ";
    std::cin >> birthday;

    int number = 0;
    for (char digit : birthday) {
        if (isdigit(digit)) {
            number += digit - '0';
        }
    }

    int lifePathNumber = calculateLifePathNumber(number);

    std::cout << "Your life path number is: " << lifePathNumber << std::endl;
    std::cout << "**********************************************\n";

    return 0;
}
