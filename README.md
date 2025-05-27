# Registration and Login System

## Overview

This is a simple console-based Registration and Login System implemented in C++. 
The application allows users to register with a username and password, and then log in using those credentials.

## Features

- User registration with unique usernames
- User login with validation
- Simple command-line interface
- Basic error handling for registration and login processes

## Requirements

- C++ compiler (e.g., g++, MSVC)
- C++11 or later

## Getting Started

### Clone the Repository

Build the Project
Open the project in Visual Studio 2022.
Ensure the project is set up as a Console Application.
Build the project by selecting Build > Build Solution or pressing Ctrl + Shift + B.
Run the Application
Start the application by selecting Debug > Start Without Debugging or pressing Ctrl + F5.
Follow the on-screen prompts to register or log in.
Usage
Register: Choose option 1 to register a new user.

**Enter a username and password.**
- If the username already exists, you will be prompted to choose another.
- Login: Choose option 2 to log in.

**Enter your registered username and password.**
- If the credentials are correct, you will receive a welcome message.
- Exit: Choose option 3 to exit the application.

## Code Structure

- User Class: Represents a user with a username and password.
- UserManager Class: Manages user registration and login operations.
- Main Function: Contains the main loop for user interaction. 


## Future Enhancements
- Implement password hashing for security.
- Add user data persistence (e.g., saving to a file).
- Improve input validation and error handling.
- Create a graphical user interface (GUI) version.
