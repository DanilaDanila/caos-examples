all: static dynamic

static:
	gcc --static main.c -o static.out && du -sh static.out

dynamic:
	gcc main.c -o dynamic.out && du -sh dynamic.out

clean:
	rm -rf *.out
