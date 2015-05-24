CC := g++
CFLAGS := -Wall --coverage
LDFLAGS := -L/usr/lib -lgtest -lgtest_main -lpthread

all: test/*.cpp
	$(CC) test/*.cpp $(CFLAGS) -o unit_tests $(LDFLAGS)

clean: 
	rm -rf unit_tests *.gcno *.gcov *.gcda