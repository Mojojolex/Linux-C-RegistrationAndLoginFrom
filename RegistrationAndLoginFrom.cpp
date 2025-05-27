#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class User {
public:
    string username;
    string password;

    // Default constructor
    User() : username(""), password("") {}

    // Parameterized constructor
    User(const string& user, const string& pass) : username(user), password(pass) {}
};

class UserManager {
private:
    unordered_map<string, User> users;

public:
    bool registerUser(const string& username, const string& password) {
        if (users.find(username) != users.end()) {
            return false; // User already exists
        }
        users[username] = User(username, password);
        return true; // Registration successful
    }

    bool loginUser(const string& username, const string& password) {
        if (users.find(username) != users.end() && users[username].password == password) {
            return true; // Login successful
        }
        return false; // Login failed
    }
};

int main() {
    UserManager userManager;
    int choice;
    string username, password;

    do {
        cout << "\n--- Registration and Login System ---\n";
        cout << "1. Register\n";
        cout << "2. Login\n";
        cout << "3. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
        case 1: // Register
            cout << "Enter username: ";
            cin >> username;
            cout << "Enter password: ";
            cin >> password;

            if (userManager.registerUser(username, password)) {
                cout << "Registration successful!" << endl;
            }
            else {
                cout << "Username already exists. Please choose another." << endl;
            }
            break;
        case 2: // Login
            cout << "Enter username: ";
            cin >> username;
            cout << "Enter password: ";
            cin >> password;

            if (userManager.loginUser(username, password)) {
                cout << "Login successful! Welcome, " << username << "!" << endl;
            }
            else {
                cout << "Invalid username or password." << endl;
            }
            break;
        case 3: // Exit
            cout << "Exiting the system. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid option. Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}