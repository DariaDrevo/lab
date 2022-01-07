// labacycl.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");
    int n, a1, b2 ;
    int c = 1;
    int a2 = INT_MIN;
    int b = 0;
    int e = 0;
    std::cout << "Введите количество чисел в последовательности:" << std::endl ;
    std::cin >> n ;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a1;
        if (a1 % 5 != 0)
        {   
            c *= a1;
            e = e + 1;
            if (a2 < a1)
            {
                a2 = a1;
                b2 = i;
            }  
        } 
        
    }
    if (e > 0)
    {
        std::cout << "Произведение чисел не делящихся на 5: "<< c << std::endl;
        std::cout << "Наибольшее число: "<< a2 << std::endl;
        std::cout << "Номер наибольшего числа: "<< b2 << std::endl;
    }
    else
    {
        std::cout << "Все числа кратны 5, невозможно найти произведение" << std::endl;
    }
   


}

