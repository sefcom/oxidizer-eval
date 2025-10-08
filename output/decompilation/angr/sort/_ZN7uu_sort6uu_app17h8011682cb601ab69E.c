long long uu_sort::uu_app(unsigned long a0)
{
    unsigned long long v0;  // [bp-0xae0]
    char v1;  // [bp-0xad8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0xad0]
    unsigned long long v3;  // [bp-0xac8]
    unsigned long long v4;  // [bp-0xac0]
    unsigned long long v5;  // [bp-0xab8]
    unsigned long long v6;  // [bp-0xab0]
    unsigned int v7;  // [bp-0x860]
    unsigned int v8;  // [bp-0x85c]
    unsigned long long v9;  // [bp-0x858]
    char v10;  // [bp-0x840], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x838]
    unsigned long long v12;  // [bp-0x830]
    unsigned long long v13;  // [bp-0x828]
    unsigned long long v14;  // [bp-0x820]
    unsigned long long v15;  // [bp-0x818]
    unsigned long long v16;  // [bp-0x810]
    unsigned long long v17;  // [bp-0x808]
    unsigned long long v18;  // [bp-0x800]
    unsigned long long v19;  // [bp-0x7f8]
    unsigned long long v20;  // [bp-0x7f0]
    unsigned long long v21;  // [bp-0x7e8]
    unsigned long v22;  // [bp-0x584]
    unsigned int v23;  // [bp-0x57c]
    char v24;  // [bp-0x578]
    unsigned int v25;  // [bp-0x300]
    char v26;  // [bp-0x2fc]
    unsigned long long v27;  // [bp-0x2bc]
    unsigned int v28;  // [bp-0x2b4]
    char v29;  // [bp-0x2b0], Other Possible Types: unsigned long long
    unsigned long long v30;  // [bp-0x2a8]
    unsigned long long v31;  // [bp-0x2a0]
    unsigned long long v32;  // [bp-0x298]
    unsigned long long v33;  // [bp-0x290]
    unsigned long long v34;  // [bp-0x288]
    unsigned long long v35;  // [bp-0x280]
    unsigned long long v36;  // [bp-0x278]
    unsigned long long v39;  // rdx

    v10.new(uucore::util_name(), v39);
    v24.version(&v10);
    v10.about(&v24);
    v24.after_help(&v10);
    uucore::format_usage(&v1, "{} [OPTION]... [FILE]...Print help information.versionPrint version information.general-numerichuman-numericmonthnumericrandomcompare according to human readable sizes, eg 1M > 100kcompare according to month name abbreviationcompare according to string num", 24);
    v10.override_usage(&v24, &v1);
    memcpy(&v24, &v10, 700);
    v27 = 11259583186600072 | v22;
    v28 = v23;
    v10.new("help-inflineNoneshim", 4);
    v1.long(&v10, "help-inflineNoneshim", 4);
    v10.help(&v1, "Print help information.versionPrint version information.general-numerichuman-numericmonthnumericrandomcompare according to human readable sizes, eg 1M > 100kcompare according to month name abbreviationcompare according to string numerical valuecompare acco", 23);
    v1.action(&v10, 5);
    v10.arg(&v24, &v1);
    v24.new("versionPrint version information.general-numerichuman-numericmonthnumericrandomcompare according to human readable sizes, eg 1M > 100kcompare according to month name abbreviationcompare according to string numerical valuecompare according to string general", 7);
    v1.long(&v24, "versionPrint version information.general-numerichuman-numericmonthnumericrandomcompare according to human readable sizes, eg 1M > 100kcompare according to month name abbreviationcompare according to string numerical valuecompare according to string general", 7);
    v24.help(&v1, "Print version information.general-numerichuman-numericmonthnumericrandomcompare according to human readable sizes, eg 1M > 100kcompare according to month name abbreviationcompare according to string numerical valuecompare according to string general numeri", 26);
    v1.action(&v24, 8);
    v24.arg(&v10, &v1);
    v10.new("sort", 4);
    v1.long(&v10, "sort", 4);
    v10 = "general-numerichuman-numericmonthnumericrandomcompare according to human readable sizes, eg 1M > 100kcompare according to month name abbreviationcompare according to string numerical valuecompare according to string general numerical valueSort by SemVer ve";
    v11 = 15;
    v12 = "human-numericmonthnumericrandomcompare according to human readable sizes, eg 1M > 100kcompare according to month name abbreviationcompare according to string numerical valuecompare according to string general numerical valueSort by SemVer version number, e";
    v13 = 13;
    v14 = "monthnumericrandomcompare according to human readable sizes, eg 1M > 100kcompare according to month name abbreviationcompare according to string numerical valuecompare according to string general numerical valueSort by SemVer version number, eg 1.12.2 > 1.";
    v15 = 5;
    v16 = "numericrandomcompare according to human readable sizes, eg 1M > 100kcompare according to month name abbreviationcompare according to string numerical valuecompare according to string general numerical valueSort by SemVer version number, eg 1.12.2 > 1.1.2sh";
    v17 = 7;
    v18 = "versionPrint version information.general-numerichuman-numericmonthnumericrandomcompare according to human readable sizes, eg 1M > 100kcompare according to month name abbreviationcompare according to string numerical valuecompare according to string general";
    v19 = 7;
    v20 = "randomcompare according to human readable sizes, eg 1M > 100kcompare according to month name abbreviationcompare according to string numerical valuecompare according to string general numerical valueSort by SemVer version number, eg 1.12.2 > 1.1.2shuffle i";
    v21 = 6;
    v29.from(&v10);
    v10.value_parser(&v1, &v29);
    v1.conflicts_with_all(&v10, &g_58d1d0);
    v10.arg(&v24, &v1);
    uu_sort::make_sort_mode_arg(&v1, "human-numeric-sortmonth-sortnumeric-sortversion-sortrandom-sortFailed to fetch rlimit(uutils coreutils) 0.0.30Display sorted concatenation of all FILE(s). With no FILE, or when FILE is -, read standard input.The key format is FIELD[.CHAR][OPTIONS][,FIELD[.", 18, 104, "compare according to human readable sizes, eg 1M > 100kcompare according to month name abbreviationcompare according to string numerical valuecompare according to string general numerical valueSort by SemVer version number, eg 1.12.2 > 1.1.2shuffle in rand", 55);
    v24.arg(&v10, &v1);
    uu_sort::make_sort_mode_arg(&v1, "month-sortnumeric-sortversion-sortrandom-sortFailed to fetch rlimit(uutils coreutils) 0.0.30Display sorted concatenation of all FILE(s). With no FILE, or when FILE is -, read standard input.The key format is FIELD[.CHAR][OPTIONS][,FIELD[.CHAR]][OPTIONS].\n\n", 10, 77, "compare according to month name abbreviationcompare according to string numerical valuecompare according to string general numerical valueSort by SemVer version number, eg 1.12.2 > 1.1.2shuffle in random orderconsider only blanks and alphanumeric character", 44);
    v10.arg(&v24, &v1);
    uu_sort::make_sort_mode_arg(&v1, "numeric-sortversion-sortrandom-sortFailed to fetch rlimit(uutils coreutils) 0.0.30Display sorted concatenation of all FILE(s). With no FILE, or when FILE is -, read standard input.The key format is FIELD[.CHAR][OPTIONS][,FIELD[.CHAR]][OPTIONS].\n\nFields by ", 12, 110, "compare according to string numerical valuecompare according to string general numerical valueSort by SemVer version number, eg 1.12.2 > 1.1.2shuffle in random orderconsider only blanks and alphanumeric charactersmergemerge already sorted files; do not sor", 43);
    v24.arg(&v10, &v1);
    uu_sort::make_sort_mode_arg(&v1, "general-numeric-sorthuman-numeric-sortmonth-sortnumeric-sortversion-sortrandom-sortFailed to fetch rlimit(uutils coreutils) 0.0.30Display sorted concatenation of all FILE(s). With no FILE, or when FILE is -, read standard input.The key format is FIELD[.CHA", 20, 103, "compare according to string general numerical valueSort by SemVer version number, eg 1.12.2 > 1.1.2shuffle in random orderconsider only blanks and alphanumeric charactersmergemerge already sorted files; do not sortchecksilentquietdiagnose-firstoutputcheck-", 51);
    v10.arg(&v24, &v1);
    uu_sort::make_sort_mode_arg(&v1, "version-sortrandom-sortFailed to fetch rlimit(uutils coreutils) 0.0.30Display sorted concatenation of all FILE(s). With no FILE, or when FILE is -, read standard input.The key format is FIELD[.CHAR][OPTIONS][,FIELD[.CHAR]][OPTIONS].\n\nFields by default are ", 12, 86, "Sort by SemVer version number, eg 1.12.2 > 1.1.2shuffle in random orderconsider only blanks and alphanumeric charactersmergemerge already sorted files; do not sortchecksilentquietdiagnose-firstoutputcheck-silentcheck for sorted input; do not sortexit succe", 48);
    v24.arg(&v10, &v1);
    uu_sort::make_sort_mode_arg(&v1, "random-sortFailed to fetch rlimit(uutils coreutils) 0.0.30Display sorted concatenation of all FILE(s). With no FILE, or when FILE is -, read standard input.The key format is FIELD[.CHAR][OPTIONS][,FIELD[.CHAR]][OPTIONS].\n\nFields by default are separated by", 11, 82, "shuffle in random orderconsider only blanks and alphanumeric charactersmergemerge already sorted files; do not sortchecksilentquietdiagnose-firstoutputcheck-silentcheck for sorted input; do not sortexit successfully if the given file is already sorted, and", 23);
    v10.arg(&v24, &v1);
    v24.new("dictionary-order[short aliases: ", 16);
    v1.short(&v24, 100);
    v24.long(&v1, "dictionary-order[short aliases: ", 16);
    v1.help(&v24, "consider only blanks and alphanumeric charactersmergemerge already sorted files; do not sortchecksilentquietdiagnose-firstoutputcheck-silentcheck for sorted input; do not sortexit successfully if the given file is already sorted, and exit with status 1 oth", 48);
    v29 = "numeric-sortversion-sortrandom-sortFailed to fetch rlimit(uutils coreutils) 0.0.30Display sorted concatenation of all FILE(s). With no FILE, or when FILE is -, read standard input.The key format is FIELD[.CHAR][OPTIONS][,FIELD[.CHAR]][OPTIONS].\n\nFields by ";
    v30 = 12;
    v31 = "general-numeric-sorthuman-numeric-sortmonth-sortnumeric-sortversion-sortrandom-sortFailed to fetch rlimit(uutils coreutils) 0.0.30Display sorted concatenation of all FILE(s). With no FILE, or when FILE is -, read standard input.The key format is FIELD[.CHA";
    v32 = 20;
    v33 = "human-numeric-sortmonth-sortnumeric-sortversion-sortrandom-sortFailed to fetch rlimit(uutils coreutils) 0.0.30Display sorted concatenation of all FILE(s). With no FILE, or when FILE is -, read standard input.The key format is FIELD[.CHAR][OPTIONS][,FIELD[.";
    v34 = 18;
    v35 = "month-sortnumeric-sortversion-sortrandom-sortFailed to fetch rlimit(uutils coreutils) 0.0.30Display sorted concatenation of all FILE(s). With no FILE, or when FILE is -, read standard input.The key format is FIELD[.CHAR][OPTIONS][,FIELD[.CHAR]][OPTIONS].\n\n";
    v36 = 10;
    v24.conflicts_with_all(&v1, &v29);
    v1.action(&v24, 2);
    v24.arg(&v10, &v1);
    v10.new("mergemerge already sorted files; do not sortchecksilentquietdiagnose-firstoutputcheck-silentcheck for sorted input; do not sortexit successfully if the given file is already sorted, and exit with status 1 otherwise.ignore-casefold lower case to upper case ", 5);
    v1.short(&v10, 109);
    v10.long(&v1, "mergemerge already sorted files; do not sortchecksilentquietdiagnose-firstoutputcheck-silentcheck for sorted input; do not sortexit successfully if the given file is already sorted, and exit with status 1 otherwise.ignore-casefold lower case to upper case ", 5);
    v1.help(&v10, "merge already sorted files; do not sortchecksilentquietdiagnose-firstoutputcheck-silentcheck for sorted input; do not sortexit successfully if the given file is already sorted, and exit with status 1 otherwise.ignore-casefold lower case to upper case chara", 39);
    v29.action(&v1, 2);
    v10.arg(&v24, &v29);
    v24.new("checksilentquietdiagnose-firstoutputcheck-silentcheck for sorted input; do not sortexit successfully if the given file is already sorted, and exit with status 1 otherwise.ignore-casefold lower case to upper case charactersignore-nonprintingignore nonprinti", 5);
    v1.short(&v24, 99);
    v24.long(&v1, "checksilentquietdiagnose-firstoutputcheck-silentcheck for sorted input; do not sortexit successfully if the given file is already sorted, and exit with status 1 otherwise.ignore-casefold lower case to upper case charactersignore-nonprintingignore nonprinti", 5);
    memcpy(&v1, &v24, 632);
    v7 = 128 | v25;
    v8 = *((int *)&v26);
    v24.num_args(&v1);
    v1 = "silentquietdiagnose-firstoutputcheck-silentcheck for sorted input; do not sortexit successfully if the given file is already sorted, and exit with status 1 otherwise.ignore-casefold lower case to upper case charactersignore-nonprintingignore nonprinting ch";
    v2 = 6;
    v3 = "quietdiagnose-firstoutputcheck-silentcheck for sorted input; do not sortexit successfully if the given file is already sorted, and exit with status 1 otherwise.ignore-casefold lower case to upper case charactersignore-nonprintingignore nonprinting characte";
    v4 = 5;
    v5 = "diagnose-firstoutputcheck-silentcheck for sorted input; do not sortexit successfully if the given file is already sorted, and exit with status 1 otherwise.ignore-casefold lower case to upper case charactersignore-nonprintingignore nonprinting charactersign";
    v6 = 14;
    v29.from(&v1);
    v1.value_parser(&v24, &v29);
    v29 = "outputcheck-silentcheck for sorted input; do not sortexit successfully if the given file is already sorted, and exit with status 1 otherwise.ignore-casefold lower case to upper case charactersignore-nonprintingignore nonprinting charactersignore-leading-bl";
    v30 = 6;
    v31 = "check-silentcheck for sorted input; do not sortexit successfully if the given file is already sorted, and exit with status 1 otherwise.ignore-casefold lower case to upper case charactersignore-nonprintingignore nonprinting charactersignore-leading-blanksig";
    v32 = 12;
    v24.conflicts_with_all(&v1, &v29);
    v1.help(&v24, "check for sorted input; do not sortexit successfully if the given file is already sorted, and exit with status 1 otherwise.ignore-casefold lower case to upper case charactersignore-nonprintingignore nonprinting charactersignore-leading-blanksignore leading", 35);
    v24.arg(&v10, &v1);
    v10.new("check-silentcheck for sorted input; do not sortexit successfully if the given file is already sorted, and exit with status 1 otherwise.ignore-casefold lower case to upper case charactersignore-nonprintingignore nonprinting charactersignore-leading-blanksig", 12);
    v1.short(&v10, 67);
    v10.long(&v1, "check-silentcheck for sorted input; do not sortexit successfully if the given file is already sorted, and exit with status 1 otherwise.ignore-casefold lower case to upper case charactersignore-nonprintingignore nonprinting charactersignore-leading-blanksig", 12);
    v29 = "outputcheck-silentcheck for sorted input; do not sortexit successfully if the given file is already sorted, and exit with status 1 otherwise.ignore-casefold lower case to upper case charactersignore-nonprintingignore nonprinting charactersignore-leading-bl";
    v30 = 6;
    v31 = "checksilentquietdiagnose-firstoutputcheck-silentcheck for sorted input; do not sortexit successfully if the given file is already sorted, and exit with status 1 otherwise.ignore-casefold lower case to upper case charactersignore-nonprintingignore nonprinti";
    v32 = 5;
    v1.conflicts_with_all(&v10, &v29);
    v10.help(&v1, "exit successfully if the given file is already sorted, and exit with status 1 otherwise.ignore-casefold lower case to upper case charactersignore-nonprintingignore nonprinting charactersignore-leading-blanksignore leading blanks when finding sort keys in e", 88);
    v1.action(&v10, 2);
    v10.arg(&v24, &v1);
    v24.new("ignore-casefold lower case to upper case charactersignore-nonprintingignore nonprinting charactersignore-leading-blanksignore leading blanks when finding sort keys in each linewrite output to FILENAME instead of stdoutreversereverse the outputstablestabili", 11);
    v1.short(&v24, 102);
    v24.long(&v1, "ignore-casefold lower case to upper case charactersignore-nonprintingignore nonprinting charactersignore-leading-blanksignore leading blanks when finding sort keys in each linewrite output to FILENAME instead of stdoutreversereverse the outputstablestabili", 11);
    v1.help(&v24, "fold lower case to upper case charactersignore-nonprintingignore nonprinting charactersignore-leading-blanksignore leading blanks when finding sort keys in each linewrite output to FILENAME instead of stdoutreversereverse the outputstablestabilize sort by ", 40);
    v29.action(&v1, 2);
    v24.arg(&v10, &v29);
    v10.new("ignore-nonprintingignore nonprinting charactersignore-leading-blanksignore leading blanks when finding sort keys in each linewrite output to FILENAME instead of stdoutreversereverse the outputstablestabilize sort by disabling last-resort comparisonuniqueou", 18);
    v1.short(&v10, 105);
    v10.long(&v1, "ignore-nonprintingignore nonprinting charactersignore-leading-blanksignore leading blanks when finding sort keys in each linewrite output to FILENAME instead of stdoutreversereverse the outputstablestabilize sort by disabling last-resort comparisonuniqueou", 18);
    v1.help(&v10, "ignore nonprinting charactersignore-leading-blanksignore leading blanks when finding sort keys in each linewrite output to FILENAME instead of stdoutreversereverse the outputstablestabilize sort by disabling last-resort comparisonuniqueoutput only the firs", 29);
    v29 = "numeric-sortversion-sortrandom-sortFailed to fetch rlimit(uutils coreutils) 0.0.30Display sorted concatenation of all FILE(s). With no FILE, or when FILE is -, read standard input.The key format is FIELD[.CHAR][OPTIONS][,FIELD[.CHAR]][OPTIONS].\n\nFields by ";
    v30 = 12;
    v31 = "general-numeric-sorthuman-numeric-sortmonth-sortnumeric-sortversion-sortrandom-sortFailed to fetch rlimit(uutils coreutils) 0.0.30Display sorted concatenation of all FILE(s). With no FILE, or when FILE is -, read standard input.The key format is FIELD[.CHA";
    v32 = 20;
    v33 = "human-numeric-sortmonth-sortnumeric-sortversion-sortrandom-sortFailed to fetch rlimit(uutils coreutils) 0.0.30Display sorted concatenation of all FILE(s). With no FILE, or when FILE is -, read standard input.The key format is FIELD[.CHAR][OPTIONS][,FIELD[.";
    v34 = 18;
    v35 = "month-sortnumeric-sortversion-sortrandom-sortFailed to fetch rlimit(uutils coreutils) 0.0.30Display sorted concatenation of all FILE(s). With no FILE, or when FILE is -, read standard input.The key format is FIELD[.CHAR][OPTIONS][,FIELD[.CHAR]][OPTIONS].\n\n";
    v36 = 10;
    v10.conflicts_with_all(&v1, &v29);
    v1.action(&v10, 2);
    v10.arg(&v24, &v1);
    v24.new("ignore-leading-blanksignore leading blanks when finding sort keys in each linewrite output to FILENAME instead of stdoutreversereverse the outputstablestabilize sort by disabling last-resort comparisonuniqueoutput only the first of an equal runkeysort by a", 21);
    v1.short(&v24, 98);
    v24.long(&v1, "ignore-leading-blanksignore leading blanks when finding sort keys in each linewrite output to FILENAME instead of stdoutreversereverse the outputstablestabilize sort by disabling last-resort comparisonuniqueoutput only the first of an equal runkeysort by a", 21);
    v1.help(&v24, "ignore leading blanks when finding sort keys in each linewrite output to FILENAME instead of stdoutreversereverse the outputstablestabilize sort by disabling last-resort comparisonuniqueoutput only the first of an equal runkeysort by a keyfield-separatorcu", 57);
    v29.action(&v1, 2);
    v24.arg(&v10, &v29);
    v10.new("outputcheck-silentcheck for sorted input; do not sortexit successfully if the given file is already sorted, and exit with status 1 otherwise.ignore-casefold lower case to upper case charactersignore-nonprintingignore nonprinting charactersignore-leading-bl", 6);
    v1.short(&v10, 111);
    v10.long(&v1, "outputcheck-silentcheck for sorted input; do not sortexit successfully if the given file is already sorted, and exit with status 1 otherwise.ignore-casefold lower case to upper case charactersignore-nonprintingignore nonprinting charactersignore-leading-bl", 6);
    v1.help(&v10, "write output to FILENAME instead of stdoutreversereverse the outputstablestabilize sort by disabling last-resort comparisonuniqueoutput only the first of an equal runkeysort by a keyfield-separatorcustom separator for -kzero-terminatedline delimiter is NUL", 42);
    v10.value_name(&v1, "FILENAME\n       ", 8);
    v1.value_hint(&v10, 3);
    v10.arg(&v24, &v1);
    v24.new("reversereverse the outputstablestabilize sort by disabling last-resort comparisonuniqueoutput only the first of an equal runkeysort by a keyfield-separatorcustom separator for -kzero-terminatedline delimiter is NUL, not newlinechange the number of threads ", 7);
    v1.short(&v24, 114);
    v24.long(&v1, "reversereverse the outputstablestabilize sort by disabling last-resort comparisonuniqueoutput only the first of an equal runkeysort by a keyfield-separatorcustom separator for -kzero-terminatedline delimiter is NUL, not newlinechange the number of threads ", 7);
    v1.help(&v24, "reverse the outputstablestabilize sort by disabling last-resort comparisonuniqueoutput only the first of an equal runkeysort by a keyfield-separatorcustom separator for -kzero-terminatedline delimiter is NUL, not newlinechange the number of threads running", 18);
    v29.action(&v1, 2);
    v24.arg(&v10, &v29);
    v10.new("stablestabilize sort by disabling last-resort comparisonuniqueoutput only the first of an equal runkeysort by a keyfield-separatorcustom separator for -kzero-terminatedline delimiter is NUL, not newlinechange the number of threads running concurrently to N", 6);
    v1.short(&v10, 115);
    v10.long(&v1, "stablestabilize sort by disabling last-resort comparisonuniqueoutput only the first of an equal runkeysort by a keyfield-separatorcustom separator for -kzero-terminatedline delimiter is NUL, not newlinechange the number of threads running concurrently to N", 6);
    v1.help(&v10, "stabilize sort by disabling last-resort comparisonuniqueoutput only the first of an equal runkeysort by a keyfield-separatorcustom separator for -kzero-terminatedline delimiter is NUL, not newlinechange the number of threads running concurrently to NUM_THR", 50);
    v29.action(&v1, 2);
    v10.arg(&v24, &v29);
    v24.new("uniqueoutput only the first of an equal runkeysort by a keyfield-separatorcustom separator for -kzero-terminatedline delimiter is NUL, not newlinechange the number of threads running concurrently to NUM_THREADSNUM_THREADSbuffer-sizesets the maximum SIZE of", 6);
    v1.short(&v24, 117);
    v24.long(&v1, "uniqueoutput only the first of an equal runkeysort by a keyfield-separatorcustom separator for -kzero-terminatedline delimiter is NUL, not newlinechange the number of threads running concurrently to NUM_THREADSNUM_THREADSbuffer-sizesets the maximum SIZE of", 6);
    v1.help(&v24, "output only the first of an equal runkeysort by a keyfield-separatorcustom separator for -kzero-terminatedline delimiter is NUL, not newlinechange the number of threads running concurrently to NUM_THREADSNUM_THREADSbuffer-sizesets the maximum SIZE of each ", 37);
    v29.action(&v1, 2);
    v24.arg(&v10, &v29);
    v10.new("keysort by a keyfield-separatorcustom separator for -kzero-terminatedline delimiter is NUL, not newlinechange the number of threads running concurrently to NUM_THREADSNUM_THREADSbuffer-sizesets the maximum SIZE of each segment in number of sorted itemstemp", 3);
    v1.short(&v10, 107);
    v10.long(&v1, "keysort by a keyfield-separatorcustom separator for -kzero-terminatedline delimiter is NUL, not newlinechange the number of threads running concurrently to NUM_THREADSNUM_THREADSbuffer-sizesets the maximum SIZE of each segment in number of sorted itemstemp", 3);
    v1.help(&v10, "sort by a keyfield-separatorcustom separator for -kzero-terminatedline delimiter is NUL, not newlinechange the number of threads running concurrently to NUM_THREADSNUM_THREADSbuffer-sizesets the maximum SIZE of each segment in number of sorted itemstempora", 13);
    v10.action(&v1, 1);
    v1.num_args(&v10);
    v10.arg(&v24, &v1);
    v24.new("field-separatorcustom separator for -kzero-terminatedline delimiter is NUL, not newlinechange the number of threads running concurrently to NUM_THREADSNUM_THREADSbuffer-sizesets the maximum SIZE of each segment in number of sorted itemstemporary-directoryu", 15);
    v1.short(&v24, 116);
    v24.long(&v1, "field-separatorcustom separator for -kzero-terminatedline delimiter is NUL, not newlinechange the number of threads running concurrently to NUM_THREADSNUM_THREADSbuffer-sizesets the maximum SIZE of each segment in number of sorted itemstemporary-directoryu", 15);
    v1.help(&v24, "custom separator for -kzero-terminatedline delimiter is NUL, not newlinechange the number of threads running concurrently to NUM_THREADSNUM_THREADSbuffer-sizesets the maximum SIZE of each segment in number of sorted itemstemporary-directoryuse DIR for temp", 23);
    v9 = 2;
    v29.value_parser(&v1, &v9);
    v24.arg(&v10, &v29);
    v10.new("zero-terminatedline delimiter is NUL, not newlinechange the number of threads running concurrently to NUM_THREADSNUM_THREADSbuffer-sizesets the maximum SIZE of each segment in number of sorted itemstemporary-directoryuse DIR for temporaries, not $TMPDIR or", 15);
    v1.short(&v10, 122);
    v10.long(&v1, "zero-terminatedline delimiter is NUL, not newlinechange the number of threads running concurrently to NUM_THREADSNUM_THREADSbuffer-sizesets the maximum SIZE of each segment in number of sorted itemstemporary-directoryuse DIR for temporaries, not $TMPDIR or", 15);
    v1.help(&v10, "line delimiter is NUL, not newlinechange the number of threads running concurrently to NUM_THREADSNUM_THREADSbuffer-sizesets the maximum SIZE of each segment in number of sorted itemstemporary-directoryuse DIR for temporaries, not $TMPDIR or /tmpDIRcompres", 34);
    v29.action(&v1, 2);
    v10.arg(&v24, &v29);
    v24.new("parallel' existsDeadlock", 8);
    v1.long(&v24, "parallel' existsDeadlock", 8);
    v24.help(&v1, "change the number of threads running concurrently to NUM_THREADSNUM_THREADSbuffer-sizesets the maximum SIZE of each segment in number of sorted itemstemporary-directoryuse DIR for temporaries, not $TMPDIR or /tmpDIRcompress temporary files with PROG, decom", 64);
    v1.value_name(&v24, "NUM_THREADSbuffer-sizesets the maximum SIZE of each segment in number of sorted itemstemporary-directoryuse DIR for temporaries, not $TMPDIR or /tmpDIRcompress temporary files with PROG, decompress with PROG -d; PROG has to take input from stdin and output", 11);
    v24.arg(&v10, &v1);
    v10.new("buffer-sizesets the maximum SIZE of each segment in number of sorted itemstemporary-directoryuse DIR for temporaries, not $TMPDIR or /tmpDIRcompress temporary files with PROG, decompress with PROG -d; PROG has to take input from stdin and output to stdoutb", 11);
    v1.short(&v10, 83);
    v10.long(&v1, "buffer-sizesets the maximum SIZE of each segment in number of sorted itemstemporary-directoryuse DIR for temporaries, not $TMPDIR or /tmpDIRcompress temporary files with PROG, decompress with PROG -d; PROG has to take input from stdin and output to stdoutb", 11);
    v1.help(&v10, "sets the maximum SIZE of each segment in number of sorted itemstemporary-directoryuse DIR for temporaries, not $TMPDIR or /tmpDIRcompress temporary files with PROG, decompress with PROG -d; PROG has to take input from stdin and output to stdoutbatch-sizeMe", 63);
    v29.value_name(&v1, "SIZE", 4);
    v10.arg(&v24, &v29);
    v24.new("temporary-directoryuse DIR for temporaries, not $TMPDIR or /tmpDIRcompress temporary files with PROG, decompress with PROG -d; PROG has to take input from stdin and output to stdoutbatch-sizeMerge at most N_MERGE inputs at once.N_MERGEfiles0-fromread input", 19);
    v1.short(&v24, 84);
    v24.long(&v1, "temporary-directoryuse DIR for temporaries, not $TMPDIR or /tmpDIRcompress temporary files with PROG, decompress with PROG -d; PROG has to take input from stdin and output to stdoutbatch-sizeMerge at most N_MERGE inputs at once.N_MERGEfiles0-fromread input", 19);
    v1.help(&v24, "use DIR for temporaries, not $TMPDIR or /tmpDIRcompress temporary files with PROG, decompress with PROG -d; PROG has to take input from stdin and output to stdoutbatch-sizeMerge at most N_MERGE inputs at once.N_MERGEfiles0-fromread input from the files spe", 44);
    v24.value_name(&v1, "DIRcompress temporary files with PROG, decompress with PROG -d; PROG has to take input from stdin and output to stdoutbatch-sizeMerge at most N_MERGE inputs at once.N_MERGEfiles0-fromread input from the files specified by NUL-terminated NUL_FILESNUL_FILESd", 3);
    v1.value_hint(&v24, 4);
    v24.arg(&v10, &v1);
    v10.new("compress-program", 16);
    v1.long(&v10, "compress-program", 16);
    v10.help(&v1, "compress temporary files with PROG, decompress with PROG -d; PROG has to take input from stdin and output to stdoutbatch-sizeMerge at most N_MERGE inputs at once.N_MERGEfiles0-fromread input from the files specified by NUL-terminated NUL_FILESNUL_FILESdebu", 115);
    v1.value_name(&v10, "PROGSomedumb", 4);
    v29.value_hint(&v1, 6);
    v10.arg(&v24, &v29);
    v24.new("batch-sizeMerge at most N_MERGE inputs at once.N_MERGEfiles0-fromread input from the files specified by NUL-terminated NUL_FILESNUL_FILESdebugunderline the parts of the line that are actually used for sortingfilesonly one file allowed with -cinfnanJANFEBMA", 10);
    v1.long(&v24, "batch-sizeMerge at most N_MERGE inputs at once.N_MERGEfiles0-fromread input from the files specified by NUL-terminated NUL_FILESNUL_FILESdebugunderline the parts of the line that are actually used for sortingfilesonly one file allowed with -cinfnanJANFEBMA", 10);
    v24.help(&v1, "Merge at most N_MERGE inputs at once.N_MERGEfiles0-fromread input from the files specified by NUL-terminated NUL_FILESNUL_FILESdebugunderline the parts of the line that are actually used for sortingfilesonly one file allowed with -cinfnanJANFEBMARAPRMAYJUN", 37);
    v1.value_name(&v24, "N_MERGEfiles0-fromread input from the files specified by NUL-terminated NUL_FILESNUL_FILESdebugunderline the parts of the line that are actually used for sortingfilesonly one file allowed with -cinfnanJANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDECstandard outputwrit", 7);
    v24.arg(&v10, &v1);
    v10.new("files0-fromread input from the files specified by NUL-terminated NUL_FILESNUL_FILESdebugunderline the parts of the line that are actually used for sortingfilesonly one file allowed with -cinfnanJANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDECstandard outputwrite faile", 11);
    v1.long(&v10, "files0-fromread input from the files specified by NUL-terminated NUL_FILESNUL_FILESdebugunderline the parts of the line that are actually used for sortingfilesonly one file allowed with -cinfnanJANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDECstandard outputwrite faile", 11);
    v10.help(&v1, "read input from the files specified by NUL-terminated NUL_FILESNUL_FILESdebugunderline the parts of the line that are actually used for sortingfilesonly one file allowed with -cinfnanJANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDECstandard outputwrite failed: ", 63);
    v1.value_name(&v10, "NUL_FILESdebugunderline the parts of the line that are actually used for sortingfilesonly one file allowed with -cinfnanJANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDECstandard outputwrite failed: ", 9);
    v10.action(&v1, 1);
    v1.value_parser(&v10, &v9);
    v29.value_hint(&v1, 3);
    v10.arg(&v24, &v29);
    v24.new("debugunderline the parts of the line that are actually used for sortingfilesonly one file allowed with -cinfnanJANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDECstandard outputwrite failed: ", 5);
    v1.long(&v24, "debugunderline the parts of the line that are actually used for sortingfilesonly one file allowed with -cinfnanJANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDECstandard outputwrite failed: ", 5);
    v24.help(&v1, "underline the parts of the line that are actually used for sortingfilesonly one file allowed with -cinfnanJANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDECstandard outputwrite failed: ", 66);
    v1.action(&v24, 2);
    v24.arg(&v10, &v1);
    v10.new("filesonly one file allowed with -cinfnanJANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDECstandard outputwrite failed: ", 5);
    v1.action(&v10, 1);
    v10.value_parser(&v1, &v9);
    v1.value_hint(&v10, 3);
    v0.arg(&v24, &v1);
    return a0;
}
