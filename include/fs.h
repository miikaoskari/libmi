#ifndef FS_H
#define FS_H

#include <filesystem>
#include <list>
#include <string>
#include <cstdint>


class fs {
public:
    fs();
    ~fs();

    std::string read_file(const std::string& filepath);
    int write_file(const std::string& filepath, const std::string& content);
    void rename_file(const std::string& new_filepath);

private:
    std::string filepath;
    std::string content;
    std::string file_tree;
};

#endif // FS_H
