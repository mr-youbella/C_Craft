#!/bin/bash
source "$(dirname "$0")/ansi.sh"

what_is_new(){
    write_name_user
    echo -e "Welcome, $ansi_green$user$ansi_default, to the "$ansi_green"C Craft$ansi_default program."; echo
    echo -e ""$ansi_yellow"What's new in the latest update!?$ansi_default"
    echo -e "1 - Adding the "$ansi_blue"ccraft up$ansi_default command to update the program as any changes or additions are released."
    echo -e "2 - Adding the "$ansi_blue"ccraft wnew$ansi_default command to find out what are the latest modifications and additions that occurred in the program."
    echo -e ""$ansi_pink"What's new in the penultimate update!?$ansi_default"
    echo -e "Add program"
}
deleted()
{
    rm -rf ~/C_Craft
    sed -i "s/alias ccraft='bash ~\/C_Craft\/Processing\/Scripts\/alias.sh'//" ~/.bashrc ~/.zshrc 2>/dev/null
    clear
    echo -e "\033[32mUpdate successfully, Bye \033[34m$(whoami)\033[0m."
    exec bash
}
update()
{
    (cd ~/C_Craft && git pull)
    source ~/.bashrc 2>/dev/null
    source ~/.zshrc 2>/dev/null
    clear
    echo -e "\033[32mUpdate successfully, write \033[34mccraft wnew\033[32m to know what's new in the latest update\033[0m".
    exec bash
}

write_name_user(){
    i=0
    user=$(whoami)
    len=${#user}
    echo -n "Verift user: "; echo -en $ansi_green
    sleep 0.2
    while [ $i -lt $len ]; do
        echo -ne ${user:$i:1}
        sleep 0.1
        ((i++))
    done
    echo; echo -e $ansi_default; echo
}

c_craft(){
    write_name_user
    echo -e "Welcome, $ansi_green$user$ansi_default, to the "$ansi_green"C Craft$ansi_default program."
    echo -e "The "$ansi_green"C Craft$ansi_default program is an application that offers a variety of programming exercises in the C programming language, in addition to tests and exams aimed at improving the user's level in the field of programming and developing his skills in the C language.\nThe program gives users the opportunity to practice solving advanced programming challenges, testing their knowledge and deep understanding of basic concepts in the C language, and writing code in an effective manner.\n"
    echo "Inteructions for use:"
    echo -e ""$ansi_blue"ccraft$ansi_default: The ccraft command shows you a description of the program and how to use it.
"$ansi_blue"ccraft ex$ansi_default: The ccraft ex command displays all the exercises available in the program that you can work on.
"$ansi_blue"ccraft qu$ansi_default: The ccraft qu command displays all the quizzes available in the program.
"$ansi_blue"ccraft su_nameex$ansi_default: The ccraft su_nameex command displays the exercise subject and everything you need to complete the exercise.
"$ansi_blue"ccraft nameex$ansi_default: The ccraft nameex command to test an exercise you have completed.
"$ansi_blue"ccraft namequ$ansi_default: The ccraft namequ command to start an quiz.
$ansi_red(Replace nameex and namequ with the name of the exercises/quizzes)$ansi_default
"$ansi_blue"ccraft testall$ansi_default: The ccraft testall command will test all completed exercises.
"$ansi_blue"ccraft up$ansi_default: The ccraft up command to update the program as any changes or additions are released.
"$ansi_blue"ccraft wnew$ansi_default: The ccraft wnew command to find out what are the latest modifications and additions that occurred in the program.
"$ansi_blue"ccraft del$ansi_default: The ccraft del command to deleted the program from your device.
\n\n"$ansi_yellow"If you encounter any problem or encounter any errors in a program or have a suggestion to improve a program, you can contact us through our accounts available on GitHub: "$ansi_line"https://github.com/mr-youbella$ansi_default"
}


# Start message
if [ -z $1 ]; then
    clear
    c_craft
    exit
fi

cp -r 2>/dev/null ~/C_Craft C_Craft
## Switch case
case $1 in
# Display last Update
    "wnew")
        what_is_new
    ;;
# Update
    "up")
        update  
    ;;
# Deleted
    "del")
        deleted
    ;;
# Display Exercises/Quizzes
    "ex")
        (cd $(dirname "$0")/.. && make ex)
    ;;
    "qu")
        (cd $(dirname "$0")/.. && make qu)
    ;;
# Quizzes
    "quiz1")
        (bash C_Craft/Quizzes/quiz1.sh)
    ;;
# Test Exercises 
   "sum")
        (cd C_Craft/Processing && make test_sum)
    ;;
    "digit")
        (cd C_Craft/Processing && make test_digit)
    ;;
    "strlen")
        (cd C_Craft/Processing && make test_strlen)
    ;;
    "saverge")
        (cd C_Craft/Processing && make test_saverge)
    ;;
    "even")
        (cd C_Craft/Processing && make test_even)
    ;;
    "power")
        (cd C_Craft/Processing && make test_power)
    ;;
    "str_is_alpha")
        (cd C_Craft/Processing && make test_str_is_alpha)
    ;;
    "str_is_numbers")
        (cd C_Craft/Processing && make test_str_is_numbers)
    ;;
    "bindec")
        (cd C_Craft/Processing && make test_bindec)
    ;;
    "lower_case")
        (cd C_Craft/Processing && make test_lower_case)
    ;;
    "upper_case")
        (cd C_Craft/Processing && make test_upper_case)
    ;;
    "atoi")
        (cd C_Craft/Processing && make test_atoi)
    ;;
    "value_ascii")
        (cd C_Craft/Processing && make test_value_ascii)
    ;;
    "index_letter")
        (cd C_Craft/Processing && make test_index_letter)
    ;;
# Test All Exercises
    "testall")
        (cd C_Craft/Processing && make test_all_exercises)
    ;;
# Subject 
    "su_sum")
        (cd $(dirname "$0")/.. && make subject_sum)
    ;;
    "su_digit")
        (cd $(dirname "$0")/.. && make subject_digit)
    ;;
    "su_strlen")
        (cd $(dirname "$0")/.. && make subject_strlen)
    ;;
    "su_saverge")
        (cd $(dirname "$0")/.. && make subject_saverge)
    ;;
    "su_even")
        (cd $(dirname "$0")/.. && make subject_even)
    ;;
    "su_power")
        (cd $(dirname "$0")/.. && make subject_power)
    ;;
    "su_str_is_alpha")
        (cd $(dirname "$0")/.. && make subject_str_is_alpha)
    ;;
    "su_str_is_numbers")
        (cd $(dirname "$0")/.. && make subject_str_is_numbers)
    ;;
    "su_bindec")
        (cd $(dirname "$0")/.. && make subject_bindec)
    ;;
    "su_lower_case")
        (cd $(dirname "$0")/.. && make subject_lower_case)
    ;;
    "su_upper_case")
        (cd $(dirname "$0")/.. && make subject_upper_case)
    ;;
    "su_atoi")
        (cd $(dirname "$0")/.. && make subject_atoi)
    ;;
    "su_value_ascii")
        (cd $(dirname "$0")/.. && make subject_value_ascii)
    ;;
    "su_index_letter")
        (cd $(dirname "$0")/.. && make subject_index_letter)
    ;;
    *)
        echo -e ""$ansi_red"C_Craft: command not found$ansi_default"
    ;;
esac

rm -rf C_Craft
