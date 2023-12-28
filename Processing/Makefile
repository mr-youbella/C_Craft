## Beginning Variables

# ANSI Code and lines
ansi_red = \033[31m
ansi_green = \033[32m
ansi_blue = \033[34m
ansi_bold = \033[1m
ansi_line = \033[4m
ansi_default = \033[0m
split_line = \n--------------------------------------------------------------------------------------\n

# Compiler and Execute ans Scripts
print_cCraft = bash Scripts/print_cCraft.sh &&
gcc_function = gcc -Wall -Wextra -Werror ../Tests/Functions/fcc_
gcc_program = gcc -Wall -Wextra -Werror ../Tests/Functions/pcc_
execute = -o fcc && ./fcc && rm -f fcc || \
echo "$(ansi_red)$(split_line)There seems to be an error: Please check the exercise file in terms of Syntax and Prototype and verify that the main function does not exist in the exercise file.\n$(ansi_default)"

# Name Exercises/Quizzes
names_exercises_Availble = "$(ansi_blue)sum - digit - strlen - saverge - even - power - str_is_alpha - str_is_numbers - bindec - upper_case\nlower_case - atoi - value_ascii - index_letter$(ansi_default)" 
names_quizzes_Availble = "$(ansi_blue)quiz1$(ansi_default)"

# Subject
name_exercise = $(ansi_bold)📝 Exercise name:$(ansi_default)
name_file = $(ansi_bold)🚩 Required file:$(ansi_default)
subject = $(ansi_bold)📚 Subject:$(ansi_default)
prototype = $(ansi_bold)🔦 Will be prototyped as follows:$(ansi_default)
allowed_function = $(ansi_bold)🔗 Allowed function:$(ansi_default)

## End Variables

## Beginning Targets

# Beginning Exercises

test_all_exercises:
	@bash Scripts/test_all_exercises.sh
# Display all Exercises/Quizzes availble
ex:
	@echo Exercise: $(names_exercises_Availble)
qu:
	@echo Quizzes: $(names_quizzes_Availble)


# Test_All_Exercises

# Sum
subject_sum:
	@echo "\
$(name_exercise) sum\n\n\
$(name_file) ft_sum.c\n\n\
$(subject) Create a function that takes two integer numbers and returns their sum.\n\n\
$(prototype) \n'''\nint ft_sum(int x, int y);\n'''\n\n\
$(allowed_function) None."
test_sum:
	@if [ -e ../../ft_sum.c ]; then \
		echo "$(ansi_blue)$(ansi_line)sum$(ansi_default)\n"; \
		$(print_cCraft) $(gcc_function)sum.c $(execute); \
	else \
		echo "$(ansi_red)Verify that a file named $(ansi_blue)ft_sum.c$(ansi_default)"; \
	fi

# Digit
subject_digit:
	@echo "\
$(name_exercise) digit\n\n\
$(name_file) ft_digit.c\n\n\
$(subject) Create a function that takes an integer and returns how many digits is has.\n\n\
$(prototype) \n'''\nint ft_digit(int nb);\n'''\n\n\
$(allowed_function) None."
test_digit:
	@if [ -e ../../ft_digit.c ]; then \
		echo "$(ansi_blue)$(ansi_line)digit$(ansi_default)\n"; \
		$(print_cCraft) $(gcc_function)digit.c $(execute); \
	else \
		echo "$(ansi_red)Verify that a file named $(ansi_blue)ft_digit.c$(ansi_default)"; \
	fi

# Strlen
subject_strlen:
	@echo "\
$(name_exercise) strlen\n\n\
$(name_file) ft_strlen.c\n\n\
$(subject) Reproduce the behavior of the function strlen.\n\n\
$(prototype) \n'''\nint ft_strlen(char *str);\n'''\n\n\
$(allowed_function) None."
test_strlen:
	@if [ -e ../../ft_strlen.c ]; then \
		echo "$(ansi_blue)$(ansi_line)strlen$(ansi_default)\n"; \
		$(print_cCraft) $(gcc_function)strlen.c $(execute); \
	else \
		echo "$(ansi_red)Verify that a file named $(ansi_blue)ft_strlen.c$(ansi_default)"; \
	fi

# Saverge
subject_saverge:
	@echo "\
$(name_exercise) saverge\n\n\
$(name_file) ft_saverge.c\n\n\
$(subject) Write a function that takes points for four subject (Math - physics - philosophy - English), where each subject is different (mathematics is a factor 4, physics is a factor 3, and philosophy and English are a factor 2). Create the function to return the total percentage of these four branches. (if one of the entries contains a negative number or is greater than 20, return -1)\nExample:\nMathematics = 13 > physics = 10 > English = 11 > philosophy = 12 ----> The result is: 58.18%\n\n\
$(prototype) \n'''\nfloat ft_saverge(float math, float pc, float eng, float ph);\n'''\n\n\
$(allowed_function) None."
test_saverge:
	@if [ -e ../../ft_saverge.c ]; then \
		echo "$(ansi_blue)$(ansi_line)saverge$(ansi_default)\n"; \
		$(print_cCraft) $(gcc_function)saverge.c $(execute); \
	else \
		echo "$(ansi_red)Verify that a file named $(ansi_blue)ft_saverge.c$(ansi_default)"; \
	fi

# Even
subject_even:
	@echo "\
$(name_exercise) even\n\n\
$(name_file) ft_even.c\n\n\
$(subject) Create a function that returns 0 if it is an odd number and 1 if it is an even number.\n\n\
$(prototype) \n'''\nint ft_even(int nb);\n'''\n\n\
$(allowed_function) None."
test_even:
	@if [ -e ../../ft_even.c ]; then \
		echo "$(ansi_blue)$(ansi_line)even$(ansi_default)\n"; \
		$(print_cCraft) $(gcc_function)even.c $(execute); \
	else \
		echo "$(ansi_red)Verify that a file named $(ansi_blue)ft_even.c$(ansi_default)"; \
	fi

# Power
subject_power:
	@echo "\
$(name_exercise) power\n\n\
$(name_file) ft_power.c\n\n\
$(subject) Create an function that returns the value of a power applied to a number. An power lower than 0 returns -1.\n\n\
$(prototype) \n'''\nint ft_power(int nb, int pw);\n''\n\n\
$(allowed_function) None."
test_power:
	@if [ -e ../../ft_power.c ]; then \
		echo "$(ansi_blue)$(ansi_line)power$(ansi_default)\n"; \
		$(print_cCraft) $(gcc_function)power.c $(execute); \
	else \
		echo "$(ansi_red)Verify that a file named $(ansi_blue)ft_power.c$(ansi_default)"; \
	fi

# Str_is_Alpha
subject_str_is_alpha:
	@echo "\
$(name_exercise) str_is_alpha\n\n\
$(name_file) ft_str_is_alpha.c\n\n\
$(subject) Create a function that returns 1 if the string given as a parameter contains only alphabetical characters, and 0 if it contains any other character. • (It should return -1 if str is empty).\n\n\
$(prototype) \n'''\nint ft_str_is_alpha(char *str);\n'''\n\n\
$(allowed_function) None."
test_str_is_alpha:
	@if [ -e ../../ft_str_is_alpha.c ]; then \
		echo "$(ansi_blue)$(ansi_line)str_is_alpha$(ansi_default)\n"; \
		$(print_cCraft) $(gcc_function)str_is_alpha.c $(execute); \
	else \
		echo "$(ansi_red)Verify that a file named $(ansi_blue)ft_str_is_alpha.c$(ansi_default)"; \
	fi

# Str_is_Numbers
subject_str_is_numbers:
	@echo "\
$(name_exercise) str_is_numbers\n\n\
$(name_file) ft_str_is_numbers.c\n\n\
$(subject) Create a function that returns 1 if the string given as a parameter contains only numbers, and 0 if it contains any other character. • (It should return -1 if str is empty).\n\n\
$(prototype) \n'''\nint ft_str_is_numbers(char *str);\n'''\n\n\
$(allowed_function) None."
test_str_is_numbers:
	@if [ -e ../../ft_str_is_numbers.c ]; then \
		echo "$(ansi_blue)$(ansi_line)str_is_numbers$(ansi_default)\n"; \
		$(print_cCraft) $(gcc_function)str_is_numbers.c $(execute); \
	else \
		echo "$(ansi_red)Verify that a file named $(ansi_blue)ft_str_is_numbers.c$(ansi_default)"; \
	fi

# Bindec
subject_bindec:
	@echo "\
$(name_exercise) bindec\n\n\
$(name_file) ft_bindec.c\n\n\
$(subject) Create a function that takes a binary number and returns a decimal number.(if the entry number is more than 8 digit long or contains two digits other than 0 and 1, return -1)\n\n\
$(prototype) \n'''\nint ft_bindec(char *bin);\n'''\n\n\
$(allowed_function) None."
test_bindec:
	@if [ -e ../../ft_bindec.c ]; then \
		echo "$(ansi_blue)$(ansi_line)bindec$(ansi_default)\n"; \
		$(print_cCraft) $(gcc_function)bindec.c $(execute); \
	else \
		echo "$(ansi_red)Verify that a file named $(ansi_blue)ft_bindec.c$(ansi_default)"; \
	fi

# Upper_Case
subject_upper_case:
	@echo "\
$(name_exercise) upper_case\n\n\
$(name_file) ft_upper_case.c\n\n\
$(subject) Write a function that takes a string and returns all characters to uppercase.\n\n\
$(prototype) \n'''\nchar *ft_upper_case(char *str);\n'''\n\n\
$(allowed_function) None."
test_upper_case:
	@if [ -e ../../ft_upper_case.c ]; then \
		echo "$(ansi_blue)$(ansi_line)upper_case$(ansi_default)\n"; \
		$(print_cCraft) $(gcc_function)upper_case.c $(execute); \
	else \
		echo "$(ansi_red)Verify that a file named $(ansi_blue)ft_upper_case.c$(ansi_default)"; \
	fi

# Lower_Case
subject_lower_case:
	@echo "\
$(name_exercise) lower_case\n\n\
$(name_file) ft_lower_case.c\n\n\
$(subject) write a function that takes a string and returns all characters to lowercase.\n\n\
$(prototype) \n'''\nchar *ft_lower_case(char *str);\n'''\n\n\
$(allowed_function) None."
test_lower_case:
	@if [ -e ../../ft_lower_case.c ]; then \
		echo "$(ansi_blue)$(ansi_line)lower_case$(ansi_default)\n"; \
		$(print_cCraft) $(gcc_function)lower_case.c $(execute); \
	else \
		echo "$(ansi_red)Verify that a file named $(ansi_blue)ft_lower_case.c$(ansi_default)"; \
	fi

# Atoi
subject_atoi:
	@echo "\
$(name_exercise) atoi\n\n\
$(name_file) ft_atoi.c\n\n\
$(subject) Reproduce the behavior of the function atoi.\n\n\
$(prototype) \n'''\nint ft_atoi(char *str);\n'''\n\n\
$(allowed_function) None."
test_atoi:
	@if [ -e ../../ft_atoi.c ]; then \
		echo "$(ansi_blue)$(ansi_line)atoi$(ansi_default)\n"; \
		$(print_cCraft) $(gcc_function)atoi.c $(execute); \
	else \
		echo "$(ansi_red)Verify that a file named $(ansi_blue)ft_atoi.c$(ansi_default)"; \
	fi

# Value Ascii
subject_value_ascii:
	@echo "\
$(name_exercise) value_ascii\n\n\
$(name_file) ft_value_ascii.c\n\n\
$(subject) Implement a function that takes a character as an argument and return its ascii value.\n\n\
$(prototype) \n'''\nint ft_value_ascii(char c);\n'''\n\n\
$(allowed_function) None."
test_value_ascii:
	@if [ -e ../../ft_value_ascii.c ]; then \
		echo "$(ansi_blue)$(ansi_line)value_ascii$(ansi_default)\n"; \
		$(print_cCraft) $(gcc_function)value_ascii.c $(execute); \
	else \
		echo "$(ansi_red)Verify that a file named $(ansi_blue)ft_value_ascii.c$(ansi_default)"; \
	fi

# Index Letter
subject_index_letter:
	@echo "\
$(name_exercise) index_letter\n\n\
$(name_file) ft_index_letter.c\n\n\
$(subject) Write a function that takes the letters of the alphabet and returns their corresponding numeric values. ° (return -1 for non-alphabetic characters)\nExample: 'c' > 3 | 'A' > 1.\n\n\
$(prototype) \n'''\nint ft_index_letter(char letter);\n'''\n\n\
$(allowed_function) None."
test_index_letter:
	@if [ -e ../../ft_index_letter.c ]; then \
		echo "$(ansi_blue)$(ansi_line)index_letter$(ansi_default)\n"; \
		$(print_cCraft) $(gcc_function)index_letter.c $(execute); \
	else \
		echo "$(ansi_red)Verify that a file named $(ansi_blue)ft_index_letter.c$(ansi_default)"; \
	fi

# End Exercises

## End Targets
