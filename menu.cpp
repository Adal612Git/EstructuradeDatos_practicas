#include <iostream>
#include <stack>
#include <queue>
#include <list>

void stackMenu() {
    std::stack<int> st;
    int choice, value;
    do {
        std::cout << "\n--- Stack ---\n";
        std::cout << "1. Push\n2. Pop\n3. View Top\n0. Back\n";
        std::cout << "Choose: ";
        std::cin >> choice;
        switch (choice) {
            case 1:
                std::cout << "Value: ";
                std::cin >> value;
                st.push(value);
                std::cout << "Pushed." << std::endl;
                break;
            case 2:
                if (!st.empty()) {
                    std::cout << "Popped: " << st.top() << std::endl;
                    st.pop();
                } else {
                    std::cout << "Stack is empty." << std::endl;
                }
                break;
            case 3:
                if (!st.empty())
                    std::cout << "Top: " << st.top() << std::endl;
                else
                    std::cout << "Stack is empty." << std::endl;
                break;
        }
    } while (choice != 0);
}

void queueMenu() {
    std::queue<int> q;
    int choice, value;
    do {
        std::cout << "\n--- Queue ---\n";
        std::cout << "1. Enqueue\n2. Dequeue\n3. View Front\n0. Back\n";
        std::cout << "Choose: ";
        std::cin >> choice;
        switch (choice) {
            case 1:
                std::cout << "Value: ";
                std::cin >> value;
                q.push(value);
                std::cout << "Enqueued." << std::endl;
                break;
            case 2:
                if (!q.empty()) {
                    std::cout << "Dequeued: " << q.front() << std::endl;
                    q.pop();
                } else {
                    std::cout << "Queue is empty." << std::endl;
                }
                break;
            case 3:
                if (!q.empty())
                    std::cout << "Front: " << q.front() << std::endl;
                else
                    std::cout << "Queue is empty." << std::endl;
                break;
        }
    } while (choice != 0);
}

void listMenu() {
    std::list<int> lst;
    int choice, value;
    do {
        std::cout << "\n--- List ---\n";
        std::cout << "1. Insert at end\n2. Remove from front\n3. Display list\n0. Back\n";
        std::cout << "Choose: ";
        std::cin >> choice;
        switch (choice) {
            case 1:
                std::cout << "Value: ";
                std::cin >> value;
                lst.push_back(value);
                std::cout << "Inserted." << std::endl;
                break;
            case 2:
                if (!lst.empty()) {
                    std::cout << "Removed: " << lst.front() << std::endl;
                    lst.pop_front();
                } else {
                    std::cout << "List is empty." << std::endl;
                }
                break;
            case 3:
                std::cout << "List: ";
                for (int x : lst) std::cout << x << ' ';
                std::cout << std::endl;
                break;
        }
    } while (choice != 0);
}

int main() {
    int option;
    do {
        std::cout << "\n=== Data Structures Menu ===\n";
        std::cout << "1. Stack operations\n";
        std::cout << "2. Queue operations\n";
        std::cout << "3. List operations\n";
        std::cout << "0. Exit\n";
        std::cout << "Choose: ";
        std::cin >> option;
        switch (option) {
            case 1:
                stackMenu();
                break;
            case 2:
                queueMenu();
                break;
            case 3:
                listMenu();
                break;
            case 0:
                std::cout << "Goodbye!" << std::endl;
                break;
            default:
                std::cout << "Invalid option." << std::endl;
        }
    } while (option != 0);
    return 0;
}

