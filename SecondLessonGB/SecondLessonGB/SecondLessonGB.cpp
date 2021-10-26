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

struct my_variant
{
    my_data main_data;
    int is_int: 1;
    int is_float : 1;
    int is_char : 1;
    
    void set(float f)
    {
        main_data.f_number = f;
        is_float = 1;
        is_int = 0;
        is_char = 0;
    }

    void set(int i)
    {
        main_data.number = i;
        is_float = 0;
        is_int = 1;
        is_char = 0;
    }

    void set(char ch)
    {
        main_data.sign = ch;
        is_float = 0;
        is_int = 0;
        is_char = 1;
    }

    void print_value()
    {
        if (is_int)
        {
            std::cout << main_data.number << "\n";
        }
        if (is_float)
        {
            std::cout << main_data.f_number << "\n";
        }
        if (is_char)
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






