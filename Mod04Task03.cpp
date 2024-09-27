#include <iostream>
// Задача 3. Вывод структуры

struct fullAddress
{
    std::string cityName;
    std::string streetName;
    int buildingNum;
    int flatNum;
    int indexNum;
};

void printFullAddress(fullAddress m)
{
    std::cout << "City: " << m.cityName << std::endl;
    std::cout << "Street: " << m.streetName << std::endl;
    std::cout << "Building: " << m.buildingNum << std::endl;
    std::cout << "Flat number: " <<  m.flatNum << std::endl;
    std::cout << "Index: " << m.indexNum << std::endl;
}

int main()
{
    fullAddress address;

    // создание первого экземпляра

    std::cout << "Please enter city name:" << std::endl;
    std::cin >> address.cityName;
    std::cout << "Please enter street name:" << std::endl;
    std::cin >> address.streetName;
    std::cout << "Please enter building number:" << std::endl;
    std::cin >> address.buildingNum;
    std::cout << "Please enter flat number:" << std::endl;
    std::cin >> address.flatNum;
    std::cout << "Please enter index number:" << std::endl;
    std::cin >> address.indexNum;

    printFullAddress(address);

    // создание второго экземпляра

    std::cout << "Please enter city name:" << std::endl;
    std::cin >> address.cityName;
    std::cout << "Please enter street name:" << std::endl;
    std::cin >> address.streetName;
    std::cout << "Please enter building number:" << std::endl;
    std::cin >> address.buildingNum;
    std::cout << "Please enter flat number:" << std::endl;
    std::cin >> address.flatNum;
    std::cout << "Please enter index number:" << std::endl;
    std::cin >> address.indexNum;

    printFullAddress(address);
    
    return 0;
}
