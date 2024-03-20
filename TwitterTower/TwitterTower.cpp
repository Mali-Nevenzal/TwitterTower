// twittwerTowre.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void rectangularTower(int height, int width)
{
    int rectanglePerimeter = 0;
    int sum = (height - width);
    if (!sum || abs(sum) == 5)
        cout << "The area of your rectangle is: " << height * width << endl;
    else
    {
        rectanglePerimeter = height * 2 + width * 2;
        cout << "The perimeter of your rectangle is: " << rectanglePerimeter << endl;
    }
}

void triangleTower(int height, int width)
{
    int rectanglePerimeter, selected = 0;
    cout << "Enter 1 to calculate the perimeter of your triangle" << endl;
    cout << "Enter 2 to print your triangle" << endl;
    cin >> selected;
    if (selected == 1)
    {
        rectanglePerimeter = 2 * width + height;
        cout << "The perimeter of your rectangle is: " << rectanglePerimeter << endl;
    }
    else
    {
        if (width % 2 == 0 || width > 2 * height)
            cout << "Sorry but the triangle cannot be printed" << endl;
        else
        {
              
        }
    }

}

int main()
{
    int height, width, selected;
    do {
        cout << "Enter 1 to select a rectangular tower" << endl;
        cout << "Enter 2 to select a triangle tower tower" << endl;
        cout << "Enter 3 to exit the program" << endl;
        cin >> selected;
        if (selected != 3)
        {
            cout << "Enter the height and width of the tower" << endl;
            cin >> height >> width;
            if (selected == 1)
                rectangularTower(height, width);
            else if (selected == 2)
                triangleTower(height, width);
        }
    } while (selected != 3);
}
