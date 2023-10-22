// PROGRAM MENDATA KARAKTER GENSHIN IMPACT
// Start 30, Jun, 2023
#include "functions.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

Character characterBuffer, output;
int main()
{

    fstream MyFileStream;
    string command;
    MyFileStream.open("Data_My_Character.bin", ios::out | ios::in | ios::binary);
    if (!MyFileStream.is_open())
    {
        cout << "Gagal membuka file!" << endl;
        MyFileStream.close();
        MyFileStream.open("Data_My_Character.bin", ios::trunc | ios::out | ios::in | ios::binary);
    }
    cout << "Command Prompt : ";
    getline(cin, command);

    if (command == "help" || command == "-h")
    {
        cout << "help   --h  (Menampilakan list command)" << endl;
        cout << "input character   --ic  (Untuk memasukan data)" << endl;
        cout << "read data   --rd  (Untuk membaca data )" << endl;
    }
    else if (command == "input character" || command == "--ic")
    {

        input_data_character();

        injection_data(characterBuffer, MyFileStream);
        MyFileStream.close();
        cout << endl;
        cout << "INPUT BERHASIL!!" << endl;
    }
    else if (command == "read data" || command == "--rd")
    {
        cout << "berjalan" <<endl;
        output = read_data(0, MyFileStream);
        // std::cout << "Name : " << output.name << std::endl;
        // std::cout << "Element : " << output.element << std::endl;
        // std::cout << "Weapon Type : " << output.weaponType << std::endl
        //           << std::endl;

        // std::cout << "---------------WEAPON" << std::endl;
        // std::cout << "Name : " << output.useWeapon.name << std::endl;
        // std::cout << "lvl : " << output.useWeapon.lv << std::endl;
        // std::cout << "Rank Refinement : " << output.useWeapon.rankRefinement << std::endl
        //           << std::endl;

        // std::cout << "---------------ARTIFACT FLOWER OF LIFE" << std::endl;
        // std::cout << "Name : " << output.useArtifact.flowerOfLife.buffer.name << std::endl;
        // std::cout << "Lvl : " << output.useArtifact.flowerOfLife.buffer.lv << std::endl;
        // std::cout << "Main Stat : " << output.useArtifact.flowerOfLife.buffer.mainStat << std::endl;
        // std::cout << "Bonus Stat : " << output.useArtifact.flowerOfLife.buffer.bonusStat << std::endl;
        // for (int i = 1; i < 3; i++)
        // {
        //     std::cout << "Set " << (i * 2) << " : " << output.useArtifact.flowerOfLife.buffer.set[i - 1] << std::endl;
        // }
        // std::cout << std::endl;

        // std::cout << "---------------ARTIFACT PLUME OF DEATH" << std::endl;
        // std::cout << "Name : " << output.useArtifact.plumeOfDeath.buffer.name << std::endl;
        // std::cout << "Lvl : " << output.useArtifact.plumeOfDeath.buffer.lv << std::endl;
        // std::cout << "Main Stat : " << output.useArtifact.plumeOfDeath.buffer.mainStat << std::endl;
        // std::cout << "Bonus Stat : " << output.useArtifact.plumeOfDeath.buffer.bonusStat << std::endl;
        // for (int i = 1; i < 3; i++)
        // {
        //     std::cout << "Set " << (i * 2) << " : " << output.useArtifact.plumeOfDeath.buffer.set[i - 1] << std::endl;
        // }
        // std::cout << std::endl;

        // std::cout << "---------------ARTIFACT SANDS OF EON" << std::endl;
        // std::cout << "Name : " << output.useArtifact.sandsOfEon.buffer.name << std::endl;
        // std::cout << "Lvl : " << output.useArtifact.sandsOfEon.buffer.lv << std::endl;
        // std::cout << "Main Stat : " << output.useArtifact.sandsOfEon.buffer.mainStat << std::endl;
        // std::cout << "Bonus Stat : " << output.useArtifact.sandsOfEon.buffer.bonusStat << std::endl;
        // for (int i = 1; i < 3; i++)
        // {
        //     std::cout << "Set " << (i * 2) << " : " << output.useArtifact.sandsOfEon.buffer.set[i - 1] << std::endl;
        // }
        // std::cout << std::endl;

        // std::cout << "---------------ARTIFACT GOBLET OF EONOTHEM" << std::endl;
        // std::cout << "Name : " << output.useArtifact.gobletOfEonothem.buffer.name << std::endl;
        // std::cout << "Lvl : " << output.useArtifact.gobletOfEonothem.buffer.lv << std::endl;
        // std::cout << "Main Stat : " << output.useArtifact.gobletOfEonothem.buffer.mainStat << std::endl;
        // std::cout << "Bonus Stat : " << output.useArtifact.gobletOfEonothem.buffer.bonusStat << std::endl;
        // for (int i = 1; i < 3; i++)
        // {
        //     std::cout << "Set " << (i * 2) << " : " << output.useArtifact.gobletOfEonothem.buffer.set[i - 1] << std::endl;
        // }
        // std::cout << std::endl;

        // std::cout << "---------------ARTIFACT GOBLET OF EONOTHEM" << std::endl;
        // std::cout << "Name : " << output.useArtifact.gobletOfEonothem.buffer.name << std::endl;
        // std::cout << "Lvl : " << output.useArtifact.gobletOfEonothem.buffer.lv << std::endl;
        // std::cout << "Main Stat : " << output.useArtifact.gobletOfEonothem.buffer.mainStat << std::endl;
        // std::cout << "Bonus Stat : " << output.useArtifact.gobletOfEonothem.buffer.bonusStat << std::endl;
        // for (int i = 1; i < 3; i++)
        // {
        //     std::cout << "Set " << (i * 2) << " : " << output.useArtifact.gobletOfEonothem.buffer.set[i - 1] << std::endl;
        // }
        // std::cout << std::endl;

        // std::cout << "---------------ARTIFACT CIRCLET OF LOGOS" << std::endl;
        // std::cout << "Name : " << output.useArtifact.circletOfLogos.buffer.name << std::endl;
        // std::cout << "Lvl : " << output.useArtifact.circletOfLogos.buffer.lv << std::endl;
        // std::cout << "Main Stat : " << output.useArtifact.circletOfLogos.buffer.mainStat << std::endl;
        // std::cout << "Bonus Stat : " << output.useArtifact.circletOfLogos.buffer.bonusStat << std::endl;
        // for (int i = 1; i < 3; i++)
        // {
        //     std::cout << "Set " << (i * 2) << " : " << output.useArtifact.circletOfLogos.buffer.set[i - 1] << std::endl;
        // }
        // std::cout << std::endl;

        // std::cout << "---------------TALENT" << std::endl;
        // std::cout << "Normal Attack : " << output.talent.lvNormalAttack << std::endl;
        // std::cout << "Elemental Skill : " << output.talent.lvElementalSkill << std::endl;
        // std::cout << "Bursh : " << output.talent.lvBrush << std::endl;

        // std::cout << "---------------Costilation COSTILATION" << std::endl;
        // std::cout << "Normal Attack : " << output.C.costilation << std::endl;
    }
    MyFileStream.close();
    return 0;
}