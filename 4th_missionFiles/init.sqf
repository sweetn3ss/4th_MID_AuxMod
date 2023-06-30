
// ACRE SETUP BEGIN
[true, true] call acre_api_fnc_setupMission;

// [radioClassName, presetName, channelNumber, editField, value]

// 117f
["ACRE_PRC117F", "default", "preset_117f"] call acre_api_fnc_copyPreset;

["ACRE_PRC117F", "preset_117f", 1, "label", "COYNET"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 1, "frequencyRX", 90] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 1, "frequencyTX", 90] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC117F", "preset_117f", 2, "label", "ARTY FIRES"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 2, "frequencyRX", 154] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 2, "frequencyTX", 154] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC117F", "preset_117f", 3, "label", "LOGI"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 3, "frequencyRX", 268] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 3, "frequencyTX", 268] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC117F", "preset_117f", 4, "label", "ATG MAIN"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 4, "frequencyRX", 270] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 4, "frequencyTX", 270] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC117F", "preset_117f", 5, "label", "CAS SEC 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 5, "frequencyRX", 272] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 5, "frequencyTX", 272] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC117F", "preset_117f", 6, "label", "CAS SEC 2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 6, "frequencyRX", 274] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 6, "frequencyTX", 274] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC117F", "preset_117f", 7, "label", "INTERAIR"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 7, "frequencyRX", 80] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 7, "frequencyTX", 80] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC117F", "preset_117f", 8, "label", "FLUID L 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 8, "frequencyRX", 144] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 8, "frequencyTX", 144] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC117F", "preset_117f", 9, "label", "FLUID L 2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 9, "frequencyRX", 150] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 9, "frequencyTX", 150] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC117F", "preset_117f", 10, "label", "1 PLTNET"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 10, "frequencyRX", 122] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 10, "frequencyTX", 122] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC117F", "preset_117f", 11, "label", "1 PLTMED"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 11, "frequencyRX", 124] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 11, "frequencyTX", 124] call acre_api_fnc_setPresetChannelField;

/*["ACRE_PRC117F", "preset_117f", 3, "label", "2 PLTNET"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 3, "frequencyRX", 142] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 3, "frequencyTX", 142] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC117F", "preset_117f", 3, "label", "2 PLTMED"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 3, "frequencyRX", 144] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 3, "frequencyTX", 144] call acre_api_fnc_setPresetChannelField;*/

["ACRE_PRC117F", "preset_117f", 12, "label", "FLUID S 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 12, "frequencyRX", 136] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 12, "frequencyTX", 136] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC117F", "preset_117f", 13, "label", "FLUID S 2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 13, "frequencyRX", 138] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 13, "frequencyTX", 138] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC117F", "preset_117f"] call acre_api_fnc_setPreset;

// 152
["ACRE_PRC152", "default", "preset_152"] call acre_api_fnc_copyPreset;

["ACRE_PRC152", "preset_152", 1, "label", "1 PLTNET"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "preset_152", 1, "frequencyRX", 122] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "preset_152", 1, "frequencyTX", 122] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC152", "preset_152", 2, "label", "1 PLTMED"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "preset_152", 2, "frequencyRX", 124] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "preset_152", 2, "frequencyTX", 124] call acre_api_fnc_setPresetChannelField;

/*["ACRE_PRC152", "preset_152", 3, "label", "2 PLTNET"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "preset_152", 3, "frequencyRX", 142] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "preset_152", 3, "frequencyTX", 142] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC152", "preset_152", 3, "label", "2 PLTMED"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "preset_152", 3, "frequencyRX", 144] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "preset_152", 3, "frequencyTX", 144] call acre_api_fnc_setPresetChannelField;*/

["ACRE_PRC152", "preset_152", 3, "label", "FLUID S 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "preset_152", 3, "frequencyRX", 136] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "preset_152", 3, "frequencyTX", 136] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC152", "preset_152", 4, "label", "FLUID S 2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "preset_152", 4, "frequencyRX", 138] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "preset_152", 4, "frequencyTX", 138] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC152", "preset_152", 5, "label", "COYNET"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "preset_152", 5, "frequencyRX", 90] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "preset_152", 5, "frequencyTX", 90] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC152", "preset_152", 6, "label", "ARTY FIRES"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "preset_152", 6, "frequencyRX", 154] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "preset_152", 6, "frequencyTX", 154] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC152", "preset_152", 7, "label", "LOGI"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "preset_152", 7, "frequencyRX", 268] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "preset_152", 7, "frequencyTX", 268] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC152", "preset_152", 8, "label", "ATG MAIN"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "preset_152", 8, "frequencyRX", 270] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "preset_152", 8, "frequencyTX", 270] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC152", "preset_152", 9, "label", "CAS SEC 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "preset_152", 9, "frequencyRX", 272] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "preset_152", 9, "frequencyTX", 272] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC152", "preset_152", 10, "label", "CAS SEC 2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "preset_152", 10, "frequencyRX", 274] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "preset_152", 10, "frequencyTX", 274] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC152", "preset_152", 11, "label", "INTER-AIR"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "preset_152", 11, "frequencyRX", 80] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "preset_152", 11, "frequencyTX", 80] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC152", "preset_152", 12, "label", "FLUID L 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "preset_152", 12, "frequencyRX", 144] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "preset_152", 12, "frequencyTX", 144] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC152", "preset_152", 13, "label", "FLUID L 2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "preset_152", 13, "frequencyRX", 150] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "preset_152", 13, "frequencyTX", 150] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC152", "preset_152"] call acre_api_fnc_setPreset;
// END ACRE SETUP