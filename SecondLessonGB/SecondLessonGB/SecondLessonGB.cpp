
#include <array>

enum tic_tac_toe
{
    cross,
    zero,
};

struct tic_tac_toe_square
{
    tic_tac_toe tic_tac;
};

struct my_variant
{
    union my_data;
    int is_int;
    float is_float;
    char is_char;
};

int main()
{
    short int s_number {};
    int number {};
    long long int l_l_number {};
    char c_simbol {};
    bool b_check {};
    float f_numer {};
    double d_number {};
    std::array<tic_tac_toe,9> {};
    return 0;
}
