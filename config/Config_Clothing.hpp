/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Poloshirt_stripped", "", 125, "" },
            { "U_C_Poloshirt_redwhite", "", 150, "" },
            { "U_C_Poloshirt_salmon", "", 175, "" },
            { "U_C_Poloshirt_blue", "", 250, "" },
            { "U_C_Poloshirt_burgundy", "", 275, "" },
            { "U_C_Poloshirt_tricolour", "", 350, "" },
            { "U_C_Poor_2", "", 250, "" },
            { "U_IG_Guerilla2_2", "", 650, "" },
            { "U_IG_Guerilla3_1", "", 735, "" },
            { "U_OrestesBody", "", 1100, "" },
            { "U_IG_Guerilla2_3", "", 1200, "" },
            { "U_C_HunterBody_grn", "", 1500, "" },
            { "U_C_WorkerCoveralls", "", 2500, "" },
            { "U_NikosBody", "", 3000, "" },
            { "U_NikosAgedBody", $STR_C_Civ_Niko, 5000, "" },
            { "U_C_Man_casual_1_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_2_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_3_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_4_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_5_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_6_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_1_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_2_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_3_F", "", 5000, "" } //Apex DLC
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 120, "" },
            { "H_Bandanna_surfer", "", 130, "" },
            { "H_Bandanna_khk", "", 145, "" },
            { "H_Cap_blu", "", 150, "" },
            { "H_Cap_grn", "", 150, "" },
            { "H_Cap_grn_BI", "", 150, "" },
            { "H_Cap_oli", "", 150, "" },
            { "H_Cap_red", "", 150, "" },
            { "H_Cap_tan", "", 150, "" },
            { "H_Helmet_Skate", "", 150, "" }, //Apex DLC
            { "H_Bandanna_gry", "", 150, "" },
            { "H_Bandanna_sgg", "", 160, "" },
            { "H_Bandanna_cbr", "", 165, "" },
            { "H_StrawHat", "", 225, "" },
            { "H_Hat_tan", "", 265, "" },
            { "H_Hat_brown", "", 276, "" },
            { "H_Hat_grey", "", 280, "" },
            { "H_BandMask_blk", $STR_C_Civ_BandMask, 300, "" },
            { "H_Hat_blue", "", 310, "" },
            { "H_Hat_checker", "", 340, "" },
            { "H_Booniehat_tan", "", 425, "" },
            { "H_Booniehat_grn", "", 425, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Shades_Green", "", 20, "" },
            { "G_Shades_Red", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Greenblack", "", 25, "" },
            { "G_Sport_Red", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Combat", "", 125, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 250, 500, "" },
            { "B_AssaultPack_khk", "", 100, 200, "" },
            { "B_AssaultPack_dgtl", "", 100, 200, "" },
            { "B_AssaultPack_rgr", "", 100, 200, "" },
            { "B_AssaultPack_sgg", "", 100, 200, "" },
            { "B_AssaultPack_blk", "", 100, 200, "" },
            { "B_AssaultPack_cbr", "", 100, 200, "" },
            { "B_AssaultPack_mcamo", "", 100, 200, "" },
            { "B_AssaultPack_tna_f", "", 100, 200, "" }, //Apex DLC
            { "B_TacticalPack_oli", "", 125, 250, "" },
            { "B_Kitbag_mcamo", "", 175, 350, "" },
            { "B_Kitbag_sgg", "", 175, 350, "" },
            { "B_Kitbag_cbr", "", 175, 350, "" },
            { "B_FieldPack_blk", "", 250, 500, "" },
            { "B_FieldPack_ocamo", "", 250, 500, "" },
            { "B_FieldPack_oucamo", "", 250, 500, "" },
            { "B_FieldPack_ghex_f", "", 250, 500, "" }, //Apex DLC
            { "B_Bergen_sgg", "", 325, 650, "" },
            { "B_Bergen_mcamo", "", 325, 650, "" },
            { "B_Bergen_rgr", "", 325, 650, "" },
            { "B_Bergen_blk", "", 325, 650, "" },
            { "B_Carryall_ocamo", "", 375, 750, "" },
            { "B_Carryall_oucamo", "", 375, 750, "" },
            { "B_Carryall_mcamo", "", 375, 750, "" },
            { "B_Carryall_oli", "", 375, 750, "" },
            { "B_Carryall_khk", "", 375, 750, "" },
            { "B_Carryall_cbr", "", 375, 750, "" },
            { "B_Carryall_ghex_f", "", 375, 750, "" }, //Apex DLC
            { "B_Bergen_dgtl_f", "", 475, 950, "" }, //Apex DLC
            { "B_Bergen_tna_f", "", 475, 950, "" }, //Apex DLC
            { "SWLB_clone_bag", "", 200, 400, "" },
            { "SWLB_clone_bag_belt", "", 150, 300, "" },
            { "SWLB_CEE_Gregor_backpack", "", 200, 400, "" },
            { "SWLB_MPMarksman_backpack", "", 200, 400, "" },
            { "ls_mandalorian_standard_backpack", "", 225, 450, "" }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "JMSLLTE_ScumNavy_blue_F_CombatUniform", "", 100, "call life_coplevel >= 1" },
            { "JMSLLTE_ScumTroopCom_black2_F_CombatUniform", "", 200, "call life_coplevel >= 2" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "JMSLLTE_Navy_white_helmet", "", 50, "call life_coplevel >= 1" },
            { "JMSLLTE_Navy_whiteb_helmet", "", 50, "call life_coplevel >= 4" },
            { "JMSLLTE_Commando_black_helmet", "", 50, "call life_coplevel >= 2" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Lowprofile", "", 20, "call life_coplevel >= 1"}
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "JMSLLTE_NavytrooperStrip_armor", "", 60, "call life_coplevel >= 1" },
            { "JMSLLTE_NavytrooperHolster_armor", "", 60, "call life_coplevel >= 1" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "ls_gar_standard_backpack", "", 100, "call life_coplevel >= 1" },
            { "ls_gar_medic_backpack", "", 100, "call life_coplevel >= 2" },
            { "ls_gar_rocket_backpack", "", 100, "call life_coplevel >= 3" },
            { "ls_gar_heavy_backpack", "", 100, "call life_coplevel >= 2" }
        };

    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 1900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class Imperial_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_Rangemaster", $STR_C_EMS_uniforms, 50, "call life_mediclevel >= 1" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "call life_mediclevel >= 1" },
            { "H_Cap_blu", "", 10, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "call life_mediclevel >= 1" },
            { "G_Shades_Blue", "", 10, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "call life_mediclevel >= 1" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_FieldPack_oli", $STR_C_EMS_backpacks, 3000, "call life_mediclevel >= 1" }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };
};
