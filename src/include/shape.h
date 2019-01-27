//
// Created by Vladimir Druzhinin on 27.01.2019.
//

#pragma once
#ifndef TEMPLATE_CMAKE_PROJECT_LIBRARY_H
#define TEMPLATE_CMAKE_PROJECT_LIBRARY_H

#include <memory>
#include <string>

namespace lib {


class Shape {
public:
    virtual ~Shape() = default;
    virtual std::string print() const = 0;
};


std::unique_ptr<Shape> make_sphere();

}//namespace lib;


#endif //TEMPLATE_CMAKE_PROJECT_LIBRARY_H
