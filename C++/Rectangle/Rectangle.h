#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <string>
#include<iostream>

class Rectangle
{
private:
    std::string serialNumber;
    double width;
    double height;

public:
    static int squareCount;
    static int verticalCount;
    static int horizontalCount;
    
    Rectangle(int, int);
    ~Rectangle();
    void setWidth(double);
    void setHeight(double);
    void setSerialNumber(std::string);
    double getWidth() const;
    double getHeight() const;
    std::string getSerialNumber() const;  
};

#endif
