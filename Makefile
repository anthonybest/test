

.PHONY: all
all: main

main: main.o


.PHONY: test
test: main
	echo "This is a test"
