# OPP_week2
##complete with helps from Github Copilot
Project Title
A brief description of what this project does. Replace this text with your own project's summary.

Prerequisites
Before you can build and run this project, you need to have a C++ compiler installed on your system. The most common compiler is g++, which is part of the GNU Compiler Collection (GCC).

On Linux (Debian/Ubuntu):

sudo apt-get update
sudo apt-get install build-essential

On macOS: Install Xcode Command Line Tools:

xcode-select --install

On Windows: You can use MinGW-w64 or Windows Subsystem for Linux (WSL).

Building the Project
To compile the C++ source code, navigate to the project directory in your terminal and run the following command. This will create an executable file.

Replace your_program with the desired name for your executable and main.cpp with the name of your main C++ source file.

g++ -o your_program main.cpp

g++: The command to invoke the compiler.

-o your_program: The -o flag specifies the name of the output (executable) file.

main.cpp: The input source file to be compiled.

Running the Program
Once the project has been successfully built, you can run the executable from the same directory using the following command:

./your_program

The ./ tells the shell to look for the executable in the current directory.

Example
If your main source file is named app.cpp and you want the executable to be named my_app, you would follow these steps:

Build:

g++ -o my_app app.cpp

Run:

./my_app
