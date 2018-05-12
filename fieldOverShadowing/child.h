#pragma once
#include "mother.h"
#include "father.h"

class child : public father, public mother{
public:
    child(int A, int B);
    void printHair();
};

