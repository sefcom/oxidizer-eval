long long just::config::Config::app(unsigned long long a0)
{
    char v0;  // [bp-0xac8]
    unsigned int v1;  // [bp-0xac7]
    char v2;  // [bp-0xac0]
    unsigned short v3;  // [bp-0xabc]
    unsigned long long v4;  // [bp-0xaba]
    unsigned long long v5;  // [bp-0xab4]
    char v6;  // [bp-0xaac]
    unsigned int v7;  // [bp-0xaab]
    char v8;  // [bp-0xaa4]
    unsigned short v9;  // [bp-0xaa0]
    char v10;  // [bp-0xa9e]
    unsigned int v11;  // [bp-0xa9d]
    char v12;  // [bp-0xa96]
    unsigned short v13;  // [bp-0xa92]
    char v14;  // [bp-0xa90]
    unsigned int v15;  // [bp-0xa8f]
    char v16;  // [bp-0xa88]
    unsigned short v17;  // [bp-0xa84]
    char v18;  // [bp-0xa82]
    unsigned int v19;  // [bp-0xa81]
    char v20;  // [bp-0xa7a]
    unsigned short v21;  // [bp-0xa76]
    unsigned int v22;  // [bp-0xa74]
    char v23;  // [bp-0xa70]
    char v24;  // [bp-0xa6c]
    unsigned short v25;  // [bp-0xa68]
    int v26;  // [bp-0xa66]
    int v27;  // [bp-0xa5a]
    unsigned int v28;  // [bp-0x850]
    unsigned int v29;  // [bp-0x84c]
    void* v30;  // [bp-0x848], Other Possible Types: char
    unsigned long long v31;  // [bp-0x840]
    uint128_t v32;  // [bp-0x838]
    unsigned long long v33;  // [bp-0x828]
    uint128_t v34;  // [bp-0x820]
    unsigned long long v35;  // [bp-0x810]
    void* v36;  // [bp-0x808]
    unsigned long long v37;  // [bp-0x800]
    void* v38;  // [bp-0x7f8]
    unsigned short v39;  // [bp-0x7f0]
    unsigned int v40;  // [bp-0x5d0]
    unsigned int v41;  // [bp-0x5cc]
    unsigned int v42;  // [bp-0x58c]
    unsigned long long v43;  // [bp-0x588]
    unsigned long long v44;  // [bp-0x580]
    char v45;  // [bp-0x568]
    unsigned long long v46;  // [bp-0x55a]
    unsigned int v47;  // [bp-0x552]
    unsigned short v48;  // [bp-0x54e]
    char v49;  // [bp-0x506]
    char v50;  // [bp-0x4fa]
    unsigned int v51;  // [bp-0x2f0]
    char v52;  // [bp-0x2ec]
    unsigned int v53;  // [bp-0x2ac]
    unsigned long long v54;  // [bp-0x2a8]
    char v55;  // [bp-0x2a0], Other Possible Types: unsigned long long
    unsigned long long v56;  // [bp-0x298]
    unsigned long long v57;  // [bp-0x290]
    unsigned long long v58;  // [bp-0x288]
    int v60;  // xmm1

    v45.new();
    v30.bin_name(&v45);
    v45.version(&v30);
    v30.author(&v45);
    v45.about(&v30);
    memcpy(&v30, &v45, 700);
    v42 = v53 | 32;
    v43 = v54;
    v45.styled();
    v46 = 0x300000100;
    v47 = 3;
    v48 = 1;
    v4 = 0x300000100;
    v5 = *((long long *)((char *)&v46 + 6));
    v60 = *((int128_t *)&v50);
    *((int128_t *)&v26) = *((int128_t *)&v49);
    v27 = v60;
    v0 = 0;
    v1 = 50331651;
    v2 = 3;
    v3 = 1;
    v6 = 0;
    v7 = 50331651;
    v8 = 3;
    v9 = 1;
    v10 = 0;
    v11 = 50331650;
    v12 = 3;
    v13 = 0;
    v14 = 0;
    v15 = 50331654;
    v16 = 3;
    v17 = 0;
    v18 = 0;
    v19 = 50331650;
    v20 = 3;
    v21 = 0;
    v22 = 0x100;
    v23 = 3;
    v24 = 3;
    v25 = 0;
    v45.styles(&v30, &v0);
    v30.new("ALIAS_STYLEalias-stylerightSet list command alias display styleNO-ALIASESCEILINGceilingJUST_CEILINGDo not ascend above <CEILING> directory when searching for a justfile.CHECKcheckFORMATRun `--fmt` in 'check' mode. Exits with 0 if justfile is formatted corr", 11);
    v0.long(&v30, "alias-stylerightSet list command alias display styleNO-ALIASESCEILINGceilingJUST_CEILINGDo not ascend above <CEILING> directory when searching for a justfile.CHECKcheckFORMATRun `--fmt` in 'check' mode. Exits with 0 if justfile is formatted correctly. Exit", 11);
    v30.env(&v0, "JUST_ALIAS_STYLE", 16);
    v0.action(&v30, 0);
    v30.value_parser(&v0);
    v0.default_value(&v30, "rightSet list command alias display styleNO-ALIASESCEILINGceilingJUST_CEILINGDo not ascend above <CEILING> directory when searching for a justfile.CHECKcheckFORMATRun `--fmt` in 'check' mode. Exits with 0 if justfile is formatted correctly. Exits with 1 an", 5);
    v30.help(&v0, "Set list command alias display styleNO-ALIASESCEILINGceilingJUST_CEILINGDo not ascend above <CEILING> directory when searching for a justfile.CHECKcheckFORMATRun `--fmt` in 'check' mode. Exits with 0 if justfile is formatted correctly. Exits with 1 and pri", 36);
    v0.conflicts_with(&v30, "NO-ALIASESCEILINGceilingJUST_CEILINGDo not ascend above <CEILING> directory when searching for a justfile.CHECKcheckFORMATRun `--fmt` in 'check' mode. Exits with 0 if justfile is formatted correctly. Exits with 1 and prints a diff if formatting is required", 10);
    v30.arg(&v45, &v0);
    v45.new("CEILINGceilingJUST_CEILINGDo not ascend above <CEILING> directory when searching for a justfile.CHECKcheckFORMATRun `--fmt` in 'check' mode. Exits with 0 if justfile is formatted correctly. Exits with 1 and prints a diff if formatting is required.CHOOSERch", 7);
    v0.long(&v45, "ceilingJUST_CEILINGDo not ascend above <CEILING> directory when searching for a justfile.CHECKcheckFORMATRun `--fmt` in 'check' mode. Exits with 0 if justfile is formatted correctly. Exits with 1 and prints a diff if formatting is required.CHOOSERchooserJU", 7);
    v45.env(&v0, "JUST_CEILINGDo not ascend above <CEILING> directory when searching for a justfile.CHECKcheckFORMATRun `--fmt` in 'check' mode. Exits with 0 if justfile is formatted correctly. Exits with 1 and prints a diff if formatting is required.CHOOSERchooserJUST_CHOO", 12);
    v0.action(&v45, 0);
    v44 = 3;
    v45.value_parser(&v0, &v44);
    v0.help(&v45, "Do not ascend above <CEILING> directory when searching for a justfile.CHECKcheckFORMATRun `--fmt` in 'check' mode. Exits with 0 if justfile is formatted correctly. Exits with 1 and prints a diff if formatting is required.CHOOSERchooserJUST_CHOOSEROverride ", 70);
    v45.arg(&v30, &v0);
    v30.new("CHECKcheckFORMATRun `--fmt` in 'check' mode. Exits with 0 if justfile is formatted correctly. Exits with 1 and prints a diff if formatting is required.CHOOSERchooserJUST_CHOOSEROverride binary invoked by `--choose`SHELL-ARGClear shell argumentsCOLORcolorJU", 5);
    v0.long(&v30, "checkFORMATRun `--fmt` in 'check' mode. Exits with 0 if justfile is formatted correctly. Exits with 1 and prints a diff if formatting is required.CHOOSERchooserJUST_CHOOSEROverride binary invoked by `--choose`SHELL-ARGClear shell argumentsCOLORcolorJUST_CO", 5);
    v30.action(&v0, 2);
    v0.requires(&v30, "FORMATRun `--fmt` in 'check' mode. Exits with 0 if justfile is formatted correctly. Exits with 1 and prints a diff if formatting is required.CHOOSERchooserJUST_CHOOSEROverride binary invoked by `--choose`SHELL-ARGClear shell argumentsCOLORcolorJUST_COLORPr", 6);
    v55.help(&v0, "Run `--fmt` in 'check' mode. Exits with 0 if justfile is formatted correctly. Exits with 1 and prints a diff if formatting is required.CHOOSERchooserJUST_CHOOSEROverride binary invoked by `--choose`SHELL-ARGClear shell argumentsCOLORcolorJUST_COLORPrint co", 135);
    v30.arg(&v45, &v55);
    v45.new("CHOOSERchooserJUST_CHOOSEROverride binary invoked by `--choose`SHELL-ARGClear shell argumentsCOLORcolorJUST_COLORPrint colorful outputCOMMAND-COLORcommand-colorJUST_COMMAND_COLOREcho recipe lines in <COMMAND-COLOR>CYGPATHcygpathJUST_CYGPATHUse binary at <C", 7);
    v0.long(&v45, "chooserJUST_CHOOSEROverride binary invoked by `--choose`SHELL-ARGClear shell argumentsCOLORcolorJUST_COLORPrint colorful outputCOMMAND-COLORcommand-colorJUST_COMMAND_COLOREcho recipe lines in <COMMAND-COLOR>CYGPATHcygpathJUST_CYGPATHUse binary at <CYGPATH>", 7);
    v45.env(&v0, "JUST_CHOOSEROverride binary invoked by `--choose`SHELL-ARGClear shell argumentsCOLORcolorJUST_COLORPrint colorful outputCOMMAND-COLORcommand-colorJUST_COMMAND_COLOREcho recipe lines in <COMMAND-COLOR>CYGPATHcygpathJUST_CYGPATHUse binary at <CYGPATH> to con", 12);
    v0.action(&v45, 0);
    v55.help(&v0, "Override binary invoked by `--choose`SHELL-ARGClear shell argumentsCOLORcolorJUST_COLORPrint colorful outputCOMMAND-COLORcommand-colorJUST_COMMAND_COLOREcho recipe lines in <COMMAND-COLOR>CYGPATHcygpathJUST_CYGPATHUse binary at <CYGPATH> to convert between", 37);
    v45.arg(&v30, &v55);
    v30.new("CLEAR-SHELL-ARGS", 16);
    v0.long(&v30, "clear-shell-args, an alias for `", 16);
    v30.action(&v0, 2);
    v0.overrides_with(&v30, "SHELL-ARGClear shell argumentsCOLORcolorJUST_COLORPrint colorful outputCOMMAND-COLORcommand-colorJUST_COMMAND_COLOREcho recipe lines in <COMMAND-COLOR>CYGPATHcygpathJUST_CYGPATHUse binary at <CYGPATH> to convert between unix and Windows paths.DOTENV-FILENA", 9);
    v55.help(&v0, "Clear shell argumentsCOLORcolorJUST_COLORPrint colorful outputCOMMAND-COLORcommand-colorJUST_COMMAND_COLOREcho recipe lines in <COMMAND-COLOR>CYGPATHcygpathJUST_CYGPATHUse binary at <CYGPATH> to convert between unix and Windows paths.DOTENV-FILENAMEdotenv-", 21);
    v30.arg(&v45, &v55);
    v45.new("COLORcolorJUST_COLORPrint colorful outputCOMMAND-COLORcommand-colorJUST_COMMAND_COLOREcho recipe lines in <COMMAND-COLOR>CYGPATHcygpathJUST_CYGPATHUse binary at <CYGPATH> to convert between unix and Windows paths.DOTENV-FILENAMEdotenv-filenameSearch for en", 5);
    v0.long(&v45, "colorJUST_COLORPrint colorful outputCOMMAND-COLORcommand-colorJUST_COMMAND_COLOREcho recipe lines in <COMMAND-COLOR>CYGPATHcygpathJUST_CYGPATHUse binary at <CYGPATH> to convert between unix and Windows paths.DOTENV-FILENAMEdotenv-filenameSearch for environ", 5);
    v45.env(&v0, "JUST_COLORPrint colorful outputCOMMAND-COLORcommand-colorJUST_COMMAND_COLOREcho recipe lines in <COMMAND-COLOR>CYGPATHcygpathJUST_CYGPATHUse binary at <CYGPATH> to convert between unix and Windows paths.DOTENV-FILENAMEdotenv-filenameSearch for environment ", 10);
    v0.action(&v45, 0);
    v45.value_parser(&v0);
    v0.default_value(&v45, "autopwsh'!=''=='(", 4);
    v55.help(&v0, "Print colorful outputCOMMAND-COLORcommand-colorJUST_COMMAND_COLOREcho recipe lines in <COMMAND-COLOR>CYGPATHcygpathJUST_CYGPATHUse binary at <CYGPATH> to convert between unix and Windows paths.DOTENV-FILENAMEdotenv-filenameSearch for environment file named", 21);
    v45.arg(&v30, &v55);
    v30.new("COMMAND-COLORcommand-colorJUST_COMMAND_COLOREcho recipe lines in <COMMAND-COLOR>CYGPATHcygpathJUST_CYGPATHUse binary at <CYGPATH> to convert between unix and Windows paths.DOTENV-FILENAMEdotenv-filenameSearch for environment file named <DOTENV-FILENAME> in", 13);
    v0.long(&v30, "command-colorJUST_COMMAND_COLOREcho recipe lines in <COMMAND-COLOR>CYGPATHcygpathJUST_CYGPATHUse binary at <CYGPATH> to convert between unix and Windows paths.DOTENV-FILENAMEdotenv-filenameSearch for environment file named <DOTENV-FILENAME> instead of `.en", 13);
    v30.env(&v0, "JUST_COMMAND_COLOREcho recipe lines in <COMMAND-COLOR>CYGPATHcygpathJUST_CYGPATHUse binary at <CYGPATH> to convert between unix and Windows paths.DOTENV-FILENAMEdotenv-filenameSearch for environment file named <DOTENV-FILENAME> instead of `.env`DOTENV-PATH", 18);
    v0.action(&v30, 0);
    v30.value_parser(&v0);
    v0.help(&v30, "Echo recipe lines in <COMMAND-COLOR>CYGPATHcygpathJUST_CYGPATHUse binary at <CYGPATH> to convert between unix and Windows paths.DOTENV-FILENAMEdotenv-filenameSearch for environment file named <DOTENV-FILENAME> instead of `.env`DOTENV-PATHdotenv-pathLoad <D", 36);
    v30.arg(&v45, &v0);
    v45.new("CYGPATHcygpathJUST_CYGPATHUse binary at <CYGPATH> to convert between unix and Windows paths.DOTENV-FILENAMEdotenv-filenameSearch for environment file named <DOTENV-FILENAME> instead of `.env`DOTENV-PATHdotenv-pathLoad <DOTENV-PATH> as environment file inst", 7);
    v0.long(&v45, "cygpathJUST_CYGPATHUse binary at <CYGPATH> to convert between unix and Windows paths.DOTENV-FILENAMEdotenv-filenameSearch for environment file named <DOTENV-FILENAME> instead of `.env`DOTENV-PATHdotenv-pathLoad <DOTENV-PATH> as environment file instead of ", 7);
    v45.env(&v0, "JUST_CYGPATHUse binary at <CYGPATH> to convert between unix and Windows paths.DOTENV-FILENAMEdotenv-filenameSearch for environment file named <DOTENV-FILENAME> instead of `.env`DOTENV-PATHdotenv-pathLoad <DOTENV-PATH> as environment file instead of searchi", 12);
    v0.action(&v45, 0);
    v45.value_parser(&v0, &v44);
    v0.default_value(&v45, "cygpathJUST_CYGPATHUse binary at <CYGPATH> to convert between unix and Windows paths.DOTENV-FILENAMEdotenv-filenameSearch for environment file named <DOTENV-FILENAME> instead of `.env`DOTENV-PATHdotenv-pathLoad <DOTENV-PATH> as environment file instead of ", 7);
    v55.help(&v0, "Use binary at <CYGPATH> to convert between unix and Windows paths.DOTENV-FILENAMEdotenv-filenameSearch for environment file named <DOTENV-FILENAME> instead of `.env`DOTENV-PATHdotenv-pathLoad <DOTENV-PATH> as environment file instead of searching for oneDR", 66);
    v45.arg(&v30, &v55);
    v30.new("DOTENV-FILENAMEdotenv-filenameSearch for environment file named <DOTENV-FILENAME> instead of `.env`DOTENV-PATHdotenv-pathLoad <DOTENV-PATH> as environment file instead of searching for oneDRY-RUNdry-runJUST_DRY_RUNPrint what just would do without doing itQ", 15);
    v0.long(&v30, "dotenv-filenameSearch for environment file named <DOTENV-FILENAME> instead of `.env`DOTENV-PATHdotenv-pathLoad <DOTENV-PATH> as environment file instead of searching for oneDRY-RUNdry-runJUST_DRY_RUNPrint what just would do without doing itQUIETDUMP-FORMAT", 15);
    v30.action(&v0, 0);
    v0.help(&v30, "Search for environment file named <DOTENV-FILENAME> instead of `.env`DOTENV-PATHdotenv-pathLoad <DOTENV-PATH> as environment file instead of searching for oneDRY-RUNdry-runJUST_DRY_RUNPrint what just would do without doing itQUIETDUMP-FORMATdump-formatDump", 69);
    v55.conflicts_with(&v0, "DOTENV-PATHdotenv-pathLoad <DOTENV-PATH> as environment file instead of searching for oneDRY-RUNdry-runJUST_DRY_RUNPrint what just would do without doing itQUIETDUMP-FORMATdump-formatDump justfile as <FORMAT>EXPLAINexplainJUST_EXPLAINPrint recipe doc comme", 11);
    v30.arg(&v45, &v55);
    v45.new("DOTENV-PATHdotenv-pathLoad <DOTENV-PATH> as environment file instead of searching for oneDRY-RUNdry-runJUST_DRY_RUNPrint what just would do without doing itQUIETDUMP-FORMATdump-formatDump justfile as <FORMAT>EXPLAINexplainJUST_EXPLAINPrint recipe doc comme", 11);
    v0.short(&v45, 69);
    v45.long(&v0, "dotenv-pathLoad <DOTENV-PATH> as environment file instead of searching for oneDRY-RUNdry-runJUST_DRY_RUNPrint what just would do without doing itQUIETDUMP-FORMATdump-formatDump justfile as <FORMAT>EXPLAINexplainJUST_EXPLAINPrint recipe doc comment before r", 11);
    v0.action(&v45, 0);
    v45.value_parser(&v0, &v44);
    v0.help(&v45, "Load <DOTENV-PATH> as environment file instead of searching for oneDRY-RUNdry-runJUST_DRY_RUNPrint what just would do without doing itQUIETDUMP-FORMATdump-formatDump justfile as <FORMAT>EXPLAINexplainJUST_EXPLAINPrint recipe doc comment before running itGL", 67);
    v45.arg(&v30, &v0);
    v30.new("DRY-RUNdry-runJUST_DRY_RUNPrint what just would do without doing itQUIETDUMP-FORMATdump-formatDump justfile as <FORMAT>EXPLAINexplainJUST_EXPLAINPrint recipe doc comment before running itGLOBAL-JUSTFILEglobal-justfileWORKING-DIRECTORYUse global justfileHIG", 7);
    v0.short(&v30, 110);
    v30.long(&v0, "dry-runJUST_DRY_RUNPrint what just would do without doing itQUIETDUMP-FORMATdump-formatDump justfile as <FORMAT>EXPLAINexplainJUST_EXPLAINPrint recipe doc comment before running itGLOBAL-JUSTFILEglobal-justfileWORKING-DIRECTORYUse global justfileHIGHLIGHTh", 7);
    v0.env(&v30, "JUST_DRY_RUNPrint what just would do without doing itQUIETDUMP-FORMATdump-formatDump justfile as <FORMAT>EXPLAINexplainJUST_EXPLAINPrint recipe doc comment before running itGLOBAL-JUSTFILEglobal-justfileWORKING-DIRECTORYUse global justfileHIGHLIGHThighligh", 12);
    v30.action(&v0, 2);
    v0.help(&v30, "Print what just would do without doing itQUIETDUMP-FORMATdump-formatDump justfile as <FORMAT>EXPLAINexplainJUST_EXPLAINPrint recipe doc comment before running itGLOBAL-JUSTFILEglobal-justfileWORKING-DIRECTORYUse global justfileHIGHLIGHThighlightJUST_HIGHLI", 41);
    v55.conflicts_with(&v0, "QUIETDUMP-FORMATdump-formatDump justfile as <FORMAT>EXPLAINexplainJUST_EXPLAINPrint recipe doc comment before running itGLOBAL-JUSTFILEglobal-justfileWORKING-DIRECTORYUse global justfileHIGHLIGHThighlightJUST_HIGHLIGHTHighlight echoed recipe lines in boldN", 5);
    v30.arg(&v45, &v55);
    v45.new("DUMP-FORMATdump-formatDump justfile as <FORMAT>EXPLAINexplainJUST_EXPLAINPrint recipe doc comment before running itGLOBAL-JUSTFILEglobal-justfileWORKING-DIRECTORYUse global justfileHIGHLIGHThighlightJUST_HIGHLIGHTHighlight echoed recipe lines in boldNO-HIG", 11);
    v0.long(&v45, "dump-formatDump justfile as <FORMAT>EXPLAINexplainJUST_EXPLAINPrint recipe doc comment before running itGLOBAL-JUSTFILEglobal-justfileWORKING-DIRECTORYUse global justfileHIGHLIGHThighlightJUST_HIGHLIGHTHighlight echoed recipe lines in boldNO-HIGHLIGHTJUST_", 11);
    v45.env(&v0, "JUST_DUMP_FORMAT when in", 16);
    v0.action(&v45, 0);
    v45.value_parser(&v0);
    v0.default_value(&v45, "just", 4);
    v45.value_name(&v0, "FORMATRun `--fmt` in 'check' mode. Exits with 0 if justfile is formatted correctly. Exits with 1 and prints a diff if formatting is required.CHOOSERchooserJUST_CHOOSEROverride binary invoked by `--choose`SHELL-ARGClear shell argumentsCOLORcolorJUST_COLORPr", 6);
    v0.help(&v45, "Dump justfile as <FORMAT>EXPLAINexplainJUST_EXPLAINPrint recipe doc comment before running itGLOBAL-JUSTFILEglobal-justfileWORKING-DIRECTORYUse global justfileHIGHLIGHThighlightJUST_HIGHLIGHTHighlight echoed recipe lines in boldNO-HIGHLIGHTJUST_JUSTFILEUse", 25);
    v45.arg(&v30, &v0);
    v30.new("EXPLAINexplainJUST_EXPLAINPrint recipe doc comment before running itGLOBAL-JUSTFILEglobal-justfileWORKING-DIRECTORYUse global justfileHIGHLIGHThighlightJUST_HIGHLIGHTHighlight echoed recipe lines in boldNO-HIGHLIGHTJUST_JUSTFILEUse <JUSTFILE> as justfileLI", 7);
    v0.action(&v30, 2);
    v30.long(&v0, "explainJUST_EXPLAINPrint recipe doc comment before running itGLOBAL-JUSTFILEglobal-justfileWORKING-DIRECTORYUse global justfileHIGHLIGHThighlightJUST_HIGHLIGHTHighlight echoed recipe lines in boldNO-HIGHLIGHTJUST_JUSTFILEUse <JUSTFILE> as justfileLIST-HEAD", 7);
    v0.env(&v30, "JUST_EXPLAINPrint recipe doc comment before running itGLOBAL-JUSTFILEglobal-justfileWORKING-DIRECTORYUse global justfileHIGHLIGHThighlightJUST_HIGHLIGHTHighlight echoed recipe lines in boldNO-HIGHLIGHTJUST_JUSTFILEUse <JUSTFILE> as justfileLIST-HEADINGlist", 12);
    v55.help(&v0, "Print recipe doc comment before running itGLOBAL-JUSTFILEglobal-justfileWORKING-DIRECTORYUse global justfileHIGHLIGHThighlightJUST_HIGHLIGHTHighlight echoed recipe lines in boldNO-HIGHLIGHTJUST_JUSTFILEUse <JUSTFILE> as justfileLIST-HEADINGlist-headingJUST", 42);
    v30.arg(&v45, &v55);
    v45.new("GLOBAL-JUSTFILEglobal-justfileWORKING-DIRECTORYUse global justfileHIGHLIGHThighlightJUST_HIGHLIGHTHighlight echoed recipe lines in boldNO-HIGHLIGHTJUST_JUSTFILEUse <JUSTFILE> as justfileLIST-HEADINGlist-headingJUST_LIST_HEADINGPrint <TEXT> before listAvail", 15);
    v0.action(&v45, 2);
    v45.long(&v0, "global-justfileWORKING-DIRECTORYUse global justfileHIGHLIGHThighlightJUST_HIGHLIGHTHighlight echoed recipe lines in boldNO-HIGHLIGHTJUST_JUSTFILEUse <JUSTFILE> as justfileLIST-HEADINGlist-headingJUST_LIST_HEADINGPrint <TEXT> before listAvailable recipes:\nL", 15);
    v0.short(&v45, 103);
    v45.conflicts_with(&v0, "JUSTFILE", 8);
    v0.conflicts_with(&v45, "WORKING-DIRECTORYUse global justfileHIGHLIGHThighlightJUST_HIGHLIGHTHighlight echoed recipe lines in boldNO-HIGHLIGHTJUST_JUSTFILEUse <JUSTFILE> as justfileLIST-HEADINGlist-headingJUST_LIST_HEADINGPrint <TEXT> before listAvailable recipes:\nLIST-PREFIXlist-", 17);
    v55.help(&v0, "Use global justfileHIGHLIGHThighlightJUST_HIGHLIGHTHighlight echoed recipe lines in boldNO-HIGHLIGHTJUST_JUSTFILEUse <JUSTFILE> as justfileLIST-HEADINGlist-headingJUST_LIST_HEADINGPrint <TEXT> before listAvailable recipes:\nLIST-PREFIXlist-prefixPrint <TEXT", 19);
    v45.arg(&v30, &v55);
    v30.new("HIGHLIGHThighlightJUST_HIGHLIGHTHighlight echoed recipe lines in boldNO-HIGHLIGHTJUST_JUSTFILEUse <JUSTFILE> as justfileLIST-HEADINGlist-headingJUST_LIST_HEADINGPrint <TEXT> before listAvailable recipes:\nLIST-PREFIXlist-prefixPrint <TEXT> before each list ", 9);
    v0.long(&v30, "highlightJUST_HIGHLIGHTHighlight echoed recipe lines in boldNO-HIGHLIGHTJUST_JUSTFILEUse <JUSTFILE> as justfileLIST-HEADINGlist-headingJUST_LIST_HEADINGPrint <TEXT> before listAvailable recipes:\nLIST-PREFIXlist-prefixPrint <TEXT> before each list itemLIST-", 9);
    v30.env(&v0, "JUST_HIGHLIGHTHighlight echoed recipe lines in boldNO-HIGHLIGHTJUST_JUSTFILEUse <JUSTFILE> as justfileLIST-HEADINGlist-headingJUST_LIST_HEADINGPrint <TEXT> before listAvailable recipes:\nLIST-PREFIXlist-prefixPrint <TEXT> before each list itemLIST-SUBMODULE", 14);
    v0.action(&v30, 2);
    v30.help(&v0, "Highlight echoed recipe lines in boldNO-HIGHLIGHTJUST_JUSTFILEUse <JUSTFILE> as justfileLIST-HEADINGlist-headingJUST_LIST_HEADINGPrint <TEXT> before listAvailable recipes:\nLIST-PREFIXlist-prefixPrint <TEXT> before each list itemLIST-SUBMODULESlist-submodul", 37);
    v0.overrides_with(&v30, "NO-HIGHLIGHTJUST_JUSTFILEUse <JUSTFILE> as justfileLIST-HEADINGlist-headingJUST_LIST_HEADINGPrint <TEXT> before listAvailable recipes:\nLIST-PREFIXlist-prefixPrint <TEXT> before each list itemLIST-SUBMODULESlist-submodulesJUST_LIST_SUBMODULESList recipes in", 12);
    v30.arg(&v45, &v0);
    v45.new("JUSTFILE", 8);
    v0.short(&v45, 102);
    v45.long(&v0, &g_469778, 8);
    v0.env(&v45, "JUST_JUSTFILEUse <JUSTFILE> as justfileLIST-HEADINGlist-headingJUST_LIST_HEADINGPrint <TEXT> before listAvailable recipes:\nLIST-PREFIXlist-prefixPrint <TEXT> before each list itemLIST-SUBMODULESlist-submodulesJUST_LIST_SUBMODULESList recipes in submodulesn", 13);
    v45.action(&v0, 0);
    v0.value_parser(&v45, &v44);
    v55.help(&v0, "Use <JUSTFILE> as justfileLIST-HEADINGlist-headingJUST_LIST_HEADINGPrint <TEXT> before listAvailable recipes:\nLIST-PREFIXlist-prefixPrint <TEXT> before each list itemLIST-SUBMODULESlist-submodulesJUST_LIST_SUBMODULESList recipes in submodulesno-aliasesJUST", 26);
    v45.arg(&v30, &v55);
    v30.new("LIST-HEADINGlist-headingJUST_LIST_HEADINGPrint <TEXT> before listAvailable recipes:\nLIST-PREFIXlist-prefixPrint <TEXT> before each list itemLIST-SUBMODULESlist-submodulesJUST_LIST_SUBMODULESList recipes in submodulesno-aliasesJUST_NO_ALIASESDon't show alia", 12);
    v0.long(&v30, "list-headingJUST_LIST_HEADINGPrint <TEXT> before listAvailable recipes:\nLIST-PREFIXlist-prefixPrint <TEXT> before each list itemLIST-SUBMODULESlist-submodulesJUST_LIST_SUBMODULESList recipes in submodulesno-aliasesJUST_NO_ALIASESDon't show aliases in listN", 12);
    v30.env(&v0, "JUST_LIST_HEADINGPrint <TEXT> before listAvailable recipes:\nLIST-PREFIXlist-prefixPrint <TEXT> before each list itemLIST-SUBMODULESlist-submodulesJUST_LIST_SUBMODULESList recipes in submodulesno-aliasesJUST_NO_ALIASESDon't show aliases in listNO-DEPSno-dep", 17);
    v0.help(&v30, "Print <TEXT> before listAvailable recipes:\nLIST-PREFIXlist-prefixPrint <TEXT> before each list itemLIST-SUBMODULESlist-submodulesJUST_LIST_SUBMODULESList recipes in submodulesno-aliasesJUST_NO_ALIASESDon't show aliases in listNO-DEPSno-depsJUST_NO_DEPSno-d", 24);
    v30.value_name(&v0, "TEXT'||'", 4);
    v0.default_value(&v30, "Available recipes:\nLIST-PREFIXlist-prefixPrint <TEXT> before each list itemLIST-SUBMODULESlist-submodulesJUST_LIST_SUBMODULESList recipes in submodulesno-aliasesJUST_NO_ALIASESDon't show aliases in listNO-DEPSno-depsJUST_NO_DEPSno-dependenciesDon't run rec", 19);
    v55.action(&v0, 0);
    v30.arg(&v45, &v55);
    v45.new("LIST-PREFIXlist-prefixPrint <TEXT> before each list itemLIST-SUBMODULESlist-submodulesJUST_LIST_SUBMODULESList recipes in submodulesno-aliasesJUST_NO_ALIASESDon't show aliases in listNO-DEPSno-depsJUST_NO_DEPSno-dependenciesDon't run recipe dependenciesNO-", 11);
    v0.long(&v45, "list-prefixPrint <TEXT> before each list itemLIST-SUBMODULESlist-submodulesJUST_LIST_SUBMODULESList recipes in submodulesno-aliasesJUST_NO_ALIASESDon't show aliases in listNO-DEPSno-depsJUST_NO_DEPSno-dependenciesDon't run recipe dependenciesNO-DOTENVno-do", 11);
    v45.env(&v0, &g_4659f0, 16);
    v0.help(&v45, "Print <TEXT> before each list itemLIST-SUBMODULESlist-submodulesJUST_LIST_SUBMODULESList recipes in submodulesno-aliasesJUST_NO_ALIASESDon't show aliases in listNO-DEPSno-depsJUST_NO_DEPSno-dependenciesDon't run recipe dependenciesNO-DOTENVno-dotenvJUST_NO", 34);
    v45.value_name(&v0, "TEXT'||'", 4);
    v0.default_value(&v45, "    blueq", 4);
    v55.action(&v0, 0);
    v45.arg(&v30, &v55);
    v30.new("LIST-SUBMODULESlist-submodulesJUST_LIST_SUBMODULESList recipes in submodulesno-aliasesJUST_NO_ALIASESDon't show aliases in listNO-DEPSno-depsJUST_NO_DEPSno-dependenciesDon't run recipe dependenciesNO-DOTENVno-dotenvJUST_NO_DOTENVDon't load `.env` fileno-hi", 15);
    v0.long(&v30, "list-submodulesJUST_LIST_SUBMODULESList recipes in submodulesno-aliasesJUST_NO_ALIASESDon't show aliases in listNO-DEPSno-depsJUST_NO_DEPSno-dependenciesDon't run recipe dependenciesNO-DOTENVno-dotenvJUST_NO_DOTENVDon't load `.env` fileno-highlightJUST_NO_", 15);
    v30.env(&v0, "JUST_LIST_SUBMODULESList recipes in submodulesno-aliasesJUST_NO_ALIASESDon't show aliases in listNO-DEPSno-depsJUST_NO_DEPSno-dependenciesDon't run recipe dependenciesNO-DOTENVno-dotenvJUST_NO_DOTENVDon't load `.env` fileno-highlightJUST_NO_HIGHLIGHTDon't ", 20);
    v0.help(&v30, "List recipes in submodulesno-aliasesJUST_NO_ALIASESDon't show aliases in listNO-DEPSno-depsJUST_NO_DEPSno-dependenciesDon't run recipe dependenciesNO-DOTENVno-dotenvJUST_NO_DOTENVDon't load `.env` fileno-highlightJUST_NO_HIGHLIGHTDon't highlight echoed rec", 26);
    v30.action(&v0, 2);
    v0.requires(&v30, "LISTQuitbyten", 4);
    v30.arg(&v45, &v0);
    v45.new("NO-ALIASESCEILINGceilingJUST_CEILINGDo not ascend above <CEILING> directory when searching for a justfile.CHECKcheckFORMATRun `--fmt` in 'check' mode. Exits with 0 if justfile is formatted correctly. Exits with 1 and prints a diff if formatting is required", 10);
    v0.long(&v45, "no-aliasesJUST_NO_ALIASESDon't show aliases in listNO-DEPSno-depsJUST_NO_DEPSno-dependenciesDon't run recipe dependenciesNO-DOTENVno-dotenvJUST_NO_DOTENVDon't load `.env` fileno-highlightJUST_NO_HIGHLIGHTDon't highlight echoed recipe lines in boldONEoneFor", 10);
    v45.env(&v0, "JUST_NO_ALIASESDon't show aliases in listNO-DEPSno-depsJUST_NO_DEPSno-dependenciesDon't run recipe dependenciesNO-DOTENVno-dotenvJUST_NO_DOTENVDon't load `.env` fileno-highlightJUST_NO_HIGHLIGHTDon't highlight echoed recipe lines in boldONEoneForbid multip", 15);
    v0.action(&v45, 2);
    v55.help(&v0, "Don't show aliases in listNO-DEPSno-depsJUST_NO_DEPSno-dependenciesDon't run recipe dependenciesNO-DOTENVno-dotenvJUST_NO_DOTENVDon't load `.env` fileno-highlightJUST_NO_HIGHLIGHTDon't highlight echoed recipe lines in boldONEoneForbid multiple recipes from", 26);
    v45.arg(&v30, &v55);
    v30.new("NO-DEPSno-depsJUST_NO_DEPSno-dependenciesDon't run recipe dependenciesNO-DOTENVno-dotenvJUST_NO_DOTENVDon't load `.env` fileno-highlightJUST_NO_HIGHLIGHTDon't highlight echoed recipe lines in boldONEoneForbid multiple recipes from being invoked on the comm", 7);
    v0.long(&v30, "no-depsJUST_NO_DEPSno-dependenciesDon't run recipe dependenciesNO-DOTENVno-dotenvJUST_NO_DOTENVDon't load `.env` fileno-highlightJUST_NO_HIGHLIGHTDon't highlight echoed recipe lines in boldONEoneForbid multiple recipes from being invoked on the command lin", 7);
    v30.env(&v0, "JUST_NO_DEPSno-dependenciesDon't run recipe dependenciesNO-DOTENVno-dotenvJUST_NO_DOTENVDon't load `.env` fileno-highlightJUST_NO_HIGHLIGHTDon't highlight echoed recipe lines in boldONEoneForbid multiple recipes from being invoked on the command linequietJ", 12);
    v0.alias(&v30, "no-dependenciesDon't run recipe dependenciesNO-DOTENVno-dotenvJUST_NO_DOTENVDon't load `.env` fileno-highlightJUST_NO_HIGHLIGHTDon't highlight echoed recipe lines in boldONEoneForbid multiple recipes from being invoked on the command linequietJUST_QUIETSup", 15);
    v30.action(&v0, 2);
    v0.help(&v30, "Don't run recipe dependenciesNO-DOTENVno-dotenvJUST_NO_DOTENVDon't load `.env` fileno-highlightJUST_NO_HIGHLIGHTDon't highlight echoed recipe lines in boldONEoneForbid multiple recipes from being invoked on the command linequietJUST_QUIETSuppress all outpu", 29);
    v30.arg(&v45, &v0);
    v45.new("NO-DOTENVno-dotenvJUST_NO_DOTENVDon't load `.env` fileno-highlightJUST_NO_HIGHLIGHTDon't highlight echoed recipe lines in boldONEoneForbid multiple recipes from being invoked on the command linequietJUST_QUIETSuppress all outputALLOW-MISSINGallow-missingJU", 9);
    v0.long(&v45, "no-dotenvJUST_NO_DOTENVDon't load `.env` fileno-highlightJUST_NO_HIGHLIGHTDon't highlight echoed recipe lines in boldONEoneForbid multiple recipes from being invoked on the command linequietJUST_QUIETSuppress all outputALLOW-MISSINGallow-missingJUST_ALLOW_", 9);
    v45.env(&v0, "JUST_NO_DOTENVDon't load `.env` fileno-highlightJUST_NO_HIGHLIGHTDon't highlight echoed recipe lines in boldONEoneForbid multiple recipes from being invoked on the command linequietJUST_QUIETSuppress all outputALLOW-MISSINGallow-missingJUST_ALLOW_MISSINGIg", 14);
    v0.action(&v45, 2);
    v55.help(&v0, "Don't load `.env` fileno-highlightJUST_NO_HIGHLIGHTDon't highlight echoed recipe lines in boldONEoneForbid multiple recipes from being invoked on the command linequietJUST_QUIETSuppress all outputALLOW-MISSINGallow-missingJUST_ALLOW_MISSINGIgnore missing r", 22);
    v45.arg(&v30, &v55);
    v30.new("NO-HIGHLIGHTJUST_JUSTFILEUse <JUSTFILE> as justfileLIST-HEADINGlist-headingJUST_LIST_HEADINGPrint <TEXT> before listAvailable recipes:\nLIST-PREFIXlist-prefixPrint <TEXT> before each list itemLIST-SUBMODULESlist-submodulesJUST_LIST_SUBMODULESList recipes in", 12);
    v0.long(&v30, "no-highlightJUST_NO_HIGHLIGHTDon't highlight echoed recipe lines in boldONEoneForbid multiple recipes from being invoked on the command linequietJUST_QUIETSuppress all outputALLOW-MISSINGallow-missingJUST_ALLOW_MISSINGIgnore missing recipe and module error", 12);
    v30.env(&v0, "JUST_NO_HIGHLIGHTDon't highlight echoed recipe lines in boldONEoneForbid multiple recipes from being invoked on the command linequietJUST_QUIETSuppress all outputALLOW-MISSINGallow-missingJUST_ALLOW_MISSINGIgnore missing recipe and module errorsSETsetVALUE", 17);
    v0.action(&v30, 2);
    v30.help(&v0, "Don't highlight echoed recipe lines in boldONEoneForbid multiple recipes from being invoked on the command linequietJUST_QUIETSuppress all outputALLOW-MISSINGallow-missingJUST_ALLOW_MISSINGIgnore missing recipe and module errorsSETsetVALUESHELLshellInvoke ", 43);
    v0.overrides_with(&v30, "HIGHLIGHThighlightJUST_HIGHLIGHTHighlight echoed recipe lines in boldNO-HIGHLIGHTJUST_JUSTFILEUse <JUSTFILE> as justfileLIST-HEADINGlist-headingJUST_LIST_HEADINGPrint <TEXT> before listAvailable recipes:\nLIST-PREFIXlist-prefixPrint <TEXT> before each list ", 9);
    v30.arg(&v45, &v0);
    v45.new("ONEoneForbid multiple recipes from being invoked on the command linequietJUST_QUIETSuppress all outputALLOW-MISSINGallow-missingJUST_ALLOW_MISSINGIgnore missing recipe and module errorsSETsetVALUESHELLshellInvoke <SHELL> to run recipesshell-argInvoke shell", 3);
    v0.long(&v45, "oneForbid multiple recipes from being invoked on the command linequietJUST_QUIETSuppress all outputALLOW-MISSINGallow-missingJUST_ALLOW_MISSINGIgnore missing recipe and module errorsSETsetVALUESHELLshellInvoke <SHELL> to run recipesshell-argInvoke shell wi", 3);
    v45.env(&v0, "JUST_ONEparallelBacktickSlimAVX2", 8);
    v0.action(&v45, 2);
    v55.help(&v0, "Forbid multiple recipes from being invoked on the command linequietJUST_QUIETSuppress all outputALLOW-MISSINGallow-missingJUST_ALLOW_MISSINGIgnore missing recipe and module errorsSETsetVALUESHELLshellInvoke <SHELL> to run recipesshell-argInvoke shell with ", 62);
    v45.arg(&v30, &v55);
    v30.new("QUIETDUMP-FORMATdump-formatDump justfile as <FORMAT>EXPLAINexplainJUST_EXPLAINPrint recipe doc comment before running itGLOBAL-JUSTFILEglobal-justfileWORKING-DIRECTORYUse global justfileHIGHLIGHThighlightJUST_HIGHLIGHTHighlight echoed recipe lines in boldN", 5);
    v0.short(&v30, 113);
    v30.long(&v0, "quietJUST_QUIETSuppress all outputALLOW-MISSINGallow-missingJUST_ALLOW_MISSINGIgnore missing recipe and module errorsSETsetVALUESHELLshellInvoke <SHELL> to run recipesshell-argInvoke shell with <SHELL-ARG> as an argumentSHELL-COMMANDshell-commandCOMMANDInv", 5);
    v0.env(&v30, "JUST_QUIETSuppress all outputALLOW-MISSINGallow-missingJUST_ALLOW_MISSINGIgnore missing recipe and module errorsSETsetVALUESHELLshellInvoke <SHELL> to run recipesshell-argInvoke shell with <SHELL-ARG> as an argumentSHELL-COMMANDshell-commandCOMMANDInvoke <", 10);
    v30.action(&v0, 2);
    v0.help(&v30, "Suppress all outputALLOW-MISSINGallow-missingJUST_ALLOW_MISSINGIgnore missing recipe and module errorsSETsetVALUESHELLshellInvoke <SHELL> to run recipesshell-argInvoke shell with <SHELL-ARG> as an argumentSHELL-COMMANDshell-commandCOMMANDInvoke <COMMAND> w", 19);
    v55.conflicts_with(&v0, "DRY-RUNdry-runJUST_DRY_RUNPrint what just would do without doing itQUIETDUMP-FORMATdump-formatDump justfile as <FORMAT>EXPLAINexplainJUST_EXPLAINPrint recipe doc comment before running itGLOBAL-JUSTFILEglobal-justfileWORKING-DIRECTORYUse global justfileHIG", 7);
    v30.arg(&v45, &v55);
    v45.new("ALLOW-MISSINGallow-missingJUST_ALLOW_MISSINGIgnore missing recipe and module errorsSETsetVALUESHELLshellInvoke <SHELL> to run recipesshell-argInvoke shell with <SHELL-ARG> as an argumentSHELL-COMMANDshell-commandCOMMANDInvoke <COMMAND> with the shell used ", 13);
    v0.long(&v45, "allow-missingJUST_ALLOW_MISSINGIgnore missing recipe and module errorsSETsetVALUESHELLshellInvoke <SHELL> to run recipesshell-argInvoke shell with <SHELL-ARG> as an argumentSHELL-COMMANDshell-commandCOMMANDInvoke <COMMAND> with the shell used to run recipe", 13);
    v45.env(&v0, "JUST_ALLOW_MISSINGIgnore missing recipe and module errorsSETsetVALUESHELLshellInvoke <SHELL> to run recipesshell-argInvoke shell with <SHELL-ARG> as an argumentSHELL-COMMANDshell-commandCOMMANDInvoke <COMMAND> with the shell used to run recipe lines and ba", 18);
    v0.action(&v45, 2);
    v55.help(&v0, "Ignore missing recipe and module errorsSETsetVALUESHELLshellInvoke <SHELL> to run recipesshell-argInvoke shell with <SHELL-ARG> as an argumentSHELL-COMMANDshell-commandCOMMANDInvoke <COMMAND> with the shell used to run recipe lines and backticksTEMPDIRJUST", 39);
    v45.arg(&v30, &v55);
    v30.new("SETsetVALUESHELLshellInvoke <SHELL> to run recipesshell-argInvoke shell with <SHELL-ARG> as an argumentSHELL-COMMANDshell-commandCOMMANDInvoke <COMMAND> with the shell used to run recipe lines and backticksTEMPDIRJUST_TEMPDIRtempdirSave temporary files to ", 3);
    v0.long(&v30, "setVALUESHELLshellInvoke <SHELL> to run recipesshell-argInvoke shell with <SHELL-ARG> as an argumentSHELL-COMMANDshell-commandCOMMANDInvoke <COMMAND> with the shell used to run recipe lines and backticksTEMPDIRJUST_TEMPDIRtempdirSave temporary files to <TE", 3);
    v30.action(&v0, 1);
    v0.number_of_values(&v30, 2);
    v55 = &g_469020;
    v56 = 8;
    v57 = "VALUESHELLshellInvoke <SHELL> to run recipesshell-argInvoke shell with <SHELL-ARG> as an argumentSHELL-COMMANDshell-commandCOMMANDInvoke <COMMAND> with the shell used to run recipe lines and backticksTEMPDIRJUST_TEMPDIRtempdirSave temporary files to <TEMPD";
    v58 = 5;
    v30.value_names(&v0, &v55);
    v0.help(&v30, "Override <VARIABLE> with <VALUE>backreferences are not supported", 32);
    v30.arg(&v45, &v0);
    v45.new("SHELLshellInvoke <SHELL> to run recipesshell-argInvoke shell with <SHELL-ARG> as an argumentSHELL-COMMANDshell-commandCOMMANDInvoke <COMMAND> with the shell used to run recipe lines and backticksTEMPDIRJUST_TEMPDIRtempdirSave temporary files to <TEMPDIR>.T", 5);
    v0.long(&v45, "shellInvoke <SHELL> to run recipesshell-argInvoke shell with <SHELL-ARG> as an argumentSHELL-COMMANDshell-commandCOMMANDInvoke <COMMAND> with the shell used to run recipe lines and backticksTEMPDIRJUST_TEMPDIRtempdirSave temporary files to <TEMPDIR>.TIMEST", 5);
    v45.action(&v0, 0);
    v0.help(&v45, "Invoke <SHELL> to run recipesshell-argInvoke shell with <SHELL-ARG> as an argumentSHELL-COMMANDshell-commandCOMMANDInvoke <COMMAND> with the shell used to run recipe lines and backticksTEMPDIRJUST_TEMPDIRtempdirSave temporary files to <TEMPDIR>.TIMESTAMPti", 29);
    v45.arg(&v30, &v0);
    v30.new("SHELL-ARGClear shell argumentsCOLORcolorJUST_COLORPrint colorful outputCOMMAND-COLORcommand-colorJUST_COMMAND_COLOREcho recipe lines in <COMMAND-COLOR>CYGPATHcygpathJUST_CYGPATHUse binary at <CYGPATH> to convert between unix and Windows paths.DOTENV-FILENA", 9);
    v0.long(&v30, "shell-argInvoke shell with <SHELL-ARG> as an argumentSHELL-COMMANDshell-commandCOMMANDInvoke <COMMAND> with the shell used to run recipe lines and backticksTEMPDIRJUST_TEMPDIRtempdirSave temporary files to <TEMPDIR>.TIMESTAMPtimestampJUST_TIMESTAMPPrint re", 9);
    v30.action(&v0, 1);
    memcpy(&v0, &v30, 632);
    v28 = v40 | 32;
    v29 = v41;
    v30.overrides_with(&v0, "CLEAR-SHELL-ARGS", 16);
    v0.help(&v30, "Invoke shell with <SHELL-ARG> as an argumentSHELL-COMMANDshell-commandCOMMANDInvoke <COMMAND> with the shell used to run recipe lines and backticksTEMPDIRJUST_TEMPDIRtempdirSave temporary files to <TEMPDIR>.TIMESTAMPtimestampJUST_TIMESTAMPPrint recipe comm", 44);
    v30.arg(&v45, &v0);
    v45.new("SHELL-COMMANDshell-commandCOMMANDInvoke <COMMAND> with the shell used to run recipe lines and backticksTEMPDIRJUST_TEMPDIRtempdirSave temporary files to <TEMPDIR>.TIMESTAMPtimestampJUST_TIMESTAMPPrint recipe command timestampsJUST_TIMESTAMP_FORMATTimestamp", 13);
    v0.long(&v45, "shell-commandCOMMANDInvoke <COMMAND> with the shell used to run recipe lines and backticksTEMPDIRJUST_TEMPDIRtempdirSave temporary files to <TEMPDIR>.TIMESTAMPtimestampJUST_TIMESTAMPPrint recipe command timestampsJUST_TIMESTAMP_FORMATTimestamp format strin", 13);
    v45.requires(&v0, "COMMANDInvoke <COMMAND> with the shell used to run recipe lines and backticksTEMPDIRJUST_TEMPDIRtempdirSave temporary files to <TEMPDIR>.TIMESTAMPtimestampJUST_TIMESTAMPPrint recipe command timestampsJUST_TIMESTAMP_FORMATTimestamp format stringJUST_UNSORTE", 7);
    v0.action(&v45, 2);
    v55.help(&v0, "Invoke <COMMAND> with the shell used to run recipe lines and backticksTEMPDIRJUST_TEMPDIRtempdirSave temporary files to <TEMPDIR>.TIMESTAMPtimestampJUST_TIMESTAMPPrint recipe command timestampsJUST_TIMESTAMP_FORMATTimestamp format stringJUST_UNSORTEDReturn", 70);
    v45.arg(&v30, &v55);
    v30.new("TEMPDIRJUST_TEMPDIRtempdirSave temporary files to <TEMPDIR>.TIMESTAMPtimestampJUST_TIMESTAMPPrint recipe command timestampsJUST_TIMESTAMP_FORMATTimestamp format stringJUST_UNSORTEDReturn list and summary entries in source orderJUST_UNSTABLEEnable unstable ", 7);
    v0.action(&v30, 0);
    v30.env(&v0, "JUST_TEMPDIRtempdirSave temporary files to <TEMPDIR>.TIMESTAMPtimestampJUST_TIMESTAMPPrint recipe command timestampsJUST_TIMESTAMP_FORMATTimestamp format stringJUST_UNSORTEDReturn list and summary entries in source orderJUST_UNSTABLEEnable unstable feature", 12);
    v0.long(&v30, "tempdirSave temporary files to <TEMPDIR>.TIMESTAMPtimestampJUST_TIMESTAMPPrint recipe command timestampsJUST_TIMESTAMP_FORMATTimestamp format stringJUST_UNSORTEDReturn list and summary entries in source orderJUST_UNSTABLEEnable unstable featuresVERBOSEverb", 7);
    v30.value_parser(&v0, &v44);
    v0.help(&v30, "Save temporary files to <TEMPDIR>.TIMESTAMPtimestampJUST_TIMESTAMPPrint recipe command timestampsJUST_TIMESTAMP_FORMATTimestamp format stringJUST_UNSORTEDReturn list and summary entries in source orderJUST_UNSTABLEEnable unstable featuresVERBOSEverboseJUST", 34);
    v30.arg(&v45, &v0);
    v45.new("TIMESTAMPtimestampJUST_TIMESTAMPPrint recipe command timestampsJUST_TIMESTAMP_FORMATTimestamp format stringJUST_UNSORTEDReturn list and summary entries in source orderJUST_UNSTABLEEnable unstable featuresVERBOSEverboseJUST_VERBOSEUse verbose outputworking-", 9);
    v0.action(&v45, 2);
    v45.long(&v0, "timestampJUST_TIMESTAMPPrint recipe command timestampsJUST_TIMESTAMP_FORMATTimestamp format stringJUST_UNSORTEDReturn list and summary entries in source orderJUST_UNSTABLEEnable unstable featuresVERBOSEverboseJUST_VERBOSEUse verbose outputworking-directory", 9);
    v0.env(&v45, "JUST_TIMESTAMPPrint recipe command timestampsJUST_TIMESTAMP_FORMATTimestamp format stringJUST_UNSORTEDReturn list and summary entries in source orderJUST_UNSTABLEEnable unstable featuresVERBOSEverboseJUST_VERBOSEUse verbose outputworking-directoryJUST_WORK", 14);
    v55.help(&v0, "Print recipe command timestampsJUST_TIMESTAMP_FORMATTimestamp format stringJUST_UNSORTEDReturn list and summary entries in source orderJUST_UNSTABLEEnable unstable featuresVERBOSEverboseJUST_VERBOSEUse verbose outputworking-directoryJUST_WORKING_DIRECTORYU", 31);
    v45.arg(&v30, &v55);
    v30.new("TIMESTAMP-FORMATInvalid argumentInvalid exchange", 16);
    v0.action(&v30, 0);
    v30.long(&v0, "timestamp-formatImperial_Aramaic", 16);
    v0.env(&v30, "JUST_TIMESTAMP_FORMATTimestamp format stringJUST_UNSORTEDReturn list and summary entries in source orderJUST_UNSTABLEEnable unstable featuresVERBOSEverboseJUST_VERBOSEUse verbose outputworking-directoryJUST_WORKING_DIRECTORYUse <WORKING-DIRECTORY> as worki", 21);
    v30.default_value(&v0, "%H:%M:%SHEXLOWER@", 8);
    v0.help(&v30, "Timestamp format stringJUST_UNSORTEDReturn list and summary entries in source orderJUST_UNSTABLEEnable unstable featuresVERBOSEverboseJUST_VERBOSEUse verbose outputworking-directoryJUST_WORKING_DIRECTORYUse <WORKING-DIRECTORY> as working directory. --justf", 23);
    v30.arg(&v45, &v0);
    v45.new(&g_4691e8, 8);
    v0.long(&v45, "unsortedPATH_SEPBG_GREEN", 8);
    v45.env(&v0, "JUST_UNSORTEDReturn list and summary entries in source orderJUST_UNSTABLEEnable unstable featuresVERBOSEverboseJUST_VERBOSEUse verbose outputworking-directoryJUST_WORKING_DIRECTORYUse <WORKING-DIRECTORY> as working directory. --justfile must also be setYES", 13);
    v0.short(&v45, 117);
    v45.action(&v0, 2);
    v0.help(&v45, "Return list and summary entries in source orderJUST_UNSTABLEEnable unstable featuresVERBOSEverboseJUST_VERBOSEUse verbose outputworking-directoryJUST_WORKING_DIRECTORYUse <WORKING-DIRECTORY> as working directory. --justfile must also be setYESyesAutomatica", 47);
    v45.arg(&v30, &v0);
    v30.new("UNSTABLEvariableBracketRcapacitys", 8);
    v0.long(&v30, &g_469510, 8);
    v30.env(&v0, "JUST_UNSTABLEEnable unstable featuresVERBOSEverboseJUST_VERBOSEUse verbose outputworking-directoryJUST_WORKING_DIRECTORYUse <WORKING-DIRECTORY> as working directory. --justfile must also be setYESyesAutomatically confirm all recipes.CHANGELOGchangelogPrint", 13);
    v0.action(&v30, 2);
    v30.value_parser(&v0);
    v0.help(&v30, "Enable unstable featuresVERBOSEverboseJUST_VERBOSEUse verbose outputworking-directoryJUST_WORKING_DIRECTORYUse <WORKING-DIRECTORY> as working directory. --justfile must also be setYESyesAutomatically confirm all recipes.CHANGELOGchangelogPrint changelogCHO", 24);
    v30.arg(&v45, &v0);
    v45.new("VERBOSEverboseJUST_VERBOSEUse verbose outputworking-directoryJUST_WORKING_DIRECTORYUse <WORKING-DIRECTORY> as working directory. --justfile must also be setYESyesAutomatically confirm all recipes.CHANGELOGchangelogPrint changelogCHOOSEchooseSelect one or m", 7);
    v0.short(&v45, 118);
    v45.long(&v0, "verboseJUST_VERBOSEUse verbose outputworking-directoryJUST_WORKING_DIRECTORYUse <WORKING-DIRECTORY> as working directory. --justfile must also be setYESyesAutomatically confirm all recipes.CHANGELOGchangelogPrint changelogCHOOSEchooseSelect one or more rec", 7);
    v0.env(&v45, "JUST_VERBOSEUse verbose outputworking-directoryJUST_WORKING_DIRECTORYUse <WORKING-DIRECTORY> as working directory. --justfile must also be setYESyesAutomatically confirm all recipes.CHANGELOGchangelogPrint changelogCHOOSEchooseSelect one or more recipes to", 12);
    v45.action(&v0, 4);
    v0.help(&v45, "Use verbose outputworking-directoryJUST_WORKING_DIRECTORYUse <WORKING-DIRECTORY> as working directory. --justfile must also be setYESyesAutomatically confirm all recipes.CHANGELOGchangelogPrint changelogCHOOSEchooseSelect one or more recipes to run using a", 18);
    v45.arg(&v30, &v0);
    v30.new("WORKING-DIRECTORYUse global justfileHIGHLIGHThighlightJUST_HIGHLIGHTHighlight echoed recipe lines in boldNO-HIGHLIGHTJUST_JUSTFILEUse <JUSTFILE> as justfileLIST-HEADINGlist-headingJUST_LIST_HEADINGPrint <TEXT> before listAvailable recipes:\nLIST-PREFIXlist-", 17);
    v0.short(&v30, 100);
    v30.long(&v0, "working-directoryJUST_WORKING_DIRECTORYUse <WORKING-DIRECTORY> as working directory. --justfile must also be setYESyesAutomatically confirm all recipes.CHANGELOGchangelogPrint changelogCHOOSEchooseSelect one or more recipes to run using a binary chooser. I", 17);
    v0.env(&v30, "JUST_WORKING_DIRECTORYUse <WORKING-DIRECTORY> as working directory. --justfile must also be setYESyesAutomatically confirm all recipes.CHANGELOGchangelogPrint changelogCHOOSEchooseSelect one or more recipes to run using a binary chooser. If `--chooser` is ", 22);
    v30.action(&v0, 0);
    v0.value_parser(&v30, &v44);
    v30.help(&v0, "Use <WORKING-DIRECTORY> as working directory. --justfile must also be setYESyesAutomatically confirm all recipes.CHANGELOGchangelogPrint changelogCHOOSEchooseSelect one or more recipes to run using a binary chooser. If `--chooser` is not passed the chooser", 73);
    v0.requires(&v30, "JUSTFILE", 8);
    v30.arg(&v45, &v0);
    v45.new("YESyesAutomatically confirm all recipes.CHANGELOGchangelogPrint changelogCHOOSEchooseSelect one or more recipes to run using a binary chooser. If `--chooser` is not passed the chooser defaults to the value of $JUST_CHOOSER, falling back to `fzf`commandRun ", 3);
    v0.long(&v45, "yesAutomatically confirm all recipes.CHANGELOGchangelogPrint changelogCHOOSEchooseSelect one or more recipes to run using a binary chooser. If `--chooser` is not passed the chooser defaults to the value of $JUST_CHOOSER, falling back to `fzf`commandRun an ", 3);
    v45.env(&v0, "JUST_YESCommand  or more", 8);
    v0.action(&v45, 2);
    v55.help(&v0, "Automatically confirm all recipes.CHANGELOGchangelogPrint changelogCHOOSEchooseSelect one or more recipes to run using a binary chooser. If `--chooser` is not passed the chooser defaults to the value of $JUST_CHOOSER, falling back to `fzf`commandRun an arb", 34);
    v45.arg(&v30, &v55);
    v30.new("CHANGELOGchangelogPrint changelogCHOOSEchooseSelect one or more recipes to run using a binary chooser. If `--chooser` is not passed the chooser defaults to the value of $JUST_CHOOSER, falling back to `fzf`commandRun an arbitrary command with the working di", 9);
    v0.long(&v30, "changelogPrint changelogCHOOSEchooseSelect one or more recipes to run using a binary chooser. If `--chooser` is not passed the chooser defaults to the value of $JUST_CHOOSER, falling back to `fzf`commandRun an arbitrary command with the working directory, ", 9);
    v30.action(&v0, 2);
    v0.help(&v30, "Print changelogCHOOSEchooseSelect one or more recipes to run using a binary chooser. If `--chooser` is not passed the chooser defaults to the value of $JUST_CHOOSER, falling back to `fzf`commandRun an arbitrary command with the working directory, `.env`, o", 15);
    v55.help_heading(&v0, "Commandsunexport, group=", 8);
    v30.arg(&v45, &v55);
    v45.new("CHOOSEchooseSelect one or more recipes to run using a binary chooser. If `--chooser` is not passed the chooser defaults to the value of $JUST_CHOOSER, falling back to `fzf`commandRun an arbitrary command with the working directory, `.env`, overrides, and e", 6);
    v0.long(&v45, "chooseSelect one or more recipes to run using a binary chooser. If `--chooser` is not passed the chooser defaults to the value of $JUST_CHOOSER, falling back to `fzf`commandRun an arbitrary command with the working directory, `.env`, overrides, and exports", 6);
    v45.action(&v0, 2);
    v0.help(&v45, "Select one or more recipes to run using a binary chooser. If `--chooser` is not passed the chooser defaults to the value of $JUST_CHOOSER, falling back to `fzf`commandRun an arbitrary command with the working directory, `.env`, overrides, and exports setCO", 160);
    v55.help_heading(&v0, "Commandsunexport, group=", 8);
    v45.arg(&v30, &v55);
    v30.new("COMMANDInvoke <COMMAND> with the shell used to run recipe lines and backticksTEMPDIRJUST_TEMPDIRtempdirSave temporary files to <TEMPDIR>.TIMESTAMPtimestampJUST_TIMESTAMPPrint recipe command timestampsJUST_TIMESTAMP_FORMATTimestamp format stringJUST_UNSORTE", 7);
    v0.long(&v30, "commandRun an arbitrary command with the working directory, `.env`, overrides, and exports setCOMPLETIONScompletionsPrint shell completion script for <SHELL>Print justfileEdit justfile with editor given by $VISUAL or $EDITOR, falling back to `vim`Evaluate ", 7);
    v30.short(&v0, 99);
    v0.num_args(&v30, 1);
    memcpy(&v30, &v0, 632);
    v40 = v28 | 32;
    v41 = v29;
    v0.action(&v30, 1);
    v55 = 2;
    v30.value_parser(&v0, &v55);
    v0.help(&v30, "Run an arbitrary command with the working directory, `.env`, overrides, and exports setCOMPLETIONScompletionsPrint shell completion script for <SHELL>Print justfileEdit justfile with editor given by $VISUAL or $EDITOR, falling back to `vim`Evaluate and pri", 87);
    v55.help_heading(&v0, "Commandsunexport, group=", 8);
    v30.arg(&v45, &v55);
    v45.new("COMPLETIONScompletionsPrint shell completion script for <SHELL>Print justfileEdit justfile with editor given by $VISUAL or $EDITOR, falling back to `vim`Evaluate and print all variables. If a variable name is given as an argument, only print that variable'", 11);
    v0.long(&v45, "completionsPrint shell completion script for <SHELL>Print justfileEdit justfile with editor given by $VISUAL or $EDITOR, falling back to `vim`Evaluate and print all variables. If a variable name is given as an argument, only print that variable's value.fmt", 11);
    v45.action(&v0, 0);
    v0.value_name(&v45, "SHELLshellInvoke <SHELL> to run recipesshell-argInvoke shell with <SHELL-ARG> as an argumentSHELL-COMMANDshell-commandCOMMANDInvoke <COMMAND> with the shell used to run recipe lines and backticksTEMPDIRJUST_TEMPDIRtempdirSave temporary files to <TEMPDIR>.T", 5);
    v45.value_parser(&v0);
    memcpy(&v0, &v45, 632);
    v28 = 0x800 | v51;
    v29 = *((int *)&v52);
    v45.help(&v0, "Print shell completion script for <SHELL>Print justfileEdit justfile with editor given by $VISUAL or $EDITOR, falling back to `vim`Evaluate and print all variables. If a variable name is given as an argument, only print that variable's value.fmtformatForma", 41);
    v0.help_heading(&v45, "Commandsunexport, group=", 8);
    v45.arg(&v30, &v0);
    v30.new("DUMP.batbashTextHOMECoreSlimm", 4);
    v0.long(&v30, "dumpINIT || data.env>", 4);
    v30.action(&v0, 2);
    v0.help(&v30, "Print justfileEdit justfile with editor given by $VISUAL or $EDITOR, falling back to `vim`Evaluate and print all variables. If a variable name is given as an argument, only print that variable's value.fmtformatFormat and overwrite justfileGROUPSgroupsList ", 14);
    v55.help_heading(&v0, "Commandsunexport, group=", 8);
    v30.arg(&v45, &v55);
    v45.new("EDIT':=''=~'", 4);
    v0.short(&v45, 101);
    v45.long(&v0, "editjoinuuid'\\''left\\(buenum|", 4);
    v0.action(&v45, 2);
    v45.help(&v0, "Edit justfile with editor given by $VISUAL or $EDITOR, falling back to `vim`Evaluate and print all variables. If a variable name is given as an argument, only print that variable's value.fmtformatFormat and overwrite justfileGROUPSgroupsList recipe groupsi", 76);
    v0.help_heading(&v45, "Commandsunexport, group=", 8);
    v45.arg(&v30, &v0);
    v30.new("EVALUATEExtenderbopomofoUgaritic) ", 8);
    v0.long(&v30, "evaluatejust_pidnamepathstride: xidstart( ", 8);
    v30.alias(&v0, "eval", 4);
    v0.action(&v30, 2);
    v30.help(&v0, "Evaluate and print all variables. If a variable name is given as an argument, only print that variable's value.fmtformatFormat and overwrite justfileGROUPSgroupsList recipe groupsinitializeInitialize new justfile in project rootMODULEARGUMENTSList availabl", 111);
    v0.help_heading(&v30, "Commandsunexport, group=", 8);
    v30.arg(&v45, &v0);
    v45.new("FORMATRun `--fmt` in 'check' mode. Exits with 0 if justfile is formatted correctly. Exits with 1 and prints a diff if formatting is required.CHOOSERchooserJUST_CHOOSEROverride binary invoked by `--choose`SHELL-ARGClear shell argumentsCOLORcolorJUST_COLORPr", 6);
    v0.long(&v45, "fmtformatFormat and overwrite justfileGROUPSgroupsList recipe groupsinitializeInitialize new justfile in project rootMODULEARGUMENTSList available recipes in <MODULE> or root if omittedMANmanPrint man pageREQUESTrequestExecute <REQUEST>. For internal testi", 3);
    v45.alias(&v0, "formatFormat and overwrite justfileGROUPSgroupsList recipe groupsinitializeInitialize new justfile in project rootMODULEARGUMENTSList available recipes in <MODULE> or root if omittedMANmanPrint man pageREQUESTrequestExecute <REQUEST>. For internal testing ", 6);
    v0.action(&v45, 2);
    v45.help(&v0, "Format and overwrite justfileGROUPSgroupsList recipe groupsinitializeInitialize new justfile in project rootMODULEARGUMENTSList available recipes in <MODULE> or root if omittedMANmanPrint man pageREQUESTrequestExecute <REQUEST>. For internal testing purpos", 29);
    v0.help_heading(&v45, "Commandsunexport, group=", 8);
    v45.arg(&v30, &v0);
    v30.new("GROUPSgroupsList recipe groupsinitializeInitialize new justfile in project rootMODULEARGUMENTSList available recipes in <MODULE> or root if omittedMANmanPrint man pageREQUESTrequestExecute <REQUEST>. For internal testing purposes only. May be changed or re", 6);
    v0.long(&v30, "groupsList recipe groupsinitializeInitialize new justfile in project rootMODULEARGUMENTSList available recipes in <MODULE> or root if omittedMANmanPrint man pageREQUESTrequestExecute <REQUEST>. For internal testing purposes only. May be changed or removed ", 6);
    v30.action(&v0, 2);
    v0.help(&v30, "List recipe groupsinitializeInitialize new justfile in project rootMODULEARGUMENTSList available recipes in <MODULE> or root if omittedMANmanPrint man pageREQUESTrequestExecute <REQUEST>. For internal testing purposes only. May be changed or removed at any", 18);
    v55.help_heading(&v0, "Commandsunexport, group=", 8);
    v30.arg(&v45, &v55);
    v45.new("INIT || data.env>", 4);
    v0.long(&v45, &g_467b5c, 4);
    v45.alias(&v0, "initializeInitialize new justfile in project rootMODULEARGUMENTSList available recipes in <MODULE> or root if omittedMANmanPrint man pageREQUESTrequestExecute <REQUEST>. For internal testing purposes only. May be changed or removed at any time.Show recipe ", 10);
    v0.action(&v45, 2);
    v45.help(&v0, "Initialize new justfile in project rootMODULEARGUMENTSList available recipes in <MODULE> or root if omittedMANmanPrint man pageREQUESTrequestExecute <REQUEST>. For internal testing purposes only. May be changed or removed at any time.Show recipe at <PATH>S", 39);
    v0.help_heading(&v45, "Commandsunexport, group=", 8);
    v45.arg(&v30, &v0);
    v30.new("LISTQuitbyten", 4);
    v0.short(&v30, 108);
    v30.long(&v0, "list.svnmode{", 4);
    v0.num_args(&v30, 0);
    v30.value_name(&v0, "MODULEARGUMENTSList available recipes in <MODULE> or root if omittedMANmanPrint man pageREQUESTrequestExecute <REQUEST>. For internal testing purposes only. May be changed or removed at any time.Show recipe at <PATH>SUMMARYsummaryList names of available re", 6);
    v0.action(&v30, 0);
    v30.conflicts_with(&v0, "ARGUMENTSList available recipes in <MODULE> or root if omittedMANmanPrint man pageREQUESTrequestExecute <REQUEST>. For internal testing purposes only. May be changed or removed at any time.Show recipe at <PATH>SUMMARYsummaryList names of available recipesV", 9);
    v0.help(&v30, "List available recipes in <MODULE> or root if omittedMANmanPrint man pageREQUESTrequestExecute <REQUEST>. For internal testing purposes only. May be changed or removed at any time.Show recipe at <PATH>SUMMARYsummaryList names of available recipesVARIABLESv", 53);
    v55.help_heading(&v0, "Commandsunexport, group=", 8);
    v30.arg(&v45, &v55);
    v45.new("MANmanPrint man pageREQUESTrequestExecute <REQUEST>. For internal testing purposes only. May be changed or removed at any time.Show recipe at <PATH>SUMMARYsummaryList names of available recipesVARIABLESvariablesList names of variablesOverrides and recipe(s", 3);
    v0.long(&v45, "manPrint man pageREQUESTrequestExecute <REQUEST>. For internal testing purposes only. May be changed or removed at any time.Show recipe at <PATH>SUMMARYsummaryList names of available recipesVARIABLESvariablesList names of variablesOverrides and recipe(s) t", 3);
    v45.action(&v0, 2);
    v0.help(&v45, "Print man pageREQUESTrequestExecute <REQUEST>. For internal testing purposes only. May be changed or removed at any time.Show recipe at <PATH>SUMMARYsummaryList names of available recipesVARIABLESvariablesList names of variablesOverrides and recipe(s) to r", 14);
    v55.help_heading(&v0, "Commandsunexport, group=", 8);
    v45.arg(&v30, &v55);
    v30.new("REQUESTrequestExecute <REQUEST>. For internal testing purposes only. May be changed or removed at any time.Show recipe at <PATH>SUMMARYsummaryList names of available recipesVARIABLESvariablesList names of variablesOverrides and recipe(s) to run, defaulting", 7);
    v0.long(&v30, "requestExecute <REQUEST>. For internal testing purposes only. May be changed or removed at any time.Show recipe at <PATH>SUMMARYsummaryList names of available recipesVARIABLESvariablesList names of variablesOverrides and recipe(s) to run, defaulting to the", 7);
    v30.action(&v0, 0);
    memcpy(&v0, &v30, 632);
    v28 = v40 | 4;
    v29 = v41;
    v30.help(&v0, "Execute <REQUEST>. For internal testing purposes only. May be changed or removed at any time.Show recipe at <PATH>SUMMARYsummaryList names of available recipesVARIABLESvariablesList names of variablesOverrides and recipe(s) to run, defaulting to the first ", 93);
    v0.help_heading(&v30, "REQUESTrequestExecute <REQUEST>. For internal testing purposes only. May be changed or removed at any time.Show recipe at <PATH>SUMMARYsummaryList names of available recipesVARIABLESvariablesList names of variablesOverrides and recipe(s) to run, defaulting", 7);
    v30.arg(&v45, &v0);
    v45.new("SHOW'}}'cyanstaro", 4);
    v0.short(&v45, 115);
    v45.long(&v0, "show", 4);
    v0.num_args(&v45, 1);
    v45.action(&v0, 0);
    v0.value_name(&v45, "PATH ... => M", 4);
    v45.conflicts_with(&v0, "ARGUMENTSList available recipes in <MODULE> or root if omittedMANmanPrint man pageREQUESTrequestExecute <REQUEST>. For internal testing purposes only. May be changed or removed at any time.Show recipe at <PATH>SUMMARYsummaryList names of available recipesV", 9);
    v0.help(&v45, "Show recipe at <PATH>SUMMARYsummaryList names of available recipesVARIABLESvariablesList names of variablesOverrides and recipe(s) to run, defaulting to the first recipe in the justfilesrc/config.rs", 21);
    v55.help_heading(&v0, "Commandsunexport, group=", 8);
    v45.arg(&v30, &v55);
    v30.new("SUMMARYsummaryList names of available recipesVARIABLESvariablesList names of variablesOverrides and recipe(s) to run, defaulting to the first recipe in the justfilesrc/config.rs", 7);
    v0.long(&v30, "summaryList names of available recipesVARIABLESvariablesList names of variablesOverrides and recipe(s) to run, defaulting to the first recipe in the justfilesrc/config.rs", 7);
    v30.action(&v0, 2);
    v0.help(&v30, "List names of available recipesVARIABLESvariablesList names of variablesOverrides and recipe(s) to run, defaulting to the first recipe in the justfilesrc/config.rs", 31);
    v55.help_heading(&v0, "Commandsunexport, group=", 8);
    v30.arg(&v45, &v55);
    v45.new("VARIABLESvariablesList names of variablesOverrides and recipe(s) to run, defaulting to the first recipe in the justfilesrc/config.rs", 9);
    v0.long(&v45, "variablesList names of variablesOverrides and recipe(s) to run, defaulting to the first recipe in the justfilesrc/config.rs", 9);
    v45.action(&v0, 2);
    v0.help(&v45, "List names of variablesOverrides and recipe(s) to run, defaulting to the first recipe in the justfilesrc/config.rs", 23);
    v55.help_heading(&v0, "Commandsunexport, group=", 8);
    v45.arg(&v30, &v55);
    v37 = 1;
    v38 = 0;
    v30 = 0;
    v31 = 8;
    v39 = 0;
    v32 = 0;
    v33 = 8;
    v34 = 0;
    v35 = 8;
    v36 = 0;
    v0.id(&v30);
    v55.args(&v0);
    v30.group(&v45, &v55);
    v45.new("ARGUMENTSList available recipes in <MODULE> or root if omittedMANmanPrint man pageREQUESTrequestExecute <REQUEST>. For internal testing purposes only. May be changed or removed at any time.Show recipe at <PATH>SUMMARYsummaryList names of available recipesV", 9);
    v0.num_args(&v45, 1);
    v45.action(&v0, 1);
    v0.help(&v45, "Overrides and recipe(s) to run, defaulting to the first recipe in the justfilesrc/config.rs", 78);
    a0.arg(&v30, &v0);
    return a0;
}
