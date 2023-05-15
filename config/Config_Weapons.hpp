/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Bianary's Blasters";
        side = "civ";
        conditions = "license_civ_gun";
         items[] = {
            { "JLTS_RG4D", "", 1200, 600, "" },
            { "JMSLLTE_rk3pistol", "", 1300, 600, "" },
            { "JMSLLTE_se14pistol", "", 1400, 600, "" },
            { "JMSLLTE_dt12pistol", "", 1500, 600, "" },
            { "DymekBlasterPistol_F", "", 1600, 600, "" }
        };
        mags[] = {
            { "JLTS_RG4D_mag", "", 30, 60, "" },
            { "JMSLLTE_RK3_20rnd_Mag", "", 35, 70, "" },
            { "JMSLLTE_SE14_30rnd_Mag", "", 40, 80, "" },
            { "JMSLLTE_DT12_50rnd_Mag", "", 100, 200, "" },
            { "3AS_16Rnd_EY20_Mag", "", 10, 20, "" }
        };
        accs[] = {
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
        };
        mags[] = {
        };
        accs[] = {
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
        };
        mags[] = {
        };
        accs[] = {
        };
    };

    //Basic Shops
    class genstore {
        name = "Tatooine General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 50, 25, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, 25, "" },
            { "plp_bo_w_SunBlocker", "", 10, 20, "" },
            { "plp_bo_w_BottleBitters", "", 15, 30, "" },
            { "plp_bo_w_BottleBlueCorazol", "", 15, 30, "" },
            { "plp_bo_w_BottleLiqCream", "", 15, 30, "" },
            { "plp_bo_w_BottleGin", "", 15, 30, "" },
            { "plp_bo_w_BottleLiqOrange", "", 15, 30, "" },
            { "plp_bo_w_BottleTequila", "", 15, 30, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class miningguild {
        name = "Tatooine Mining Guild";
        side = "civ";
        conditions = "license_civ_mining";
        items[] = {
            { "axe", "", 350, 125, "" },
            { "pickaxe", "", 250, 100, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Tatooine Fuel Station Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 25, 50, "" },
            { "ItemGPS", "", 50, 100, "" },
            { "ItemMap", "", 25, 50, "" },
            { "ItemCompass", "", 25, 50, "" },
            { "ItemWatch", "", 25, 50, "" },
            { "plp_bo_w_SunBlocker", "", 10, 20, "" },
            { "plp_bo_w_BottleBlueCorazol", "", 15, 30, "" },
            { "plp_bo_w_BottleGin", "", 15, 30, "" },
            { "plp_bo_w_BottleTequila", "", 15, 30, "" },
            { "G_Shades_black", "", 5, 10, "" },
            { "G_Shades_blue", "", 5, 10, "" },
            { "G_Shades_green", "", 5, 10, "" },
            { "G_Shades_red", "", 5, 10, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "New Republic Armorer";
        side = "cop";
        conditions = "";
        items[] = {
            { "JMSLLTE_a280", "", 300, 600, "call life_coplevel >= 1" },
            { "JMSLLTE_dc17pistol", "", 150, 300, "call life_coplevel >= 1" },
            { "JLTS_RPS6", "", 500, 1000, "call life_coplevel >= 3" },
            { "ItemGPS", "", 50, 100, "" },
            { "FirstAidKit", "", 75, 150, "" },
            { "JLTS_CloneNVGRange", "", 50, 100, "call life_coplevel >= 1" },
            { "JMSLLTE_dc15a", "", 400, 800, "call life_coplevel >= 2" },
            { "JMSLLTE_dc15s", "", 250, 500, "call life_coplevel >= 1" },
            { "TFAR_anprc152", "", 20, 40, "call life_coplevel >=1" },
            { "ls_mag_classB_thermalDet", "", 500, 1000, "call life_mediclevel >= 2" },
            { "ls_mag_classC_thermalDet", "", 500, 1000, "call life_mediclevel >= 2" },
            { "SmokeShellYellow", "", 100, 200, "call life_mediclevel >= 2" },
            { "SmokeShell", "", 100, 200, "call life_mediclevel >= 2" },
            { "SmokeShellRed", "", 100, 200, "call life_mediclevel >= 2" },
            { "SmokeShellPurple", "", 100, 200, "call life_mediclevel >= 2" },
            { "SmokeShellOrange", "", 100, 200, "call life_mediclevel >= 2" },
            { "SmokeShellGreen", "", 100, 200, "call life_mediclevel >= 2" },
            { "SmokeShellBlue", "", 100, 200, "call life_mediclevel >= 2" },
            { "ls_mag_demo_remoteCharge", "", 500, 1000, "call life_mediclevel >= 3" }
        };
        mags[] = {
            { "JMSLLTE_DC15S_40Rnd_Mag", "", 30, 60, "call life_coplevel >= 1" },
            { "JMSLLTE_A280_30rnd_Mag", "", 35, 70, "call life_coplevel >= 1" },
            { "JMSLLTE_DC15A_60Rnd_Mag", "", 40, 80, "call life_coplevel >= 2" },
            { "JLTS_RPS6_mag", "", 100, 200, "call life_coplevel >= 3 " },
            { "JMSLLTE_DC17_20rnd_Mag", "", 10, 20, "call life_coplevel >= 1" }
        };
        accs[] = {
            { "JMSLLTE_a280_bl_scope", "", 50, 100, "call life_coplevel >= 1" },
            { "JMSLLTE_acc_flashlight", "", 25, 50, "call life_coplevel >= 1" },
            { "JMSLLTE_DC15a_bl_scope", "", 50, 100, "call life_coplevel >= 2" }
        };
    };

    class imperial_basic {
        name = "Imperial Armorer";
        side = "med";
        conditions = "";
        items[] = {
            { "JMSLLTE_e11d", "", 300, 600, "call life_mediclevel >= 1" },
            { "JMSLLTE_e11", "", 300, 600, "call life_mediclevel >= 2" },
            { "JMSLLTE_rk3pistol", "", 150, 300, "call life_mediclevel >= 1" },
            { "JMSLLTE_se14pistol", "", 150, 300, "call life_mediclevel >= 1" },
            { "JMSLLTE_DLT19BlasterRifle", "", 500, 1000, "call life_mediclevel >= 3" },
            { "ls_mag_classB_thermalDet", "", 500, 1000, "call life_mediclevel >= 2" },
            { "ls_mag_classC_thermalDet", "", 500, 1000, "call life_mediclevel >= 2" },
            { "SmokeShellYellow", "", 100, 200, "call life_mediclevel >= 2" },
            { "SmokeShell", "", 100, 200, "call life_mediclevel >= 2" },
            { "SmokeShellRed", "", 100, 200, "call life_mediclevel >= 2" },
            { "SmokeShellPurple", "", 100, 200, "call life_mediclevel >= 2" },
            { "SmokeShellOrange", "", 100, 200, "call life_mediclevel >= 2" },
            { "SmokeShellGreen", "", 100, 200, "call life_mediclevel >= 2" },
            { "SmokeShellBlue", "", 100, 200, "call life_mediclevel >= 2" },
            { "JLTS_explosive_emp_50_mag", "", 500, 1000, "call life_mediclevel >= 5" },
            { "ls_mag_demo_remoteCharge", "", 500, 1000, "call life_mediclevel >= 3" },
            { "JMSLLTE_Detonitecharge_imp_Mag", "", 500, 1000, "call life_mediclevel >= 2" },
            { "JMSLLTE_DLT19xRifle", "", 500, 1000, "call life_mediclevel >= 4" },
            { "ItemCompass", "", 500, 1000, "call life_mediclevel >= 1" },
            { "ItemGPS", "", 50, 100, "" },
            { "FirstAidKit", "", 75, 150, "" },
            { "Chemlight_green", "", 50, 100, "call life_mediclevel >= 1" },
            { "JLTS_clone_comlink", "", 400, 800, "call life_mediclevel >= 1" },
            { "Itemwatch", "", 250, 500, "call life_mediclevel >= 1" },
            { "TFAR_anprc152", "", 20, 40, "call life_mediclevel >= 1" }
        };
        mags[] = {
            { "JMSLLTE_RK3_20rnd_Mag", "", 30, 60, "call life_mediclevel >= 1" },
            { "JMSLLTE_SE14_30rnd_Mag", "", 30, 60, "call life_mediclevel >= 1" },
            { "JMSLLTE_DLT19_75Rnd_Mag", "", 35, 70, "call life_mediclevel >= 3" },
            { "JMSLLTE_DC15A_60Rnd_Mag", "", 40, 80, "call life_mediclevel >= 1" },
            { "JMSLLTE_E11D_40Rnd_Mag", "", 50, 100, "call life_mediclevel >= 1" },
            { "JMSLLTE_DLT19x_10Rnd_Mag", "", 50, 100, "call life_mediclevel >= 1" },
            { "JMSLLTE_E11_60Rnd_Mag", "", 50, 100, "call life_mediclevel >= 2" },
            { "JMSLLTE_DC17_20rnd_Mag", "", 10, 20, "call life_mediclevel >= 1" }
        };
        accs[] = {
            { "JMSLLTE_acc_flashlight", "", 50, 100, "call life_mediclevel >= 1" },
            { "JMSLLTE_e11_holo_Scope", "", 25, 50, "call life_mediclevel >= 1" },
            { "JMSLLTE_e11_holoSF_Scope", "", 50, 100, "call life_mediclevel >= 1" },
            { "JMSLLTE_dlt19x_bl_Scope", "", 50, 100, "call life_mediclevel >= 1" },
            { "JMSLLTE_E11D_40Rnd_Mag", "", 50, 100, "call life_mediclevel >= 1" }
        };
    };
};
