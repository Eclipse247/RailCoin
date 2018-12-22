// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2018, The RailCoin Project
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
     "\n ______    _______  ___   ___      _______  _______  ___   __    _\n" 
     "|    _ |  |   _   ||   | |   |    |       ||       ||   | |  |  | |\n"
     "|   | ||  |  |_|  ||   | |   |    |       ||   _   ||   | |   |_| |\n"
     "|   |_||_ |       ||   | |   |    |       ||  | |  ||   | |       |\n"
     "|    __  ||       ||   | |   |___ |      _||  |_|  ||   | |  _    |\n"
     "|   |  | ||   _   ||   | |       ||     |_ |       ||   | | | |   |\n"
     "|___|  |_||__| |__||___| |_______||_______||_______||___| |_| |___|\n"  

const std::string nonWindowsAsciiArt = 
     "\n	                                                   \n"
        "██████╗  █████╗ ██╗██╗      ██████╗ ██████╗ ██╗███╗   ██╗\n"
        "██╔══██╗██╔══██╗██║██║     ██╔════╝██╔═══██╗██║████╗  ██║\n"
        "██████╔╝███████║██║██║     ██║     ██║   ██║██║██╔██╗ ██║\n"
        "██╔══██╗██╔══██║██║██║     ██║     ██║   ██║██║██║╚██╗██║\n"
        "██║  ██║██║  ██║██║███████╗╚██████╗╚██████╔╝██║██║ ╚████║\n"
        "╚═╝  ╚═╝╚═╝  ╚═╝╚═╝╚══════╝ ╚═════╝ ╚═════╝ ╚═╝╚═╝  ╚═══╝\n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
