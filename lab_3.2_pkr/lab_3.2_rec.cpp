#include <iostream>

using namespace std;

struct Elem {
    Elem* link;
    int info;

    Elem(int value) : info(value), link(nullptr) {}
};

void append(Elem*& first, int value) {
    if (first == nullptr) {
        first = new Elem(value);
    }
    else {
        append(first->link, value);
    }
}

void display(Elem* current) {
    if (current != nullptr) {
        std::cout << current->info << " ";
        display(current->link);
    }
    else {
        cout << endl;
    }
}

int calculatesumnotuples(Elem* current) {
    if (current == nullptr) {
        return 0;
    }
    else {
        int sum = calculatesumnotuples(current->link);
        if (current->info % 2 == 0) {
            return sum + current->info;
        }
        else {
            return sum;
        }
    }
}

void DeleteList(Elem*& current) {
    if (current != nullptr) {
        Elem* temp = current;
        current = current->link;
        delete temp;
        DeleteList(current);
    }
}

int main() {
    Elem* list = nullptr;

    for (int i = 0; i < 10; i++) {
        append(list, i);
    }

    cout << "Your list: ";
    display(list);

    cout << "Sum: " << calculatesumnotuples(list);

    DeleteList(list);
    return 0;
}
