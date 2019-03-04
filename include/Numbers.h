/*
 * @file    Numbers.h
 * @author  Arun Kumar Devarajulu
 * @date    February 25, 2019
 * @brief   The file Numbers.h contains the header declarations for Numbers
 *          class. The class will be used for implementation of Assignment
 *          No 5
 */

#ifndef ENPM809Y_ASSIGNMENT5_NUMBERS_H
#define ENPM809Y_ASSIGNMENT5_NUMBERS_H

#include <iostream>
#include <vector>
#include <iterator>

class Numbers {
public:
    Numbers() = default;

    /*@brief  Define destructor*/
    ~Numbers() = default;

    /*@brief  Define prompt method*/
    void prompt();

    /*@brief  Define action method*/
    void action();

private:
    /*@brief  Define vector storage space*/
    std::vector<int> _docket;
};

#endif //ENPM809Y_ASSIGNMENT5_NUMBERS_H
