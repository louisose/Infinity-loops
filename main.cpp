#include <iostream>
#include <cstdlib>

void longway();
void shortway();

int main()
{
    std::cout << "  Hello Unfortunate Victim!" << std::endl;
    std::cout<< "   This Is The End!!"<<std::endl;
    std::cout<<"    How Do You Wish To End?"<<std::endl;
    std::cout<<"1  "<<" The Long Way  "<<std::endl;
    std::cout<<"2  "<<" The Short Way "<<std::endl;
    main();
    int option;
    std::cin>> option;
    switch (option)
    {
        case 1: longway();
                    break;
        case 2: shortway();
                    break;
        default: std::cout<<"ERRORR YOU ARE GONNA DIE NOW!!!!!"<<std::endl;
    }
    main();
    char response;
    std::cin>> response;
    return 0;
}

void longway()
{
    main();
}

void shortway()
{
    main();
}
