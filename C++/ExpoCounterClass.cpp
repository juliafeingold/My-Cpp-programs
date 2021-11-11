/*
Step 1: Draw the class hierarchy, list their data members and member functions, and explain the purposes that these classes are implemented for. (The class hierarchy is the big picture of the entire system, which will help us understand and trace the program. The drawing will help you solve the problems below. You do not have to present it if this exercise is given in a quiz or homework.)
Step 2: We purposely left a bug in the program which causes an infinite looping. Fix the infinite looping problem.
Step 3: Create a new class named ExpoCounter. With the following code in main(),

     ExpoCounter ec1(100);
      ec1.Go();

the screen displays:

       1*4*9*16*25*36*49*64*81*ding!
*/

#include <iostream>

using namespace std;

class Timer
{
protected:
	int setting;
	int current;
public:
	Timer(int s){
		setting = s;
		current = s;
	}
	virtual void OneTick(){
		current--;
	}
	virtual bool Done() const{
		return (current == 0);
	}
	virtual void Reset(){
		current = setting;
	}
	virtual void Go()
	{
		while (this->Done() == false)
		{
			cout << current << "*";
			this->OneTick();
		}
		cout << "ding!\n";
	}
};
class UpwardCounter : public Timer
{
public:
	UpwardCounter(int s) : Timer(s){
		current = 0;
	}
	virtual void OneTick(){
		current++;
	}
	virtual bool Done() const{
		return (current >= setting);
	}
    virtual void Reset()
    {
		current = 0;
	}

};
class MultCounter : public UpwardCounter
{
protected:
	int mult;
public:
	MultCounter(int s, int m) : UpwardCounter(s){
		mult = m;
		current = 1;
	}
	virtual void OneTick()
	{
		current = current * mult;
	}
    virtual void Reset()
    {
		current = 1;
	}
};

class ExpoCounter : public MultCounter
{
public:
    ExpoCounter(int s, int m = 1) : MultCounter(s, m)
    {
        current = 1;
    }
	void OneTick()
	{
	    mult++;
		current = mult * mult;
	}
    void Reset()
    {
        mult = 1;
		current = 1;
	}

};
int main()
{
    cout <<  "Part 1" << endl;
	Timer timerA(4);
	timerA.Go();
	cout << endl << endl;

	cout <<  "Part 2" << endl;
	UpwardCounter upB(4);
	upB.Go();
	cout << endl << endl;


	cout <<  "Part 3" << endl;
	MultCounter multC(8, 2);
	multC.Go();
    cout << endl << endl;

	cout <<  "Part 4" << endl;
	MultCounter multD(20, 3);
	multD.Go();
	cout << endl << endl;

	cout <<  "Part 5" << endl;
	timerA.Reset();
	timerA.Go();
	cout << endl << endl;

	cout <<  "Part 6" << endl;
	upB.Reset();
	upB.Go();
	cout << endl << endl;

	cout <<  "Part 7" << endl;
	multD.Reset();
	multD.Go();
    cout << endl << endl;

	cout <<  "Part 8" << endl;
	ExpoCounter ecE(100);
    ecE.Go();
    cout << endl << endl;

	return 0;
}

