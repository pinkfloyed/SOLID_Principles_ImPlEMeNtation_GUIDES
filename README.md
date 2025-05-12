# SOLID Principles in C++ – Real-Life Examples

This repository demonstrates **SOLID design principles** in C++ using real-life inspired scenarios, with both **bad code** (violating SOLID) and **good code** (after applying SOLID).

---

## Project Demonstration

### SOLID Principles Implemented:

#### **Single Responsibility Principle (SRP):**

- **Bad:** A class that handles both report generation and printing, violating the principle of having a single responsibility.
  
- **Good:** Separate classes for report generation and formatting. This ensures each class has only one reason to change, maintaining the clarity and maintainability of the code.

---

#### **Open/Closed Principle (OCP):**

- **Bad:** A notification service that requires modification whenever a new notification type is added, violating the open/closed principle.
  
- **Good:** A system where new notification types (like email or SMS) can be added by creating new classes, without modifying the existing code. This ensures the system is open for extension but closed for modification.

---

#### **Liskov Substitution Principle (LSP):**

- **Bad:** A `Penguin` class that cannot substitute the `Bird` class correctly. This violates the Liskov Substitution Principle, as the `Penguin` class does not follow the expected behavior of a `Bird`.
  
- **Good:** Classes that follow the Liskov Substitution Principle by ensuring that derived classes (like `Penguin` or `Sparrow`) provide appropriate behavior for their base class (`Bird`).

---

#### **Interface Segregation Principle (ISP):**

- **Bad:** A class that forces the implementation of unnecessary methods, even when they are not needed for a specific use case. This violates the ISP, which advocates for small, specific interfaces.
  
- **Good:** Interfaces are divided into smaller, more specific ones, allowing clients to implement only the methods they actually need. This leads to better code organization and flexibility.

---

#### **Dependency Inversion Principle (DIP):**

- **Bad:** A class that directly depends on a specific implementation, like a `WiredKeyboard`, violating the dependency inversion principle by tightly coupling the classes.
  
- **Good:** A class that depends on abstractions (interfaces) rather than concrete implementations. This allows for more flexibility and easier maintenance, as dependencies can be replaced with minimal changes.

---

## 🛠️ How to Run

### ✅ Option 1: Using Code::Blocks
1. Open `solid-principles.cbp` in Code::Blocks.
2. Press `Build and Run` or use `F9`.

### ✅ Option 2: Using Command Line (g++)
```bash
g++ -o solid src/*.cpp
./solid

---

👩‍💻 Author
Name: PINKI AKTER

GitHub:https://github.com/pinkfloyed
