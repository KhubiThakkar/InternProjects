PROJ_NAME = complex
TEST_PROJ_NAME = test_$(PROJ_NAME)

BUILD_DIR = Build

SRC = src/sum.c\
src/mul.c\
src/diff.c\
src/div.c

TEST_SRC = test_complex.c\
unity/unity.c

INC = -Iinc\
-Iunity

#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
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

# Makefile will not run target command if the name with file already exists. To override, use .PHONY
.PHONY : all test coverage run clean doc

# COMPILE CODE
all:$(BUILD_DIR)
	gcc -Wall -g ques.c $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

# RUN CODE
run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

# UNIT TESTING
test: $(SRC) $(TEST_SRC)
	gcc $^ $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

# COVERAGE CHECK
coverage:${PROJECT_NAME} $(BUILD_DIR)
	gcc -fprofile-arcs -ftest-coverage  ques.c $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	mv *.gcda *.gcno src
	gcov -a $(SRC) ques.c

#MAKE DIRECTORY
doc:
	make -C doc
$(BUILD_DIR):
	mkdir $(BUILD_DIR)

#CLEAN EXTRA FILES
clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)
	$(RM) *.c.gcov
	$(RM) $(call FixPath,src/*.gcno)
	$(RM) $(call FixPath,src/*.gcda)
	#make clean -C doc
	rmdir $(BUILD_DIR) 
	#doc/html

# VALGRIND MEMORY LEAK
leak:all
	valgrind $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

# CPPCHECK STATIC TEST
check:
	cppcheck --enable=all $(INC)--suppress=missingIncludeSystem main.c $(SRC)
	#--check-config : when error description needed

# GDB DEBUG
debug:all
	gdb $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))






















#SRC = main.c\
src/sum.c\
src/mul.c\
src/diff.c\
test_complex.c

#NC = inc
#TEST = unity\unity.c

#$(PROJECT_NAME): $(SRC) $(TEST)
	#gcc -I $(INC) $(SRC) $(TEST) -o all.out
	
#run: $(PROJECT_NAME)
	#./$(PROJECT_NAME)
	
#clean:
	#rm /q *.out