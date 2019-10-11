CXX=g++
CFLAGS=-std=c++11

objects = $(shell find ./ -name "*.cpp" |  sed -r 's/cpp/o/g')

all: $(objects)
	@echo "Build successful."
	
%.o: %.cpp
	$(CXX) -c $(CFLAGS) $< -o $@

.PHONY: clean

clean:
	rm -rf $(shell find ./ -name "*.o")
	@echo "Cleanup successful."

# GNU Make manual - https://www.gnu.org/software/make/manual/make.html
