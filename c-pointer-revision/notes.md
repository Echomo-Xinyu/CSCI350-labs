# Notes while revising c pointer

As I am revising along the way, I find some good resources that explain certain confusions regarding C.

- [what is void* and how to use it](https://stackoverflow.com/questions/11626786/what-does-void-mean-and-how-to-use-it)
- `ptr = my_array`: the name of the array is the address of the first elemnt in the array, **not a pointer**:
  - it is because that we cannot write `my_array = ptr` since once array declared, the location of the first element in the array cannot be changed.
  - some may call the array name "constant pointer"
- the `const`` used as a parameter modifier informs the user that the function will not modify the string pointed to by s, i.e. it will treat that string as a constant.
- `(*st_ptr).age = 63;` is same as `st_ptr->age = 63;`
- note the subtle difference for `char my_name_arr[] = "Ted";` and `char *my_name_ptr = "Ted";`: first assigns value to the address of 'T' but the second assigns the pointer to the value of the address of 'T', hence additional space of a pointer is consumed
  - and in the context within a function call, `my_name_array[]` is considered data and `"Ted"` is stored on the stack; but `my_name_ptr` is consider data, which can point to anywhere else
- `multi[row][col]` == `*(*(multi + row) + col)`
- as the pointer arithmetic concerns, we need to know the higher dimension(s) in order to find the correct address when giving the row and column
- `int (*p1d)[10];`: create a constant pointer to array of 10 integer; `int *p1d[10];`: create an array of 10 pointers to int
