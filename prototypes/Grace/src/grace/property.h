
#pragma once

#include <stdio.h>

#define property(type) struct : public Property <type>

template <typename T>
class Property
{
protected:
    T value;
public:
    virtual T get() {
        return value;
    }
    virtual void set(T new_value) {
        value = new_value;
    }
};

