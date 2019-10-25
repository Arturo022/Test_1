#include <stdlib.h>
#include <math.h>
#include <iostream>

class My_long_long_int
{
    public:
        My_long_long_int();
        ~My_long_long_int(){};
        long long int getValue() const;
        My_long_long_int(const long long int &new_value);
        My_long_long_int& operator= (const My_long_long_int &rhs);
        My_long_long_int operator+ (const My_long_long_int &rhs);
        My_long_long_int operator- (const My_long_long_int &rhs);
        My_long_long_int operator* (const My_long_long_int &rhs);
        My_long_long_int& operator*= (const My_long_long_int &rhs);
        My_long_long_int& operator++ ();
        My_long_long_int& operator-- ();
        My_long_long_int operator/ (const My_long_long_int &rhs);
        My_long_long_int& operator/= (const My_long_long_int &rhs);
        My_long_long_int operator% (const My_long_long_int &rhs);
        My_long_long_int& operator%= (const My_long_long_int &rhs);
        My_long_long_int& operator+= (const My_long_long_int &rhs);
        My_long_long_int& operator-= (const My_long_long_int &rhs);
        bool operator<= (const My_long_long_int &rhs);
        bool operator>= (const My_long_long_int &rhs);
        bool operator< (const My_long_long_int &rhs);
        bool operator> (const My_long_long_int &rhs);
        bool operator== (const My_long_long_int &rhs);
        bool operator!= (const My_long_long_int &rhs);
    protected:

    private:
        long long int value;
};

My_long_long_int::My_long_long_int(){
    value = 0;
}
My_long_long_int::My_long_long_int(const long long int &new_value){
    value = new_value;
}
long long int My_long_long_int::getValue() const{
    return value;
}
My_long_long_int& My_long_long_int::operator= (const My_long_long_int &rhs){
    if (this == &rhs){
        return *this;
    }
    value = rhs.value;
    return *this;
}
My_long_long_int My_long_long_int::operator+ (const My_long_long_int &rhs){
    return My_long_long_int(this->value + rhs.value);
}
My_long_long_int My_long_long_int::operator- (const My_long_long_int &rhs){
    return My_long_long_int(this->value - rhs.value);
}
My_long_long_int My_long_long_int::operator* (const My_long_long_int &rhs){
    return My_long_long_int(this->value * rhs.value);
}
My_long_long_int My_long_long_int::operator/ (const My_long_long_int &rhs){
        /*if (rhs.value == 0) {
            throw std::runtime_error("Cannot divide by zero");
        }
        value = value/rhs.value;*/
        return My_long_long_int(this->value / rhs.value);
}
My_long_long_int My_long_long_int::operator% (const My_long_long_int &rhs){
        return My_long_long_int(this->value % rhs.value);
}

My_long_long_int& My_long_long_int::operator+= (const My_long_long_int &rhs){
    value = value + rhs.value;
    return *this;
}
My_long_long_int& My_long_long_int::operator-= (const My_long_long_int &rhs){
    value = value - rhs.value;
    return *this;
}
My_long_long_int& My_long_long_int::operator*= (const My_long_long_int &rhs){
    value = value * rhs.value;
    return *this;
}
My_long_long_int& My_long_long_int::operator/= (const My_long_long_int &rhs){
    value = value / rhs.value;
    return *this;
}
My_long_long_int& My_long_long_int::operator%= (const My_long_long_int &rhs){
    value = value % rhs.value;
    return *this;
}
My_long_long_int& My_long_long_int::operator++ (){
    value = value + 1;
    return *this;
}
My_long_long_int& My_long_long_int::operator-- (){
    value = value - 1;
    return *this;
}
bool My_long_long_int::operator>= (const My_long_long_int &rhs){
    return(rhs.value <= this->value);
}
bool My_long_long_int::operator<= (const My_long_long_int &rhs){
    return(rhs.value >= this->value);
}
bool My_long_long_int::operator== (const My_long_long_int &rhs){
    return(rhs.value == this->value);
}
bool My_long_long_int::operator!= (const My_long_long_int &rhs){
    return(rhs.value != this->value);
}
bool My_long_long_int::operator> (const My_long_long_int &rhs){
    return(rhs.value < this->value);
}
bool My_long_long_int::operator< (const My_long_long_int &rhs){
    return(rhs.value > this->value);
}
