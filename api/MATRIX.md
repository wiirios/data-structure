# Matrix

Header file

``` C
typedef struct matrix matrix_t;

matrix_t *create(int lin, int col);
matrix_t *transpose(matrix_t *matrix);
matrix_t *copy_matrix(matrix_t *matrix);

int access(matrix_t *matrix, int lin, int col);
int search(matrix_t *matrix, int length, int target);
int equals(matrix_t *matrix_A, matrix_t *matrix_B);
int is_symmetrical(matrix_t *matrix);
int is_square(matrix_t *matrix);
int is_identity(matrix_t *matrix);

void free_matrix(matrix_t *matrix);
void add(matrix_t *matrix, int lin, int col, int value);
void print_matrix(matrix_t *matrix);
void replace_number(matrix_t *matrix, int lin, int col, int new_number);
void fill_matrix_random(matrix_t *matrix, int range, unsigned int seed);
void fill_matrix(matrix_t *matrix, int number);

```

All the functions and ther description

``` C 
// Create the Matrix
matrix_t *create(int lin, int col);

// Make the transpose of Matrix
matrix_t *transpose(matrix_t *matrix);

// Copy the Matrix
matrix_t *copy_matrix(matrix_t *matrix);

// Get the value
int access(matrix_t *matrix, int lin, int col);

// Checks if the value "target" exists in the matrix
int search(matrix_t *matrix, int length, int target);

// Check if the 
int equals(matrix_t *matrix_A, matrix_t *matrix_B);

// Verify if the Matrix is symmetrical
int is_symmetrical(matrix_t *matrix);

// Verify if the Matrix is square
int is_square(matrix_t *matrix);

// Verify if the Matrix is identity
int is_identity(matrix_t *matrix);

// Free the Matrix
void free_matrix(matrix_t *matrix);

// Adds a value to the matrix in the specified column and row
void add(matrix_t *matrix, int lin, int col, int value);

// Print all values in Matrix
void print_matrix(matrix_t *matrix);

// Replace a value with the new value that was passed into the function
void replace_number(matrix_t *matrix, int lin, int col, int new_number);

// Fill the Matrix with random numbers
void fill_matrix_random(matrix_t *matrix, int range, unsigned int seed);

// Fill the Matrix with a specific number
void fill_matrix(matrix_t *matrix, int number);
```