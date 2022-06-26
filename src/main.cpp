#include "util.hpp"

int main([[maybe_unused]] int argc, [[maybe_unused]] char *argv[]) {

  check_dir(data_directory);
  check_dir(data_in);
  check_dir(data_out);

  std::string fileIn = argv[1];      // File data in
  std::string fileOut = argv[2];     // File data out
  std::string columnName = argv[3];  // Table name

  std::string filePathIn = data_in + fileIn;

  std::string filePathOut = data_out + fileOut + "_seed.txt";
  
  std::cout << filePathIn << " " << filePathOut << std::endl;

  std::fstream fs_in = openToRead(filePathIn);
  std::fstream fs_out = openToWrite(filePathOut);

  std::string line;
  std::string teste;

  const char quote = '\'';
  const char tab = '\t';

  while(std::getline(fs_in, line)) {
    fs_out << "DB::table(" << quote + fileOut + quote << ")->insert([" << std::endl;
    fs_out << tab << quote + columnName + quote << " => " << quote + line + quote << std::endl;
    fs_out << "]);" << std::endl << std::endl;
  }

  return 0;
}