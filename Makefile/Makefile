# Compiler to use
CC=gcc

# Name of the executable
projectName=Makefiletask.exe

# Directories

SRC_DIRS := $(shell pwd)/src
DIR_BUILD := $(shell pwd)/Build
DIR_INCS = -I./include
DIR_Bin:= $(shell pwd)/Bin

# get all .c files from source directories
SRC_FILES := $(foreach dir, $(SRC_DIRS), $(wildcard $(dir)/*.c))


# Generate object file from source file
OBJ=$(patsubst %.c, %.o, $(SRC_FILES))


# Default target: build the executable
all:$(projectName)


# Rule to compile each .c file into an object file in DIR_BUILD
$(DIR_BUILD)/%.o : %.c
	$(CC) -c -I $(DIR_INCS) $< -o $@


# Rule to link all object files into the executable in DIR_Bin
$(projectName): $(OBJ)
	$(CC) $(OBJ) -o $(projectName)
	mv $(OBJ) $(DIR_BUILD)
	mv $(projectName) $(DIR_Bin)

# Target to run the executable
run:$(DIR_Bin)/$(projectName)
	$(DIR_Bin)/$(projectName)
	
	
# clean up build files
.phony:clean
clean:
	@rm $(DIR_BUILD)/*.o
	@rm $(DIR_Bin)/*.exe
	@echo Files deleted successfully
