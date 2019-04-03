# C++ programmer compiler
CXX       = g++

# compiler option
CXXFLAGS  = -g

# executable file name
TARGET    = a.out

# header files
HEADERS   = $(shell find ./headers -name '*.h')

# source files
SOURCES   = $(shell find ./src -name '*.cpp')

# object files
OBJ       = $(SOURCES:%.cpp=%.o)

$(TARGET) : $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.cpp $(OBJ)

%.o       : %.cpp $(HEADERS)
	$(CXX) -c $< -o $@

clean:
	rm -rf $(OBJ) $(TARGET)