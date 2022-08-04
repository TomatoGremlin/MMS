build: linked_list.c linked_list.h main.c
	gcc -c linked_list.c
	gcc -c main.c
	gcc linked_list.o main.o -o mainExe
	mv linked_list.o main.o mainExe ./build
clean:
	rm -r ./build
run:
	./build/mainExe