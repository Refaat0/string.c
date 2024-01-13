# string.c
![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)

string.c is a simple library for manipulating static strings in c.

## Getting Started
These instructions will get a local copy of the library running on your machine!

### Prerequisites 
You **must** have a c compiler installed on your machine. I'm using gcc!

### Installing 
Clone the repository into a directory
```
C:\Users\Refaat\Desktop\sstring> git clone https://github.com/Refaat0/string.c
```

Ensure the library is working my compiling it (I still have not learnt make files)
```
C:\Users\Refaat\Desktop\sstring> gcc ./src/main.c ./src/string.c
```

### Example
```c
int fn(char *string_a, char *string_b) {
  int silly_integer = 0;

  while (*string_a++ && *string_b++) {
    token += string_compare(string_a, string_b);
  }

  return silly_integer;
} 
```


