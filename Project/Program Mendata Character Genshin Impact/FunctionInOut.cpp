#include "functions.h"
#include <iostream>
#include <fstream>
extern Character characterBuffer, output;
// function
Character read_data(int position, std::fstream &MyFileStream)
{
    Character Buffer;
    MyFileStream.seekg(position);
    MyFileStream.read(reinterpret_cast<char *>(&Buffer), sizeof(Character));
    return Buffer;
}

void injection_data(Character &data, std::fstream &MyFileStream)
{

    MyFileStream.write(reinterpret_cast<char *>(&data), sizeof(Character));
}

void line()
{
    std::cout << "----------------------------------------------------------------------------------" << std::endl;
}

void input_data_character()
{

    // ~~~~~~~~~~~~~~~~~~~~~~~~~ CHARACTER DATA
    // This input for Name Character
    std::cout << "Character : ";
    std::getline(std::cin, characterBuffer.name);

    // ~~ Element Character
    std::cout << "Element : ";
    std::cin >> characterBuffer.element;

    // ~~ WeaponType
    std::cout << "Weapon Type: ";
    std::cin >> characterBuffer.weaponType;
    std::cin.ignore(); // Membersihkan buffer input

    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~ CHARACTER DATA END

    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~ USE WEAPON
    // ~~ Use Weapon Character
    std::cout << "Use Weapon : ";
    std::getline(std::cin, characterBuffer.useWeapon.name);

    // ~~ Lv Weapon
    std::cout << "Lv Weapon : ";
    std::cin >> characterBuffer.useWeapon.lv;
    std::cin.ignore(); // Membersihkan buffer input

    // ~~ Lv Rank Refinement Weapon
    std::cout << "Rank Refinement Weapon : ";
    std::cin >> characterBuffer.useWeapon.rankRefinement;
    std::cin.ignore(); // Membersihkan buffer input

    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~ USE WEAPON END

    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~ ARTIFACT

    // ++++++FLOWER OF LIFE++++++
    //  ~~ artifact flower of life Name
    std::cout << "Artifact Flower of Life : ";
    std::getline(std::cin, characterBuffer.useArtifact.flowerOfLife.buffer.name);

    // ~~ artifact flower of life Lv
    std::cout << "Artifact Flower of Life Lv : ";
    std::cin >> characterBuffer.useArtifact.flowerOfLife.buffer.lv;
    std::cin.ignore(); // Membersihkan buffer input

    // ~~ artifact flower of life Main Stat
    std::cout << "Artifact Flower of Life Main Stat : ";
    std::getline(std::cin, characterBuffer.useArtifact.flowerOfLife.buffer.mainStat);

    // ~~ artifact flower of life Bonus Stat
    std::cout << "Artifact Flower of Life Bonus Stat : ";
    std::getline(std::cin, characterBuffer.useArtifact.flowerOfLife.buffer.bonusStat);

    // ~~ artifact flower of life Set
    for (int i = 1; i < 3; i++)
    {
        std::cout << "Artifact Flower of Life Set " << (i * 2) << " : ";
        std::getline(std::cin, characterBuffer.useArtifact.flowerOfLife.buffer.set[i - 1]);
    }
    // ++++++FLOWER OF LIFE END++++++

    // ++++++PLUME OF DEATH++++++ started
    // ~~ artifact plume of death Name
    std::cout << "Artifact Plume of Death : ";
    std::getline(std::cin, characterBuffer.useArtifact.plumeOfDeath.buffer.name);

    // ~~ artifact plume of death Lv
    std::cout << "Artifact Plume of Death Lv : ";
    std::cin >> characterBuffer.useArtifact.plumeOfDeath.buffer.lv;
    std::cin.ignore(); // Membersihkan buffer input

    // ~~ artifact plume of death  Main Stat
    std::cout << "Artifact Plume of Death Main Stat : ";
    std::getline(std::cin, characterBuffer.useArtifact.plumeOfDeath.buffer.mainStat);

    // ~~ artifact plume of death Bonus Stat
    std::cout << "Artifact plume of death Bonus Stat : ";
    std::getline(std::cin, characterBuffer.useArtifact.plumeOfDeath.buffer.bonusStat);

    // ~~ artifact plume of death Set
    for (int i = 1; i < 3; i++)
    {
        std::cout << "Artifact Plume of Death Set " << (i * 2) << " : ";
        std::getline(std::cin, characterBuffer.useArtifact.plumeOfDeath.buffer.set[i - 1]);
    }

    // ++++++PLUME OF DEATH++++++ end

    // ++++++SANDS OF EON ++++++ started
    // ~~ artifact sands of eon Name
    std::cout << "Artifact Sands of Eon : ";
    std::getline(std::cin, characterBuffer.useArtifact.sandsOfEon.buffer.name);

    // ~~ artifact sands of eon Lv
    std::cout << "Artifact Sands of Eon Lv : ";
    std::cin >> characterBuffer.useArtifact.sandsOfEon.buffer.lv;
    std::cin.ignore(); // Membersihkan buffer input

    // ~~ artifact sands of eon Main Stat
    std::cout << "Artifact Sands of Eon Main Stat : ";
    std::getline(std::cin, characterBuffer.useArtifact.sandsOfEon.buffer.mainStat);

    // ~~ artifact sands of eon Bonus Stat
    std::cout << "Artifact Sands of Eon Bonus Stat : ";
    std::getline(std::cin, characterBuffer.useArtifact.sandsOfEon.buffer.bonusStat);

    // ~~ artifact sands of eon Set
    for (int i = 1; i < 3; i++)
    {
        std::cout << "Artifact Sands of Eon Set " << (i * 2) << " : ";
        std::getline(std::cin, characterBuffer.useArtifact.sandsOfEon.buffer.set[i - 1]);
    }

    // ++++++SANDS OF EON ++++++ end

    // ++++++GOBLET OF EONOTHEM++++ ++ started
    // ~~ artifact goblet of eonothem Name
    std::cout << "Artifact Goblet of Eonothem : ";
    std::getline(std::cin, characterBuffer.useArtifact.gobletOfEonothem.buffer.name);

    // ~~ artifact goblet of eonothem Lv
    std::cout << "Artifact Goblet of Eonothem Lv : ";
    std::cin >> characterBuffer.useArtifact.gobletOfEonothem.buffer.lv;
    std::cin.ignore(); // Membersihkan buffer input

    // ~~ artifact goblet of eonothem Main Stat
    std::cout << "Artifact Goblet of Eonothem Main Stat : ";
    std::getline(std::cin, characterBuffer.useArtifact.gobletOfEonothem.buffer.mainStat);

    // ~~ artifact goblet of eonothem Bonus Stat
    std::cout << "Artifact Goblet of Eonothem Bonus Stat : ";
    std::getline(std::cin, characterBuffer.useArtifact.gobletOfEonothem.buffer.bonusStat);

    // ~~ artifact goblet of eonothem Set
    for (int i = 1; i < 3; i++)
    {
        std::cout << "Artifact Goblet of Eonothem Set " << (i * 2) << " : ";
        std::getline(std::cin, characterBuffer.useArtifact.gobletOfEonothem.buffer.set[i - 1]);
    }

    // ++++++GOBLET OF EONOTHEM++++++ end

    // ++++++CIRCLET OF LOGOS ++++++ started
    // ~~ artifact circlet of logs Name
    std::cout << "Artifact Circlet of Logs : ";
    std::getline(std::cin, characterBuffer.useArtifact.circletOfLogos.buffer.name);

    // ~~ artifact circlet of logs Lv
    std::cout << "Artifact Circlet of Logs Lv : ";
    std::cin >> characterBuffer.useArtifact.circletOfLogos.buffer.lv;
    std::cin.ignore(); // Membersihkan buffer input

    // ~~ artifact circlet of logs Main Stat
    std::cout << "Artifact Circlet of Logs Main Stat : ";
    std::getline(std::cin, characterBuffer.useArtifact.circletOfLogos.buffer.mainStat);

    // ~~ artifact circlet of logs Bonus Stat
    std::cout << "Artifact Circlet of Logs Bonus Stat : ";
    std::getline(std::cin, characterBuffer.useArtifact.circletOfLogos.buffer.bonusStat);

    // ~~ artifact circlet of logs Set
    for (int i = 1; i < 3; i++)
    {
        std::cout << "Artifact Circlet of Logs Set " << (i * 2) << " : ";
        std::getline(std::cin, characterBuffer.useArtifact.circletOfLogos.buffer.set[i - 1]);
    }

    // ++++++CIRCLET OF LOGOS ++++++ end

    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~ ARTIFACT END

    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~ TALENT
    std::cout << "Talent Normal ATK";
    std::cin >> characterBuffer.talent.lvNormalAttack;

    std::cout << "Talent Elemental Skill";
    std::cin >> characterBuffer.talent.lvElementalSkill;

    std::cout << "Talent Brush";
    std::cin >> characterBuffer.talent.lvBrush;
    // // ~~~~~~~~~~~~~~~~~~~~~~~~~~~ TALENT END

    std::cout << "Costilation : ";
    std::cin >> characterBuffer.C.costilation;

    // Penggunaan cin.ignore() untuk membersihkan buffer input hanya diperlukan ketika Anda
    // beralih antara membaca tipe data yang berbeda (misalnya, dari membaca angka menggunakan
    // cin ke membaca string menggunakan std::getline(), atau sebaliknya).
}

void OutPut(const Character &output)
{
    std::cout << "Name : " << output.name << std::endl;
    std::cout << "Element : " << output.element << std::endl;
    std::cout << "Weapon Type : " << output.weaponType << std::endl
              << std::endl;

    std::cout << "---------------WEAPON" << std::endl;
    std::cout << "Name : " << output.useWeapon.name << std::endl;
    std::cout << "lvl : " << output.useWeapon.lv << std::endl;
    std::cout << "Rank Refinement : " << output.useWeapon.rankRefinement << std::endl
              << std::endl;

    std::cout << "---------------ARTIFACT FLOWER OF LIFE" << std::endl;
    std::cout << "Name : " << output.useArtifact.flowerOfLife.buffer.name << std::endl;
    std::cout << "Lvl : " << output.useArtifact.flowerOfLife.buffer.lv << std::endl;
    std::cout << "Main Stat : " << output.useArtifact.flowerOfLife.buffer.mainStat << std::endl;
    std::cout << "Bonus Stat : " << output.useArtifact.flowerOfLife.buffer.bonusStat << std::endl;
    for (int i = 1; i < 3; i++)
    {
        std::cout << "Set " << (i * 2) << " : " << output.useArtifact.flowerOfLife.buffer.set[i - 1] << std::endl;
    }
    std::cout << std::endl;

    std::cout << "---------------ARTIFACT PLUME OF DEATH" << std::endl;
    std::cout << "Name : " << output.useArtifact.plumeOfDeath.buffer.name << std::endl;
    std::cout << "Lvl : " << output.useArtifact.plumeOfDeath.buffer.lv << std::endl;
    std::cout << "Main Stat : " << output.useArtifact.plumeOfDeath.buffer.mainStat << std::endl;
    std::cout << "Bonus Stat : " << output.useArtifact.plumeOfDeath.buffer.bonusStat << std::endl;
    for (int i = 1; i < 3; i++)
    {
        std::cout << "Set " << (i * 2) << " : " << output.useArtifact.plumeOfDeath.buffer.set[i - 1] << std::endl;
    }
    std::cout << std::endl;

    std::cout << "---------------ARTIFACT SANDS OF EON" << std::endl;
    std::cout << "Name : " << output.useArtifact.sandsOfEon.buffer.name << std::endl;
    std::cout << "Lvl : " << output.useArtifact.sandsOfEon.buffer.lv << std::endl;
    std::cout << "Main Stat : " << output.useArtifact.sandsOfEon.buffer.mainStat << std::endl;
    std::cout << "Bonus Stat : " << output.useArtifact.sandsOfEon.buffer.bonusStat << std::endl;
    for (int i = 1; i < 3; i++)
    {
        std::cout << "Set " << (i * 2) << " : " << output.useArtifact.sandsOfEon.buffer.set[i - 1] << std::endl;
    }
    std::cout << std::endl;

    std::cout << "---------------ARTIFACT GOBLET OF EONOTHEM" << std::endl;
    std::cout << "Name : " << output.useArtifact.gobletOfEonothem.buffer.name << std::endl;
    std::cout << "Lvl : " << output.useArtifact.gobletOfEonothem.buffer.lv << std::endl;
    std::cout << "Main Stat : " << output.useArtifact.gobletOfEonothem.buffer.mainStat << std::endl;
    std::cout << "Bonus Stat : " << output.useArtifact.gobletOfEonothem.buffer.bonusStat << std::endl;
    for (int i = 1; i < 3; i++)
    {
        std::cout << "Set " << (i * 2) << " : " << output.useArtifact.gobletOfEonothem.buffer.set[i - 1] << std::endl;
    }
    std::cout << std::endl;

    std::cout << "---------------ARTIFACT GOBLET OF EONOTHEM" << std::endl;
    std::cout << "Name : " << output.useArtifact.gobletOfEonothem.buffer.name << std::endl;
    std::cout << "Lvl : " << output.useArtifact.gobletOfEonothem.buffer.lv << std::endl;
    std::cout << "Main Stat : " << output.useArtifact.gobletOfEonothem.buffer.mainStat << std::endl;
    std::cout << "Bonus Stat : " << output.useArtifact.gobletOfEonothem.buffer.bonusStat << std::endl;
    for (int i = 1; i < 3; i++)
    {
        std::cout << "Set " << (i * 2) << " : " << output.useArtifact.gobletOfEonothem.buffer.set[i - 1] << std::endl;
    }
    std::cout << std::endl;

    std::cout << "---------------ARTIFACT CIRCLET OF LOGOS" << std::endl;
    std::cout << "Name : " << output.useArtifact.circletOfLogos.buffer.name << std::endl;
    std::cout << "Lvl : " << output.useArtifact.circletOfLogos.buffer.lv << std::endl;
    std::cout << "Main Stat : " << output.useArtifact.circletOfLogos.buffer.mainStat << std::endl;
    std::cout << "Bonus Stat : " << output.useArtifact.circletOfLogos.buffer.bonusStat << std::endl;
    for (int i = 1; i < 3; i++)
    {
        std::cout << "Set " << (i * 2) << " : " << output.useArtifact.circletOfLogos.buffer.set[i - 1] << std::endl;
    }
    std::cout << std::endl;

    std::cout << "---------------TALENT" << std::endl;
    std::cout << "Normal Attack : " << output.talent.lvNormalAttack << std::endl;
    std::cout << "Elemental Skill : " << output.talent.lvElementalSkill << std::endl;
    std::cout << "Bursh : " << output.talent.lvBrush << std::endl;

    std::cout << "---------------Costilation COSTILATION" << std::endl;
    std::cout << "Normal Attack : " << output.C.costilation << std::endl;
}
