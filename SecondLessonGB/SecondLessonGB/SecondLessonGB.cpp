#include <array>
#include <iostream>

enum tic_tac_toe
{
    none,
    cross,
    zero,
};

struct tic_tac_toe_square
{
    tic_tac_toe tic_tac;
    int call_index;
};

union my_data
{
    int number;
    float f_number;
    char sign;
};

struct is_int
{
    unsigned int flag: 1;
};

struct is_float
{
    unsigned int flag: 1;
};

struct is_char
{
    unsigned int flag: 1;
};

struct my_variant
{
    my_data main_data;
    is_int integer;
    is_float floating;
    is_char c_сharacter;
    
    void set(float f)
    {
        main_data.f_number = f;
        floating.flag = 1;
        integer.flag = 0;
        c_сharacter.flag = 0;
    }

    void set(int i)
    {
        main_data.number = i;
        floating.flag = 0;
        integer.flag = 1;
        c_сharacter.flag = 0;
    }

    void set(char ch)
    {
        main_data.sign = ch;
        floating.flag = 0;
        integer.flag = 0;
        c_сharacter.flag = 1;
    }

    void print_value()
    {
        if (integer.flag)
        {
            std::cout << main_data.number << "\n";
        }
        if (floating.flag)
        {
            std::cout << main_data.f_number << "\n";
        }
        if (c_сharacter.flag)
        {
            std::cout << main_data.sign << "\n";
        }
    };
};

int main()
{
    {
        // Task 1:
        short int s_number {};
        int number {};
        long long int l_l_number {};
        char c_simbol {};
        bool b_check {};
        float f_numer {};
        double d_number {};
    }

    {
        // Task 1(2):
        short int s_number {1};
        int number {32769};
        long long int l_l_number {2147483648};
        char c_simbol {'c'};
        bool b_check {true};
        float f_numer {1.1f};
        double d_number {1.1};
    }

    { // Task 2:
        enum tic_tac_toe
        {
            none,
            cross,
            zero,
        };
    }

    { // Task 3:
        std::array<tic_tac_toe, 9> my_array {};
    }

    { // Task 3(2):
        std::array<tic_tac_toe, 9> my_array;
        for (auto& element : my_array)
        {
            element = none;
        }
    }

    { // Task 4:
        struct tic_tac_toe_square
        {
            tic_tac_toe tic_tac;
            int call_index;
        };
    }
    
    { // Task 5:
        my_variant main_variant;
        main_variant.set(5);
        main_variant.print_value();
        main_variant.set('q');
        main_variant.print_value();
        main_variant.set(1.1f);
        main_variant.print_value();
    }
    
    return 0;
}






