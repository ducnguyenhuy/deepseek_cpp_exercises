all: test

test: main.o Savings_Account.o Account_Util.o Account.o
	g++ -o test main.o Savings_Account.o Account_Util.o Account.o -std=c++11

main.o: main.cpp
	g++ -c main.cpp -std=c++11

Savings_Account.o: Savings_Account.cpp Savings_Account.h
	g++ -c Savings_Account.cpp -std=c++11

Account_Util.o: Account_Util.cpp Account_Util.h
	g++ -c Account_Util.cpp -std=c++11

Account.o: Account.cpp Account.h
	g++ -c Account.cpp -std=c++11

clean:
	rm -f *.o test