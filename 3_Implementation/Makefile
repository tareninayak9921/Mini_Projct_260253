# Name of the project
PROJ_NAME = Calculator
TEST_PROJ_NAME = Test_$(PROJ_NAME)

BUILD_DIR = Build

# All source code files
SRC =src/fun_add.c\
src/fun_sub.c\
src/fun_multiply.c src/fun_div.c src/fun_intrest.c src/fun_percentage.c src/fun_distance.c src/fun_speed.c src/fun_log.c src/fun_power.c src/fun_sqrt.c\
src/fun_sin.c src/fun_cos.c\
src/fun_tan.c

# All test source files
TEST_SRC = test/test_calculator.c\
unity/unity.c

# All include folders with header files
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
.PHONY : all test coverage run clean
all:$(BUILD_DIR)
	gcc main.c $(SRC) $(INC) -lm -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))
# Call `make run` to run the application
run: $(BUILD_DIR)
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

#Coverage	
coverage:$(BUILD_DIR)
	gcc $(TEST_SRC) $(SRC) $(INC) -fprofile-arcs -ftest-coverage -lm -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
   #perform gcov -a *.gcno to check coverage

# Remove all the built files, invoke by `make clean`
clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)
	$(RM) *.gcda *.gcov *gcno 
	$(RM) document/html*

#cppcheck static code analysis	
cppcheck:
	cppcheck --enable=all --check-config --suppress=missingIncludeSystem main.c $(SRC) -Iinc 
	
valgrind:
	gcc $(TEST_SRC) $(SRC) $(INC) -lm -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	valgrind $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
 
# Build and run the unit tests	
test:$(BUILD_DIR)
	gcc $(TEST_SRC) $(SRC) $(INC) -lm -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
		$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

#doxygen documentation
doc:
	make -C document

$(BUILD_DIR):
	mkdir $(BUILD_DIR)
