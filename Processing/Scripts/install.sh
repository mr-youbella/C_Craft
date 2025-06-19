#!/bin/bash

echo -e "\033[34mPlease wait, Program is loading...\033[0m"
sleep 1
if [[ -e ~/C_Craft ]]; then
	rm -rf ~/C_Craft
fi
(cd ~ && git clone https://github.com/mr-youbella/C_Craft > /dev/null 2>&1)
sudo apt-get install whiptail 2> /dev/null || sudo yum install newt 2> /dev/null || sudo dnf install newt 2> /dev/null || brew install newt 2> /dev/null || pkg install whiptail 2> /dev/null
sudo apt-get install make 2> /dev/null || sudo yum install make 2> /dev/null || sudo dnf install make 2> /dev/null || pkg install make 2> /dev/null
echo >> ~/.bashrc; echo "alias ccraft='bash ~/C_Craft/Processing/Scripts/alias.sh'" >> ~/.bashrc
echo >> ~/.zshrc; echo "alias ccraft='bash ~/C_Craft/Processing/Scripts/alias.sh'" >> ~/.zshrc
source ~/.bashrc
source ~/.zshrc
clear
echo -e "\033[32mDownloaded successfully, write \033[34mccraft\033[32m to understand how the program works\033[0m".
