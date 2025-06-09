# Simple Factory Design Pattern

### What?

- The Simple Factory Pattern is a creational design pattern that provides a static method to create objects, often based on some input. It encapsulates object creation logic in one place, making the code cleaner and more maintainable.

### When?

1. You want to centralize object creation.
2. The client code shouldn't know the specific classes it is using.
3. You want to hide complex creation logic from the user.

### Advantages

1. Decouples object creation from usage.
2. Centralizes the logic of instance creation.Client need not bother about creational logic, we are exposing only the factory method for creating required objects.
3. Easier to manage and modify creation logic.

### Disadvantages

1. The client code is safe, but the factory method itself violates OCP, as mostly it is just a bunch of if-else statements based on client query, and has to be modidfied whenever something in the core classses changes. 
There are some advanced versions of factory pattern solving this issue.




