long long uu_df::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xae8]
    unsigned long long v1;  // [bp-0xae0]
    unsigned long long v2;  // [bp-0xad8]
    unsigned long long v3;  // [bp-0xad0]
    unsigned long long v4;  // [bp-0xac8]
    unsigned long long v5;  // [bp-0xac0]
    char v6;  // [bp-0xab8]
    unsigned int v7;  // [bp-0x840]
    unsigned int v8;  // [bp-0x83c]
    char v9;  // [bp-0x838], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x830]
    unsigned long long v11;  // [bp-0x828]
    unsigned long long v12;  // [bp-0x820]
    unsigned long long v13;  // [bp-0x818]
    unsigned long long v14;  // [bp-0x810]
    unsigned long long v15;  // [bp-0x808]
    unsigned long long v16;  // [bp-0x800]
    unsigned long long v17;  // [bp-0x7f8]
    unsigned long long v18;  // [bp-0x7f0]
    unsigned long long v19;  // [bp-0x7e8]
    unsigned long long v20;  // [bp-0x7e0]
    char v21;  // [bp-0x5b8]
    unsigned int v22;  // [bp-0x340]
    char v23;  // [bp-0x33c]
    unsigned long v24;  // [bp-0x2fc]
    unsigned int v25;  // [bp-0x2f4]
    char v26;  // [bp-0x2f0]
    unsigned long long v27;  // [bp-0x34]
    unsigned int v28;  // [bp-0x2c]
    unsigned long long v31;  // rdx

    v21.new(uucore::util_name(), v31);
    v26.version(&v21, "(uutils coreutils) 0.1.0df-after-helpdf-help-print-helpdf-help-allblock-sizedf-help-block-sizedf-help-totalhuman-readabledf-help-human-readablesidf-help-sidf-help-inodesdf-help-kilodf-help-localdf-help-no-syncFIELD_LISTdf-help-outputdf-help-portabilitydf-h", 24);
    uucore::mods::locale::get_message(&v6, "df-about", 8);
    v21.about(&v26, &v6);
    uucore::mods::locale::get_message(&v0, "df-usage'; only all-args", 8);
    uucore::format_usage(&v6, v1, v2);
    v26.override_usage(&v21, &v6);
    uucore::mods::locale::get_message(&v6, "df-after-helpdf-help-print-helpdf-help-allblock-sizedf-help-block-sizedf-help-totalhuman-readabledf-help-human-readablesidf-help-sidf-help-inodesdf-help-kilodf-help-localdf-help-no-syncFIELD_LISTdf-help-outputdf-help-portabilitydf-help-syncdf-help-typedf-h", 13);
    v21.after_help(&v26, &v6);
    memcpy(&v26, &v21, 700);
    v27 = 2252349570023552 | v24;
    v28 = v25;
    v21.new("helpnoneNoneshimname", 4);
    v6.long(&v21, "helpnoneNoneshimname", 4);
    uucore::mods::locale::get_message(&v9, "df-help-print-helpdf-help-allblock-sizedf-help-block-sizedf-help-totalhuman-readabledf-help-human-readablesidf-help-sidf-help-inodesdf-help-kilodf-help-localdf-help-no-syncFIELD_LISTdf-help-outputdf-help-portabilitydf-help-syncdf-help-typedf-help-print-typ", 18);
    v21.help(&v6, &v9);
    v6.action(&v21, 5);
    v21.arg(&v26, &v6);
    v26.new("allblocksizetotalhuman-readable-binaryhuman-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 3);
    v6.short(&v26, 97);
    v26.long(&v6, "allblocksizetotalhuman-readable-binaryhuman-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 3);
    v6.overrides_with(&v26, "allblocksizetotalhuman-readable-binaryhuman-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 3);
    uucore::mods::locale::get_message(&v9, "df-help-allblock-sizedf-help-block-sizedf-help-totalhuman-readabledf-help-human-readablesidf-help-sidf-help-inodesdf-help-kilodf-help-localdf-help-no-syncFIELD_LISTdf-help-outputdf-help-portabilitydf-help-syncdf-help-typedf-help-print-typedf-help-exclude-t", 11);
    v26.help(&v6, &v9);
    v6.action(&v26, 2);
    v26.arg(&v21, &v6);
    v21.new("blocksizetotalhuman-readable-binaryhuman-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 9);
    v6.short(&v21, 66);
    v21.long(&v6, "block-sizedf-help-block-sizedf-help-totalhuman-readabledf-help-human-readablesidf-help-sidf-help-inodesdf-help-kilodf-help-localdf-help-no-syncFIELD_LISTdf-help-outputdf-help-portabilitydf-help-syncdf-help-typedf-help-print-typedf-help-exclude-typefield\n: ", 10);
    v6.value_name(&v21, "SIZETerm) = manyZero", 4);
    v9 = "kilobind.ftlmainchar";
    v10 = 4;
    v11 = "blocksizetotalhuman-readable-binaryhuman-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs";
    v12 = 9;
    v21.overrides_with_all(&v6, &v9);
    uucore::mods::locale::get_message(&v9, "df-help-block-sizedf-help-totalhuman-readabledf-help-human-readablesidf-help-sidf-help-inodesdf-help-kilodf-help-localdf-help-no-syncFIELD_LISTdf-help-outputdf-help-portabilitydf-help-syncdf-help-typedf-help-print-typedf-help-exclude-typefield\n: ", 18);
    v6.help(&v21, &v9);
    v21.arg(&v26, &v6);
    v26.new("totalhuman-readable-binaryhuman-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 5);
    v6.long(&v26, "totalhuman-readable-binaryhuman-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 5);
    v26.overrides_with(&v6, "totalhuman-readable-binaryhuman-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 5);
    uucore::mods::locale::get_message(&v9, "df-help-totalhuman-readabledf-help-human-readablesidf-help-sidf-help-inodesdf-help-kilodf-help-localdf-help-no-syncFIELD_LISTdf-help-outputdf-help-portabilitydf-help-syncdf-help-typedf-help-print-typedf-help-exclude-typefield\n: ", 13);
    v6.help(&v26, &v9);
    v9.action(&v6, 2);
    v26.arg(&v21, &v9);
    v21.new("human-readable-binaryhuman-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 21);
    v6.short(&v21, 104);
    v21.long(&v6, "human-readabledf-help-human-readablesidf-help-sidf-help-inodesdf-help-kilodf-help-localdf-help-no-syncFIELD_LISTdf-help-outputdf-help-portabilitydf-help-syncdf-help-typedf-help-print-typedf-help-exclude-typefield\n: ", 14);
    v9 = "human-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs";
    v10 = 22;
    v11 = "human-readable-binaryhuman-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs";
    v12 = 21;
    v6.overrides_with_all(&v21, &v9);
    uucore::mods::locale::get_message(&v9, "df-help-human-readablesidf-help-sidf-help-inodesdf-help-kilodf-help-localdf-help-no-syncFIELD_LISTdf-help-outputdf-help-portabilitydf-help-syncdf-help-typedf-help-print-typedf-help-exclude-typefield\n: ", 22);
    v21.help(&v6, &v9);
    v6.action(&v21, 2);
    v21.arg(&v26, &v6);
    v26.new("human-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 22);
    v6.short(&v26, 72);
    v26.long(&v6, "sidf-help-sidf-help-inodesdf-help-kilodf-help-localdf-help-no-syncFIELD_LISTdf-help-outputdf-help-portabilitydf-help-syncdf-help-typedf-help-print-typedf-help-exclude-typefield\n: ", 2);
    v9 = "human-readable-binaryhuman-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs";
    v10 = 21;
    v11 = "human-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs";
    v12 = 22;
    v6.overrides_with_all(&v26, &v9);
    uucore::mods::locale::get_message(&v9, "df-help-sidf-help-inodesdf-help-kilodf-help-localdf-help-no-syncFIELD_LISTdf-help-outputdf-help-portabilitydf-help-syncdf-help-typedf-help-print-typedf-help-exclude-typefield\n: ", 10);
    v26.help(&v6, &v9);
    v6.action(&v26, 2);
    v26.arg(&v21, &v6);
    v21.new("inodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 6);
    v6.short(&v21, 105);
    v21.long(&v6, "inodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 6);
    v6.overrides_with(&v21, "inodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 6);
    uucore::mods::locale::get_message(&v9, "df-help-inodesdf-help-kilodf-help-localdf-help-no-syncFIELD_LISTdf-help-outputdf-help-portabilitydf-help-syncdf-help-typedf-help-print-typedf-help-exclude-typefield\n: ", 14);
    v21.help(&v6, &v9);
    v6.action(&v21, 2);
    v21.arg(&v26, &v6);
    v26.new("kilobind.ftlmainchar", 4);
    v6.short(&v26, 107);
    uucore::mods::locale::get_message(&v9, "df-help-kilodf-help-localdf-help-no-syncFIELD_LISTdf-help-outputdf-help-portabilitydf-help-syncdf-help-typedf-help-print-typedf-help-exclude-typefield\n: ", 12);
    v26.help(&v6, &v9);
    v9 = "blocksizetotalhuman-readable-binaryhuman-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs";
    v10 = 9;
    v11 = "kilobind.ftlmainchar";
    v12 = 4;
    v6.overrides_with_all(&v26, &v9);
    v9.action(&v6, 2);
    v26.arg(&v21, &v9);
    v21.new("localno-syncoutputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 5);
    v6.short(&v21, 108);
    v21.long(&v6, "localno-syncoutputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 5);
    v6.overrides_with(&v21, "localno-syncoutputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 5);
    uucore::mods::locale::get_message(&v9, "df-help-localdf-help-no-syncFIELD_LISTdf-help-outputdf-help-portabilitydf-help-syncdf-help-typedf-help-print-typedf-help-exclude-typefield\n: ", 13);
    v21.help(&v6, &v9);
    v6.action(&v21, 2);
    v21.arg(&v26, &v6);
    v26.new("no-syncoutputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 7);
    v6.long(&v26, "no-syncoutputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 7);
    v9 = "synctypeCyan    TYPE\"`$\\EADVlofs";
    v10 = 4;
    v11 = "no-syncoutputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs";
    v12 = 7;
    v26.overrides_with_all(&v6, &v9);
    uucore::mods::locale::get_message(&v9, "df-help-no-syncFIELD_LISTdf-help-outputdf-help-portabilitydf-help-syncdf-help-typedf-help-print-typedf-help-exclude-typefield\n: ", 15);
    v6.help(&v26, &v9);
    v9.action(&v6, 2);
    v26.arg(&v21, &v9);
    v21.new("outputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 6);
    v6.long(&v21, "outputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 6);
    v21.value_name(&v6, "FIELD_LISTdf-help-outputdf-help-portabilitydf-help-syncdf-help-typedf-help-print-typedf-help-exclude-typefield\n: ", 10);
    v6.action(&v21, 1);
    v21.num_args(&v6);
    memcpy(&v6, &v21, 632);
    v7 = 128 | v22;
    v8 = *((int *)&v23);
    v21.use_value_delimiter(&v6, 1);
    memcpy(&v9, &_ZN5uu_df17OUTPUT_FIELD_LIST17h387a455dca031624E, 192);
    v6.value_parser(&v21, &v9);
    v21.default_missing_values_os(&v6, &_ZN5uu_df17OUTPUT_FIELD_LIST17h387a455dca031624E);
    v9 = "sourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs";
    v10 = 6;
    v11 = "sizefilei128";
    v12 = 4;
    v13 = "usedERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG";
    v14 = 4;
    v15 = "availpcenttargetsrc/uu/df/src/df.rs";
    v16 = 5;
    v17 = "pcenttargetsrc/uu/df/src/df.rs";
    v18 = 5;
    v19 = "targetsrc/uu/df/src/df.rs";
    v20 = 6;
    v6.default_values(&v21, &v9);
    v9 = "inodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs";
    v10 = 6;
    v11 = "portabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs";
    v12 = 11;
    v13 = "print-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs";
    v14 = 10;
    v21.conflicts_with_all(&v6, &v9);
    uucore::mods::locale::get_message(&v9, "df-help-outputdf-help-portabilitydf-help-syncdf-help-typedf-help-print-typedf-help-exclude-typefield\n: ", 14);
    v6.help(&v21, &v9);
    v21.arg(&v26, &v6);
    v26.new("portabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 11);
    v6.short(&v26, 80);
    v26.long(&v6, "portabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 11);
    v6.overrides_with(&v26, "portabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 11);
    uucore::mods::locale::get_message(&v9, "df-help-portabilitydf-help-syncdf-help-typedf-help-print-typedf-help-exclude-typefield\n: ", 19);
    v26.help(&v6, &v9);
    v6.action(&v26, 2);
    v26.arg(&v21, &v6);
    v21.new("synctypeCyan    TYPE\"`$\\EADVlofs", 4);
    v6.long(&v21, "synctypeCyan    TYPE\"`$\\EADVlofs", 4);
    v9 = "no-syncoutputpathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs";
    v10 = 7;
    v11 = "synctypeCyan    TYPE\"`$\\EADVlofs";
    v12 = 4;
    v21.overrides_with_all(&v6, &v9);
    uucore::mods::locale::get_message(&v9, "df-help-syncdf-help-typedf-help-print-typedf-help-exclude-typefield\n: ", 12);
    v6.help(&v21, &v9);
    v9.action(&v6, 2);
    v21.arg(&v26, &v9);
    v26.new("typeCyan    TYPE\"`$\\EADVlofs", 4);
    v6.short(&v26, 116);
    v26.long(&v6, "typeCyan    TYPE\"`$\\EADVlofs", 4);
    v3 = 2;
    v11 = v5;
    v9 = v3;
    v10 = v4;
    v6.value_parser(&v26, &v9);
    v26.value_name(&v6, "TYPE\"`$\\EADVlofs", 4);
    v6.action(&v26, 1);
    uucore::mods::locale::get_message(&v26, "df-help-typedf-help-print-typedf-help-exclude-typefield\n: ", 12);
    v9.help(&v6, &v26);
    v26.arg(&v21, &v9);
    v21.new("print-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 10);
    v6.short(&v21, 84);
    v21.long(&v6, "print-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 10);
    v6.overrides_with(&v21, "print-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 10);
    uucore::mods::locale::get_message(&v9, "df-help-print-typedf-help-exclude-typefield\n: ", 18);
    v21.help(&v6, &v9);
    v6.action(&v21, 2);
    v21.arg(&v26, &v6);
    v26.new("exclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 12);
    v6.short(&v26, 120);
    v26.long(&v6, "exclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 12);
    v6.action(&v26, 1);
    v26.value_parser(&v6, &v3);
    v6.value_name(&v26, "TYPE\"`$\\EADVlofs", 4);
    v26.use_value_delimiter(&v6, 1);
    uucore::mods::locale::get_message(&v9, "df-help-exclude-typefield\n: ", 20);
    v6.help(&v26, &v9);
    v26.arg(&v21, &v6);
    v21.new("pathsportabilityprint-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttargetsrc/uu/df/src/df.rs", 5);
    v6.action(&v21, 1);
    v21.value_hint(&v6, 2);
    a0.arg(&v26, &v21);
    ::0x4b2530::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
