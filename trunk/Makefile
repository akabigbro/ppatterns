
all: behavioral-objects creation-objects

lib: all
	$(CXX) $(CFLAGS) --shared -o libpatterns.so behavioral/*.o creation/*.o

behavioral-objects:
	make -C behavioral

creation-objects:
	make -C creation

clean:
	make -C behavioral clean
	make -C creation clean
	rm -f *.so
