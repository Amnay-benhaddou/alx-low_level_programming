Argc and argv argumwnts in main function 
--------------------------------------------------------------------
argc (ARGument Count) is an integer variable that stores the number of command-line arguments passed by the user including the name of the program. So if we pass a value to a program, the value of argc would be 2 (one for argument and one for program name)

The argv argument is a vector of C strings; its elements are the individual command line argument strings. The file name of the program being run is also included in the vector as the first element; the value of argc counts this element.
