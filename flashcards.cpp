#include <iostream>
using namespace std;

// maybe we need to put these in a separate file, with a header...

std::string start_questions()
{
    char answer;
    while (answer != '1' || '2')
    {
        std::cout << "Please tpye 1 or 2 and press enter: ";
        std::cin >> answer;

        if (answer == '1')
        {
            return "numbers";
        }
        else if (answer == '2')
        {
            return "months";
        }
    }
}

std::string eng_or_chi()
{
    char answer2;
    while (answer2 != 'e' || 'c')
    {
        std::cout << "To view english first type e. To view Chinese first type c: ";
        std::cin >> answer2;

        if (answer2 == 'e')
        {
            return "english";
        }
        else if (answer2 == 'c')
        {
            return "chinese";
        }
    }
}

void play_game(string numbers_array[10][2], string months_array[12][2], string we_study, string e_or_c)
{

    std::cout << "Press enter to show the back of the card \n";

    if (we_study == "numbers" && e_or_c == "english")
    {
        for (int i = 0; i < 10; i++)
        {
            std::cin.ignore();
            std::cout << numbers_array[i][0] << "\n";
            std::cin.ignore();
            std::cout << numbers_array[i][1] << "\n";
        }
    }
    else if (we_study == "numbers" && e_or_c == "chinese")
    {
        for (int i = 0; i < 10; i++)
        {
            std::cin.ignore();
            std::cout << numbers_array[i][1] << "\n";
            std::cin.ignore();
            std::cout << numbers_array[i][0] << "\n";
        }
    }
    else if (we_study == "months" && e_or_c == "english")
    {
        for (int i = 0; i < 12; i++)
        {
            std::cin.ignore();
            std::cout << months_array[i][0] << "\n";
            std::cin.ignore();
            std::cout << months_array[i][1] << "\n";
        }
    }
    else if (we_study == "months" && e_or_c == "chinese")
    {
        for (int i = 0; i < 12; i++)
        {
            std::cin.ignore();
            std::cout << months_array[i][1] << "\n";
            std::cin.ignore();
            std::cout << months_array[i][0] << "\n";
        }
    }
}

// void play_again(bool program_running)
// {
//     std::cout << "Do you want to play again? (y/n) \n";
//     char again_answer;
//     std::cin >> again_answer;
//     if (again_answer == 'y')
//     {
//         program_running = true;
//     }
//     else if (again_answer == 'n')
//     {
//         program_running = false;
//     }
// }

int main()
{
    bool program_running = true;

    while (program_running == true)
    {
        std::cout << "What do you want to study? \n";
        std::cout << "(1) Chinese numbers \n";
        std::cout << "(2) Chinese months \n";

        string we_study = start_questions();

        string e_or_c = eng_or_chi();

        string numbers_array[10][2] = {{"one", "一"}, {"two", "二"}, {"three", "三"}, {"four", "四"}, {"five", "五"}, {"six", "六"}, {"seven", "七"}, {"eight", "八"}, {"nine", "九"}, {"ten", "十"}};

        string months_array[12][2] = {{"January", "一月"}, {"February", "二月"}, {"March", "三月"}, {"April", "四月"}, {"May", "五月"}, {"June", "六月"}, {"July", "七月"}, {"August", "八月"}, {"September", "月九"}, {"October", "月十"}, {"November", "十一月"}, {"December", "十二 月"}};

        play_game(numbers_array, months_array, we_study, e_or_c);

        // play_again(program_running);

        std::cout << "Do you want to play again? (y/n) \n";
        char again_answer;
        std::cin >> again_answer;
        if (again_answer == 'y')
        {
            program_running = true;
        }
        else if (again_answer == 'n')
        {
            program_running = false;
        }
    }
}
