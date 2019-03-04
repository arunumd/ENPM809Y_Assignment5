/*
 * @file    Numbers.cpp
 * @author  Arun Kumar Devarajulu
 * @date    February 25, 2019
 * @brief   The file Numbers.cpp contains the implementation details of
 *          Assignment No 3
 */

#include "../include/Numbers.h"
#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

void Numbers::prompt() {   /*@brief  Displaying prompt information*/
    std::cout << "\n=================================\n"
                 "P - Print numbers. \nA - Add a number. \n"
                 "M - Display mean of numbers. \n"
                 "S - Display the smallest number. \n"
                 "L - Display the largest number. \n"
                 "F - Flush the container. \n"
                 "Q - Quit. \n\nPlease, make a choice: "
              << std::endl;
}

void Numbers::action() {   /*@brief  Invoke prompt method first*/
    prompt();

    /*@brief  Define selection as input char, initialized as 'B'*/
    char selection = 'B';

    /*@brief  Starting while loop*/
    while (std::cin >> selection) {

        /*@brief  Find 'Q' then quit*/
        if (selection == 'q' || selection == 'Q') {
            std::cout << "Goodbye !";
            break;
        } else {

            /*@brief Starting switch cases*/
            switch (selection) {

                /*@brief Case P to print vector list*/
                case 'P':
                case 'p': {

                    /*@brief If vector list not empty, start print list*/
                    if (!_docket.empty()) {
                        std::cout << "Elements in the vector are : ";

                        /*@brief Start to print vector list */
                        std::copy(_docket.begin(), _docket.end(), std::ostream_iterator<int>(std::cout, " "));
                    } else

                        /*@brief If vector is empty, print */
                        std::cout << "The vector is empty." << std::endl;
                }
                    break;

                    /*@brief Case 'A' to add integer to vector list*/
                case 'A':
                case 'a': {
                    std::cout << "Enter an integer to add : " << std::endl;

                    /*@brief Create double variable to store input number*/
                    double dummy;
                    std::cin >> dummy;

                    /*@brief Transfer double into integer and push to vector then print*/
                    _docket.push_back(int(dummy));
                    std::cout << int(dummy) << " added to the vector." << std::endl;
                }
                    break;

                    /*@brief Case 'M' to compute mean of the vector list*/
                case 'M':
                case 'm':
                    if (!_docket.empty()) {
                        std::cout << "The mean of ";
                        std::copy(_docket.begin(), _docket.end(), std::ostream_iterator<int>(std::cout, " "));
                        std::cout << " is ";

                        /*@brief Create integer to store the sum of vector list */
                        int mean_int = std::accumulate(_docket.begin(), _docket.end(), 0);

                        /*@brief First transfer to double then divide to get the accurate number of mean*/
                        std::cout << static_cast<double> (mean_int) / _docket.size() << std::endl;
                    } else
                        std::cout << "Empty vector, the mean cannot be computed.";
                    break;

                    /*@brief Case 'S' to print the smallest element*/
                case 's':
                case 'S':
                    std::cout << "The smallest element is " << *std::min_element(_docket.begin(), _docket.end());
                    break;

                    /*@brief Case 'L' to print the largest element */
                case 'l':
                case 'L':
                    std::cout << "The largest element is " << *std::max_element(_docket.begin(), _docket.end());
                    break;

                    /*@brief Case 'F' to clear all the stored numbers in the vector list */
                case 'f':
                case 'F':
                    _docket.clear();
                    break;

                    /*@brief Other cases, try again. */
                default:
                    std::cout << "Invalid choice. Please try again !" << std::endl;
                    break;
            }
            prompt();
        }
    }
}
