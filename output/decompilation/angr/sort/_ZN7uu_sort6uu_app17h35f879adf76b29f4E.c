long long uu_sort::uu_app(unsigned long a0)
{
    unsigned long long v0;  // [bp-0xb08]
    unsigned long long v1;  // [bp-0xb00]
    unsigned long long v2;  // [bp-0xaf8]
    unsigned long long v3;  // [bp-0xaf0]
    char v4;  // [bp-0xae8]
    unsigned long long v5;  // [bp-0xae0]
    unsigned long long v6;  // [bp-0xad8]
    char v7;  // [bp-0xad0], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0xac8]
    unsigned long long v9;  // [bp-0xac0]
    unsigned long long v10;  // [bp-0xab8]
    unsigned long long v11;  // [bp-0xab0]
    unsigned long long v12;  // [bp-0xaa8]
    unsigned int v13;  // [bp-0x858]
    unsigned int v14;  // [bp-0x854]
    char v15;  // [bp-0x850], Other Possible Types: unsigned long long
    unsigned long long v16;  // [bp-0x848]
    unsigned long long v17;  // [bp-0x840]
    unsigned long long v18;  // [bp-0x838]
    unsigned long long v19;  // [bp-0x830]
    unsigned long long v20;  // [bp-0x828]
    unsigned long long v21;  // [bp-0x820]
    unsigned long long v22;  // [bp-0x818]
    unsigned long long v23;  // [bp-0x810]
    unsigned long long v24;  // [bp-0x808]
    unsigned long long v25;  // [bp-0x800]
    unsigned long long v26;  // [bp-0x7f8]
    unsigned long v27;  // [bp-0x594]
    unsigned int v28;  // [bp-0x58c]
    char v29;  // [bp-0x588]
    unsigned long long v30;  // [bp-0x578]
    unsigned int v31;  // [bp-0x310]
    char v32;  // [bp-0x30c]
    unsigned long long v33;  // [bp-0x2cc]
    unsigned int v34;  // [bp-0x2c4]
    int v35;  // [bp-0x2b8], Other Possible Types: unsigned long long
    unsigned long long v36;  // [bp-0x2b0]
    int v37;  // [bp-0x2a8], Other Possible Types: unsigned long long
    unsigned long long v38;  // [bp-0x2a0]
    int v39;  // [bp-0x298], Other Possible Types: unsigned long long
    unsigned long long v40;  // [bp-0x290]
    int v41;  // [bp-0x288], Other Possible Types: unsigned long long
    unsigned long long v42;  // [bp-0x280]
    int v43;  // [bp-0x278]
    int v44;  // [bp-0x268]
    unsigned long long v47;  // rdx

    v15.new(uucore::util_name(), v47);
    v29.version(&v15, "(uutils coreutils) 0.1.0sort-aboutsort-after-helpsort-usagesort-help-helpversionsort-help-versiongeneral-numerichuman-numericmonthnumericrandomsort-help-human-numericsort-help-monthsort-help-numericsort-help-general-numericsort-help-version-sortsort-help-d", 24);
    uucore::mods::locale::get_message(&v7, "sort-aboutsort-after-helpsort-usagesort-help-helpversionsort-help-versiongeneral-numerichuman-numericmonthnumericrandomsort-help-human-numericsort-help-monthsort-help-numericsort-help-general-numericsort-help-version-sortsort-help-dictionary-ordermergesort", 10);
    v15.about(&v29, &v7);
    uucore::mods::locale::get_message(&v7, "sort-after-helpsort-usagesort-help-helpversionsort-help-versiongeneral-numerichuman-numericmonthnumericrandomsort-help-human-numericsort-help-monthsort-help-numericsort-help-general-numericsort-help-version-sortsort-help-dictionary-ordermergesort-help-merg", 15);
    v29.after_help(&v15, &v7);
    uucore::mods::locale::get_message(&v4, "sort-usagesort-help-helpversionsort-help-versiongeneral-numerichuman-numericmonthnumericrandomsort-help-human-numericsort-help-monthsort-help-numericsort-help-general-numericsort-help-version-sortsort-help-dictionary-ordermergesort-help-mergechecksilentqui", 10);
    uucore::format_usage(&v7, v5, v6);
    v15.override_usage(&v29, &v7);
    memcpy(&v29, &v15, 700);
    v33 = 11259583186600072 | v27;
    v34 = v28;
    v15.new("help-inflineNoneshimname", 4);
    v7.long(&v15, "help-inflineNoneshimname", 4);
    uucore::mods::locale::get_message(&(char)v35, "sort-help-helpversionsort-help-versiongeneral-numerichuman-numericmonthnumericrandomsort-help-human-numericsort-help-monthsort-help-numericsort-help-general-numericsort-help-version-sortsort-help-dictionary-ordermergesort-help-mergechecksilentquietdiagnose", 14);
    v15.help(&v7, &(char)v35);
    v7.action(&v15, 5);
    v15.arg(&v29, &v7);
    v29.new("versionsort-help-versiongeneral-numerichuman-numericmonthnumericrandomsort-help-human-numericsort-help-monthsort-help-numericsort-help-general-numericsort-help-version-sortsort-help-dictionary-ordermergesort-help-mergechecksilentquietdiagnose-firstoutputch", 7);
    v7.long(&v29, "versionsort-help-versiongeneral-numerichuman-numericmonthnumericrandomsort-help-human-numericsort-help-monthsort-help-numericsort-help-general-numericsort-help-version-sortsort-help-dictionary-ordermergesort-help-mergechecksilentquietdiagnose-firstoutputch", 7);
    uucore::mods::locale::get_message(&(char)v35, "sort-help-versiongeneral-numerichuman-numericmonthnumericrandomsort-help-human-numericsort-help-monthsort-help-numericsort-help-general-numericsort-help-version-sortsort-help-dictionary-ordermergesort-help-mergechecksilentquietdiagnose-firstoutputcheck-sil", 17);
    v29.help(&v7, &(char)v35);
    v7.action(&v29, 8);
    v29.arg(&v15, &v7);
    v15.new("sort", 4);
    v7.long(&v15, "sort", 4);
    v15 = "general-numerichuman-numericmonthnumericrandomsort-help-human-numericsort-help-monthsort-help-numericsort-help-general-numericsort-help-version-sortsort-help-dictionary-ordermergesort-help-mergechecksilentquietdiagnose-firstoutputcheck-silentsort-help-chec";
    v16 = 15;
    v17 = "human-numericmonthnumericrandomsort-help-human-numericsort-help-monthsort-help-numericsort-help-general-numericsort-help-version-sortsort-help-dictionary-ordermergesort-help-mergechecksilentquietdiagnose-firstoutputcheck-silentsort-help-checksort-help-chec";
    v18 = 13;
    v19 = "monthnumericrandomsort-help-human-numericsort-help-monthsort-help-numericsort-help-general-numericsort-help-version-sortsort-help-dictionary-ordermergesort-help-mergechecksilentquietdiagnose-firstoutputcheck-silentsort-help-checksort-help-check-silentignor";
    v20 = 5;
    v21 = "numericrandomsort-help-human-numericsort-help-monthsort-help-numericsort-help-general-numericsort-help-version-sortsort-help-dictionary-ordermergesort-help-mergechecksilentquietdiagnose-firstoutputcheck-silentsort-help-checksort-help-check-silentignore-cas";
    v22 = 7;
    v23 = "versionsort-help-versiongeneral-numerichuman-numericmonthnumericrandomsort-help-human-numericsort-help-monthsort-help-numericsort-help-general-numericsort-help-version-sortsort-help-dictionary-ordermergesort-help-mergechecksilentquietdiagnose-firstoutputch";
    v24 = 7;
    v25 = "randomsort-help-human-numericsort-help-monthsort-help-numericsort-help-general-numericsort-help-version-sortsort-help-dictionary-ordermergesort-help-mergechecksilentquietdiagnose-firstoutputcheck-silentsort-help-checksort-help-check-silentignore-casesort-h";
    v26 = 6;
    (char)v35.from(&v15);
    v15.value_parser(&v7, &(char)v35);
    *((uint128_t *)&v44) = g_670878;
    *((uint128_t *)&v43) = g_670868;
    *((uint128_t *)&v41) = g_670858;
    *((uint128_t *)&v39) = g_670848;
    *((uint128_t *)&v37) = g_670838;
    *((uint128_t *)&v35) = g_670828;
    v7.conflicts_with_all(&v15, &(char)v35);
    v15.arg(&v29, &v7);
    uucore::mods::locale::get_message(&v29, "sort-help-human-numericsort-help-monthsort-help-numericsort-help-general-numericsort-help-version-sortsort-help-dictionary-ordermergesort-help-mergechecksilentquietdiagnose-firstoutputcheck-silentsort-help-checksort-help-check-silentignore-casesort-help-ig", 23);
    uu_sort::make_sort_mode_arg(&v7, "human-numeric-sortmonth-sortnumeric-sortversion-sortrandom-sortsort-failed-fetch-rlimit(uutils coreutils) 0.1.0sort-aboutsort-after-helpsort-usagesort-help-helpversionsort-help-versiongeneral-numerichuman-numericmonthnumericrandomsort-help-human-numericsor", 18, 104, &v29);
    v29.arg(&v15, &v7);
    uucore::mods::locale::get_message(&v15, "sort-help-monthsort-help-numericsort-help-general-numericsort-help-version-sortsort-help-dictionary-ordermergesort-help-mergechecksilentquietdiagnose-firstoutputcheck-silentsort-help-checksort-help-check-silentignore-casesort-help-ignore-caseignore-nonprin", 15);
    uu_sort::make_sort_mode_arg(&v7, "month-sortnumeric-sortversion-sortrandom-sortsort-failed-fetch-rlimit(uutils coreutils) 0.1.0sort-aboutsort-after-helpsort-usagesort-help-helpversionsort-help-versiongeneral-numerichuman-numericmonthnumericrandomsort-help-human-numericsort-help-monthsort-h", 10, 77, &v15);
    v15.arg(&v29, &v7);
    uucore::mods::locale::get_message(&v29, "sort-help-numericsort-help-general-numericsort-help-version-sortsort-help-dictionary-ordermergesort-help-mergechecksilentquietdiagnose-firstoutputcheck-silentsort-help-checksort-help-check-silentignore-casesort-help-ignore-caseignore-nonprintingsort-help-i", 17);
    uu_sort::make_sort_mode_arg(&v7, "numeric-sortversion-sortrandom-sortsort-failed-fetch-rlimit(uutils coreutils) 0.1.0sort-aboutsort-after-helpsort-usagesort-help-helpversionsort-help-versiongeneral-numerichuman-numericmonthnumericrandomsort-help-human-numericsort-help-monthsort-help-numeri", 12, 110, &v29);
    v29.arg(&v15, &v7);
    uucore::mods::locale::get_message(&v15, "sort-help-general-numericsort-help-version-sortsort-help-dictionary-ordermergesort-help-mergechecksilentquietdiagnose-firstoutputcheck-silentsort-help-checksort-help-check-silentignore-casesort-help-ignore-caseignore-nonprintingsort-help-ignore-nonprinting", 25);
    uu_sort::make_sort_mode_arg(&v7, "general-numeric-sorthuman-numeric-sortmonth-sortnumeric-sortversion-sortrandom-sortsort-failed-fetch-rlimit(uutils coreutils) 0.1.0sort-aboutsort-after-helpsort-usagesort-help-helpversionsort-help-versiongeneral-numerichuman-numericmonthnumericrandomsort-h", 20, 103, &v15);
    v15.arg(&v29, &v7);
    uucore::mods::locale::get_message(&v29, "sort-help-version-sortsort-help-dictionary-ordermergesort-help-mergechecksilentquietdiagnose-firstoutputcheck-silentsort-help-checksort-help-check-silentignore-casesort-help-ignore-caseignore-nonprintingsort-help-ignore-nonprintingignore-leading-blankssort", 22);
    uu_sort::make_sort_mode_arg(&v7, "version-sortrandom-sortsort-failed-fetch-rlimit(uutils coreutils) 0.1.0sort-aboutsort-after-helpsort-usagesort-help-helpversionsort-help-versiongeneral-numerichuman-numericmonthnumericrandomsort-help-human-numericsort-help-monthsort-help-numericsort-help-g", 12, 86, &v29);
    v29.arg(&v15, &v7);
    uucore::mods::locale::get_message(&v15, "sort-help-random", 16);
    uu_sort::make_sort_mode_arg(&v7, "random-sortsort-failed-fetch-rlimit(uutils coreutils) 0.1.0sort-aboutsort-after-helpsort-usagesort-help-helpversionsort-help-versiongeneral-numerichuman-numericmonthnumericrandomsort-help-human-numericsort-help-monthsort-help-numericsort-help-general-numer", 11, 82, &v15);
    v15.arg(&v29, &v7);
    v29.new("dictionary-order", 16);
    v7.short(&v29, 100);
    v29.long(&v7, "dictionary-order", 16);
    uucore::mods::locale::get_message(&(char)v35, "sort-help-dictionary-ordermergesort-help-mergechecksilentquietdiagnose-firstoutputcheck-silentsort-help-checksort-help-check-silentignore-casesort-help-ignore-caseignore-nonprintingsort-help-ignore-nonprintingignore-leading-blankssort-help-ignore-leading-b", 26);
    v7.help(&v29, &(char)v35);
    v35 = "numeric-sortversion-sortrandom-sortsort-failed-fetch-rlimit(uutils coreutils) 0.1.0sort-aboutsort-after-helpsort-usagesort-help-helpversionsort-help-versiongeneral-numerichuman-numericmonthnumericrandomsort-help-human-numericsort-help-monthsort-help-numeri";
    v36 = 12;
    v37 = "general-numeric-sorthuman-numeric-sortmonth-sortnumeric-sortversion-sortrandom-sortsort-failed-fetch-rlimit(uutils coreutils) 0.1.0sort-aboutsort-after-helpsort-usagesort-help-helpversionsort-help-versiongeneral-numerichuman-numericmonthnumericrandomsort-h";
    v38 = 20;
    v39 = "human-numeric-sortmonth-sortnumeric-sortversion-sortrandom-sortsort-failed-fetch-rlimit(uutils coreutils) 0.1.0sort-aboutsort-after-helpsort-usagesort-help-helpversionsort-help-versiongeneral-numerichuman-numericmonthnumericrandomsort-help-human-numericsor";
    v40 = 18;
    v41 = "month-sortnumeric-sortversion-sortrandom-sortsort-failed-fetch-rlimit(uutils coreutils) 0.1.0sort-aboutsort-after-helpsort-usagesort-help-helpversionsort-help-versiongeneral-numerichuman-numericmonthnumericrandomsort-help-human-numericsort-help-monthsort-h";
    v42 = 10;
    v29.conflicts_with_all(&v7, &v35);
    v7.action(&v29, 2);
    v29.arg(&v15, &v7);
    v15.new("mergesort-help-mergechecksilentquietdiagnose-firstoutputcheck-silentsort-help-checksort-help-check-silentignore-casesort-help-ignore-caseignore-nonprintingsort-help-ignore-nonprintingignore-leading-blankssort-help-ignore-leading-blanksreversesort-help-reve", 5);
    v7.short(&v15, 109);
    v15.long(&v7, "mergesort-help-mergechecksilentquietdiagnose-firstoutputcheck-silentsort-help-checksort-help-check-silentignore-casesort-help-ignore-caseignore-nonprintingsort-help-ignore-nonprintingignore-leading-blankssort-help-ignore-leading-blanksreversesort-help-reve", 5);
    uucore::mods::locale::get_message(&v35, "sort-help-mergechecksilentquietdiagnose-firstoutputcheck-silentsort-help-checksort-help-check-silentignore-casesort-help-ignore-caseignore-nonprintingsort-help-ignore-nonprintingignore-leading-blankssort-help-ignore-leading-blanksreversesort-help-reversest", 15);
    v7.help(&v15, &v35);
    v35.action(&v7, 2);
    v15.arg(&v29, &v35);
    v29.new("checksilentquietdiagnose-firstoutputcheck-silentsort-help-checksort-help-check-silentignore-casesort-help-ignore-caseignore-nonprintingsort-help-ignore-nonprintingignore-leading-blankssort-help-ignore-leading-blanksreversesort-help-reversestableuniquesort-", 5);
    v7.short(&v29, 99);
    v29.long(&v7, "checksilentquietdiagnose-firstoutputcheck-silentsort-help-checksort-help-check-silentignore-casesort-help-ignore-caseignore-nonprintingsort-help-ignore-nonprintingignore-leading-blankssort-help-ignore-leading-blanksreversesort-help-reversestableuniquesort-", 5);
    memcpy(&v7, &v29, 632);
    v13 = 128 | v31;
    v14 = *((int *)&v32);
    v29.num_args(&v7);
    v7 = "silentquietdiagnose-firstoutputcheck-silentsort-help-checksort-help-check-silentignore-casesort-help-ignore-caseignore-nonprintingsort-help-ignore-nonprintingignore-leading-blankssort-help-ignore-leading-blanksreversesort-help-reversestableuniquesort-help-";
    v8 = 6;
    v9 = "quietdiagnose-firstoutputcheck-silentsort-help-checksort-help-check-silentignore-casesort-help-ignore-caseignore-nonprintingsort-help-ignore-nonprintingignore-leading-blankssort-help-ignore-leading-blanksreversesort-help-reversestableuniquesort-help-keyfie";
    v10 = 5;
    v11 = "diagnose-firstoutputcheck-silentsort-help-checksort-help-check-silentignore-casesort-help-ignore-caseignore-nonprintingsort-help-ignore-nonprintingignore-leading-blankssort-help-ignore-leading-blanksreversesort-help-reversestableuniquesort-help-keyfield-se";
    v12 = 14;
    v35.from(&v7);
    v7.value_parser(&v29, &v35);
    v35 = "outputcheck-silentsort-help-checksort-help-check-silentignore-casesort-help-ignore-caseignore-nonprintingsort-help-ignore-nonprintingignore-leading-blankssort-help-ignore-leading-blanksreversesort-help-reversestableuniquesort-help-keyfield-separatorsort-he";
    v36 = 6;
    v37 = "check-silentsort-help-checksort-help-check-silentignore-casesort-help-ignore-caseignore-nonprintingsort-help-ignore-nonprintingignore-leading-blankssort-help-ignore-leading-blanksreversesort-help-reversestableuniquesort-help-keyfield-separatorsort-help-sep";
    v38 = 12;
    v29.conflicts_with_all(&v7, &v35);
    uucore::mods::locale::get_message(&v35, "sort-help-checksort-help-check-silentignore-casesort-help-ignore-caseignore-nonprintingsort-help-ignore-nonprintingignore-leading-blankssort-help-ignore-leading-blanksreversesort-help-reversestableuniquesort-help-keyfield-separatorsort-help-separatorzero-t", 15);
    v7.help(&v29, &v35);
    v29.arg(&v15, &v7);
    v15.new("check-silentsort-help-checksort-help-check-silentignore-casesort-help-ignore-caseignore-nonprintingsort-help-ignore-nonprintingignore-leading-blankssort-help-ignore-leading-blanksreversesort-help-reversestableuniquesort-help-keyfield-separatorsort-help-sep", 12);
    v7.short(&v15, 67);
    v15.long(&v7, "check-silentsort-help-checksort-help-check-silentignore-casesort-help-ignore-caseignore-nonprintingsort-help-ignore-nonprintingignore-leading-blankssort-help-ignore-leading-blanksreversesort-help-reversestableuniquesort-help-keyfield-separatorsort-help-sep", 12);
    v35 = "outputcheck-silentsort-help-checksort-help-check-silentignore-casesort-help-ignore-caseignore-nonprintingsort-help-ignore-nonprintingignore-leading-blankssort-help-ignore-leading-blanksreversesort-help-reversestableuniquesort-help-keyfield-separatorsort-he";
    v36 = 6;
    v37 = "checksilentquietdiagnose-firstoutputcheck-silentsort-help-checksort-help-check-silentignore-casesort-help-ignore-caseignore-nonprintingsort-help-ignore-nonprintingignore-leading-blankssort-help-ignore-leading-blanksreversesort-help-reversestableuniquesort-";
    v38 = 5;
    v7.conflicts_with_all(&v15, &v35);
    uucore::mods::locale::get_message(&v35, "sort-help-check-silentignore-casesort-help-ignore-caseignore-nonprintingsort-help-ignore-nonprintingignore-leading-blankssort-help-ignore-leading-blanksreversesort-help-reversestableuniquesort-help-keyfield-separatorsort-help-separatorzero-terminatedsort-h", 22);
    v15.help(&v7, &v35);
    v7.action(&v15, 2);
    v15.arg(&v29, &v7);
    v29.new("ignore-casesort-help-ignore-caseignore-nonprintingsort-help-ignore-nonprintingignore-leading-blankssort-help-ignore-leading-blanksreversesort-help-reversestableuniquesort-help-keyfield-separatorsort-help-separatorzero-terminatedsort-help-zero-terminatedsor", 11);
    v7.short(&v29, 102);
    v29.long(&v7, "ignore-casesort-help-ignore-caseignore-nonprintingsort-help-ignore-nonprintingignore-leading-blankssort-help-ignore-leading-blanksreversesort-help-reversestableuniquesort-help-keyfield-separatorsort-help-separatorzero-terminatedsort-help-zero-terminatedsor", 11);
    uucore::mods::locale::get_message(&v35, "sort-help-ignore-caseignore-nonprintingsort-help-ignore-nonprintingignore-leading-blankssort-help-ignore-leading-blanksreversesort-help-reversestableuniquesort-help-keyfield-separatorsort-help-separatorzero-terminatedsort-help-zero-terminatedsort-help-para", 21);
    v7.help(&v29, &v35);
    v35.action(&v7, 2);
    v29.arg(&v15, &v35);
    v15.new("ignore-nonprintingsort-help-ignore-nonprintingignore-leading-blankssort-help-ignore-leading-blanksreversesort-help-reversestableuniquesort-help-keyfield-separatorsort-help-separatorzero-terminatedsort-help-zero-terminatedsort-help-parallelNUM_THREADSbuffer", 18);
    v7.short(&v15, 105);
    v15.long(&v7, "ignore-nonprintingsort-help-ignore-nonprintingignore-leading-blankssort-help-ignore-leading-blanksreversesort-help-reversestableuniquesort-help-keyfield-separatorsort-help-separatorzero-terminatedsort-help-zero-terminatedsort-help-parallelNUM_THREADSbuffer", 18);
    uucore::mods::locale::get_message(&v35, "sort-help-ignore-nonprintingignore-leading-blankssort-help-ignore-leading-blanksreversesort-help-reversestableuniquesort-help-keyfield-separatorsort-help-separatorzero-terminatedsort-help-zero-terminatedsort-help-parallelNUM_THREADSbuffer-sizesort-help-buf", 28);
    v7.help(&v15, &v35);
    v35 = "numeric-sortversion-sortrandom-sortsort-failed-fetch-rlimit(uutils coreutils) 0.1.0sort-aboutsort-after-helpsort-usagesort-help-helpversionsort-help-versiongeneral-numerichuman-numericmonthnumericrandomsort-help-human-numericsort-help-monthsort-help-numeri";
    v36 = 12;
    v37 = "general-numeric-sorthuman-numeric-sortmonth-sortnumeric-sortversion-sortrandom-sortsort-failed-fetch-rlimit(uutils coreutils) 0.1.0sort-aboutsort-after-helpsort-usagesort-help-helpversionsort-help-versiongeneral-numerichuman-numericmonthnumericrandomsort-h";
    v38 = 20;
    v39 = "human-numeric-sortmonth-sortnumeric-sortversion-sortrandom-sortsort-failed-fetch-rlimit(uutils coreutils) 0.1.0sort-aboutsort-after-helpsort-usagesort-help-helpversionsort-help-versiongeneral-numerichuman-numericmonthnumericrandomsort-help-human-numericsor";
    v40 = 18;
    v41 = "month-sortnumeric-sortversion-sortrandom-sortsort-failed-fetch-rlimit(uutils coreutils) 0.1.0sort-aboutsort-after-helpsort-usagesort-help-helpversionsort-help-versiongeneral-numerichuman-numericmonthnumericrandomsort-help-human-numericsort-help-monthsort-h";
    v42 = 10;
    v15.conflicts_with_all(&v7, &v35);
    v7.action(&v15, 2);
    v15.arg(&v29, &v7);
    v29.new("ignore-leading-blankssort-help-ignore-leading-blanksreversesort-help-reversestableuniquesort-help-keyfield-separatorsort-help-separatorzero-terminatedsort-help-zero-terminatedsort-help-parallelNUM_THREADSbuffer-sizesort-help-buf-sizetemporary-directorysort", 21);
    v7.short(&v29, 98);
    v29.long(&v7, "ignore-leading-blankssort-help-ignore-leading-blanksreversesort-help-reversestableuniquesort-help-keyfield-separatorsort-help-separatorzero-terminatedsort-help-zero-terminatedsort-help-parallelNUM_THREADSbuffer-sizesort-help-buf-sizetemporary-directorysort", 21);
    uucore::mods::locale::get_message(&v35, "sort-help-ignore-leading-blanksreversesort-help-reversestableuniquesort-help-keyfield-separatorsort-help-separatorzero-terminatedsort-help-zero-terminatedsort-help-parallelNUM_THREADSbuffer-sizesort-help-buf-sizetemporary-directorysort-help-tmp-dirDIRsort-", 31);
    v7.help(&v29, &v35);
    v35.action(&v7, 2);
    v29.arg(&v15, &v35);
    v15.new("outputcheck-silentsort-help-checksort-help-check-silentignore-casesort-help-ignore-caseignore-nonprintingsort-help-ignore-nonprintingignore-leading-blankssort-help-ignore-leading-blanksreversesort-help-reversestableuniquesort-help-keyfield-separatorsort-he", 6);
    v7.short(&v15, 111);
    v15.long(&v7, "outputcheck-silentsort-help-checksort-help-check-silentignore-casesort-help-ignore-caseignore-nonprintingsort-help-ignore-nonprintingignore-leading-blankssort-help-ignore-leading-blanksreversesort-help-reversestableuniquesort-help-keyfield-separatorsort-he", 6);
    uucore::mods::locale::get_message(&v35, "sort-help-output", 16);
    v7.help(&v15, &v35);
    v0 = 2;
    v37 = v2;
    v35 = v0;
    v36 = v1;
    v15.value_parser(&v7, &v35);
    v7.value_name(&v15, "FILENAME", 8);
    v15.value_hint(&v7, 3);
    v7.action(&v15, 1);
    v15.arg(&v29, &v7);
    v29.new("reversesort-help-reversestableuniquesort-help-keyfield-separatorsort-help-separatorzero-terminatedsort-help-zero-terminatedsort-help-parallelNUM_THREADSbuffer-sizesort-help-buf-sizetemporary-directorysort-help-tmp-dirDIRsort-help-compress-progbatch-sizesor", 7);
    v7.short(&v29, 114);
    v29.long(&v7, "reversesort-help-reversestableuniquesort-help-keyfield-separatorsort-help-separatorzero-terminatedsort-help-zero-terminatedsort-help-parallelNUM_THREADSbuffer-sizesort-help-buf-sizetemporary-directorysort-help-tmp-dirDIRsort-help-compress-progbatch-sizesor", 7);
    uucore::mods::locale::get_message(&v35, "sort-help-reversestableuniquesort-help-keyfield-separatorsort-help-separatorzero-terminatedsort-help-zero-terminatedsort-help-parallelNUM_THREADSbuffer-sizesort-help-buf-sizetemporary-directorysort-help-tmp-dirDIRsort-help-compress-progbatch-sizesort-help-", 17);
    v7.help(&v29, &v35);
    v35.action(&v7, 2);
    v29.arg(&v15, &v35);
    v15.new("stableuniquesort-help-keyfield-separatorsort-help-separatorzero-terminatedsort-help-zero-terminatedsort-help-parallelNUM_THREADSbuffer-sizesort-help-buf-sizetemporary-directorysort-help-tmp-dirDIRsort-help-compress-progbatch-sizesort-help-batch-sizeN_MERGE", 6);
    v7.short(&v15, 115);
    v15.long(&v7, "stableuniquesort-help-keyfield-separatorsort-help-separatorzero-terminatedsort-help-zero-terminatedsort-help-parallelNUM_THREADSbuffer-sizesort-help-buf-sizetemporary-directorysort-help-tmp-dirDIRsort-help-compress-progbatch-sizesort-help-batch-sizeN_MERGE", 6);
    uucore::mods::locale::get_message(&v35, "sort-help-stable", 16);
    v7.help(&v15, &v35);
    v35.action(&v7, 2);
    v15.arg(&v29, &v35);
    v29.new("uniquesort-help-keyfield-separatorsort-help-separatorzero-terminatedsort-help-zero-terminatedsort-help-parallelNUM_THREADSbuffer-sizesort-help-buf-sizetemporary-directorysort-help-tmp-dirDIRsort-help-compress-progbatch-sizesort-help-batch-sizeN_MERGEfiles0", 6);
    v7.short(&v29, 117);
    v29.long(&v7, "uniquesort-help-keyfield-separatorsort-help-separatorzero-terminatedsort-help-zero-terminatedsort-help-parallelNUM_THREADSbuffer-sizesort-help-buf-sizetemporary-directorysort-help-tmp-dirDIRsort-help-compress-progbatch-sizesort-help-batch-sizeN_MERGEfiles0", 6);
    uucore::mods::locale::get_message(&v35, "sort-help-unique", 16);
    v7.help(&v29, &v35);
    v35.action(&v7, 2);
    v29.arg(&v15, &v35);
    v15.new("keysort-failed-parse-char-indexoptionsort-invalid-optionsort-invalid-char-index-zero-startinternal error: entered unreachable code: This should only happen if the field start index is 0, but that should already have caused an error.", 3);
    v7.short(&v15, 107);
    v15.long(&v7, "keysort-failed-parse-char-indexoptionsort-invalid-optionsort-invalid-char-index-zero-startinternal error: entered unreachable code: This should only happen if the field start index is 0, but that should already have caused an error.", 3);
    uucore::mods::locale::get_message(&v35, "sort-help-keyfield-separatorsort-help-separatorzero-terminatedsort-help-zero-terminatedsort-help-parallelNUM_THREADSbuffer-sizesort-help-buf-sizetemporary-directorysort-help-tmp-dirDIRsort-help-compress-progbatch-sizesort-help-batch-sizeN_MERGEfiles0-froms", 13);
    v7.help(&v15, &v35);
    v15.action(&v7, 1);
    v7.num_args(&v15);
    v15.arg(&v29, &v7);
    v29.new("field-separatorsort-help-separatorzero-terminatedsort-help-zero-terminatedsort-help-parallelNUM_THREADSbuffer-sizesort-help-buf-sizetemporary-directorysort-help-tmp-dirDIRsort-help-compress-progbatch-sizesort-help-batch-sizeN_MERGEfiles0-fromsort-help-file", 15);
    v7.short(&v29, 116);
    v29.long(&v7, "field-separatorsort-help-separatorzero-terminatedsort-help-zero-terminatedsort-help-parallelNUM_THREADSbuffer-sizesort-help-buf-sizetemporary-directorysort-help-tmp-dirDIRsort-help-compress-progbatch-sizesort-help-batch-sizeN_MERGEfiles0-fromsort-help-file", 15);
    uucore::mods::locale::get_message(&v35, "sort-help-separatorzero-terminatedsort-help-zero-terminatedsort-help-parallelNUM_THREADSbuffer-sizesort-help-buf-sizetemporary-directorysort-help-tmp-dirDIRsort-help-compress-progbatch-sizesort-help-batch-sizeN_MERGEfiles0-fromsort-help-files0-fromdebugsor", 19);
    v7.help(&v29, &v35);
    v30 = v2;
    memcpy(&v29, &v0, 16);
    v35.value_parser(&v7, &v29);
    v29.arg(&v15, &v35);
    v15.new("zero-terminatedsort-help-zero-terminatedsort-help-parallelNUM_THREADSbuffer-sizesort-help-buf-sizetemporary-directorysort-help-tmp-dirDIRsort-help-compress-progbatch-sizesort-help-batch-sizeN_MERGEfiles0-fromsort-help-files0-fromdebugsort-help-debugfilesso", 15);
    v7.short(&v15, 122);
    v15.long(&v7, "zero-terminatedsort-help-zero-terminatedsort-help-parallelNUM_THREADSbuffer-sizesort-help-buf-sizetemporary-directorysort-help-tmp-dirDIRsort-help-compress-progbatch-sizesort-help-batch-sizeN_MERGEfiles0-fromsort-help-files0-fromdebugsort-help-debugfilesso", 15);
    uucore::mods::locale::get_message(&v35, "sort-help-zero-terminatedsort-help-parallelNUM_THREADSbuffer-sizesort-help-buf-sizetemporary-directorysort-help-tmp-dirDIRsort-help-compress-progbatch-sizesort-help-batch-sizeN_MERGEfiles0-fromsort-help-files0-fromdebugsort-help-debugfilessort-only-one-fil", 25);
    v7.help(&v15, &v35);
    v35.action(&v7, 2);
    v15.arg(&v29, &v35);
    v29.new("parallel", 8);
    v7.long(&v29, "parallel", 8);
    uucore::mods::locale::get_message(&v35, "sort-help-parallelNUM_THREADSbuffer-sizesort-help-buf-sizetemporary-directorysort-help-tmp-dirDIRsort-help-compress-progbatch-sizesort-help-batch-sizeN_MERGEfiles0-fromsort-help-files0-fromdebugsort-help-debugfilessort-only-one-file-allowed-with-cinfnanJAN", 18);
    v29.help(&v7, &v35);
    v7.value_name(&v29, "NUM_THREADSbuffer-sizesort-help-buf-sizetemporary-directorysort-help-tmp-dirDIRsort-help-compress-progbatch-sizesort-help-batch-sizeN_MERGEfiles0-fromsort-help-files0-fromdebugsort-help-debugfilessort-only-one-file-allowed-with-cinfnanJANFEBMARAPRMAYJUNJUL", 11);
    v29.arg(&v15, &v7);
    v15.new("buffer-sizesort-help-buf-sizetemporary-directorysort-help-tmp-dirDIRsort-help-compress-progbatch-sizesort-help-batch-sizeN_MERGEfiles0-fromsort-help-files0-fromdebugsort-help-debugfilessort-only-one-file-allowed-with-cinfnanJANFEBMARAPRMAYJUNJULAUGSEPOCTNO", 11);
    v7.short(&v15, 83);
    v15.long(&v7, "buffer-sizesort-help-buf-sizetemporary-directorysort-help-tmp-dirDIRsort-help-compress-progbatch-sizesort-help-batch-sizeN_MERGEfiles0-fromsort-help-files0-fromdebugsort-help-debugfilessort-only-one-file-allowed-with-cinfnanJANFEBMARAPRMAYJUNJULAUGSEPOCTNO", 11);
    uucore::mods::locale::get_message(&v35, "sort-help-buf-sizetemporary-directorysort-help-tmp-dirDIRsort-help-compress-progbatch-sizesort-help-batch-sizeN_MERGEfiles0-fromsort-help-files0-fromdebugsort-help-debugfilessort-only-one-file-allowed-with-cinfnanJANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDEC", 18);
    v7.help(&v15, &v35);
    v35.value_name(&v7, "SIZETerm", 4);
    v15.arg(&v29, &v35);
    v29.new("temporary-directorysort-help-tmp-dirDIRsort-help-compress-progbatch-sizesort-help-batch-sizeN_MERGEfiles0-fromsort-help-files0-fromdebugsort-help-debugfilessort-only-one-file-allowed-with-cinfnanJANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDEC", 19);
    v7.short(&v29, 84);
    v29.long(&v7, "temporary-directorysort-help-tmp-dirDIRsort-help-compress-progbatch-sizesort-help-batch-sizeN_MERGEfiles0-fromsort-help-files0-fromdebugsort-help-debugfilessort-only-one-file-allowed-with-cinfnanJANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDEC", 19);
    uucore::mods::locale::get_message(&v35, "sort-help-tmp-dirDIRsort-help-compress-progbatch-sizesort-help-batch-sizeN_MERGEfiles0-fromsort-help-files0-fromdebugsort-help-debugfilessort-only-one-file-allowed-with-cinfnanJANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDEC", 17);
    v7.help(&v29, &v35);
    v29.value_name(&v7, "DIRsort-help-compress-progbatch-sizesort-help-batch-sizeN_MERGEfiles0-fromsort-help-files0-fromdebugsort-help-debugfilessort-only-one-file-allowed-with-cinfnanJANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDEC", 3);
    v7.value_hint(&v29, 4);
    v29.arg(&v15, &v7);
    v15.new(&g_4418c0, 16);
    v7.long(&v15, &g_4418c0, 16);
    uucore::mods::locale::get_message(&v35, "sort-help-compress-progbatch-sizesort-help-batch-sizeN_MERGEfiles0-fromsort-help-files0-fromdebugsort-help-debugfilessort-only-one-file-allowed-with-cinfnanJANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDEC", 23);
    v15.help(&v7, &v35);
    v7.value_name(&v15, "PROGSomedumb", 4);
    v35.value_hint(&v7, 6);
    v15.arg(&v29, &v35);
    v29.new("batch-sizesort-help-batch-sizeN_MERGEfiles0-fromsort-help-files0-fromdebugsort-help-debugfilessort-only-one-file-allowed-with-cinfnanJANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDEC", 10);
    v7.long(&v29, "batch-sizesort-help-batch-sizeN_MERGEfiles0-fromsort-help-files0-fromdebugsort-help-debugfilessort-only-one-file-allowed-with-cinfnanJANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDEC", 10);
    uucore::mods::locale::get_message(&v35, "sort-help-batch-sizeN_MERGEfiles0-fromsort-help-files0-fromdebugsort-help-debugfilessort-only-one-file-allowed-with-cinfnanJANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDEC", 20);
    v29.help(&v7, &v35);
    v7.value_name(&v29, "N_MERGEfiles0-fromsort-help-files0-fromdebugsort-help-debugfilessort-only-one-file-allowed-with-cinfnanJANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDEC", 7);
    v29.arg(&v15, &v7);
    v15.new("files0-fromsort-help-files0-fromdebugsort-help-debugfilessort-only-one-file-allowed-with-cinfnanJANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDEC", 11);
    v7.long(&v15, "files0-fromsort-help-files0-fromdebugsort-help-debugfilessort-only-one-file-allowed-with-cinfnanJANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDEC", 11);
    uucore::mods::locale::get_message(&v35, "sort-help-files0-fromdebugsort-help-debugfilessort-only-one-file-allowed-with-cinfnanJANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDEC", 21);
    v15.help(&v7, &v35);
    v7.value_name(&v15, "NUL_FILE", 8);
    v37 = v2;
    memcpy(&v35, &v0, 16);
    v15.value_parser(&v7, &v35);
    v7.value_hint(&v15, 3);
    v15.arg(&v29, &v7);
    v29.new("debugsort-help-debugfilessort-only-one-file-allowed-with-cinfnanJANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDEC", 5);
    v7.long(&v29, "debugsort-help-debugfilessort-only-one-file-allowed-with-cinfnanJANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDEC", 5);
    uucore::mods::locale::get_message(&v35, "sort-help-debugfilessort-only-one-file-allowed-with-cinfnanJANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDEC", 15);
    v29.help(&v7, &v35);
    v7.action(&v29, 2);
    v29.arg(&v15, &v7);
    v15.new("filessort-only-one-file-allowed-with-cinfnanJANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDEC", 5);
    v7.action(&v15, 1);
    v15.value_parser(&v7, &v0);
    v7.value_hint(&v15, 3);
    v3.arg(&v29, &v7);
    ::0x5069e0::core::ptr::drop_in_place<alloc::string::String>(&v4);
    return a0;
}
