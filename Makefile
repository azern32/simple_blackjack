#OBJS specifies which files to compile as part of the project
OBJS = *.cpp

#CC specifies which compiler we're using
CC = clang++-18

#COMPILER_FLAGS specifies the additional compilation options we're using
# -w suppresses all warnings
# COMPILER_FLAGS = -w
COMPILER_FLAGS = -std=c++20

#LINKER_FLAGS specifies the libraries we're linking against
# LINKER_FLAGS = -lSDL2

#OBJ_NAME specifies the name of our exectuable
OBJ_NAME = ./main

#This is the target that compiles our executable
main : $(OBJS)
	$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)