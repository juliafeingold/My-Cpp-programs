#include <ctime>
#include <cstdlib>
#include <iostream>
#include <math.h>
#include <fstream> 

using namespace std;

class Shape
{
    protected:
        int serialNo;
        char type;
    public:
        Shape(char t, int sn)
        {
            type = t;
            serialNo = sn;
        }
        
        int getSerialNo()
        {
            return serialNo;
        }
        virtual void display() = 0;
};

class Circle : public Shape
{
    protected:
        int radius;
        
    public:
        Circle(char t, int sn, int r) : Shape(t, sn)
        {
            radius = r;
        }   
        
        virtual void display()
        {
            const int SIZE = 100;
            int r;

         
            for (int row = 0; row < SIZE; row++)
            {
                for (int col = 0; col < SIZE; col++)
                {
                    r = sqrt(pow((row - 30), 2) + pow((col - 30), 2));
                    if (r < radius)
                        cout << "* ";
                    else
                        cout << "  ";
                }
                cout << endl;
            }
        }
    
};


class Rectangle : public Shape
{
    protected:
        int width;
        int height;

    public:
        Rectangle(char t, int sn, int w, int h) : Shape(t, sn)
        {
            width = w;
            height = h;
        }   
        
        virtual void display()
        {
        
            int w = width;
            int h = height;

            for(int i=1; i <= h; i++)
            {
                for(int j=1; j <= w; j++)
                {
                    cout<<"* ";
                }
                cout<<"\n";
            }
            cout << endl << endl;
        }
};

class Spray : public Circle
{
    protected:
        int radius;
        int density;
    public:
        Spray(char t, int sn, int r, int d) : Circle(t, sn, r)
        {
            radius = r;
            density = d;
        }

        void display()
        {
            srand(time(0));
            const int SIZE = 41;
            int r = radius;
            int d = density;
            int ran;
            
            for (int row = 0; row < SIZE; row++)
            {
                for (int col = 0; col < SIZE; col++)
                {
                    r = sqrt(pow((row - 20), 2) + pow((col - 20), 2));
                    if (r < 20)
                    {
                        ran = rand() % 100;
                        if(ran <= d)
                        {
                            cout << '*';
                        }
                        else
                            cout << ' ';
                    }
                    else
                        cout << ' ';
                }
                cout << endl;
            }
        }     
};

class Square : public Rectangle
{
    protected:
       int side;

    public:
        Square(char t, int sn, int s) : Rectangle(t, sn, s, s)
        {
            side = s;
        }   
    

};

const int SIZE = 99;

class ShapeMgr
{
    private:
        Shape *arrShape[SIZE] = {nullptr};
        int count = 0;
    public:
        ShapeMgr()
        {
            populateShapeData();
        }
        ~ShapeMgr()
        {
            for(int i = 0; i < count; i++)
            {
                delete arrShape[i];
            }
        }

        void populateShapeData()
        {
            char type;
            int serialNo;
            int width;
            int height;
            int radius;
            int side;
            int density;
            int dummy;
            fstream inputFile;
            string fileName = "shaperecords.txt";
            inputFile.open(fileName);


            while(!inputFile.eof())
            {
                inputFile >> type;
                inputFile >> serialNo;
                switch(type)
                {
                    case 'C': 
                        inputFile >> radius;
                        inputFile >> dummy;
                        arrShape[count]= new Circle(type, serialNo, radius);
                        count++;
                        break;
                    case 'R':
                        inputFile >> width;
                        inputFile >> height;
                        arrShape[count] = new Rectangle(type, serialNo, width, height);
                        count++;
                        break;
                    case 'S':
                        inputFile >> radius;
                        inputFile >> density;
                        arrShape[count] = new Spray(type, serialNo, radius, density);
                        count++;
                        break;   
                    case 'Q':
                        inputFile >> side;
                        inputFile >> dummy;
                        arrShape[count] = new Square(type, serialNo, side);
                        count++;
                        break;                
                }
            }

            inputFile.close();
        }

        void displayAll()
        { 
            for(int i = 0; i < count; i++)
            {
                cout << "======Serial number======  " << arrShape[i]->getSerialNo() << endl << endl;
                arrShape[i]->display();
            }
        }
};


int main()
{
    ShapeMgr smg;
    smg.displayAll();

    return 0;
}

