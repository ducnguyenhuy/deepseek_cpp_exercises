/**
 * 5. file I/O with fstream
 *      Read a text file, count the number of words, and write the result to a new file.
 */

#include <iostream>
#include <fstream>
#include <sstream>

int main(void)
{
    std::ifstream file("test_file.txt");
    if (!file)
    {
        std::cout << "Error opening file\n";
        return -1;
    }

    std::ofstream file_out("out_file.txt");
    if(!file_out)
    {
        std::cout << "Error opening file\n";
        return -1;
    }

    std::string word;
    while (file >> word)
    {
        std::cout << word << std::endl;
        file_out << word;
    }

    file.close();
    file_out.close();
    
    return 0;
}