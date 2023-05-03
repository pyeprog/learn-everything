# Set compiler and compiler flags
CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -O2

# Set source and build_ext directories
SRC_DIR = .
BUILD_DIR = build

# Set sources and object files
SRCS = main.cpp
OBJS = $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRCS))

# Set executable
MAIN = $(BUILD_DIR)/main

# Default target
all: $(MAIN)

# Link object files into executable
$(MAIN): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Compile source files into object files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build_ext files
clean:
	rm -f $(OBJS) $(MAIN)