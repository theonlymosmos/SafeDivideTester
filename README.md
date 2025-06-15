### **Project Name: "SafeDivide Tester"**  
*(Emphasizes the safety-focused testing approach for division operations)*  

---

### **Project Overview**  
A **C++ unit testing suite** using Google Test framework to validate a division function's behavior, including edge cases like division by zero.  

---

### **Key Features**  
1. **Comprehensive Test Coverage**  
   - Positive numbers (`5.0 / 2.0`)  
   - Negative numbers (`-5.0 / 2.0`)  
   - Mixed-sign inputs (`6.0 / -3.0`)  
   - Division by zero (edge case)  

2. **Intentional Failure Case**  
   - Demonstrates test-driven development (TDD) principles by including a *deliberate* failing test for division by zero.  

3. **Google Test Integration**  
   - Uses `EXPECT_DOUBLE_EQ` for precise floating-point comparisons.  

---

### **Skills Demonstrated**  
#### **Testing Expertise**  
✅ **Unit Test Design**: Isolated tests for different input categories  
✅ **Edge Case Handling**: Explicit check for division by zero  
✅ **Assertion Methods**: Correct use of `EXPECT_DOUBLE_EQ`  

#### **Code Quality**  
🔍 **Modularity**: Single-responsibility `divide()` function  
⚡ **Error Handling**: Returns `-1` for invalid inputs (though test expects `0` to fail)  

#### **Tool Proficiency**  
🛠 **Google Test**: Setup and execution via `RUN_ALL_TESTS()`  

---

### **Code Highlights**  
```cpp
// Function under test
double divide(double num1, double num2) {
    if (num2 == 0) {
        return -1;  // Safety check
    }
    return num1 / num2;
}

// Example test case (mixed numbers)
TEST(DivisionTest, ForMixedNumbers) {
    EXPECT_DOUBLE_EQ(-2.0, divide(6.0, -3.0)); 
}
```

---

### **Suggested Improvements**  
1. **Custom Exception Handling**  
   ```cpp
   if (num2 == 0) throw std::invalid_argument("Division by zero");
   ```  
2. **Parametrized Tests**  
   Use `TEST_P` to avoid repetitive code for similar test cases.  
3. **CI/CD Integration**  
   Add GitHub Actions to run tests automatically.  

---

### **Why "SafeDivide Tester"?**  
- **Precision**: Highlights the focus on mathematical correctness.  
- **Professional**: Appeals to developers valuing robust error handling.  
- **Provocative**: The intentional failure sparks curiosity about TDD.  

This project showcases ability to **write meaningful unit tests** and **handle edge cases** in C++.  

--- 

**Note**: The current test expects `0.0` for division by zero but gets `-1`—perfect for demonstrating how tests catch logic errors! Would you like to refine the error-handling approach?
