#include <iostream>

#include "assets/Administrtion/Administrtion.h"
#include "assets/Conference/Conference.h"
#include "assets/Keeper/Keeper.h"
#include "assets/Speaker/Speaker.h"

void printInstruction() {
  std::cout << "\nHelp:"
            << "\n1 - Add new element"
            << "\n3 - Print all data"
            << "\n4 - Save data"
            << "\n5 - Load data"
            << "\n9 - Print Help"
            << "\n0 - Exit" << std::endl;
}

void addingNew(my::Keeper &keeper) {
  bool running = true;
  int choice;
  while (running) {
    std::cout << "\nWhat do you want to add?"
              << "\n1 - Speaker"
              << "\n2 - Administration"
              << "\n3 - Conference"
              << "\n0 - Exit" << std::endl
              << "\nYour choice: ";
    std::cin >> choice;
    std::cin.ignore();
    switch (choice) {
    case 1: {
      std::string input[4];
      int i = 0;
      for (auto &msg :
           {"Enter Administration name: ", "Enter organization name: ",
            "Enter report name: ", "Enter report annotation: "}) {
        std::cout << msg;
        std::getline(std::cin, input[i]);
        i++;
      }
      keeper.push(new my::Speaker(input));

    } break;
    case 2: {
      std::string input[3];
      int i = 0;
      for (auto &msg : {"Enter speaker name: ", "Enter Post: ",
                        "Enter Area of responsibility: "}) {
        std::cout << msg;
        std::getline(std::cin, input[i]);
        i++;
      }
      keeper.push(new my::Administration(input));

    } break;
    case 3: {
      std::string input[3];
      int i = 0;
      for (auto &msg : {"Enter conference name: ", "Enter conference date: ",
                        "Enter conferentce time: "}) {
        std::cout << msg;
        std::getline(std::cin, input[i]);
        i++;
      }
      keeper.push(new my::Conference(input));
    } break;
    case 0:
      running = false;
      break;
    default:
      std::cout << "Incorrect Input, please, try again." << std::endl;
    }
    std::cout << "\nContinue?"
              << "\n1 - yes"
              << "\n0 - no" << std::endl
              << "Your choice: ";
    std::cin >> choice;
    if (choice == 0)
      running = false;
  }
}

void edit(my::Keeper &keeper) {
  std::cout << "\nAll elements:" << std::endl;
  for (int i = 0; i < keeper.len(); i++)
    std::cout << "id: " << i << keeper[i]->represent() << std::endl;

  int chiuce;
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
      edit(k);
      break;
    case 3:
      k.print();
      break;
    case 4:
      k.save();
      break;
    case 5:
      k.load();
      break;
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
