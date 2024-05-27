#include <iostream>
#include <list>

// Функция для вставки числа 15 после каждого элемента, модуль которого меньше 2
void insert15(std::list<int>& lst) {
    auto it = lst.begin();
    while (it != lst.end()) {
        if (*it % 2 < 2) {
            ++it;  // Переходим к следующему элементу
            lst.insert(it, 15);  // Вставляем 15 после текущего элемента
        }
        else {
            ++it;  // Переходим к следующему элементу
        }
    }
}

// Функция для вывода содержимого списка
void printList(const std::list<int>& lst) {
    for (auto it = lst.begin(); it != lst.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::list<int> myList = { 1, 2, 3, 4, 5 };

    // Вставляем число 15 после каждого элемента, модуль которого меньше 2
    insert15(myList);

    // Выводим содержимое списка
    std::cout << "Список после вставки числа 15:" << std::endl;
    printList(myList);

    return 0;
}