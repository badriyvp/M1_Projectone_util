#TargetName : Dependencies
#<TAB>commands

Build : PHONEBOOK_CODE_main.c code.c test_PHONEBOOK_CODE.c unity.c
	gcc PHONEBOOK_CODE_main.c code.c test_PHONEBOOK_CODE.c unity.c -o code.out

Run : Build
	./code.out

Clean:
	rm -rf *.o *.out *.i *.s