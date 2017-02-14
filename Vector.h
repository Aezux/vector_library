#ifndef VECTOR_H
#define VECTOR_H

template <typename type>
class Vector;

template <typename type>
class Vector {
private:
    type* objects; // Dynamic growing array to hold data
    short initial_size; // The initial size of the array
    long count; // Counts the amount of data is stored
    void grow(void); // Allows the array to grow
    void shrink(void); // Shrinks the array when necessary
public:
    Vector(void); // Constructor
    ~Vector(void) {delete [] objects;}; // Destructor
    Vector(const Vector &); // Copy constructor
    Vector & operator= (Vector other); // Assignment operator
    void operator() (long number, type something); // Fills the vector with a specific element
    type operator[](const long & position) const; // Returns an element at a given position
    void operator+ (const type & something); // Add an element to the vector
    void operator- (const short & number); // Delete an amount of elements
    Vector operator-- (int); // Delete last element
    void erase(long position); // Delete a specific element
    void swap(Vector & something); // Swap two vectors
    void replace(long position, type something); // Replace an element with another
    void insert(long position, type something); // Insert an element into the vector
    void shrink_to_fit(void); // Shrinks the size of the vector to the amount of objects in it
    long size(void) const; // Returns the size of the vector
    long max_size(void) const; // Returns the size of how much space is allocated
    bool empty(void); // Check to see if the vector is empty or not
    void clear(void); // deletes everything inside of the vector
    type first(void); // Returns the value of the first element
    type last(void); // Returns the value of the last element
    void sort(void); // Sorts all elements in ascending order
    long search(type something); // Searches for an element and returns its position
    long find(std::string something); // Searches for a string and returns its position
    type* begin(void); // Returns a pointer to the beginning of the vector
    type* end(void); // Returns a pointer to the end of the vector
};

#ifdef ADRIAN_VECTOR
   #include "Vector.def"
#endif

#endif
