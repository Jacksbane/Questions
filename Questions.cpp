// Questions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    srand(time(0));
    int input = (rand() % 4) + 1;
    switch (input)
    {
    case 1:
    {
        std::cout << "What is the square root of 9?\n\na: 1\nb: 5\nc: 3\nd: 8\n\n";
        break;
    }
    case 2:
    {
        std::cout << "What is the largest state in the United States?\n\na: Rhode Island\nb: Texas\nc: Alaska\nd: Connecticut\n\n";
        break;
    }
    case 3:
    {
        std::cout << "What is the lowest point on Earth?\n\na: Death Valley\nb: Grand Canyon\nc: Marianas Trench\nd: Sahara Desert\n\n";
        break;
    }
    case 4:
    {
        std::cout << "Where is the only place n earth where you can find both alligators and crocodiles in the wild?\n\na: Japan\nb: Madagascar\nc: Florida\nd: India\n\n";
        break;
    }
    }
    char temp;
    std::cin >> temp;
    if (temp == 'c')
    {
        std::cout << "CORRECT!";
        std::cin.ignore();
    }
    else
    {
        std::cout << "Wrong";
        std::cin.ignore();
    }
    std::cin.ignore();
}


