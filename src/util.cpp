#include "util.hpp"

std::fstream openToWrite(std::string fileName){
  std::fstream fs;

  fs.open(fileName);

  if(!fs.is_open()) {
    fs.clear();
    fs.open(fileName, std::ios::out); //Create file to writing
    fs.close();
    fs.open(fileName, std::ios::out);
    std::cout << "Arquivo " << fileName << " criado" << std::endl; 
  }

  return fs;
}

std::fstream openToRead(std::string fileName){
  std::fstream fs;

  fs.open(fileName);

  if(!fs.is_open()) {
    fs.clear();
    fs.open(fileName, std::ios::out); //Create file to writing
    fs.close();
    fs.open(fileName, std::ios::in);
    std::cout << "Arquivo " << fileName << " criado" << std::endl; 
  }

  return fs;
}

void check_dir(const std::filesystem::path path) {
  if (!std::filesystem::exists(path)){
    if (std::filesystem::create_directory(path)){
      std::cout << "Directory " << path << " created success" << std::endl;
    } else {
      std::cout << "Directory " << path << " created fail" << std::endl;
      exit(EXIT_FAILURE);
    }
  }
}