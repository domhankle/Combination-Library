MAINPROG = Combinations

FLAGS = -Wall -fsanitize=leak

DEPENDENCIES = Combination.h

all : $(MAINPROG)
	./$<

$(MAINPROG) : main.o
	g++ -o $@  $<

main.o : main.cpp
	g++ -c $@ $< $(DEPENDENCIES)

clean:
	rm *.o *.h.gch $(MAINPROG)

