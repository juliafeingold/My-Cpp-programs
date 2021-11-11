    #include "Rectangle.h"

    Rectangle::Rectangle(int w = 0, int h = 0)
    {
        width= w;
        height = h;

        if(width == height)
            squareCount++;
        else if(width > height)    
            horizontalCount++;
        else    
            verticalCount++;

    }
    Rectangle::~Rectangle()
    {

    }
    void Rectangle::setWidth(double w)
    {
        width = w;
    }

    void Rectangle::setHeight(double h)
    {
        height = h;
    }
    double Rectangle::getWidth() const //const add to get function, you can't modefined your attribute
    {
        return width; 
    }
    double Rectangle::getHeight() const
    {
        return height;
    }

    void Rectangle::setSerialNumber(std::string s)
    {
        serialNumber = s;
    }
    std::string Rectangle::getSerialNumber() const
    {
        return serialNumber;
    }
