output: main.o message.o
      g++ main.o message.o -o output

main.o: main.cpp
     g++ -c main.cpp

target: dependencies
      action