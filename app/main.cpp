#include <iostream>
#include <cmath>


using namespace std;

float Calculator_2(int input2);

int main()
{

  bool status = true;
  while(status)
  {
    int input;
    float input_number;
    std::cout << "1) cos(x), 2) sin(x), 3) tan(x), 4) atan2(y, x), 5) sqrt(x), 6) x^y, 7) ln(x), 8) e^x, 9) |x|, 10) floor(x), 11) ceil(x), 12) Exit."<<endl;
    std::cin >> input;
    if (input == 12)
    {
      status = false;
      cout << "Good luck...";
    }
    else if(input == 1)
    {
    cout << "Enter (x)";
    cin >> input_number;
    cout << cos(input_number) << endl;
    }
    else if(input ==2 )
    {
      cout << "Enter (x)";
      cin>>input_number;
      cout << sin(input_number) << endl;
    }
    else if(input == 3)
    {
      cout << "Enter (x)";
      cin>>input_number;
      cout << tan(input_number) << endl;
    }
    else if(input == 4)
    {
      cout << Calculator_2(4) << endl;
    }
    else if (input == 5)
    {
      cout << "Enter (x)";
      cin >> input_number;
      cout << sqrt(input_number) << endl;
    }
    else if (input == 6)
    {
      cout << Calculator_2(6) << endl;
    }
    else if(input == 7)
    {
      cout << "Enter (x)";
      cin >> input_number;
      cout << logf(input_number)<<endl;
    }
    else if (input == 8)
    {
      cout << "Enter (x)";
      cin >> input_number;
      cout << expf(input_number)<<endl;
    }
    else if (input == 9)
    {
      cout << "Enter (x)";
      cin >> input_number;
      cout << fabsf(input_number)<<endl;
    }
    else if (input == 10)
    {
      cout << "Enter (x)";
      cin >> input_number;
      cout << floorf(input_number)<<endl;
    }
    else if (input == 11)
    {
      cout << "Enter (X)";
      cin >> input_number;
      cout << ceilf(input_number) <<endl;
    }

  }





}

float Calculator_2(int input2)
  {
    float x,y;
    cout << "Enter a number one: "<<endl;
    cin >> x;
    cout << "Enter a number tow: " << endl;
    cin >> y;
    switch (input2)
    {
      case 4:
        return atan2(x,y);
      case 6:
        return powf(x,y);
    }

    return 0;
  }
