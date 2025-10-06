//Class: SDC255 - Agile and Scrum
//Name: Samantha Riser, Broc Salvati, Venisha Smith

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <limits>
#include "file_ops.h"

void readFile() {
    std::ifstream in("data.txt");
    if (!in) {
        std::cerr << "Error: could not open data.txt for reading.\n";
        return;
    }
    std::string line;
    while (std::getline(in, line)) {
        std::cout << line << '\n';
    }
}

static void flushLine() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void writeFile() {
    std::cout << "\nWrite options\n"
              << "1: Overwrite file\n"
              << "2: Append to file\n"
              << "3: Edit an existing line\n"
              << "Choose (1-3): ";

    int mode = 0;
    if (!(std::cin >> mode)) {
        std::cin.clear();
        flushLine();
        std::cout << "Please enter a number from the menu.\n";
        return;
    }
    flushLine(); // clear newline before using getline

    if (mode == 1 || mode == 2) {
        // Overwrite or append
        std::ofstream out("data.txt",
            mode == 1 ? (std::ios::out | std::ios::trunc)
                      : (std::ios::out | std::ios::app));

        if (!out) {
            std::cerr << "Error: could not open data.txt for writing.\n";
            return;
        }

        std::cout << "Enter text. Press Enter on an empty line to finish.\n";
        std::string line;
        while (true) {
            std::getline(std::cin, line);
            if (line.empty()) break;
            out << line << '\n';
        }
        std::cout << "Write complete.\n";
        return;
    }

    if (mode == 3) {
        // Edit: load all lines, show with numbers, replace one, save
        std::ifstream in("data.txt");
        if (!in) {
            std::cerr << "Error: data.txt does not exist yet.\n";
            return;
        }

        std::vector<std::string> lines;
        std::string line;
        while (std::getline(in, line)) lines.push_back(line);
        if (lines.empty()) {
            std::cout << "File is empty. Nothing to edit.\n";
            return;
        }

        std::cout << "\nCurrent contents:\n";
        for (size_t i = 0; i < lines.size(); ++i) {
            std::cout << (i + 1) << ": " << lines[i] << '\n';
        }

        std::cout << "Enter the line number to replace (1-" << lines.size() << "): ";
        size_t idx = 0;
        if (!(std::cin >> idx) || idx < 1 || idx > lines.size()) {
            std::cin.clear();
            flushLine();
            std::cout << "Invalid line number.\n";
            return;
        }
        flushLine();

        std::cout << "Enter the new text for line " << idx << ":\n";
        std::string replacement;
        std::getline(std::cin, replacement);
        lines[idx - 1] = replacement;

        std::ofstream out("data.txt", std::ios::out | std::ios::trunc);
        if (!out) {
            std::cerr << "Error: could not reopen data.txt for saving.\n";
            return;
        }
        for (const auto& s : lines) out << s << '\n';
        std::cout << "Edit saved.\n";
        return;
    }

    std::cout << "Invalid selection.\n";
}
