# Factory Method Pattern

### What?
- It is very similar to the Simple factory method.
- The only difference is that the concrete object creation is delegated to the respective factory classes for each object type. The Main factory method is implemented as an interface, and is exposed to client. Internally, the creation logic is delegated to the respective factory classes.

### Why?
- Simple Factory class itself violated the Open-Close Principle.

### When?
- Same usecase as the simple factory, preferred for slightly complex creational logic that can be delegated.
- Also used for exposing code as dll(libraries).