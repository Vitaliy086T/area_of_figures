#include "../class_Figures/Figures.h"
#include "../class_Circle/Circle.h"
#include "../class_Rectangle/Rectangle.h"

int main() {
    double n = 0, n1 = 0;
    string option;
    Figures p1;
    do {
        p1.menu();
        cin >> option;
        if (option.length() == 1 and (option == "1" or option == "2" or option == "3")) {
            switch (option[0]) {
                case '1': {
                    system("cls");
                    cout << "Enter wanted radius of circle: ";
                    cin >> n;
                    Circle c(n);
                    
                    Figures* figure = &c;
                    cout << "Radius = " << n << ", area = " << figure->area() << endl;
                    system("pause");
                    }
                    break;
                case '2': {
                    system("cls");
                    cout << "Enter wanted width and height of rectangle: ";
                    cin >> n >> n1;
                    Rectangle f(n, n1);
                    Figures* figure = &f;
                    cout << "Width = " << n << ", height = " << n1 << ", area = " << figure->area() << endl;
                    system("pause");
                    }
                    break;
            }
        } else {
            cout << "Incorrect input" << endl;
            system("pause");
        }
    } while (option != "3");
    return 0;
}
