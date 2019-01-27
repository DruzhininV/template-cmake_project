//
// Created by Vladimir Druzhinin on 27.01.2019.
//

#include "sphere.h"
#include <iostream>

namespace lib{

std::string Sphere::print() const {
    const auto str{"Sphere"};
    std::cout << str << std::endl;
    return str;
}

std::unique_ptr<Shape> make_sphere(){
    return std::make_unique<Sphere>();
}

}//namespace lib;
