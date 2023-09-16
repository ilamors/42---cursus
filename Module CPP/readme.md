# CPP module 00 ex00
## table of content
- namespace
- stdio streams

### 1 - Namespace

Namespace in C++ is the declarative part where the scope of identifiers like functions, the name of types, classes, variables, etc., are declared. The code generally has multiple libraries, and the namespace helps in avoiding the ambiguity that may occur when two identifiers have the same name.

For example, suppose you have two functions named calculate(), and both are performing different tasks. One calculate() function is doing the multiplication, and another is doing the addition. So in this case, to avoid ambiguity, you will declare both the functions in two different namespaces. These namespaces will differentiate both the functions and also provide information regarding both the functions.

Standard Namespace

The std is a short form of standard, the std namespace contains the built-in classes and declared functions.

You can find all the standard types and functions in the C++ "std" namespace. There are also several namespaces inside "std."

Example:

```
#include <iostream>
int main()
{
  std::cout<<"Enter the numbers to multiply: "; 
  int num1=0;
  int num2=0; 
  std::cin>>num1;
  std::cin>>num2;
  std::cout<<"The product of numbers is :" <<(num1*num2);
  return O;
}
```

Here std is used in front of cin and cout along with scope resolution operator, which indicates that the object cin and cout are defined inside the namespace whose name is std.
The std is the standard library, and both cin and cout are defined inside this scope.

### 2 - stdiostreams
  
  cin : The object from which your C++ program usually retrieves its data
              >> the input (extraction operator)
  cout : The object to which your C++ program normally directs its output.
              << the output (insertion operator)
  
  Source : [simplilearn](https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-namespaces#:~:text=Namespace%20in%20C%2B%2B%20is%20the,identifiers%20have%20the%20same%20name.)
