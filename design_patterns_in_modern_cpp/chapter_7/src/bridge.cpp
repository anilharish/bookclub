// C++ Headers
#include <iostream>

// Internal Headers
#include <bridge.hpp>

/**
 * The Bridge
 */

Bridge::Bridge(Workshop* backend)
{
    implementation = backend;
}

/**
 * Produce Parts
 */
ProduceParts:: ProduceParts(Workshop* backend) : Bridge(backend) {}

void ProduceParts::build_vehicle()
{
    std::cout << "**************************************************************************************************************\n";
    std::cout << "*************************************           PRODUCE PARTS FOR           **********************************\n";
    std::cout << "**************************************************************************************************************\n";
    implementation->execute_work_order();
}

/**
 * Assemble Vehicle
 */
Assemble::Assemble(Workshop* backend) : Bridge(backend) {}

void Assemble::build_vehicle()
{
    std::cout << "==============================================================================================================\n";
    std::cout << "=====================================               ASSEMBLE                 =================================\n";
    std::cout << "==============================================================================================================\n";

    implementation->execute_work_order();
}

/**
 * Background Implementation
 */
void Car::execute_work_order()
{
    std::cout << "                                  _.-=\"_-         _ \n";
    std::cout << "                         _.-=\"   _-          | ||\"\"\"\"\"\"\"---._______     __.. \n";
    std::cout << "             ___.===""""-.______-,,,,,,,,,,,,`-''----\" \"\"\"\"\"       \"\"\"\"\"  __' \n";
    std::cout << "      __.--\"\"     __        ,'                   o \\           __        [__| \n";
    std::cout << " __-""=======.--""  ""--.=================================.--""  ""--.=======: \n";
    std::cout << "]       [w] : /        \\ : |========================|    : /        \\ :  [w] : \n";
    std::cout << "V___________:|          |: |========================|    :|          |:   _-\" \n";
    std::cout << " V__________: \\        / :_|=======================/_____: \\        / :__-\" \n";
    std::cout << " -----------'  \"-____-\"  `-------------------------------'  \"-____-\" \n";
    std::cout << " \n";
}

void Motorcycle::execute_work_order()
{

    std::cout << "                       ,S/  .e.##ee\n";
    std::cout << "                     ,SS/_ /#####""\n";
    std::cout << "                   ,SSSSSS`|##|\n";
    std::cout << "                 ,'|SSSSSS/%##|\n";
    std::cout << "                 | ;SSSSS/%%%/ .-\"\"-._                           __..ooo._.sSSSSSSSSS\"7.\n";
    std::cout << "                 |/SSSSS/%%%/.'       `._ __               _.od888888888888\"'  '\"SSSSS\"\n";
    std::cout << "             ___  `\"SSS/%%%/\"-.,sSSs._   8888o._    __.o888888888""SS""    `-._    `7Sb\n";
    std::cout << "      _.sssSSSSSSSSSSS/`%%/ ,sSSSSSSSSS-.888888888888888888888\"'.S\"         ,SSS\"\"   `7b\n";
    std::cout << "   ,+\"\"       ```\"\"SS/%%./,sSSSSSSSS\".   `\"888888888888888\"'.sSS\"         ,SS\"'        `S.\n";
    std::cout << "                    /%%%/sSSSSSSSS\"   `s.   `\"88888888\"'.sSSSS\"         ,S\"'             7\n";
    std::cout << "                   /%%%/ `SSSSSSS$$,..sSS`-.   `\"88'.sSSSSSSSS._     ,-'\n";
    std::cout << "                  /%%%/    `SSSS$$$$SSS\"\\`-.   `\"SSSSSS\"  8\"\"\"7.-'\n";
    std::cout << "                  /`%/      `SS$$$SSS,dP,s.\\//`-.   `SS\" ,'`8       ,ee888888ee.\n";
    std::cout << "        ,oo8888oo/ /         `"""",d88Pd8888./,-'/`.  `,-._`d'    ,d88888888888888b.\n";
    std::cout << "     ,d888888888/ /8b.          d8888Pd8888888bd88b`.  :_._`8   ,888888\"'    '\"\"88888.\n";
    std::cout << "   ,888P'      / /\"888b.       d88888`8888888Pd8888 :  :_`-.( ,d8888.__           7888b.\n";
    std::cout << "  d88P        / /   `788b     (88888:. `8888Pd88888 ;  ; `-._ 8888P_Z_.>-""--.._   `8888\n";
    std::cout << " d88'     ,--/ /      `88b     `88888b`. `8P 78888\";  ;      `\"*88_,\"   s88s.       `888b\n";
    std::cout << "d88'    ,',$/ /$$$$.   `88b      `8888b `. `\"'88\"_/_,'`-._         `-.d8\"88\"8P.      `888.\n";
    std::cout << "888    ; ,$$$$$$$$$'    888        `\"8'   `---------------`-.._      8888888888       888'\n";
    std::cout << "888    : `$$$$$$$':     888                                 '888b`-._8s888888\"P      .888'\n";
    std::cout << "788.   `  `$$$$'  ;     88P                                  8888.   \"8878888P'      d888\n";
    std::cout << " 88b    `.  `\"' ,'     d88'                                  '888b     '88s8\"'     .d888'\n";
    std::cout << " `88b.    `-..-'      d88'                                    '888b.             .dd888'\n";
    std::cout << "   788b.            ,888'                                       7888b._       _.d8888P\n";
    std::cout << "    `7888oo..__..oo888'                                          `\"8888888888888888\"'\n";
    std::cout << "      `\"7888888888P\"'                                               `\"788 mGk 8P\"'\n";
    std::cout << "\n";
}