//
// Created by arunk on 02/25/2019.
//

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
