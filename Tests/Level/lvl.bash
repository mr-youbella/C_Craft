source ~/C_Craft/Processing/Scripts/ansi.sh

atoi=$(cat ~/C_Craft/Tests/Level/atoi)
bintdec=$(cat ~/C_Craft/Tests/Level/bintdec)
calc=$(cat ~/C_Craft/Tests/Level/calc)
char_count=$(cat ~/C_Craft/Tests/Level/char_count)
check_email=$(cat ~/C_Craft/Tests/Level/check_email)
digit=$(cat ~/C_Craft/Tests/Level/digit)
even=$(cat ~/C_Craft/Tests/Level/even)
factorial=$(cat ~/C_Craft/Tests/Level/factorial)
fibonacci=$(cat ~/C_Craft/Tests/Level/fibonacci)
index_letter=$(cat ~/C_Craft/Tests/Level/index_letter)
itoa=$(cat ~/C_Craft/Tests/Level/itoa)
lower_case=$(cat ~/C_Craft/Tests/Level/lower_case)
max_num=$(cat ~/C_Craft/Tests/Level/max_num)
min_num=$(cat ~/C_Craft/Tests/Level/min_num)
no_space=$(cat ~/C_Craft/Tests/Level/no_space)
power=$(cat ~/C_Craft/Tests/Level/power)
rev_int_arr=$(cat ~/C_Craft/Tests/Level/rev_int_arr)
sort_int_arr=$(cat ~/C_Craft/Tests/Level/sort_int_arr)
saverge=$(cat ~/C_Craft/Tests/Level/saverge)
str_is_alpha=$(cat ~/C_Craft/Tests/Level/str_is_alpha)
str_is_numbers=$(cat ~/C_Craft/Tests/Level/str_is_numbers)
str_rev=$(cat ~/C_Craft/Tests/Level/str_rev)
strcapitalize=$(cat ~/C_Craft/Tests/Level/strcapitalize)
strchr=$(cat ~/C_Craft/Tests/Level/strchr)
strcmp=$(cat ~/C_Craft/Tests/Level/strcmp)
strlen=$(cat ~/C_Craft/Tests/Level/strlen)
strstr=$(cat ~/C_Craft/Tests/Level/strstr)
sum=$(cat ~/C_Craft/Tests/Level/sum)
swap_bits=$(cat ~/C_Craft/Tests/Level/swap_bits)
upper_case=$(cat ~/C_Craft/Tests/Level/upper_case)
value_ascii=$(cat ~/C_Craft/Tests/Level/value_ascii)
memset=$(cat ~/C_Craft/Tests/Level/memset)
striteri=$(cat ~/C_Craft/Tests/Level/striteri)

point=$((atoi + bintdec + calc + char_count + check_email + digit + even + factorial + fibonacci + index_letter + itoa + lower_case + max_num + min_num + no_space + power + rev_int_arr + sort_int_arr + saverge + str_is_alpha + str_is_numbers + str_rev + strcapitalize +  strchr + strcmp + strlen + strstr + sum + swap_bits + upper_case + value_ascii + memset + striteri))
name_exercises=(sum digit strlen saverge even power str_is_alpha str_is_numbers bintdec upper_case lower_case atoi value_ascii index_letter \
 factorial strcmp char_count no_space calc str_rev strcapitalize fibonacci strstr itoa strchr check_email max_num min_num rev_int_arr sort_int_arr swap_bits memset striteri) #33 Exercises

if [[ $point -ge 0 && $point -le 10 ]]; then
	lvl="LVL 1"
elif [[ $point -ge 11 && $point -le 30 ]]; then
	lvl="LVL 2"
elif [[ $point -ge 31 && $point -le 50 ]]; then
	lvl="LVL 3"
elif [[ $point -ge 51 && $point -le 70 ]]; then
	lvl="LVL 4"
elif [[ $point -ge 71 && $point -le 90 ]]; then
	lvl="LVL 5"
elif [[ $point -ge 91 && $point -le 110 ]]; then
	lvl="LVL 6"
elif [[ $point -ge 111 && $point -le 130 ]]; then
	lvl="LVL 7"
elif [[ $point -ge 131 && $point -le 150 ]]; then
	lvl="LVL 8"
elif [[ $point -ge 151 && $point -le 170 ]]; then
	lvl="LVL 9"
elif [[ $point -ge 171 && $point -le 190 ]]; then
	lvl="LVL 10"
elif [[ $point -ge 191 && $point -le 210 ]]; then
	lvl="LVL 11"
elif [[ $point -ge 211 && $point -le 230 ]]; then
	lvl="LVL 12"
elif [[ $point -ge 231 && $point -le 250 ]]; then
	lvl="LVL 13"	
fi


i=0
echo -en "$ansi_red"
echo -e "╔══════════════════════════════════════════════════════════════════════════╗"
echo -n "       "
echo -en $ansi_blue
if [[ $point -ge 0 && $point -le 10 ]]; then
	i=0
	while [ $i -le $point ]; do
		sleep 0.1
		echo -n "###"
		((i++))
	done
elif [[ $point -ge 11 && $point -le 30 ]]; then
	i=11
	while [ $i -le $point ]; do
		sleep 0.1
		echo -n "###"
		((i++))
	done
elif [[ $point -ge 31 && $point -le 50 ]]; then
	i=31
	while [ $i -le $point ]; do
		sleep 0.1
		echo -n "###"
		((i++))
	done
elif [[ $point -ge 51 && $point -le 70 ]]; then
	i=51
	while [ $i -le $point ]; do
		sleep 0.1
		echo -n "###"
		((i++))
	done
elif [[ $point -ge 71 && $point -le 90 ]]; then
	i=71
	while [ $i -le $point ]; do
		sleep 0.1
		echo -n "###"
		((i++))
	done
elif [[ $point -ge 91 && $point -le 110 ]]; then
	i=91
	while [ $i -le $point ]; do
		sleep 0.1
		echo -n "###"
		((i++))
	done
elif [[ $point -ge 111 && $point -le 130 ]]; then
	i=111
	while [ $i -le $point ]; do
		sleep 0.1
		echo -n "###"
		((i++))
	done
elif [[ $point -ge 131 && $point -le 150 ]]; then
	i=131
	while [ $i -le $point ]; do
		sleep 0.1
		echo -n "###"
		((i++))
	done
elif [[ $point -ge 151 && $point -le 170 ]]; then
	i=151
	while [ $i -le $point ]; do
		sleep 0.1
		echo -n "###"
		((i++))
	done
elif [[ $point -ge 171 && $point -le 190 ]]; then
	i=171
	while [ $i -le $point ]; do
		sleep 0.1
		echo -n "###"
		((i++))
	done
elif [[ $point -ge 191 && $point -le 210 ]]; then
	i=191
	while [ $i -le $point ]; do
		sleep 0.1
		echo -n "###"
		((i++))
	done
elif [[ $point -ge 211 && $point -le 230 ]]; then
	i=211
	while [ $i -le $point ]; do
		sleep 0.1
		echo -n "###"
		((i++))
	done
elif [[ $point -ge 231 && $point -le 250 ]]; then
	i=231
	while [ $i -le $point ]; do
		sleep 0.1
		echo -n "###"
		((i++))
	done	
fi
echo -en $ansi_red
echo -e ""
echo -e "╚══════════════════════════════════════════════════════════════════════════╝"
echo -en $ansi_blue
echo "                           ║You level is $lvl║"
echo -en $ansi_green
echo "                         ══════════════════════════"
echo "                           ║You have $point points║"
echo "                         ══════════════════════════"
echo -en "$ansi_default\n"

i=0
while [[ i -lt 33 ]]; do
	if [ $(cat ~/C_Craft/Tests/Level/${name_exercises[i]}) > 0 ]; then
		echo -ne "${name_exercises[i]} -> $ansi_green"
		cat ~/C_Craft/Tests/Level/${name_exercises[i]}
		echo -e " points$ansi_default"
	fi
	((i++))
done

rm 0 2> /dev/null