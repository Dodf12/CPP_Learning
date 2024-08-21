Functions
    >Must declare the function before
    the main function
    >Must use static variables for function recursion
    >Static variables are not stored on the stack,
    meaning they can be updated later on
    
    Passing Values to functions
        >Pass a value into the function as parantheses

        Ex:
        void funct(int a)
        {
            cout << a;
        }

        int main()
        {
            cout <<"theis is main"
            func(47);
        }



Functions here work extremely similar to python


Notes from QUiz 6
>Function parameters are passed on the stack

-Good practice means have to declare function
inside the class, but write the code outside
