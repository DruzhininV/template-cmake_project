//
// Created by Vladimir Druzhinin on 27.01.2019.
//

#pragma once
#ifndef TEMPLATE_CMAKE_PROJECT_SPHERE_H
#define TEMPLATE_CMAKE_PROJECT_SPHERE_H

#include "shape.h"


namespace lib {


class Sphere : public Shape {
public:
    ~Sphere() override = default;
    std::string print() const override;
};


}//namespace lib;

#endif //TEMPLATE_CMAKE_PROJECT_SPHERE_H
