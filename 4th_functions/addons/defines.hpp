#define PREFIX 4th_functions

// data to string & joining vars with _ macro
#define STR(data) #data
#define JOIN(var1,var2) var1##_##var2

// prefixed variable & quoted prefixed variable macros
#define PVAR(var) JOIN(PREFIX,var)
#define QPVAR(var) STR(PVAR(var))

// debug macros
#define RPTDEBUG(LABEL,FILE,LINE,INFO) diag_log ("[" + LABEL +"] " + "Daisy's Supply System (" + STR(FILE) + ", Line " + STR(LINE) + ") | " + INFO)
#define HINTDEBUG(LABEL,INFO) hint ("[" + LABEL +"] " + INFO)