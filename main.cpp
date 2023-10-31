#include "include/lexer/scanner.hpp"

#include <fstream>

int main(int argc, char* argv[]) {
    
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <file_path>" << std::endl;
        return 1;
    }

    // Get the file path from the command line argument
    const char* filePath = argv[1];

    // Open the file
    std::ifstream inputFile(filePath);

    if (!inputFile.is_open()) {
        std::cerr << "Error: Could not open file " << filePath << std::endl;
        return 1;
    }

    // Read the file contents into a string
    std::string fileContents;
    std::string line;

    while (std::getline(inputFile, line)) {
        fileContents += line + "\n";
    }

    // Close the file
    inputFile.close();

    std::vector<lexer::Token> tokens;
    lexer::Scanner s(fileContents);
    tokens = s.ScanTokens();

    for (const auto& t : tokens) 
        std::cout << t.type << " ";
    std::cout << "\n";
    return 0;
}
