

Primitve types
>Integer types
>floating
>boolean

Computed Types
>Array
>C-string
>struct
>class
>union
>enum
>void
>pointer
>reference(immutable pointer)
>auto(automatically sets teh data type)


PRIMITIVE TYPES

    INTEGERS
        SIGNED TYPES(Negative of positve)
            >char
            >short int
            >int
            >long int
            >long long int
        SIGNED TYPES(Save one bit for the sign)
            >unsigned char
            >unsigned short int
            >unsigned int
            >unsigned long int
            >unsigned long long int


    FLOAT

        >float
        >double
        >long double

    AUTO
        >Automatically declares the type of the variable with requiring additional input

    Qualifiers
        >Provide additional information
        Two types
            >CV(constant volatile) qualifiers
                -const: variable is immutable
                -mutable: variable can be changed
                -volatile:
            >Storage Duration(dictatelifetime of variable)
                -static(live for length of program and is the default set 
                for variables that dont have storage duration)
                -register(Stored in process register and are faster)
                -extern(Linked with your could
                via linker step)
    
    Type Aliases

    a Type Alias is basically allowing you to rename a data type and use it in your code

    like usually you define a variable as int x = 2;

    If you want another name to use other than int

    do this:

    using Integer = int;

    Now you can using "Integer" as a way to tell the data type of a number

    like Integer y = 1;


    Primitve Array
        >Inherited from C

        >Fixed size container with each element being the same type

        Defined : int ia[5] {};
        ia[0] = 1; //Assigns the value
        *ia = 1;
        int *ip = ia;
        *ip = 2;
        ++ip;
    
    Primitve C-String
        Basically a string represented in an array

    Structure
        >Basically a bunch of variables stored
        in a singel container