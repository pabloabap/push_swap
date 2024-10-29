`make` this project to generate **push_swap** file.

The program must be called from the terminal followed by uniq integers (positive/negative) as arguments sorted 
or unsorted. The algorithm will **sort the numbers in the fewest number of movements using two stacks and certain
type of movements**.

The input is treated as a stack of numbers where the first arg is at the top of the stack.

Available movements are:
- **sa** (swap a): Swap first two elements of stack a. Do nothing if stack a has one or less elements.
- **sb**: (swap b): Swap first two elements of stack b. Do nothing if stack b has one or less elements.
- **ss** swap a and swap b in the same movement.
- **pa** (push a): Take the first element of stack b and move it to the top of stack a. Do nothing if
stack b is empty.
- **pb** (push b): Take the first element of stack a and move it to the top of stack b. Do nothing if
stack a is empty.
- **ra** (rotate a): Move all elements of stack a one position up and the first to the tail of the stack.
- **rb** (rotate b): Move all elements of stack b one position up and the first to the tail of the stack.
- **rr** ra and rb in the same movement.
- **rra** (reverse rotate a): Move all elements of stack a one position down and the last to the top of the stack.
- **rrb** (reverse rotate b): Move all elements of stack b one position down and the last to the top of the stack.
- **rrr** rra and rrb in the same movement.

To consider the algorithm as optim **100 numbers must be sorted in less than 700 movements** and to be considered
as very optimized **500 numbers in less than 5,500 movements**.

Wrong inputs are handled printing an error message.

# Resources
[Algorithm implemented (turkish algorithm)](https://medium.com/@ayogun/push-swap-c1f5d2d41e97)
