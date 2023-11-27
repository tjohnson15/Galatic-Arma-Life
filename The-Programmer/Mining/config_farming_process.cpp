/*
    Author: Jean-Baptiste
    Web site: www.the-programmer.com
    Discord: https://discord.the-programmer.com

    Terms of use:
        - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
        - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
        - Out of respect for the author please do not delete this information.
*/
#define true 1
#define false 0

class Process_Config {
    class iron {
        object_required = "TheProgrammer_iron";
        object_given = "iron_refined";
        text = "Iron Treatment";
        time = 30; //Time in seconds to process
        required_licenses[] = {"license_civ_mining"};
    };

    class sapphire {
        object_required = "TheProgrammer_sapphire";
        object_given = "sapphire_refined";
        text = "Sapphire Treatment";
        time = 30; //Time in seconds to process
        required_licenses[] = {"license_civ_mining"};
    };

    class copper {
        object_required = "TheProgrammer_cuivre";
        object_given = "copper_refined";
        text = "Copper Treatment";
        time = 30; //Time in seconds to process
        required_licenses[] = {"license_civ_mining"};
    };

    class diamond {
        object_required = "TheProgrammer_diamant";
        object_given = "diamond_cut";
        text = "Diamond Treatment";
        time = 30; //Time in seconds to process
        required_licenses[] = {"license_civ_mining"};
    };

    class coal {
        object_required = "TheProgrammer_charbon";
        object_given = "coal_refined";
        text = "Coal Treatment";
        time = 30; //Time in seconds to process
        required_licenses[] = {"license_civ_mining"};
    };

    class Rock {
        object_required = "TheProgrammer_cailloux";
        object_given = "cement";
        text = "Rock Treatment";
        time = 30; //Time in seconds to process
        required_licenses[] = {"license_civ_mining"};
    };

    class Ruby {
        object_required = "TheProgrammer_Ruby";
        object_given = "ruby_refined";
        text = "Ruby Treatment";
        time = 30; //Time in seconds to process
        required_licenses[] = {"license_civ_mining"};
    };

    class obsidan {
        object_required = "TheProgrammer_obsidienne";
        object_given = "obsidan_refined";
        text = "Obsidan Treatment";
        time = 30; //Time in seconds to process
        required_licenses[] = {"license_civ_mining"};
    };

    class gold {
        object_required = "TheProgrammer_or";
        object_given = "gold_refined";
        text = "Gold Treatment";
        time = 30; //Time in seconds to process
        required_licenses[] = {"license_civ_mining"};
    };

    class tree {
        object_required = "TheProgrammer_Buche";
        object_given = "tree";
        text = "Saw Mill";
        time = 30; //Time in seconds to process
        required_licenses[] = {"license_civ_mining"};
    };
};
