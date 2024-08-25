ansi_light_blue="\033[94m"
ansi_pink="\033[95m"
ansi_red="\033[31m"
ansi_sred="\033[1;38;5;197m"
ansi_green="\033[32m"
ansi_blue="\033[34m"
ansi_yellow="\033[93m"
ansi_line="\033[4m"
ansi_bold="\033[1m"
ansi_default="\033[0m"

clear
bash ~/C_Craft/Processing/Scripts/print_cCraft.sh 
echo -e "${ansi_blue}\n\tEXAM 00\n ${ansi_green}Confirm Registration?${ansi_default}\n\t  (y/Y)"
echo -n "> "
read confirm
if [[ $confirm != "y" && $confirm != "Y" ]]; then
	echo -e "${ansi_red}Cancel exam${ansi_default}"
	exit ;
fi

enter()
{
	echo -e "\n[Press ENTER to continue...]"
	read
}

echo -e "${ansi_bold}Welcome ${ansi_green}$(whoami)${ansi_default}${ansi_bold} to Exam 00 in C Craft"
echo -e "\n\t🎓 Once completed, you can correct your project with : ${ansi_blue}rateme${ansi_default}"
echo -e "${ansi_bold}\t\tIf your level is validated, you move on to the next level 🎉"
echo -e "\t\tIf not, you have to start again ❌"
echo -e "\t\tAttention, the exam has a specific time to complete it. ⏱${ansi_default}"
enter

end_time=$(date -d "1 hours" +%s)
end_date=$(date -d "+1 hours" "+%d/%m/%y %H:%M")
local=~/C_Craft/Tests/Exams/exam00
back=../../../../
mkdir $back/CC_Exam00 2> /dev/null

names_ex=(inc subtract occ_y swap)

exercise0()
{
	touch $back/CC_Exam00/${names_ex[0]}.c 2> /dev/null
	touch ~/C_Craft/Tests/Exams/exam00/Tests_Exam00/${names_ex[0]} 2> /dev/null
	echo -e "📝 Exercise name: Increment\n\n🚩 Required file: inc.c\n\n📚 Subject: Create a function that takes a pointer to an integer, that adds one to the number.\n\n🔦 Will be prototyped as follows:\n------------------\nvoid ft_inc(int *nb);\n------------------\n\n🔗 Allowed function: none." > $back/CC_Exam00/subject_${names_ex[0]}.txt 2> /dev/null
	echo "=================================================================="
	echo ""
	echo -e "C Craft: "$ansi_pink"exam00$ansi_default | Current Grade: "$ansi_green"$point$ansi_default / 100"
	echo -e ""
	echo -e "  Level "$ansi_green"0$ansi_default:"
	echo -e "    "$ansi_green"${names_ex[0]}$ansi_default for 25 points"
	echo -e ""
	echo -e "Assignment: "$ansi_green"${names_ex[0]}$ansi_default for "$ansi_green"25 point$ansi_default"
	echo -e ""
	echo -e "Subject location:  ${ansi_green}CC_Exam00/subject_${names_ex[0]}.txt$ansi_default"
	echo -e "Exercise location: ${ansi_blue}CC_Exam00/${names_ex[0]}.c$ansi_default"
	echo -e ""
	echo -e "End date: "$ansi_pink"$end_date$ansi_default"
	echo -e "\n=================================================================="
}

exercise1()
{
	touch $back/CC_Exam00/${names_ex[1]}.c 2> /dev/null
	touch ~/C_Craft/Tests/Exams/exam00/Tests_Exam00/${names_ex[1]} 2> /dev/null
	echo -e "📝 Exercise name: Subtract\n\n🚩 Required file: subtract.c\n\n📚 Subject: Create a function that subtracts an integer from an integer pointed by a pointer.the parameters are an a pointer pointing to an integer and integer.\n\n🔦 Will be prototyped as follows:\n------------------\nvoid ft_subtract(int *ptr, int a);\n------------------\n\n🔗 Allowed function: none." > $back/CC_Exam00/subject_${names_ex[1]}.txt 2> /dev/null
	echo "=================================================================="
	echo ""
	echo -e "C Craft: "$ansi_pink"exam00$ansi_default | Current Grade: "$ansi_green"$point$ansi_default / 100"
	echo -e ""
	echo -e "  Level "$ansi_green"1$ansi_default:"
	echo -e "    "$ansi_green"${names_ex[1]}$ansi_default for 25 points"
	echo -e ""
	echo -e "Assignment: "$ansi_green"${names_ex[1]}$ansi_default for "$ansi_green"25 point$ansi_default"
	echo -e ""
	echo -e "Subject location:  ${ansi_green}CC_Exam00/subject_${names_ex[1]}.txt$ansi_default"
	echo -e "Exercise location: ${ansi_blue}CC_Exam00/${names_ex[1]}.c$ansi_default"
	echo -e ""
	echo -e "End date: "$ansi_pink"$end_date$ansi_default"
	echo -e "\n=================================================================="
}

exercise2()
{
	touch $back/CC_Exam00/${names_ex[2]}.c 2> /dev/null
	touch ~/C_Craft/Tests/Exams/exam00/Tests_Exam00/${names_ex[2]} 2> /dev/null
	echo -e "📝 Exercise name: Occurrence Y\n\n🚩 Required file: occ_Y.c\n\n📚 Subject: Create a function that returns the number of 'Y' in a given string.\n\n🔦 Will be prototyped as follows:\n------------------\nint occ_y(char *str);\n------------------\n\n🔗 Allowed function: none." > $back/CC_Exam00/subject_${names_ex[2]}.txt 2> /dev/null
	echo "=================================================================="
	echo ""
	echo -e "C Craft: "$ansi_pink"exam00$ansi_default | Current Grade: "$ansi_green"$point$ansi_default / 100"
	echo -e ""
	echo -e "  Level "$ansi_green"2$ansi_default:"
	echo -e "    "$ansi_green"${names_ex[2]}$ansi_default for 25 points"
	echo -e ""
	echo -e "Assignment: "$ansi_green"${names_ex[2]}$ansi_default for "$ansi_green"25 point$ansi_default"
	echo -e ""
	echo -e "Subject location:  ${ansi_green}CC_Exam00/subject_${names_ex[2]}.txt$ansi_default"
	echo -e "Exercise location: ${ansi_blue}CC_Exam00/${names_ex[2]}.c$ansi_default"
	echo -e ""
	echo -e "End date: "$ansi_pink"$end_date$ansi_default"
	echo -e "\n=================================================================="
}

exercise3()
{
	touch $back/CC_Exam00/${names_ex[3]}.c 2> /dev/null
	touch ~/C_Craft/Tests/Exams/exam00/Tests_Exam00/${names_ex[3]} 2> /dev/null
	echo -e "📝 Exercise name: Swap\n\n🚩 Required file: ft_swap.c\n\n📚 Subject: Write a function that swaps the contents of two integers the addresses of which are passed as parameters.\n\n🔦 Will be prototyped as follows:\n------------------\nvoid ft_swap(int *x, int *y);\n------------------\n\n🔗 Allowed function: none." > $back/CC_Exam00/subject_${names_ex[3]}.txt 2> /dev/null
	echo "=================================================================="
	echo ""
	echo -e "C Craft: "$ansi_pink"exam00$ansi_default | Current Grade: "$ansi_green"$point$ansi_default / 100"
	echo -e ""
	echo -e "  Level "$ansi_green"3$ansi_default:"
	echo -e "    "$ansi_green"${names_ex[3]}$ansi_default for 25 points"
	echo -e ""
	echo -e "Assignment: "$ansi_green"${names_ex[3]}$ansi_default for "$ansi_green"25 point$ansi_default"
	echo -e ""
	echo -e "Subject location:  ${ansi_green}CC_Exam00/subject_${names_ex[3]}.txt$ansi_default"
	echo -e "Exercise location: ${ansi_blue}CC_Exam00/${names_ex[3]}.c$ansi_default"
	echo -e ""
	echo -e "End date: "$ansi_pink"$end_date$ansi_default"
	echo -e "\n=================================================================="
}

ex=4
i=0
point=0

while [[ $i -lt $ex ]]; do
	exercise"$i"
	echo -e "Use the ${ansi_blue}rateme$ansi_default command to be graded, or ${ansi_blue}help$ansi_default to get some help."
	echo -en $ansi_yellow"ExamCraft$ansi_default > "
	read cmd
	if [ $cmd == "rateme" ]; then
		if [[ $(date +%s) -gt $end_time ]]; then
			echo -e "${ansi_red}${ansi_bold}TIME OUT${ansi_default}"
			echo "Exam time is up, try to be faster next time."
			break ;
		fi
		echo -e "before continuing, please make ${ansi_red}ABSOLUTELY SURE${ansi_default} that you are in the right directory,\nthat you didn't forget anything, etc... If your assignment is wrong, you will have the same assignment\n\n${ansi_red}Are you sure?${ansi_default} [y/Y]"
		read yon
		if [[ $yon == "y" || $yon == "Y" ]]; then
			echo -e "${ansi_blue}Waiting..."
			sleep 0.5
			echo -e "${ansi_blue}Waiting..."
			sleep 0.5
			echo -e "${ansi_blue}Waiting...${ansi_default}"
			gcc -Wall -Wextra -Werror Tests_Exam00/ts_${names_ex[$i]}.c -o Tests_Exam00/exam 2> /dev/null && (cd Tests_Exam00 && ./exam)
			sum=$(cat $local/Tests_Exam00/${names_ex[$i]})
			sleep 1
			if [[ $sum == "1" ]]; then
				echo -e "\n${ansi_green}>>>>>>>>>> SUCCESS <<<<<<<<<<${ansi_default}\n"
				((i++))
				((point += 25))
			else
				echo -e "\n${ansi_red}>>>>>>>>>> FAILURE <<<<<<<<<<${ansi_default}\n\nYou have failed the assignment: There seems to be an error"
			fi
			enter
			if [[ $i -eq $ex ]]; then
				echo -e "C Craft: "$ansi_pink"exam00$ansi_default | Current Grade: "$ansi_green"$point$ansi_default / 100"
				echo -e "\n${ansi_green}${ansi_bold}Congratulations, you have successfully completed the exam.\nGood luck🍀🤞${ansi_default}"
			fi
		fi
	elif [[ $cmd == "finish" ]]; then
		echo -e "Are you sure you want to ${ansi_red}exit$ansi_default the exam?"
		echo -e "All your progress will be ${ansi_red}lost$ansi_default."
		echo -e "Type ${ansi_green}yes$ansi_default. to confirm."
		echo -n "> "
		read exit
		if [[ $exit == "yes" ]]; then
			echo "Oops, you're out of the exam you loser LOL"
			break ;
		else
			echo "***Abort***"
			enter
		fi
	elif [[ $cmd == "status" ]]; then
		continue ;
	elif [[ $cmd == "help" ]]; then
		echo -e "Commands:\n\t"$ansi_green"help:"$ansi_default" display this help\n\t"$ansi_green"status:"$ansi_default" display information about the exam\n\t"$ansi_green"rateme:"$ansi_default" grade your exercise\n\t"$ansi_green"finish:"$ansi_default" exit the exam"
		enter
	else
		echo -e ""$ansi_red"C_Craft: command not found$ansi_default"
		enter
	fi
done

i=0
rm $back/CC_Exam00/exam  2> /dev/null
while [[ $i -lt $ex ]]; do
	rm ~/C_Craft/Tests/Exams/exam00/Tests_Exam00/${names_ex[$i]} 2> /dev/null
	((i++))
done