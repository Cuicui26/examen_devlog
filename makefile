SRC = src
BUILD = build
BIN = bin
TEST = test


test01 : $(BUILD)/test01

help :
	@echo "Cible disponible :"
	@echo "	 - test : génère le programme final de test (défaut)"
	@echo "  - messStacker : génère la librairie messStacker"
	@echo "	 - clean : nettoyage des .o"
	@echo "	 - help : affichage de l'aide"


$(BUILD)/test01 : $(TEST)/test01.c 
	@echo "### compilation .o de test01"
	gcc -Wall $(TEST)/test01.c -o $(BUILD)/test01



# nettoyage du projet
clean :
	@echo "... suppression de tous les .o ..."
	rm -r *.o


