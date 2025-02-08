horse_race: horse.o race.o main.o
	g++ horse.o race.o main.o -o horse_race

horse.o: horse.cpp horse.h
	g++ -c horse.cpp

race.o: race.cpp race.h horse.h
	g++ -c race.cpp

main.o: main.cpp race.h horse.h
	g++ -c main.cpp

clean: 
	rm -f *.o
	rm -f horse_race

run: horse_race
	./horse_race

