// -CPP_Basic_Practise-.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Used for Input/output.
// Preprocessor statement, occures before compilation.
#include <iostream>

// Annoyingly, functions must be declared before reaching the main function or move definition of function before main.
// https://stackoverflow.com/questions/8329103/identifier-not-found-error-on-function-call
void Test_Function(std::string astring);
void Type_Function(bool aswitch);

/*
    Renamed cpp file in "Source Files" from -CPP_Basic_Practise-.cpp to main.cpp
    Obviously the entry point (main function).
    Main function special case, return type for main is "int". But will assume 0 is being returned when nothing is returned.
*/
int main()
{
    // Write to console (Printing). "See-out".
    // << == Insertion Operator.
    std::cout << "Hello World!" << std::endl;
    // Guidelines dictate "\n" is better for efficiency.
    std::cout << "1\n";
    std::cout << "2\n";
    std::cout << "3\n\n";
    // Pause program's execution on this line utill we press enter.
    std::cin.get();
    
    int anint = 123;
    std::cout << anint << "\n";
    int sum = anint + anint;
    std::cout << sum << std::endl;
    std::string astring = "Test";
    std::cout << astring;
    std::cout << "\n";
    std::cin.get();

    int x = 1, y = 2, z = 3;
    const std::string neverchange = "Never change";
    std::cin.get();

    for (int i = 0; i <= 10; i++)
    {
        std::cout << i << "\n";
    };
    std::cin.get();
    Test_Function("hello");
    Type_Function(true);
    return 0;
}
void Test_Function(std::string astring)
{
    astring = astring + "123";
    std::cout << astring << std::endl; 

}
void Type_Function(bool aswitch)
{
    if (aswitch == true)
    {
        double double_num = 10.10;
        double_num += double_num;
        char achar = 'a';
        std::cout << achar << "+" << double_num << "\n\n";
        std::cout << achar + double_num << "\n\n";
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
