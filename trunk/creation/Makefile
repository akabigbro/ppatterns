objects=$(shell ls *.mk | sed "s/.mk/.o/")

all: $(objects)

lib: $(objects)
	$(CXX) $(CFLAGS) --shared -o libcreation.so $(objects)

clean:
	rm -f $(objects) *.so

include $(wildcard *.mk)
