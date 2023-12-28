#!/bin/shell
(cd ~ && git clone https://github.com/mr-youbella/C_Craft)
sudo apt-get install whiptail || sudo yum install newt || sudo dnf install newt || brew install newt
echo >> ~/.bashrc; echo "alias ccraft='bash ~/C_Craft/Processing/Scripts/alias.sh'" >> ~/.bashrc
echo >> ~/.zshrc; echo "alias ccraft='bash ~/C_Craft/Processing/Scripts/alias.sh'" >> ~/.zshrc
source ~/.bashrc
source ~/.zshrc
clear
echo -e "\033[32mDownloaded successfully, write \033[34mccraft\033[32m to understand how the program works\033[0m".
exec bash
