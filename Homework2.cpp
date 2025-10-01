#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    
    // Запрашиваем имя пользователя
    cout << "Пожалуйста, введите ваше имя: ";
    cin >> name;
    // Приветствуем пользователя
    cout << "Привет, " << name << "! Рад встрече с тобой!" ;
    
    return 0;
}