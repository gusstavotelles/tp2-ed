
CC=g++ 
CFLAGS=-Wall -Wextra
EXEC=./tp2.exe 
TMPOUT=./tp2.testresult

$(EXEC): main.cpp civilizacao.o
	$(CC) $(CFLAGS) main.cpp civilizacao.o -o $(EXEC)

civilizacao.o: ./headers/civilizacao.hpp ./civilizacao.cpp ./QuickSort.cpp
	$(CC) $(CFLAGS) -c ./civilizacao.cpp -o civilizacao.o
 
test: $(EXEC)
	@bash run_tests.sh $(EXEC) $(TMPOUT)

clean: 
	rm -rf  civilizacao.o

clean_windows:
	del civilizacao.o
# === OUTROS =====
# ================
# 
# Para mais informacoes sobre o Makefile, procure os monitores ou consulte
# outras referencias disponiveis na internet como:
# https://opensource.com/article/18/8/what-how-makefile
