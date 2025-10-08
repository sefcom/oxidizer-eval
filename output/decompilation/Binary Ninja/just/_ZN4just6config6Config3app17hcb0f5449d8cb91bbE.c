
  int64_t just::config::Config::app::hcb0f5449d8cb91bb(int64_t arg1)

{
    void var_568;
    clap_builder::builder::command::Command::new::h2ebd8d11f9051b0d(&var_568);
    int64_t var_848;
    clap_builder::builder::command::Command::bin_name::h22dafd1fe3eb7795(&var_848, &var_568);
    clap_builder::builder::command::Command::version::h9b2b8e3fb53d6c09(&var_568, &var_848);
    clap_builder::builder::command::Command::author::hda0a85995c80c5c3(&var_848, &var_568);
    clap_builder::builder::command::Command::about::hc0c3a62c49e66317(&var_568, &var_848);
    memcpy(&var_848, &var_568, 0x2bc);
    int32_t var_2ac;
    int32_t var_58c = var_2ac | 0x20;
    int64_t var_2a8;
    int64_t var_588 = var_2a8;
    clap_builder::builder::styling::Styles::styled::h83f87c1cdf183aa3(&var_568);
    int32_t var_552 = 3;
    int16_t var_54e = 1;
    int64_t var_aba = 0x300000100;
    var_aba = 0x300000100;
    int128_t var_506;
    int128_t var_a66 = var_506;
    var_a66 = var_506;
    char var_ac8 = 0;
    int32_t var_ac7 = 0x3000003;
    char var_ac0 = 3;
    int16_t var_abc = 1;
    char var_aac = 0;
    int32_t var_aab = 0x3000003;
    char var_aa4 = 3;
    int16_t var_aa0 = 1;
    char var_a9e = 0;
    int32_t var_a9d = 0x3000002;
    char var_a96 = 3;
    int16_t var_a92 = 0;
    char var_a90 = 0;
    int32_t var_a8f = 0x3000006;
    char var_a88 = 3;
    int16_t var_a84 = 0;
    char var_a82 = 0;
    int32_t var_a81 = 0x3000002;
    char var_a7a = 3;
    int16_t var_a76 = 0;
    int32_t var_a74 = 0x100;
    char var_a70 = 3;
    char var_a6c = 3;
    int16_t var_a68 = 0;
    clap_builder::builder::command::Command::styles::h7b9f888ddca5a8d1(&var_568, &var_848, 
        &var_ac8);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_848, 
        "ALIAS_STYLEalias-stylerightSet l…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_848, 
        "alias-stylerightSet list command…");
    clap_builder::builder::arg::Arg::env::he1ad3c75d226c026(&var_848, &var_ac8, "JUST_ALIAS_STYLE");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_ac8, &var_848, 0);
    clap_builder::builder::arg::Arg::value_parser::h86d5c22272dbf35c(&var_848, &var_ac8);
    clap_builder::builder::arg::Arg::default_value::h490e19da68f376b3(&var_ac8, &var_848, 
        "rightSet list command alias disp…");
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_848, &var_ac8, 
        "Set list command alias display s…", 0x24);
    clap_builder::builder::arg::Arg::conflicts_with::h6f13739170122608(&var_ac8, &var_848, 
        "NO-ALIASESCEILINGceilingJUST_CEI…");
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_848, &var_568, &var_ac8);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_568, 
        "CEILINGceilingJUST_CEILINGDo not…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_568, 
        "ceilingJUST_CEILINGDo not ascend…");
    clap_builder::builder::arg::Arg::env::he1ad3c75d226c026(&var_568, &var_ac8, 
        "JUST_CEILINGDo not ascend above …");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_ac8, &var_568, 0);
    int64_t var_580 = 3;
    clap_builder::builder::arg::Arg::value_parser::hba612b267e67056f(&var_568, &var_ac8, &var_580);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_ac8, &var_568, 
        "Do not ascend above <CEILING> di…", 0x46);
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_568, &var_848, &var_ac8);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_848, 
        "CHECKcheckFORMATRun `--fmt` in '…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_848, 
        "checkFORMATRun `--fmt` in 'check…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_848, &var_ac8, 2);
    clap_builder::builder::arg::Arg::requires::h5ae9e01375d4ebfb(&var_ac8, &var_848, 
        "FORMATRun `--fmt` in 'check' mod…");
    char const* const var_2a0;
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_2a0, &var_ac8, 
        "Run `--fmt` in 'check' mode. Exi…", 0x87);
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_848, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_568, 
        "CHOOSERchooserJUST_CHOOSEROverri…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_568, 
        "chooserJUST_CHOOSEROverride bina…");
    clap_builder::builder::arg::Arg::env::he1ad3c75d226c026(&var_568, &var_ac8, 
        "JUST_CHOOSEROverride binary invo…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_ac8, &var_568, 0);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_2a0, &var_ac8, 
        "Override binary invoked by `--ch…", 0x25);
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_568, &var_848, &var_2a0);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_848, 
        "CLEAR-SHELL-ARGS../etc/zoneinfo/…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_848, 
        "clear-shell-args, an alias for `");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_848, &var_ac8, 2);
    clap_builder::builder::arg::Arg::overrides_with::hd74deb0fcb1bd1ec(&var_ac8, &var_848, 
        "SHELL-ARGClear shell argumentsCO…");
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_2a0, &var_ac8, 
        "Clear shell argumentsCOLORcolorJ…", 0x15);
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_848, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_568, 
        "COLORcolorJUST_COLORPrint colorf…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_568, 
        "colorJUST_COLORPrint colorful ou…");
    clap_builder::builder::arg::Arg::env::he1ad3c75d226c026(&var_568, &var_ac8, 
        "JUST_COLORPrint colorful outputC…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_ac8, &var_568, 0);
    clap_builder::builder::arg::Arg::value_parser::h64a8966fe0c1500e(&var_568, &var_ac8);
    clap_builder::builder::arg::Arg::default_value::h490e19da68f376b3(&var_ac8, &var_568, 
        "autopwsh'!=''=='(");
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_2a0, &var_ac8, 
        "Print colorful outputCOMMAND-COL…", 0x15);
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_568, &var_848, &var_2a0);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_848, 
        "COMMAND-COLORcommand-colorJUST_C…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_848, 
        "command-colorJUST_COMMAND_COLORE…");
    clap_builder::builder::arg::Arg::env::he1ad3c75d226c026(&var_848, &var_ac8, 
        "JUST_COMMAND_COLOREcho recipe li…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_ac8, &var_848, 0);
    clap_builder::builder::arg::Arg::value_parser::h12c9d779fc95301d(&var_848, &var_ac8);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_ac8, &var_848, 
        "Echo recipe lines in <COMMAND-CO…", 0x24);
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_848, &var_568, &var_ac8);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_568, 
        "CYGPATHcygpathJUST_CYGPATHUse bi…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_568, 
        "cygpathJUST_CYGPATHUse binary at…");
    clap_builder::builder::arg::Arg::env::he1ad3c75d226c026(&var_568, &var_ac8, 
        "JUST_CYGPATHUse binary at <CYGPA…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_ac8, &var_568, 0);
    clap_builder::builder::arg::Arg::value_parser::hba612b267e67056f(&var_568, &var_ac8, &var_580);
    clap_builder::builder::arg::Arg::default_value::h490e19da68f376b3(&var_ac8, &var_568, 
        "cygpathJUST_CYGPATHUse binary at…");
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_2a0, &var_ac8, 
        "Use binary at <CYGPATH> to conve…", 0x42);
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_568, &var_848, &var_2a0);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_848, 
        "DOTENV-FILENAMEdotenv-filenameSe…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_848, 
        "dotenv-filenameSearch for enviro…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_848, &var_ac8, 0);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_ac8, &var_848, 
        "Search for environment file name…", 0x45);
    clap_builder::builder::arg::Arg::conflicts_with::h6f13739170122608(&var_2a0, &var_ac8, 
        "DOTENV-PATHdotenv-pathLoad <DOTE…");
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_848, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_568, 
        "DOTENV-PATHdotenv-pathLoad <DOTE…");
    clap_builder::builder::arg::Arg::short::h0067f5749df5645d(&var_ac8, &var_568, 0x45);
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_568, &var_ac8, 
        "dotenv-pathLoad <DOTENV-PATH> as…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_ac8, &var_568, 0);
    clap_builder::builder::arg::Arg::value_parser::hba612b267e67056f(&var_568, &var_ac8, &var_580);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_ac8, &var_568, 
        "Load <DOTENV-PATH> as environmen…", 0x43);
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_568, &var_848, &var_ac8);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_848, 
        "DRY-RUNdry-runJUST_DRY_RUNPrint …");
    clap_builder::builder::arg::Arg::short::h0067f5749df5645d(&var_ac8, &var_848, 0x6e);
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_848, &var_ac8, 
        "dry-runJUST_DRY_RUNPrint what ju…");
    clap_builder::builder::arg::Arg::env::he1ad3c75d226c026(&var_ac8, &var_848, 
        "JUST_DRY_RUNPrint what just woul…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_848, &var_ac8, 2);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_ac8, &var_848, 
        "Print what just would do without…", 0x29);
    clap_builder::builder::arg::Arg::conflicts_with::h6f13739170122608(&var_2a0, &var_ac8, 
        "QUIETDUMP-FORMATdump-formatDump …");
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_848, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_568, 
        "DUMP-FORMATdump-formatDump justf…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_568, 
        "dump-formatDump justfile as <FOR…");
    clap_builder::builder::arg::Arg::env::he1ad3c75d226c026(&var_568, &var_ac8, 
        "JUST_DUMP_FORMAT when inserting …");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_ac8, &var_568, 0);
    clap_builder::builder::arg::Arg::value_parser::h546e8d6bfac9d01b(&var_568, &var_ac8);
    clap_builder::builder::arg::Arg::default_value::h490e19da68f376b3(&var_ac8, &var_568, 
        "just\x1b[1mCYAN'{{'[");
    clap_builder::builder::arg::Arg::value_name::he42040b8555a7829(&var_568, &var_ac8, 
        "FORMATRun `--fmt` in 'check' mod…");
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_ac8, &var_568, 
        "Dump justfile as <FORMAT>EXPLAIN…", 0x19);
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_568, &var_848, &var_ac8);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_848, 
        "EXPLAINexplainJUST_EXPLAINPrint …");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_ac8, &var_848, 2);
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_848, &var_ac8, 
        "explainJUST_EXPLAINPrint recipe …");
    clap_builder::builder::arg::Arg::env::he1ad3c75d226c026(&var_ac8, &var_848, 
        "JUST_EXPLAINPrint recipe doc com…");
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_2a0, &var_ac8, 
        "Print recipe doc comment before …", 0x2a);
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_848, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_568, 
        "GLOBAL-JUSTFILEglobal-justfileWO…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_ac8, &var_568, 2);
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_568, &var_ac8, 
        "global-justfileWORKING-DIRECTORY…");
    clap_builder::builder::arg::Arg::short::h0067f5749df5645d(&var_ac8, &var_568, 0x67);
    clap_builder::builder::arg::Arg::conflicts_with::h6f13739170122608(&var_568, &var_ac8, 
        "JUSTFILEVARIABL");
    clap_builder::builder::arg::Arg::conflicts_with::h6f13739170122608(&var_ac8, &var_568, 
        "WORKING-DIRECTORYUse global just…");
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_2a0, &var_ac8, 
        "Use global justfileHIGHLIGHThigh…", 0x13);
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_568, &var_848, &var_2a0);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_848, 
        "HIGHLIGHThighlightJUST_HIGHLIGHT…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_848, 
        "highlightJUST_HIGHLIGHTHighlight…");
    clap_builder::builder::arg::Arg::env::he1ad3c75d226c026(&var_848, &var_ac8, 
        "JUST_HIGHLIGHTHighlight echoed r…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_ac8, &var_848, 2);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_848, &var_ac8, 
        "Highlight echoed recipe lines in…", 0x25);
    clap_builder::builder::arg::Arg::overrides_with::hd74deb0fcb1bd1ec(&var_ac8, &var_848, 
        "NO-HIGHLIGHTJUST_JUSTFILEUse <JU…");
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_848, &var_568, &var_ac8);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_568, "JUSTFILEVARIABL");
    clap_builder::builder::arg::Arg::short::h0067f5749df5645d(&var_ac8, &var_568, 0x66);
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_568, &var_ac8, 
        "justfileBG_BLACKBG_WHITEImplicit…");
    clap_builder::builder::arg::Arg::env::he1ad3c75d226c026(&var_ac8, &var_568, 
        "JUST_JUSTFILEUse <JUSTFILE> as j…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_568, &var_ac8, 0);
    clap_builder::builder::arg::Arg::value_parser::hba612b267e67056f(&var_ac8, &var_568, &var_580);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_2a0, &var_ac8, 
        "Use <JUSTFILE> as justfileLIST-H…", 0x1a);
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_568, &var_848, &var_2a0);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_848, 
        "LIST-HEADINGlist-headingJUST_LIS…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_848, 
        "list-headingJUST_LIST_HEADINGPri…");
    clap_builder::builder::arg::Arg::env::he1ad3c75d226c026(&var_848, &var_ac8, 
        "JUST_LIST_HEADINGPrint <TEXT> be…");
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_ac8, &var_848, 
        "Print <TEXT> before listAvailabl…", 0x18);
    clap_builder::builder::arg::Arg::value_name::he42040b8555a7829(&var_848, &var_ac8, 
        "TEXT'||'Mas");
    clap_builder::builder::arg::Arg::default_value::h490e19da68f376b3(&var_ac8, &var_848, 
        "Available recipes:\nLIST-PREFIXl…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_2a0, &var_ac8, 0);
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_848, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_568, 
        "LIST-PREFIXlist-prefixPrint <TEX…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_568, 
        "list-prefixPrint <TEXT> before e…");
    clap_builder::builder::arg::Arg::env::he1ad3c75d226c026(&var_568, &var_ac8, 
        "JUST_LIST_PREFIX` had no parent.…");
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_ac8, &var_568, 
        "Print <TEXT> before each list it…", 0x22);
    clap_builder::builder::arg::Arg::value_name::he42040b8555a7829(&var_568, &var_ac8, 
        "TEXT'||'Mas");
    clap_builder::builder::arg::Arg::default_value::h490e19da68f376b3(&var_ac8, &var_568, 
        "    blueq");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_2a0, &var_ac8, 0);
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_568, &var_848, &var_2a0);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_848, 
        "LIST-SUBMODULESlist-submodulesJU…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_848, 
        "list-submodulesJUST_LIST_SUBMODU…");
    clap_builder::builder::arg::Arg::env::he1ad3c75d226c026(&var_848, &var_ac8, 
        "JUST_LIST_SUBMODULESList recipes…");
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_ac8, &var_848, 
        "List recipes in submodulesno-ali…", 0x1a);
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_848, &var_ac8, 2);
    clap_builder::builder::arg::Arg::requires::h5ae9e01375d4ebfb(&var_ac8, &var_848, 
        "LISTQuitbyten");
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_848, &var_568, &var_ac8);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_568, 
        "NO-ALIASESCEILINGceilingJUST_CEI…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_568, 
        "no-aliasesJUST_NO_ALIASESDon't s…");
    clap_builder::builder::arg::Arg::env::he1ad3c75d226c026(&var_568, &var_ac8, 
        "JUST_NO_ALIASESDon't show aliase…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_ac8, &var_568, 2);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_2a0, &var_ac8, 
        "Don't show aliases in listNO-DEP…", 0x1a);
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_568, &var_848, &var_2a0);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_848, 
        "NO-DEPSno-depsJUST_NO_DEPSno-dep…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_848, 
        "no-depsJUST_NO_DEPSno-dependenci…");
    clap_builder::builder::arg::Arg::env::he1ad3c75d226c026(&var_848, &var_ac8, 
        "JUST_NO_DEPSno-dependenciesDon't…");
    clap_builder::builder::arg::Arg::alias::h02979ebbaaedbb9a(&var_ac8, &var_848, 
        "no-dependenciesDon't run recipe …");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_848, &var_ac8, 2);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_ac8, &var_848, 
        "Don't run recipe dependenciesNO-…", 0x1d);
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_848, &var_568, &var_ac8);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_568, 
        "NO-DOTENVno-dotenvJUST_NO_DOTENV…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_568, 
        "no-dotenvJUST_NO_DOTENVDon't loa…");
    clap_builder::builder::arg::Arg::env::he1ad3c75d226c026(&var_568, &var_ac8, 
        "JUST_NO_DOTENVDon't load `.env` …");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_ac8, &var_568, 2);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_2a0, &var_ac8, 
        "Don't load `.env` fileno-highlig…", 0x16);
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_568, &var_848, &var_2a0);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_848, 
        "NO-HIGHLIGHTJUST_JUSTFILEUse <JU…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_848, 
        "no-highlightJUST_NO_HIGHLIGHTDon…");
    clap_builder::builder::arg::Arg::env::he1ad3c75d226c026(&var_848, &var_ac8, 
        "JUST_NO_HIGHLIGHTDon't highlight…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_ac8, &var_848, 2);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_848, &var_ac8, 
        "Don't highlight echoed recipe li…", 0x2b);
    clap_builder::builder::arg::Arg::overrides_with::hd74deb0fcb1bd1ec(&var_ac8, &var_848, 
        "HIGHLIGHThighlightJUST_HIGHLIGHT…");
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_848, &var_568, &var_ac8);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_568, 
        "ONEoneForbid multiple recipes fr…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_568, 
        "oneForbid multiple recipes from …");
    clap_builder::builder::arg::Arg::env::he1ad3c75d226c026(&var_568, &var_ac8, 
        "JUST_ONEparallelBacktickSlimAVX2…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_ac8, &var_568, 2);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_2a0, &var_ac8, 
        "Forbid multiple recipes from bei…", 0x3e);
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_568, &var_848, &var_2a0);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_848, 
        "QUIETDUMP-FORMATdump-formatDump …");
    clap_builder::builder::arg::Arg::short::h0067f5749df5645d(&var_ac8, &var_848, 0x71);
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_848, &var_ac8, 
        "quietJUST_QUIETSuppress all outp…");
    clap_builder::builder::arg::Arg::env::he1ad3c75d226c026(&var_ac8, &var_848, 
        "JUST_QUIETSuppress all outputALL…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_848, &var_ac8, 2);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_ac8, &var_848, 
        "Suppress all outputALLOW-MISSING…", 0x13);
    clap_builder::builder::arg::Arg::conflicts_with::h6f13739170122608(&var_2a0, &var_ac8, 
        "DRY-RUNdry-runJUST_DRY_RUNPrint …");
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_848, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_568, 
        "ALLOW-MISSINGallow-missingJUST_A…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_568, 
        "allow-missingJUST_ALLOW_MISSINGI…");
    clap_builder::builder::arg::Arg::env::he1ad3c75d226c026(&var_568, &var_ac8, 
        "JUST_ALLOW_MISSINGIgnore missing…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_ac8, &var_568, 2);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_2a0, &var_ac8, 
        "Ignore missing recipe and module…", 0x27);
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_568, &var_848, &var_2a0);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_848, 
        "SETsetVALUESHELLshellInvoke <SHE…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_848, 
        "setVALUESHELLshellInvoke <SHELL>…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_848, &var_ac8, 1);
    clap_builder::builder::arg::Arg::number_of_values::h0022716bec63d1ff(&var_ac8, &var_848, 2);
    var_2a0 = "VARIABL";
    int64_t var_298 = 8;
    char const* const var_290 = "VALUESHELLshellInvoke <SHELL> to…";
    int64_t var_288 = 5;
    clap_builder::builder::arg::Arg::value_names::hd246008edcbbc47a(&var_848, &var_ac8, &var_2a0);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_ac8, &var_848, 
        "Override <VARIABLE> with <VALUE>…", 0x20);
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_848, &var_568, &var_ac8);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_568, 
        "SHELLshellInvoke <SHELL> to run …");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_568, 
        "shellInvoke <SHELL> to run recip…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_568, &var_ac8, 0);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_ac8, &var_568, 
        "Invoke <SHELL> to run recipesshe…", 0x1d);
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_568, &var_848, &var_ac8);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_848, 
        "SHELL-ARGClear shell argumentsCO…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_848, 
        "shell-argInvoke shell with <SHEL…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_848, &var_ac8, 1);
    memcpy(&var_ac8, &var_848, 0x278);
    clap_builder::builder::arg::Arg::overrides_with::hd74deb0fcb1bd1ec(&var_848, &var_ac8, 
        "CLEAR-SHELL-ARGS../etc/zoneinfo/…");
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_ac8, &var_848, 
        "Invoke shell with <SHELL-ARG> as…", 0x2c);
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_848, &var_568, &var_ac8);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_568, 
        "SHELL-COMMANDshell-commandCOMMAN…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_568, 
        "shell-commandCOMMANDInvoke <COMM…");
    clap_builder::builder::arg::Arg::requires::h5ae9e01375d4ebfb(&var_568, &var_ac8, 
        "COMMANDInvoke <COMMAND> with the…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_ac8, &var_568, 2);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_2a0, &var_ac8, 
        "Invoke <COMMAND> with the shell …", 0x46);
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_568, &var_848, &var_2a0);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_848, 
        "TEMPDIRJUST_TEMPDIRtempdirSave t…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_ac8, &var_848, 0);
    clap_builder::builder::arg::Arg::env::he1ad3c75d226c026(&var_848, &var_ac8, 
        "JUST_TEMPDIRtempdirSave temporar…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_848, 
        "tempdirSave temporary files to <…");
    clap_builder::builder::arg::Arg::value_parser::hba612b267e67056f(&var_848, &var_ac8, &var_580);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_ac8, &var_848, 
        "Save temporary files to <TEMPDIR…", 0x22);
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_848, &var_568, &var_ac8);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_568, 
        "TIMESTAMPtimestampJUST_TIMESTAMP…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_ac8, &var_568, 2);
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_568, &var_ac8, 
        "timestampJUST_TIMESTAMPPrint rec…");
    clap_builder::builder::arg::Arg::env::he1ad3c75d226c026(&var_ac8, &var_568, 
        "JUST_TIMESTAMPPrint recipe comma…");
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_2a0, &var_ac8, 
        "Print recipe command timestampsJ…", 0x1f);
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_568, &var_848, &var_2a0);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_848, 
        "TIMESTAMP-FORMATInvalid argument…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_ac8, &var_848, 0);
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_848, &var_ac8, 
        "timestamp-formatImperial_Aramaic");
    clap_builder::builder::arg::Arg::env::he1ad3c75d226c026(&var_ac8, &var_848, 
        "JUST_TIMESTAMP_FORMATTimestamp f…");
    clap_builder::builder::arg::Arg::default_value::h490e19da68f376b3(&var_848, &var_ac8, 
        "%H:%M:%SHEXLOWER@");
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_ac8, &var_848, 
        "Timestamp format stringJUST_UNSO…", 0x17);
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_848, &var_568, &var_ac8);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_568, "UNSORTE");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_568, 
        "unsortedPATH_SEPBG_GREENSyntax(\n…");
    clap_builder::builder::arg::Arg::env::he1ad3c75d226c026(&var_568, &var_ac8, 
        "JUST_UNSORTEDReturn list and sum…");
    clap_builder::builder::arg::Arg::short::h0067f5749df5645d(&var_ac8, &var_568, 0x75);
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_568, &var_ac8, 2);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_ac8, &var_568, 
        "Return list and summary entries …", 0x2f);
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_568, &var_848, &var_ac8);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_848, 
        "UNSTABLEvariableBracketRcapacity…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_848, "unstabl");
    clap_builder::builder::arg::Arg::env::he1ad3c75d226c026(&var_848, &var_ac8, 
        "JUST_UNSTABLEEnable unstable fea…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_ac8, &var_848, 2);
    clap_builder::builder::arg::Arg::value_parser::h3840b73aed9f8277(&var_848, &var_ac8);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_ac8, &var_848, 
        "Enable unstable featuresVERBOSEv…", 0x18);
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_848, &var_568, &var_ac8);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_568, 
        "VERBOSEverboseJUST_VERBOSEUse ve…");
    clap_builder::builder::arg::Arg::short::h0067f5749df5645d(&var_ac8, &var_568, 0x76);
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_568, &var_ac8, 
        "verboseJUST_VERBOSEUse verbose o…");
    clap_builder::builder::arg::Arg::env::he1ad3c75d226c026(&var_ac8, &var_568, 
        "JUST_VERBOSEUse verbose outputwo…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_568, &var_ac8, 4);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_ac8, &var_568, 
        "Use verbose outputworking-direct…", 0x12);
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_568, &var_848, &var_ac8);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_848, 
        "WORKING-DIRECTORYUse global just…");
    clap_builder::builder::arg::Arg::short::h0067f5749df5645d(&var_ac8, &var_848, 0x64);
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_848, &var_ac8, 
        "working-directoryJUST_WORKING_DI…");
    clap_builder::builder::arg::Arg::env::he1ad3c75d226c026(&var_ac8, &var_848, 
        "JUST_WORKING_DIRECTORYUse <WORKI…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_848, &var_ac8, 0);
    clap_builder::builder::arg::Arg::value_parser::hba612b267e67056f(&var_ac8, &var_848, &var_580);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_848, &var_ac8, 
        "Use <WORKING-DIRECTORY> as worki…", 0x49);
    clap_builder::builder::arg::Arg::requires::h5ae9e01375d4ebfb(&var_ac8, &var_848, 
        "JUSTFILEVARIABL");
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_848, &var_568, &var_ac8);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_568, 
        "YESyesAutomatically confirm all …");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_568, 
        "yesAutomatically confirm all rec…");
    clap_builder::builder::arg::Arg::env::he1ad3c75d226c026(&var_568, &var_ac8, 
        "JUST_YESCommand  or more");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_ac8, &var_568, 2);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_2a0, &var_ac8, 
        "Automatically confirm all recipe…", 0x22);
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_568, &var_848, &var_2a0);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_848, 
        "CHANGELOGchangelogPrint changelo…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_848, 
        "changelogPrint changelogCHOOSEch…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_848, &var_ac8, 2);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_ac8, &var_848, 
        "Print changelogCHOOSEchooseSelec…", 0xf);
    clap_builder::builder::arg::Arg::help_heading::hd78dcbc9aec10ce6(&var_2a0, &var_ac8, 
        "Commandsunexport, group=on line …");
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_848, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_568, 
        "CHOOSEchooseSelect one or more r…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_568, 
        "chooseSelect one or more recipes…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_568, &var_ac8, 2);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_ac8, &var_568, 
        "Select one or more recipes to ru…", 0xa0);
    clap_builder::builder::arg::Arg::help_heading::hd78dcbc9aec10ce6(&var_2a0, &var_ac8, 
        "Commandsunexport, group=on line …");
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_568, &var_848, &var_2a0);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_848, 
        "COMMANDInvoke <COMMAND> with the…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_848, 
        "commandRun an arbitrary command …");
    clap_builder::builder::arg::Arg::short::h0067f5749df5645d(&var_848, &var_ac8, 0x63);
    clap_builder::builder::arg::Arg::num_args::h88a6194ea7cdcbeb(&var_ac8, &var_848, 1);
    memcpy(&var_848, &var_ac8, 0x278);
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_ac8, &var_848, 1);
    var_2a0 = 2;
    clap_builder::builder::arg::Arg::value_parser::hba612b267e67056f(&var_848, &var_ac8, &var_2a0);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_ac8, &var_848, 
        "Run an arbitrary command with th…", 0x57);
    clap_builder::builder::arg::Arg::help_heading::hd78dcbc9aec10ce6(&var_2a0, &var_ac8, 
        "Commandsunexport, group=on line …");
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_848, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_568, 
        "COMPLETIONScompletionsPrint shel…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_568, 
        "completionsPrint shell completio…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_568, &var_ac8, 0);
    clap_builder::builder::arg::Arg::value_name::he42040b8555a7829(&var_ac8, &var_568, 
        "SHELLshellInvoke <SHELL> to run …");
    clap_builder::builder::arg::Arg::value_parser::h8c7886baff0c67d8(&var_568, &var_ac8);
    memcpy(&var_ac8, &var_568, 0x278);
    int32_t var_2f0;
    int32_t var_850_1 = 0x800 | var_2f0;
    int32_t var_2ec;
    int32_t var_84c_1 = var_2ec;
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_568, &var_ac8, 
        "Print shell completion script fo…", 0x29);
    clap_builder::builder::arg::Arg::help_heading::hd78dcbc9aec10ce6(&var_ac8, &var_568, 
        "Commandsunexport, group=on line …");
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_568, &var_848, &var_ac8);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_848, 
        "DUMP.batbashTextHOMECoreSlimm");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_848, 
        "dumpINIT || data.env>");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_848, &var_ac8, 2);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_ac8, &var_848, 
        "Print justfileEdit justfile with…", 0xe);
    clap_builder::builder::arg::Arg::help_heading::hd78dcbc9aec10ce6(&var_2a0, &var_ac8, 
        "Commandsunexport, group=on line …");
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_848, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_568, "EDIT':=''=~'elsewordc");
    clap_builder::builder::arg::Arg::short::h0067f5749df5645d(&var_ac8, &var_568, 0x65);
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_568, &var_ac8, 
        "editjoinuuid'\''left\(buenum|");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_ac8, &var_568, 2);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_568, &var_ac8, 
        "Edit justfile with editor given …", 0x4c);
    clap_builder::builder::arg::Arg::help_heading::hd78dcbc9aec10ce6(&var_ac8, &var_568, 
        "Commandsunexport, group=on line …");
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_568, &var_848, &var_ac8);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_848, 
        "EVALUATEExtenderbopomofoUgaritic…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_848, 
        "evaluatejust_pidnamepathstride: …");
    clap_builder::builder::arg::Arg::alias::h02979ebbaaedbb9a(&var_848, &var_ac8, &data_466600[8]);
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_ac8, &var_848, 2);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_848, &var_ac8, 
        "Evaluate and print all variables…", 0x6f);
    clap_builder::builder::arg::Arg::help_heading::hd78dcbc9aec10ce6(&var_ac8, &var_848, 
        "Commandsunexport, group=on line …");
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_848, &var_568, &var_ac8);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_568, 
        "FORMATRun `--fmt` in 'check' mod…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_568, 
        "fmtformatFormat and overwrite ju…");
    clap_builder::builder::arg::Arg::alias::h02979ebbaaedbb9a(&var_568, &var_ac8, 
        "formatFormat and overwrite justf…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_ac8, &var_568, 2);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_568, &var_ac8, 
        "Format and overwrite justfileGRO…", 0x1d);
    clap_builder::builder::arg::Arg::help_heading::hd78dcbc9aec10ce6(&var_ac8, &var_568, 
        "Commandsunexport, group=on line …");
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_568, &var_848, &var_ac8);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_848, 
        "GROUPSgroupsList recipe groupsin…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_848, 
        "groupsList recipe groupsinitiali…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_848, &var_ac8, 2);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_ac8, &var_848, 
        "List recipe groupsinitializeInit…", 0x12);
    clap_builder::builder::arg::Arg::help_heading::hd78dcbc9aec10ce6(&var_2a0, &var_ac8, 
        "Commandsunexport, group=on line …");
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_848, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_568, "INIT || data.env>");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_568, "in");
    clap_builder::builder::arg::Arg::alias::h02979ebbaaedbb9a(&var_568, &var_ac8, 
        "initializeInitialize new justfil…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_ac8, &var_568, 2);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_568, &var_ac8, 
        "Initialize new justfile in proje…", 0x27);
    clap_builder::builder::arg::Arg::help_heading::hd78dcbc9aec10ce6(&var_ac8, &var_568, 
        "Commandsunexport, group=on line …");
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_568, &var_848, &var_ac8);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_848, "LISTQuitbyten");
    clap_builder::builder::arg::Arg::short::h0067f5749df5645d(&var_ac8, &var_848, 0x6c);
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_848, &var_ac8, "list.svnmode{");
    clap_builder::builder::arg::Arg::num_args::h88a6194ea7cdcbeb(&var_ac8, &var_848, 0);
    clap_builder::builder::arg::Arg::value_name::he42040b8555a7829(&var_848, &var_ac8, 
        "MODULEARGUMENTSList available re…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_ac8, &var_848, 0);
    clap_builder::builder::arg::Arg::conflicts_with::h6f13739170122608(&var_848, &var_ac8, 
        "ARGUMENTSList available recipes …");
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_ac8, &var_848, 
        "List available recipes in <MODUL…", 0x35);
    clap_builder::builder::arg::Arg::help_heading::hd78dcbc9aec10ce6(&var_2a0, &var_ac8, 
        "Commandsunexport, group=on line …");
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_848, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_568, 
        "MANmanPrint man pageREQUESTreque…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_568, 
        "manPrint man pageREQUESTrequestE…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_568, &var_ac8, 2);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_ac8, &var_568, 
        "Print man pageREQUESTrequestExec…", 0xe);
    clap_builder::builder::arg::Arg::help_heading::hd78dcbc9aec10ce6(&var_2a0, &var_ac8, 
        "Commandsunexport, group=on line …");
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_568, &var_848, &var_2a0);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_848, 
        "REQUESTrequestExecute <REQUEST>.…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_848, 
        "requestExecute <REQUEST>. For in…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_848, &var_ac8, 0);
    memcpy(&var_ac8, &var_848, 0x278);
    int32_t var_5d0;
    int32_t var_850_2 = var_5d0 | 0x20 | 0x20 | 4;
    int32_t var_5cc;
    int32_t var_84c_2 = var_5cc;
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_848, &var_ac8, 
        "Execute <REQUEST>. For internal …", 0x5d);
    clap_builder::builder::arg::Arg::help_heading::hd78dcbc9aec10ce6(&var_ac8, &var_848, 
        "REQUESTrequestExecute <REQUEST>.…");
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_848, &var_568, &var_ac8);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_568, "SHOW'}}'cyanstaro");
    clap_builder::builder::arg::Arg::short::h0067f5749df5645d(&var_ac8, &var_568, 0x73);
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_568, &var_ac8, 
        "show\x1b[9m\n\&.L");
    clap_builder::builder::arg::Arg::num_args::h88a6194ea7cdcbeb(&var_ac8, &var_568, 1);
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_568, &var_ac8, 0);
    clap_builder::builder::arg::Arg::value_name::he42040b8555a7829(&var_ac8, &var_568, 
        "PATH ... => M");
    clap_builder::builder::arg::Arg::conflicts_with::h6f13739170122608(&var_568, &var_ac8, 
        "ARGUMENTSList available recipes …");
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_ac8, &var_568, 
        "Show recipe at <PATH>SUMMARYsumm…", 0x15);
    clap_builder::builder::arg::Arg::help_heading::hd78dcbc9aec10ce6(&var_2a0, &var_ac8, 
        "Commandsunexport, group=on line …");
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_568, &var_848, &var_2a0);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_848, 
        "SUMMARYsummaryList names of avai…");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_848, 
        "summaryList names of available r…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_848, &var_ac8, 2);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_ac8, &var_848, 
        "List names of available recipesV…", 0x1f);
    clap_builder::builder::arg::Arg::help_heading::hd78dcbc9aec10ce6(&var_2a0, &var_ac8, 
        "Commandsunexport, group=on line …");
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_848, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_568, 
        "VARIABLESvariablesList names of …");
    clap_builder::builder::arg::Arg::long::h32aad1a85cbe4b9b(&var_ac8, &var_568, 
        "variablesList names of variables…");
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_568, &var_ac8, 2);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_ac8, &var_568, 
        "List names of variablesOverrides…", 0x17);
    clap_builder::builder::arg::Arg::help_heading::hd78dcbc9aec10ce6(&var_2a0, &var_ac8, 
        "Commandsunexport, group=on line …");
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(&var_568, &var_848, &var_2a0);
    int64_t var_800 = 1;
    int64_t var_7f8 = 0;
    var_848 = 0;
    int64_t var_840 = 8;
    int16_t var_7f0 = 0;
    int128_t var_838 = {0};
    int64_t var_828 = 8;
    int128_t var_820 = {0};
    int64_t var_810 = 8;
    int64_t var_808 = 0;
    clap_builder::builder::arg_group::ArgGroup::id::h60674fccd566ec19(&var_ac8, &var_848);
    clap_builder::builder::arg_group::ArgGroup::args::h157cacb295ca90d8(&var_2a0, &var_ac8);
    clap_builder::builder::command::Command::group::h261fc968afc76c3e(&var_848, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::hd16ab9c074c73c92(&var_568, 
        "ARGUMENTSList available recipes …");
    clap_builder::builder::arg::Arg::num_args::h88a6194ea7cdcbeb(&var_ac8, &var_568, 1);
    clap_builder::builder::arg::Arg::action::hcb13bbf8590ab861(&var_568, &var_ac8, 1);
    clap_builder::builder::arg::Arg::help::he8dc067d6f5e0de5(&var_ac8, &var_568, 
        "Overrides and recipe(s) to run, …", 0x4e);
    clap_builder::builder::command::Command::arg::h0ec0a841f238e318(arg1, &var_848, &var_ac8);
    return arg1;
}
