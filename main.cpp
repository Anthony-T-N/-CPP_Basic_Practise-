// -CPP_Basic_Practise-.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Used for Input/output.
// Preprocessor statement, occures before compilation.
#include <iostream>
#include <string>

// Annoyingly, functions must be declared before reaching the main function or move definition of function before main.
// https://stackoverflow.com/questions/8329103/identifier-not-found-error-on-function-call
void test_function(std::string astring);
void type_function(bool aswitch);
void user_input_function();
void while_loops(double limit);
void arrays();
void references();
void memory_address();
void typedef_declarations();

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
    typedef_declarations();
    return 0;
    std::cin.get();
    test_function("hello");
    type_function(true);
    user_input_function();
    double limit = 0;
    std::cout << "Height of poorly created right angle triangle:" << "\n";
    std::cin >> limit;
    while_loops(limit);
    arrays();
    references();
    memory_address();
    return 0;
}
void test_function(std::string astring)
{
    astring = astring + "123";
    std::cout << astring << std::endl; 

}
void type_function(bool aswitch)
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
void user_input_function()
{
    std::cout << "Contiune ?" << "\n";
    std::string option = "";
    std::cin >> option;
    if (option == "n")
    {
        return;
    }
    std::cout << "Please enter something" << "\n";
    std::string first_input;
    // "See-in".
    std::cin >> first_input;
    std::cout << first_input << "\n";

    int x, y;
    std::cout << "Enter a number" << "\n";
    std::cin >> x;
    std::cout << "Enter a 2nd number" << "\n";
    std::cin >> y;
    int num_switch = (x < y);
    std::cout << num_switch << "\n";
    if (num_switch == 0)
    {
        std::cout << "The 2nd number is not greater than the 1st number" << "\n";
    }
    else if (num_switch == 1)
    {
        std::cout << "The 2nd number is greater than the 1st number" << "\n";
    }
    else
    {
        std::cout << "Other" << "\n";
    }
}

void while_loops(double limit)
{
    double x = 0;
    while (x <= limit)
    {
        for (int i = 0; i <= x; i++)
        {
            std::cout << "X";
        }
        std::cout << "\n";
        x++;
    }
}

void arrays()
{
    std::string phonetic[7] = { "alpha", "beta", "charlie", "delta", "foxtrot", "golf", "hotel" };
    // Arrays not directly assignable. Example: Can't new_array = old_array 
    // Recommendation to use std::vectors.
    std::string backup_phonetic[sizeof(phonetic) / sizeof(phonetic[0])];
    std::cout << "Duplicating array" << "\n\n";
    for (int i = 0; i <= sizeof(backup_phonetic) / sizeof(backup_phonetic[0]) - 1; i++)
    {
        backup_phonetic[i] = phonetic[i];
        std::cout << backup_phonetic[i] << "\n";
    }
    std::cout << phonetic[6] << "\n";
    std::cout << phonetic[3] << "\n";
    std::cout << "Select a number between 0 and 6" << "\n";
    int index = 0;
    std::cin >> index;
    std::cout << phonetic[index] << "\n";
    for (int i = 0; i <= sizeof(phonetic) / sizeof(phonetic[0]) - 1; i++)
    {
        std::cout << phonetic[i] << "\n";
    }
    std::cout << "\n";
    for (int i = 0; i <= sizeof(phonetic) / sizeof(phonetic[0]) - 1; i++)
    {
        // "to_string" requires "#include <string>"
        phonetic[i] = std::to_string(i);
        std::cout << phonetic[i] << "\n\n";
    }
    std::string new_phonetic[sizeof(phonetic) / sizeof(phonetic[0]) + sizeof(backup_phonetic) / sizeof(backup_phonetic[0])];
    std::cout << sizeof(new_phonetic) / sizeof(new_phonetic[0]) << "\n";
    int temp = 0;
    for (int i = 0; i <= sizeof(backup_phonetic) / sizeof(backup_phonetic[0]) - 1; i++)
    {
        new_phonetic[i] = backup_phonetic[i];
        temp = i;
    }
    for (int i = 0; i <= sizeof(phonetic) / sizeof(phonetic[0]) - 1; i++)
    {
        new_phonetic[temp + i] = phonetic[i];
    }
    std::cout << "Final Array" << "\n";
    for (int i = 0; i <= sizeof(new_phonetic) / sizeof(new_phonetic[0]) - 1; i++)
    {
        std::cout << new_phonetic[i] << "\n";
    }

}

void references_control(std::string &control_variable)
{
    std::cout << "References_control" << "\n";
    control_variable = "Hello";
}

void references()
{
    std::cout << "References" << "\n";
    std::string three_letters = "abc";
    std::string &abc = three_letters;
    std::cout << "1) " << three_letters << "\n";
    std::cout << "2) " << abc << "\n\n";

    std::string self = "12345";
    references_control(self);
    std::cout << self << "\n\n";

    std::cout << "Phrase 2" << "\n\n";
    references_control(abc);
    std::cout << "4) " << three_letters << "\n";
    std::cout << "5) " << abc << "\n\n";
}

void memory_address()
{
    std::cout << "memory_address" << "\n\n";
    std::string slot_1 = "Alpha";
    std::string slot_2 = "Beta";
    std::string slot_3 = "Charlie";
    std::cout << &slot_1 << "\n";
    std::cout << &slot_2 << "\n";
    std::cout << &slot_3 << "\n";
}

void typedef_declarations()
{
    typedef int magic;
    magic a_number = 12345;
    std::cout << a_number + 987 << "\n";
    int two_number = 435346;
    std::cout << a_number + two_number << "\n";

    typedef bool binary;
    binary red = true;
    binary blue = false;
    if (red == true)
    {
        if (blue == false)
        {
            std::cout << red << " " << blue << "\n";
        }
    }
}
