#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Ship
{
    protected:
        int serialNum;
        string shipType;

    public:
        Ship(int sn, string t)
        {
            serialNum = sn;
            shipType = t;
        }
        int getSerialNum()
        {
            return serialNum;
        }
        virtual void display() = 0;
};

class Cruise : public Ship
{
    protected:
        string name;
        int yearBuilt;
        int capacity;
    public:
        Cruise(int sn, string t, string n, int y, int c) : Ship(sn, t)
        {
            name = n;
            yearBuilt = y;
            capacity = c;
        }
        void display()
        {

        }
};

class Cargo : public Ship
{
    protected:
        string name;
        int yearBuilt;
        int capacity;
    public:
        Cargo(int sn, string t, string n, int y, int c) : Ship(sn, t)
        {
            name = n;
            yearBuilt = y;
            capacity = c;
        }
        void display()
        {

        }
};

const int SIZE = 11;

class MgrClass
{
    private:
        Ship *arrShip[SIZE] = {nullptr};
        int count = 0;
    public:
        MgrClass()
        {
            populateShipData();
        }
        ~MgrClass()
        {
            for(int i = 0; i < count; i++)
            {
                delete arrShip[i];
            }
        }

        void populateShipData()
        {
            int serialNum;
            string shipType;
            string name;
            int yearBuilt;
            int capacity;

            //get all data from file or user

        }

        void displayAll()
        {
            for(int i = 0; i < count; i++)
            {
                cout << arrShip[i];
                arrShip[i]->display();
            }
        }
};



int main()
{

   return 0;
}
