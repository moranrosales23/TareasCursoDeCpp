/*
    Tarea1 Yamil Uclés
*/

#include <iostream>
#include <string>
#include <utility>
#include <stdio.h>


// template <size_t... Indices>
// std::string GetRows(std::index_sequence<Indices...>)
// {
//     std::string rows;
//     ((rows.push_back('|'), rows.append(78, ' '), rows.append("|\n"), Indices), ...);
//     return rows;
// }

void Clear()
{
    printf("\033[H\033[J");
}

// void SetCursorPosition(int32_t X, int32_t Y)
// {
//     printf("\033[%d;%dH", Y + 1, X + 1);
// }

// template <size_t Ancho, size_t Alto>
// void PrintRectangle(std::string_view message)
// {
//     using namespace std;
//     cout << '+' << string(Ancho - 2, '-') << "+\n";
//     cout << GetRows(make_index_sequence<Alto - 2>());
//     cout << '+' << string(Ancho - 2, '-') << "+\n";
//     cout << endl;

//     SetCursorPosition(Ancho / 2 - message.size() / 2, Alto / 2 - 2);
//     cout << message;
//     SetCursorPosition(0, Alto + 1);
// }

int main()
{
    Clear();
    // PrintRectangle<80, 11>("");

std::cout << "+------------------------------------------------------------------------------+" << std::endl;
std::cout << "|                                                                              |" << std::endl;
std::cout << "|                                                                              |" << std::endl;
std::cout << "|                                                                              |" << std::endl;
std::cout << "|                                                                              |" << std::endl;
std::cout << "|                                                                              |" << std::endl;
printf("\t"

 #include "archivo.txt"
);
       
    
    
std::cout << "|                                                                              |" << std::endl;
std::cout << "|                                                                              |" << std::endl;
std::cout << "|                                                                              |" << std::endl;
std::cout << "|                                                                              |" << std::endl;
std::cout << "+------------------------------------------------------------------------------+" << std::endl;

    return EXIT_SUCCESS;
}
