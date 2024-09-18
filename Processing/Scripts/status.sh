#!/bin/bash
source "$(dirname "$0")/ansi.sh"

i=0
check_ex=0
name_exercises=(sum digit strlen saverge even power str_is_alpha str_is_numbers bintdec upper_case lower_case atoi value_ascii index_letter factorial strcmp \
 char_count no_space calc str_rev strcapitalize fibonacci strstr itoa strchr check_email max_num min_num rev_int_arr sort_int_arr swap_bits memset striteri) #33 Exercises
exe_not_found=()

echo -e "${ansi_yellow}Completed exercises: $ansi_default"
while [[ $i -lt 33 ]]; do
	if [ $(cat ~/C_Craft/Tests/Level/${name_exercises[i]}) > 0 ]; then
		echo -e "${name_exercises[i]}: \033[42;1m SUCCESS \033[0m"
	else
		exe_not_found[$check_ex]=${name_exercises[$i]}
        ((check_ex++))
	fi
	((i++))
done
i=0
if [[ $check_ex -gt 0 ]]; then
    echo
    echo -en "\033[41;1m $check_ex exercises not success: \033[0m\033[34m " 
    while [ $i -lt $check_ex ]; do
        echo -ne "${exe_not_found[$i]} "
        ((i++))
    done
    echo -e "\033[0m"
fi

rm 0 2> /dev/null
