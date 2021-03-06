# Dynamic Libraries Project

## Libraries and Scripts

* `libholberton.so` Is a Shared or Dynamic Library created from all the functions
  in the `src` directory.

* `100-operations.so` Is a Shared or Dynamic Library created from `pyfunc.c` in the `pysrc` directory to be used by the `100-test.py` script.

* [1-create_dynamic_lib.sh](../0x00-c_dynamic_libraries/1-create_dynamic_lib.sh) Script that creates a dynamic library called `liball.so` from all the `.c` files that are in the current directory.

* [create_pyoperations.sh](../0x00-c_dynamic_libraries/create_pyoperations.sh) Script that creates a dynamic library called `100-operations.so` from `pyfunc.c` in the `pysrc` directory.

* [100-tests.py](../0x00-c_dynamic_libraries/100-tests.py) Python script that utilizes the `100-operations.so` library built from c functions.

* [header.h](../0x00-c_dynamic_libraries/holberton.h) Contains all the prototypes for the functions within the `src` directory.

#

<p align="center">
   <a href="https://medium.com/@DamazoAli/creating-libraries-in-linux-d77ae5fa07d9">Build your own Static and Dynamic Libraries</a>
</p>