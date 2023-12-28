#!/bin/bash
source $(dirname "$0")/../Processing/Scripts/ansi.sh

start(){
    i=0; a=0
    q1=$(whiptail --title "Question 1" --menu "What is a correct syntax to output \"Hello World\" in C?" 13 80 4 \
    1 "Console.WriteLine(\"Hello World\");" \
    2 "cout << \"Hello World\";" \
    3 "printf(\"Hello World\");" \
    4 "System.out.printline(\"Hello World\");" \
    3>&1 1>&2 2>&3)
    q2=$(whiptail --title "Question 2" --menu "How do you insert COMMENTS in C code?" 13 80 4 \
    1 "< This is comment />" \
    2 "// This is comment" \
    3 "** This is comment" \
    4 "# This is comment" \
    3>&1 1>&2 2>&3)
    q3=$(whiptail --title "Question 3" --menu "When a variable is created in C, a memory address is assigned to the variable." 13 80 2 \
    1 "True" \
    2 "False" \
    3>&1 1>&2 2>&3)
    q4=$(whiptail --title "Question 4" --menu "In C, code statements must end with a semicolon (;)" 13 80 2 \
    1 "True" \
    2 "False" \
    3>&1 1>&2 2>&3)
    q5=$(whiptail --title "Question 5" --menu "How can you create a variable with the numeric value 5?" 13 80 4 \
    1 "int num = 5;" \
    2 "num = 5 int;" \
    3 "val num = 5;" \
    4 "num = 5;" \
    3>&1 1>&2 2>&3)

    q6=$(whiptail --title "Question 6" --menu "How can you create a variable with the floating number 2.8?" 13 80 4 \
    1 "num = 2.8 double;" \
    2 "val num = 2.8;" \
    3 "float num = 2.8;" \
    4 "num = 2.8 float;" \
    3>&1 1>&2 2>&3)
    q7=$(whiptail --title "Question 7" --menu "Which operator is used to add together two values?" 13 80 4 \
    1 "The ADD keyword" \
    2 "The + sign" \
    3 "The & sign" \
    4 "The * sign" \
    3>&1 1>&2 2>&3)
    q8=$(whiptail --title "Question 8" --menu "Which function is often used to output values and print text?" 13 80 4 \
    1 "printword()" \
    2 "printf()" \
    3 "write()" \
    4 "output()" \
    3>&1 1>&2 2>&3)
    q9=$(whiptail --title "Question 9" --menu "Which format specifier is often used to print integers?" 13 80 4 \
    1 "%d" \
    2 "%s" \
    3 "%c" \
    4 "%f" \
    3>&1 1>&2 2>&3)
    q10=$(whiptail --title "Question 10" --menu "Which operator can be used to compare two values?" 13 80 4 \
    1 "><" \
    2 "<>" \
    3 "=" \
    4 "==" \
    3>&1 1>&2 2>&3)

    q11=$(whiptail --title "Question 11" --menu "Which operator can be used to find the memory size (in bytes) of a data type or variable?" 13 80 4 \
    1 "The length property" \
    2 "The sizer property" \
    3 "The sizeof property" \
    4 "The len property" \
    3>&1 1>&2 2>&3)
    q12=$(whiptail --title "Question 12" --menu "Which keyword can be used to make a variable unchangeable/read-only?" 13 80 4 \
    1 "constant" \
    2 "final" \
    3 "const" \
    4 "readonly" \
    3>&1 1>&2 2>&3)
    q13=$(whiptail --title "Question 13" --menu "What do we call the following? int myNumbers[] = {25, 50, 75, 100};" 13 80 4 \
    1 "A class" \
    2 "A pointer" \
    3 "An array" \
    4 "None of the above" \
    3>&1 1>&2 2>&3)
    q14=$(whiptail --title "Question 14" --menu "Array indexes start with:" 13 80 2 \
    1 "0" \
    2 "1" \
    3>&1 1>&2 2>&3)
    q15=$(whiptail --title "Question 15" --menu "How do you call a function in C?" 13 80 4 \
    1 "myFunction();" \
    2 "myFunction[];" \
    3 "myFunction;" \
    4 "(myFunction);" \
    3>&1 1>&2 2>&3)

    q16=$(whiptail --title "Question 16" --menu "How do you start writing an if statement in C?" 13 80 4 \
    1 "if (x > y)" \
    2 "if x > y then" \
    3 "if x > y()" \
    4 "if x > y" \
    3>&1 1>&2 2>&3)
    q17=$(whiptail --title "Question 17" --menu "How do you start writing a while loop in C?" 13 80 4 \
    1 "if x > y while" \
    2 "while x > y" \
    3 "while (x > y)" \
    4 "while x > y then" \
    3>&1 1>&2 2>&3)
    q18=$(whiptail --title "Question 18" --menu "Which keyword is used to return a value inside a function?" 13 80 4 \
    1 "void" \
    2 "get" \
    3 "break" \
    4 "return" \
    3>&1 1>&2 2>&3)
    q19=$(whiptail --title "Question 19" --menu "How do you start writing a for loop in C?" 13 80 4 \
    1 "for (int i = 0; i < 5; i++)" \
    2 "for (int i = 0; while < 5; i++)" \
    3 "for (x in y)" \
    4 "for (int i = 0; switch < 5; i++)" \
    3>&1 1>&2 2>&3)
    q20=$(whiptail --title "Question 20" --menu "Which statement can be used to select one of many code blocks to be executed?" 13 80 4 \
    1 "default" \
    2 "when" \
    3 "switch" \
    4 "break" \
    3>&1 1>&2 2>&3)

    q21=$(whiptail --title "Question 21" --menu "Which statement is used to stop a loop?" 13 80 4 \
    1 "exit" \
    2 "void" \
    3 "stop" \
    4 "break" \
    3>&1 1>&2 2>&3)
    q22=$(whiptail --title "Question 22" --menu "Which keyword is used to create a class in C?" 13 80 4 \
    1 "None of the above" \
    2 "class = myClass" \
    3 "class()" \
    4 "class" \
    3>&1 1>&2 2>&3)
    q23=$(whiptail --title "Question 23" --menu "What is ptr in the following code known as? int* ptr = &myAge;" 13 80 4 \
    1 "A class" \
    2 "An array" \
    3 "A parameter" \
    4 "A pointer" \
    3>&1 1>&2 2>&3)
    q24=$(whiptail --title "Question 24" --menu "In C, it is possible to inherit class properties and functions from one class to another." 13 80 2 \
    1 "True" \
    2 "False" \
    3>&1 1>&2 2>&3)
    q25=$(whiptail --title "Question 25 | Final question" --menu "Which keyword is used to create a structure?" 13 80 4 \
    1 "str" \
    2 "srtucts" \
    3 "struct" \
    4 "structure" \
    3>&1 1>&2 2>&3)

    con=(3 2 1 1 1 3 2 2 1 4 3 3 3 1 1 1 3 4 1 3 4 1 4 2 3)

    for ((i=1; i<=25; i++)); do
        response=$(eval "echo \$q$i")
        if [ "$response" = "${con[i-1]}" ]; then
            ((a++))
        fi
    done
    
    echo "Your score in the quiz1 is: $a / 25." >> $(dirname "$0")/../../C_Craft_Quiz.txt
    whiptail --title "Result" --msgbox "Your point is $a / 25" 10 50
    whiptail --title "C Craft" --yesno "Do You want to repeat?" 10 50
    if [ $? -eq 0 ]; then
        clear
        start
    else 
        clear
        echo -e ""$ansi_yellow"Program has been locked (You will find a result in the C_Craft_Quiz.txt file)$ansi_default"
    fi
}

whiptail --title "C Craft - Quizzes" --msgbox "You are about to start C Craft - Quizzes" 10 50
whiptail --title "C Craft - Quizzes" --msgbox "You will receive 25 C questions, with choices in each question.\nYou can Choose the right option, and in the end you will see the final result.\n(You can control with a keyboard only)" 10 100
whiptail --title "C Craft - Quizzes" --yesno "Are you ready to start?" 10 50
if [ $? -eq 0 ]; then
    start
else
    clear
    echo -e ""$ansi_red"Program has been locked$ansi_default"
fi
