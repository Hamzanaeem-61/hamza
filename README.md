# Contact Management System in C++

This is a command-line based Contact Management System built using C++. The application allows users to manage contact entries using a singly linked list data structure, supporting operations such as adding, displaying, searching, and deleting contacts in alphabetical order.

## Features

* Add contacts (automatically sorted by name)
* Display all stored contacts
* Search for a contact by name
* Delete a contact by name
* Interactive menu with clean exit functionality

## Technologies Used

* Language: C++
* Data Structure: Singly Linked List
* Concepts: Pointers, Dynamic Memory Allocation, Structs, Control Flow

## How to Compile and Run

1. Save the source code as `contact_manager.cpp`.
2. Compile using any C++ compiler. Example using `g++`:

   ```bash
   g++ contact_manager.cpp -o contact_manager
   ./contact_manager
   ```
3. Follow the on-screen menu prompts to use the system.

## Example Menu

```
1. Display
2. Search
3. Add
4. Delete
5. Exit
```

## Sample Output

```
Enter name: John
Enter number: 987654321
Contact added successfully.

Enter name to search: John
Contact found: Name: John, Number: 987654321
```

## File Structure

* `contact_manager.cpp`: Contains all logic for managing contacts using a linked list

## Potential Improvements

* Implement persistent storage using file input/output
* Add input validation and error handling
* Extend with a graphical user interface (e.g., using Qt or SFML)
* Improve sorting with case-insensitive comparison
