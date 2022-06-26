#ifndef UTIL_HPP
#define UTIL_HPP

#define data_directory "./data/"
#define data_in "./data/in/"
#define data_out "./data/out/"

#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>

std::fstream openToWrite(std::string fileName);

std::fstream openToRead(std::string fileName);

void check_dir(const std::filesystem::path path);

#endif