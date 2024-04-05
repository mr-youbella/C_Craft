## Beginning Variables

# ANSI Code and lines
ansi_red = \033[31m
ansi_green = \033[32m
ansi_blue = \033[34m
ansi_pink = \033[35m
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
names_exercises_Availble = "$(ansi_blue)sum - digit - strlen - saverge - even - power - str_is_alpha - str_is_numbers - bindec - upper_case\nlower_case - atoi - value_ascii - index_letter - factorial - strcmp - char_count - no_space - calc - str_rev\nstrcapitalize - fibonacci - strstr - itoa - strchr - check_email - $(ansi_green)max_num - min_num\n$(ansi_pink)-> 28 Exercises <-$(ansi_default)" 
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

# Factorial
subject_factorial:
	@echo "\
$(name_exercise) Factorial\n\n\
$(name_file) ft_factorial.c\n\n\
$(subject) Create an function that returns a number. This number is the result of a factorial operation based on the number given as a parameter.\nIf the argument is not valid the function should return 0. (like negative numbers...)\n\n\
$(prototype) \n'''\nint ft_factorial(int nb);\n'''\n\n\
$(allowed_function) None."
test_factorial:
	@if [ -e ../../ft_factorial.c ]; then \
		echo "$(ansi_blue)$(ansi_line)factorial$(ansi_default)\n"; \
		$(print_cCraft) $(gcc_function)factorial.c $(execute); \
	else \
		echo "$(ansi_red)Verify that a file named $(ansi_blue)ft_factorial.c$(ansi_default)"; \
	fi

# Strcmp
subject_strcmp:
	@echo "\
$(name_exercise) Strcmp\n\n\
$(name_file) ft_strcmp.c\n\n\
$(subject) Reproduce the behavior of the function strcmp.\n\n\
$(prototype) \n'''\nint ft_strcmp(char *s1, char *s2);\n'''\n\n\
$(allowed_function) None."
test_strcmp:
	@if [ -e ../../ft_strcmp.c ]; then \
		echo "$(ansi_blue)$(ansi_line)strcmp$(ansi_default)\n"; \
		$(print_cCraft) $(gcc_function)strcmp.c $(execute); \
	else \
		echo "$(ansi_red)Verify that a file named $(ansi_blue)ft_strcmp.c$(ansi_default)"; \
	fi

# Character Count
subject_char_count:
	@echo "\
$(name_exercise) Character Count\n\n\
$(name_file) ft_char_count.c\n\n\
$(subject) Create a function that takes a string and a character and returns the number of occurrences of a character that it finds within the string.\nExample: ft_char_count(\"Hello World\", 'l') // 3\n\n\
$(prototype) \n'''\nint ft_char_count(char *str, char c);\n'''\n\n\
$(allowed_function) None."
test_char_count:
	@if [ -e ../../ft_char_count.c ]; then \
		echo "$(ansi_blue)$(ansi_line)char_count$(ansi_default)\n"; \
		$(print_cCraft) $(gcc_function)char_count.c $(execute); \
	else \
		echo "$(ansi_red)Verify that a file named $(ansi_blue)ft_char_count.c$(ansi_default)"; \
	fi

# No Space
subject_no_space:
	@echo "\
$(name_exercise) No Space\n\n\
$(name_file) ft_no_space.c\n\n\
$(subject) Write a function that removes the spaces from the string, then return the resultant string.\n\n\
$(prototype) \n'''\nchar *ft_no_space(const char *str);\n'''\n\n\
$(allowed_function) malloc."
test_no_space:
	@if [ -e ../../ft_no_space.c ]; then \
		echo "$(ansi_blue)$(ansi_line)no_space$(ansi_default)\n"; \
		$(print_cCraft) $(gcc_function)no_space.c $(execute); \
	else \
		echo "$(ansi_red)Verify that a file named $(ansi_blue)ft_no_space.c$(ansi_default)"; \
	fi

# Calculator
subject_calc:
	@echo "\
$(name_exercise) Calculator\n\n\
$(name_file) ft_calc.c\n\n\
$(subject) Write a function that takes three strings. The first and third are representations of integers. The second operator is an arithmetic operator chosen from: (+ - * / %). The function must return the result of the required arithmetic operation.\nExample: calc(\"13\", '+', \"37\")\\ 50\n\n\
$(prototype) \n'''\nint ft_calc(char *nb1, char op, char *nb2);\n'''\n\n\
$(allowed_function) None."
test_calc:
	@if [ -e ../../ft_calc.c ]; then \
		echo "$(ansi_blue)$(ansi_line)calc$(ansi_default)\n"; \
		$(print_cCraft) $(gcc_function)calc.c $(execute); \
	else \
		echo "$(ansi_red)Verify that a file named $(ansi_blue)ft_calc.c$(ansi_default)"; \
	fi

# Str Reverse
subject_str_rev:
	@echo "\
$(name_exercise) Str Reverse\n\n\
$(name_file) ft_str_rev.c\n\n\
$(subject) Write a function that takes a string and returns its reverse\n\n\
$(prototype) \n'''\nchar *ft_str_rev(const char *str);\n'''\n\n\
$(allowed_function) malloc."
test_str_rev:
	@if [ -e ../../ft_str_rev.c ]; then \
		echo "$(ansi_blue)$(ansi_line)str_rev$(ansi_default)\n"; \
		$(print_cCraft) $(gcc_function)str_rev.c $(execute); \
	else \
		echo "$(ansi_red)Verify that a file named $(ansi_blue)ft_str_rev.c$(ansi_default)"; \
	fi

# Strcapitalize
subject_strcapitalize:
	@echo "\
$(name_exercise) Strcapitalize\n\n\
$(name_file) ft_strcapitalize.c\n\n\
$(subject) Create a function that capitalizes the first letter of each word and transforms all other letters to lowercase.\nExample: hello, how are you ? 42words forty-two; 13You,bella -> Hello, How Are You ? 42words Forty-Two; 13you,Bella\n\n\
$(prototype) \n'''\nchar *ft_strcapitalize(char *str);\n'''\n\n\
$(allowed_function) None."
test_strcapitalize:
	@if [ -e ../../ft_strcapitalize.c ]; then \
		echo "$(ansi_blue)$(ansi_line)strcapitalize$(ansi_default)\n"; \
		$(print_cCraft) $(gcc_function)strcapitalize.c $(execute); \
	else \
		echo "$(ansi_red)Verify that a file named $(ansi_blue)ft_strcapitalize.c$(ansi_default)"; \
	fi

# Fibonacci
subject_fibonacci:
	@echo "\
$(name_exercise) fibonacci\n\n\
$(name_file) ft_fibonacci.c\n\n\
$(subject) Create a function ft_fibonacci that returns the n-th element of the Fibonacci sequence, the first element being at the 0 index. We'll consider that the Fibonacci sequence starts like this: 0, 1, 1, 2....(•If the index is less than 0, the function should return -1.)\nExample: ft_fibonacci(7); \\ 13\n\n\
$(prototype) \n'''\nint ft_fibonacci(int index);\n'''\n\n\
$(allowed_function) None."
test_fibonacci:
	@if [ -e ../../ft_fibonacci.c ]; then \
		echo "$(ansi_blue)$(ansi_line)fibonacci$(ansi_default)\n"; \
		$(print_cCraft) $(gcc_function)fibonacci.c $(execute); \
	else \
		echo "$(ansi_red)Verify that a file named $(ansi_blue)ft_fibonacci.c$(ansi_default)"; \
	fi

# StrStr
subject_strstr:
	@echo "\
$(name_exercise) StrStr\n\n\
$(name_file) ft_strstr.c\n\n\
$(subject) Reproduce the behavior of the function strstr.\n\n\
$(prototype) \n'''\nchar *ft_strstr(char *str, char *to_find);\n'''\n\n\
$(allowed_function) None."
test_strstr:
	@if [ -e ../../ft_strstr.c ]; then \
		echo "$(ansi_blue)$(ansi_line)strstr$(ansi_default)\n"; \
		$(print_cCraft) $(gcc_function)strstr.c $(execute); \
	else \
		echo "$(ansi_red)Verify that a file named $(ansi_blue)ft_strstr.c$(ansi_default)"; \
	fi

# Itoa
subject_itoa:
	@echo "\
$(name_exercise) Itoa\n\n\
$(name_file) ft_itoa.c\n\n\
$(subject) Reproduce the behavior of the function itoa.\n\n\
$(prototype) \n'''\nchar *ft_itoa(int num);\n'''\n\n\
$(allowed_function) malloc."
test_itoa:
	@if [ -e ../../ft_itoa.c ]; then \
		echo "$(ansi_blue)$(ansi_line)itoa$(ansi_default)\n"; \
		$(print_cCraft) $(gcc_function)itoa.c $(execute); \
	else \
		echo "$(ansi_red)Verify that a file named $(ansi_blue)ft_itoa.c$(ansi_default)"; \
	fi

# StrChr
subject_strchr:
	@echo "\
$(name_exercise) StrChr\n\n\
$(name_file) ft_strchr.c\n\n\
$(subject) Reproduce the behavior of the function strchr.\n\n\
$(prototype) \n'''\nchar *ft_strchr(const char *s, int c)\n'''\n\n\
$(allowed_function) None."
test_strchr:
	@if [ -e ../../ft_strchr.c ]; then \
		echo "$(ansi_blue)$(ansi_line)strchr$(ansi_default)\n"; \
		$(print_cCraft) $(gcc_function)strchr.c $(execute); \
	else \
		echo "$(ansi_red)Verify that a file named $(ansi_blue)ft_strchr.c$(ansi_default)"; \
	fi

# Check Email
subject_check_email:
	@echo "\
$(name_exercise) Check Email\n\n\
$(name_file) ft_check_email.c\n\n\
$(subject) Create a function that returns 1 if the email contains a domain name (@ccraft.com) and is at least 4 letters in the user name and it must not contain spaces. If these conditions are not met, the function must return 0.\nExample: ft_check_email("youbella@ccraft.com"); \\ 1\n\n\
$(prototype) \n'''\nint ft_check_email(const char *email);\n'''\n\n\
$(allowed_function) None."
test_check_email:
	@if [ -e ../../ft_check_email.c ]; then \
		echo "$(ansi_blue)$(ansi_line)check_email$(ansi_default)\n"; \
		$(print_cCraft) $(gcc_function)check_email.c $(execute); \
	else \
		echo "$(ansi_red)Verify that a file named $(ansi_blue)ft_check_email.c$(ansi_default)"; \
	fi

# Max number
subject_max_num:
	@echo "\
$(name_exercise) Max number\n\n\
$(name_file) ft_max_num.c\n\n\
$(subject) The first parameter is an array of int, the second is the number of elements in the array. - The function returns the largest number found in the array. (If the array is empty, the function returns 0)\n\n\
$(prototype) \n'''\nint ft_max_num(int* arr, unsigned int len);\n'''\n\n\
$(allowed_function) None."
test_max_num:
	@if [ -e ../../ft_max_num.c ]; then \
		echo "$(ansi_blue)$(ansi_line)max_num$(ansi_default)\n"; \
		$(print_cCraft) $(gcc_function)max_num.c $(execute); \
	else \
		echo "$(ansi_red)Verify that a file named $(ansi_blue)ft_max_num.c$(ansi_default)"; \
	fi

# Min number
subject_min_num:
	@echo "\
$(name_exercise) Min number\n\n\
$(name_file) ft_min_num.c\n\n\
$(subject) The first parameter is an array of int, the second is the number of elements in the array. - The function returns the less number found in the array. (If the array is empty, the function returns 0)\n\n\
$(prototype) \n'''\nint ft_min_num(int* arr, unsigned int len);\n'''\n\n\
$(allowed_function) None."
test_min_num:
	@if [ -e ../../ft_min_num.c ]; then \
		echo "$(ansi_blue)$(ansi_line)min_num$(ansi_default)\n"; \
		$(print_cCraft) $(gcc_function)min_num.c $(execute); \
	else \
		echo "$(ansi_red)Verify that a file named $(ansi_blue)ft_min_num.c$(ansi_default)"; \
	fi
# End Exercises

## End Targets