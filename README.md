# 💳 Payment Gateway System – SOLID Principles in Java

This project is a modular payment gateway simulation written in Java. It demonstrates all five **SOLID principles** through realistic modules like credit card and PayPal payment processing, fraud detection, and invoice generation.

---

## 🧠 SOLID Principles Covered

| Principle | Description |
|----------|-------------|
| **S – Single Responsibility** | Each class has only one responsibility (e.g., `FraudChecker`, `InvoiceGenerator`) |
| **O – Open/Closed** | Easily add new payment types by extending `PaymentProcessor` without modifying existing code |
| **L – Liskov Substitution** | All payment types (`CreditCardPayment`, `PayPalPayment`) can substitute the interface |
| **I – Interface Segregation** | Clients implement minimal, relevant methods (`PaymentProcessor` interface) |
| **D – Dependency Inversion** | `PaymentService` depends on `PaymentProcessor` abstraction, not concrete classes |

---

## 📁 Project Structure

payment-gateway-solid/
│
├── src/
│ ├── main/
│ │ └── Main.java # Entry point
│ ├── interfaces/
│ │ └── PaymentProcessor.java # Abstraction for all payment processors
│ ├── payment/
│ │ ├── CreditCardPayment.java # Concrete implementation
│ │ └── PayPalPayment.java # Another implementation
│ ├── invoice/
│ │ └── InvoiceGenerator.java # Handles invoice generation
│ ├── fraud/
│ │ └── FraudChecker.java # Simulates fraud detection
│ └── di/
│ └── PaymentService.java # Service using DI and coordinating payment
│
├── README.md
└── pom.xml or build.gradle


---

## ▶️ How to Run the Project

### 🛠️ Requirements:
- Java 8 or later
- IntelliJ IDEA or any Java IDE

### 🔧 Steps:
1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/payment-gateway-solid.git

2. Open the project in IntelliJ IDEA.

3. Navigate to Main.java and run it.

🔍 Features Demonstrated
- Clean modular code architecture

- Interface-based abstraction

- Dependency injection without frameworks

- Real-world mapping of software design principles

