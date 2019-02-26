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

    ~Numbers() = default;

    void prompt();

    void action();

private:
    std::vector<int> _docket;
};

#endif //ENPM809Y_ASSIGNMENT5_NUMBERS_H
