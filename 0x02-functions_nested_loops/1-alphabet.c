	#!/bin/bash

# Test script to demonstrate lack of dependency updating in cmake after users forgot to commit header files to repositories

cmake --version
echo "### Create a minimal test project"
echo "#include \"main.h\"" > main.cpp
echo "int main() {return 0;}" >> main.cpp
echo "add_executable(TestApp main.cpp)" > CMakeLists.txt
echo "### Run CMake and build the project (fails because main.h is
missing)"
mkdir build
cd build
cmake ..
make
echo "### Need to wait for a sec or there might be no timestamp difference on main.cpp"
sleep 1
echo "### Add previously missing main.h and a new header aux.h"
touch ../main.h
touch ../aux.h
echo "### Update main.cpp with the new header"
echo "#include \"aux.h\"" > ../main.cpp
echo "#include \"main.h\"" >> ../main.cpp
echo "int main() {return 0;}" >> ../main.cpp
echo "### Run make (main.cpp is rebuilt)"
make
echo "### Display depend.make and observe that both main.h and aux.h are missing"
cat CMakeFiles/TestApp.dir/depend.make
# Clean up for retest
cd ..
rm -rf build
rm main.cpp
rm CMakeLists.txt
rm aux.h
rm main.h

#include <main.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void);
{
   char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
_putchar('\n');
}
