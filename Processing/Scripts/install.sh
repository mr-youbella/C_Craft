#!/bin/shell
echo -e "\033[34mPlease wait, Program is loading...\033[0m"
if [[ -e ~/C_Craft ]]; then
	rm -rf ~/C_Craft
fi
(cd ~ && git clone https://github.com/mr-youbella/C_Craft > /dev/null 2>&1)
sudo apt-get install whiptail || sudo yum install newt || sudo dnf install newt || brew install newt || pkg install whiptail
sudo apt-get install make || sudo yum install make || sudo dnf install make || pkg install make
echo >> ~/.bashrc; echo "alias ccraft='bash ~/C_Craft/Processing/Scripts/alias.sh'" >> ~/.bashrc
echo >> ~/.zshrc; echo "alias ccraft='bash ~/C_Craft/Processing/Scripts/alias.sh'" >> ~/.zshrc
source ~/.bashrc
source ~/.zshrc
clear
echo -e "\033[32mDownloaded successfully, write \033[34mccraft\033[32m to understand how the program works\033[0m".
exec bash
