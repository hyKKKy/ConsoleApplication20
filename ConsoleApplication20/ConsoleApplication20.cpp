#include <iostream>
#include <fstream>
#include <string>

int main()
{
    //Task 1
    /*std::ofstream file;
    std::ifstream file2;
    file.open("MyFile.txt");
    file2.open("FileTwo.txt");
    if (file.is_open() && file2.is_open()) 
    {  
        file << file2.rdbuf();
    }
    else
    {
        std::cout << "Can't open the file!" << std::endl;
    }
    file.close();
    file2.close();*/
    
    //Task 2
    /*std::ofstream file;
    std::ifstream file2;
    file.open("MyFile.txt", std::fstream::ate);
    file2.open("FileTwo.txt", std::ofstream::in);

    std::string string_array[100];
    int count = 0;

    if (file.is_open() && file2.is_open())
    {
        while (count < 100 && std::getline(file2, string_array[count]))
        {
            count++;
        }

        for (int i = count - 1; i >= 0; i--)
        {
            file << string_array[i] << std::endl;
        }
    }
    else
    {
        std::cout << "Can't open the file!" << std::endl;
    }
    file.close();
    file2.close();*/

    //Task 3
    /*std::ifstream file;
    std::ofstream result;
    file.open("File3.txt");
    result.open("result.txt");
    const std::string dash = "------------";
    std::string line;
    if (file.is_open() && result.is_open())
    {
        bool isSpace = false;
        while (std::getline(file, line)) {
            result << line << std::endl; 

            
            if (line.find(' ') == std::string::npos) {
                isSpace = true;
            }
        }
        if (isSpace) {
            result << dash << std::endl;
        }
        else {
            result << dash << std::endl;
        }
       
    }
    else
    {
        std::cout << "Error!" << std::endl;
    }

    file.close(); 
    result.close();*/

    //Task4
    /*std::ifstream file1;
    std::ifstream file2;

    file1.open("Task4 file1.txt");
    file2.open("Task4 file2.txt");

    if (file1.is_open() && file2.is_open()) 
    {
        bool isDifferent = false;
        std::string string_file1, string_file2;

        while (std::getline(file1, string_file1) && std::getline(file2, string_file2))
        {
            if (string_file1 != string_file2)
            {
                std::cout << "Difference has found!" << std::endl;
                std::cout << "F1 " << string_file1 << std::endl;
                std::cout << "F2 " << string_file2 << std::endl;
                isDifferent = true;
            }
        }
        if (!isDifferent) {
            std::cout << "Nothing has found!" << std::endl;
        }
    }
    else 
    {
        std::cout << "Error!" << std::endl;
    }

    file1.close();
    file2.close();*/

    std::ifstream file;
    file.open("Task5.txt");

    std::ofstream file2;
    file2.open("Task5 result.txt");

    if (file.is_open() && file2.is_open()) 
    {   
        char c;
        int counter_char = 0;
        int counter_lines = 0;
        int counter_vowels = 0;
        int counter_consonant = 0;
        int counter_numbers = 0;
        while (file.get(c))
        {
            counter_char++;
            if (std::isalpha(c))
            {
                if (c == 'a' || c == 'i' || c == 'o' || c == 'i' || c == 'u') {
                    counter_vowels++;
                }
                else
                {
                    counter_consonant++;
                }
            }
            else if (std::isdigit(c)) {
                counter_numbers++;
            }
            if (c == '\n') {
                counter_lines++;
            }
            
        }

        file2 << "Chars" << counter_char << std::endl;
        if (counter_lines > 0) {
            file2 << "Lines" << counter_lines + 1 << std::endl;
        }
        else {
            file2 << "Lines" << counter_lines  << std::endl;
        }
        file2 << "Vowels" << counter_vowels << std::endl;
        file2 << "Consonants" << counter_consonant << std::endl;
        file2 << "Numbers" << counter_numbers << std::endl;

    }
    else
    {
        std::cout << "Error!" << std::endl;
    }

    file.close();
    file2.close();
}


