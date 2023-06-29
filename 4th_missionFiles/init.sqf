
// ACRE SETUP
[true, true] call acre_api_fnc_setupMission;

["ACRE_PRC117F", "default", "preset_117f"] call acre_api_fnc_copyPreset;
// 117 channel 1
["ACRE_PRC117F", "preset_117f", 1, "label", "COYNET"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 1, "frequencyRX", 90] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 1, "frequencyTX", 90] call acre_api_fnc_setPresetChannelField;

// 117 channel 2
["ACRE_PRC117F", "preset_117f", 2, "label", "ADVISOR"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 2, "frequencyRX", 266] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 2, "frequencyTX", 266] call acre_api_fnc_setPresetChannelField;

// 117 channel 3
["ACRE_PRC117F", "preset_117f", 3, "label", "LOGISTICS"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 3, "frequencyRX", 268] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 3, "frequencyTX", 268] call acre_api_fnc_setPresetChannelField;

// 117 channel 4
["ACRE_PRC117F", "preset_117f", 4, "label", "ARTILLERY"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 4, "frequencyRX", 154] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 4, "frequencyTX", 154] call acre_api_fnc_setPresetChannelField;

// 117 channel 5
["ACRE_PRC117F", "preset_117f", 5, "label", "CAS MAIN"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 5, "frequencyRX", 270] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 5, "frequencyTX", 270] call acre_api_fnc_setPresetChannelField;

// 117 channel 6
["ACRE_PRC117F", "preset_117f", 6, "label", "CAS SEC 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 6, "frequencyRX", 272] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 6, "frequencyTX", 272] call acre_api_fnc_setPresetChannelField;

// 117 channel 7
["ACRE_PRC117F", "preset_117f", 7, "label", "CAS SEC 2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 7, "frequencyRX", 274] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 7, "frequencyTX", 274] call acre_api_fnc_setPresetChannelField;

// 117 channel 8
["ACRE_PRC117F", "preset_117f", 8, "label", "INTER-AIR"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 8, "frequencyRX", 80] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "preset_117f", 8, "frequencyTX", 80] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC117F", "preset_117f"] call acre_api_fnc_setPreset;

//
["ACRE_PRC152", "default", "preset_152"] call acre_api_fnc_copyPreset;

["ACRE_PRC152", "preset_152", 1, "label", "1PLTNET"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "preset_152", 1, "frequencyRX", 60.1] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "preset_152", 1, "frequencyTX", 60.1] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC152", "preset_152", 2, "label", "2PLTNET"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "preset_152", 2, "frequencyRX", 60.1] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "preset_152", 2, "frequencyTX", 60.1] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC152", "preset_152"] call acre_api_fnc_setPreset;
// END ACRE SETUP