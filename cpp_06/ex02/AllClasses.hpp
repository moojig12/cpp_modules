#pragma once
#ifndef ALLCLASSES_HPP
# define ALLCLASSES_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdint.h>

struct Base {
    virtual ~Base();
};

struct A : public Base {};
struct B : public Base {};
struct C : public Base {};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

#endif