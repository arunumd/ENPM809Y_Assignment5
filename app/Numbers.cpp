//
// Created by arunk on 02/25/2019.
//

#include <iostream>
#include "../include/Numbers.h"
#include <vector>
#include <numeric>
#include <algorithm>

void Numbers::prompt() {
    std::cout << "\n=================================\n"
                 "P - Print numbers. \nA - Add a number. \n"
                 "M - Display mean of numbers. \n"
                 "S - Display the smallest number. \n"
                 "L - Display the largest number. \n"
                 "F - Flush the container. \n"
                 "Q - Quit. \n\nPlease, make a choice: " <<
              std::endl;
}

void Numbers::action() {
    prompt();
    char selection = 'B';
    while (std::cin >> selection) {
        if (selection == 'q' || selection == 'Q') {
            std::cout << "Goodbye !";
            break;
        } else {
            switch (selection) {
                case 'P' :
                case 'p' : {
                    if (!_docket.empty()) {
                        std::cout << "Elements in the vector are : ";
                        std::copy(_docket.begin(), _docket.end(),
                                  std::ostream_iterator<int>(std::cout, " "));
                    } else std::cout << "The vector is empty." << std::endl;
                }
                    break;
                case 'A' :
                case 'a' : {
                    std::cout << "Enter an integer to add : " << std::endl;
                    int dummy;
                    std::cin >> dummy;
                    _docket.push_back(dummy);
                    std::cout << dummy << " added to the vector." << std::endl;
                }
                    break;
                case 'M' :
                case 'm' :
                    if (!_docket.empty()) {
                        std::cout << "The mean of ";
                        std::copy(_docket.begin(), _docket.end(),
                                  std::ostream_iterator<int>(std::cout, " "));
                        std::cout << " is ";
                        std::cout << std::accumulate(_docket.begin(), _docket.end(), 0)
                                     / _docket.size() << std::endl;
                    } else std::cout << "Empty vector, the mean cannot be computed.";
                    break;
                case 's' :
                case 'S' :
                    std::cout << "The smallest element is " <<
                              *std::min_element(begin(_docket), end(_docket));
                    break;
                case 'l' :
                case 'L' :
                    std::cout << "The largest element is " <<
                              *std::max_element(begin(_docket), end(_docket));
                    break;
                case 'f' :
                case 'F' :
                    _docket.clear();
                    break;
                default:
                    std::cout << "Invalid choice. Please try again !" << std::endl;
                    break;
            }
            prompt();
        }
    }
}
