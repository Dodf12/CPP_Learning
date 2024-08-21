-Class is made of members'

-Member vs nonmember

    >Nonmember function is defined outside the class


Data members, Function Members
-Data members hold data
-Function members hold functions

Function Members
    -COnstructors
        >Called when object is created
    -Destructors
        >Called when object is destroyed


Structures Review
A structure is like a group of variables that you can hold in a container
They can have ints, strings and other stuff up in there

Classes and Structures Differences
-Classes default to private so cannot get things from inside it
-Struct defaults to pblic

-Struct is much more usefull for data structures
-Class is better for private data

Constructors and Desctructors
-Used to set up object
-Destructor is used to de-allocate object

-Default constructor
    >They can be left black
    >Or can have default values for their parameters

-Constructor with 0 parameters is used for a
default state

-Copy constructor takes data from another object
    >Use it when you have an existing object

-Must have as many types of construcotsr as possible
to account for all the diffeent thigns goign on

-Operator overloads
    >When performing add/subtract/multiply on operator
    it returns a new object
    >Give special meaning for a data type and is called
    operator overloading
        -Ex: Using + to concatenate strings, is 
    >If you want to add objects, must redifine the meaning
    of +, so that you would be able to add two objects
        -Can still use to add numbers, but is just
        added functionality
    >Operator precedence still holds

    
    -Nonmember Operator overloads
        >It doesnt work when adding an integer to an
        object at times
        >Best decision is to place it outside the class
        so it can take two objects of any sort