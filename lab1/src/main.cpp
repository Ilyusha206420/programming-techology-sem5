#include <iostream>

#include "assets/Keeper/Keeper.h"
#include "assets/Speaker/Speaker.h"

void printInstruction() {
  std::cout << "\nHelp:"
            << "\n1 - Add new element"
            << "\n3 - Print all data"
            << "\n9 - Print Help"
            << "\n0 - Exit" << std::endl;
}

void addingNew(my::Keeper &keeper) {
  bool running = true;
  int choice;
  while (running) {
    std::cout << "\nWhat do you want to add?"
              << "\n1 - Speaker"
              << "\n0 - Exit" << std::endl
              << "\nYour choice: ";
    std::cin >> choice;
    switch (choice) {
    case 1: {
      std::cin.ignore();
      std::string input[4];
      int i = 0;
      for (auto &msg : {"Enter speaker name: ", "Enter organization name: ",
                        "Enter report name: ", "Enter report annotation: "}) {
        std::cout << msg;
        std::getline(std::cin, input[i]);
        i++;
      }
      keeper.push(new my::Speaker(input[0], input[1], input[2], input[3]));

      std::cout << "\nWan't complete?"
                << "\n1 - yes"
                << "\n0 - no" << std::endl
                << "Your choice: ";
      std::cin >> choice;
      if (!choice)
        running = false;
    } break;
    case 0:
      running = false;
      break;
    default:
      std::cout << "Incorrect Input, please, try again." << std::endl;
    }
  }
}

int main() {
  bool running = true;
  int choice;
  my::Keeper k;
  printInstruction();
  while (running) {
    std::cout << "\nYour choice: ";
    std::cin >> choice;
    switch (choice) {
    case 1:
      addingNew(k);
      break;
    case 2:
      break;
    case 3:
      k.print();
      break;
    case 4:
    case 5:
    case 9:
      printInstruction();
      break;
    case 0:
      running = false;
      break;
    default:
      std::cout << "\nIncorrect input";
      printInstruction();
    }
  }
  return 0;
}
