PROJ_NAME= complex
SRC=src/main.c\
src/complex.c\

TEST_SRC=src/test_complex.c\
unity/unity.c\
src/complex.c\

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

INC=-Iinclude\
-Iunity\

Build:
	gcc $(SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm
run:Build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

Build_test:
	gcc $(TEST_SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm
run_test:Build_test
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

staticcheck:
	cppcheck --enable=all -iunity .
dynamiccheck:Build
	valgrind ./$(call FixPath,$(PROJ_NAME).$(EXEC))
coverage:
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm
	gcov -a ./$(call FixPath,$(PROJ_NAME).$(EXEC))