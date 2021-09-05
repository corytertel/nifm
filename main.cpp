#include <string>
#include <iostream>
#include <fstream>
#include <filesystem>

auto main(int argc, char** argv) -> int {
    // symlink test
    std::cout << "File to symlink: ";
    std::string input_file_name;
    std::cin >> input_file_name;

    std::ifstream input_file{ input_file_name };

    if (!input_file) {
        std::cerr << "Cannot read " << input_file_name << std::endl;
        return 1;
    }

    //std::filesystem::create_symlink(input_file_name, "symlink_file");
    std::filesystem::create_hard_link(input_file_name, "symlink_file");

    std::cout << "symlink_file created" << std::endl;
    
    return 0;
}
