#!/bin/bash
source $(dirname "$0")/ansi.sh

name_exercises=(sum digit strlen saverge even power str_is_alpha str_is_numbers bindec upper_case lower_case atoi value_ascii index_letter \
 factorial strcmp char_count no_space calc str_rev strcapitalize fibonacci strstr itoa strchr check_email) #26 Exercises
spin=("⠷" "⠃" "⠇" "⠧" "⠷" "⠿" "⠧" "⠇" "⠃")
i=0
check_ex=0
exe_not_found=()

loading(){
    index=0
    s=0
    while [[ $s -lt $1 ]]; do
        printf "\r%s" "${spin[$index]}"
        sleep 0.1
        ((index++))
        if [[ $index -eq 9 ]]; then
            index=0
        fi
        ((s++))
    done
}

clear
echo -e "$ansi_pink╔══════════════════════════════════════════════════════════════════════════════╗"
echo -e "║             "$ansi_green"Tests all exercises available on the C Craft program$ansi_default             $ansi_light_blue║"
echo -e "╚═══════════════════════╦══════════════════════════════╦═══════════════════════╝"
echo -e "                        ║           "$ansi_yellow"Tests All$ansi_pink          ║                        "
echo -e "                        ╚══════════════════════════════╝                        "

loading 20

while [ $i -lt 26 ]; do
    if [ -e ../../ft_${name_exercises[$i]}.c ]; then 
        echo; echo -e ""$ansi_blue$ansi_bold$ansi_line"Testing ${name_exercises[$i]}$ansi_default"; echo
        echo -ne $ansi_yellow ; loading 10 ; echo -ne $ansi_default ; echo
        gcc -Wall -Wextra -Werror $(dirname "$0")/../../Tests/Functions/fcc_${name_exercises[$i]}.c -o fcc && \
        ./fcc && \
        rm fcc || \
        echo -e ""$ansi_red"There seems to be an error: Please check the exercise file in terms of Syntax and Prototype and verify that the main function does not exist in the exercise file.$ansi_default"
    else 
        exe_not_found[$check_ex]=${name_exercises[$i]}
        ((check_ex++))
    fi
    ((i++))
done

i=0
if [[ $check_ex -gt 0 ]]; then
    echo
    echo -en ""$ansi_red"Note: $check_ex exercises not found $ansi_blue" 
    while [ $i -lt $check_ex ]; do
        echo -ne "${exe_not_found[$i]} "
        ((i++))
    done
    echo -e "$ansi_default"
fi
