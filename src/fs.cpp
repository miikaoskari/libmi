#include "fs.h"

#include <filesystem>
#include <fstream>

fs::fs()
    = default;

fs::~fs()
    = default;


std::string fs::read_file(const std::string& filepath)
{
    std::ifstream file(filepath);

    if (file.is_open()) {
        content.assign((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
        file.close();
    }

    return content;
}

int fs::write_file(const std::string& filepath, const std::string& content)
{
    std::ofstream file(filepath);

    if (file.is_open()) {
        file << content;
        file.close();
        return 0;
    }
    return 1;
}

void fs::rename_file(const std::string& new_filepath)
{
}

