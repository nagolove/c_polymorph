debug : 
	gcc -o ./bin/deb ./src/main.c -Wall -Wextra -Wpedantic -std=c18

release :
	gcc -o ./bin/res ./src/main.c -O3 -std=c18

dl :
	-rm -rf ./bin
