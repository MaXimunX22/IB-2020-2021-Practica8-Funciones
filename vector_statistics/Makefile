CXXFLAGS = -g -Wall
CXX = g++
OBJS = $(TARGET).o $(TARGET)_functions.o
TARGET = vector_statistics

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

$(TARGET).o : $(TARGET).cc $(TARGET)_functions.h
	$(CXX) -c $(CXXFLAGS) $(TARGET).cc

$(TARGET)_functions.o : $(TARGET)_functions.cc $(TARGET)_functions.h
	$(CXX) -c $(CXXFLAGS) $(TARGET)_functions.cc

.PHONY: clean
clean:
	rm -f *.o $(TARGET)