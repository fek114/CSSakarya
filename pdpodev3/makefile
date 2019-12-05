hepsi: derle calistir

derle:
	g++ -I ./include/ -o ./lib/Random.o -c ./src/Random.c
	g++ -I ./include/ -o ./lib/RastgeleKarakter.o -c ./src/RastgeleKarakter.c
	g++ -I ./include/ -o ./bin/Test  ./lib/Random.o ./lib/RastgeleKarakter.o ./src/Test.c
calistir:
	./bin/Test
