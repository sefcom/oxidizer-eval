long long uu_df::uu_app(unsigned long a0)
{
    unsigned long long v0;  // [bp-0xae0]
    unsigned long long v1;  // [bp-0xad8]
    char v2;  // [bp-0xac0]
    unsigned int v3;  // [bp-0x848]
    unsigned int v4;  // [bp-0x844]
    char v5;  // [bp-0x840]
    unsigned int v6;  // [bp-0x5c8]
    char v7;  // [bp-0x5c4]
    unsigned long v8;  // [bp-0x584]
    unsigned int v9;  // [bp-0x57c]
    unsigned long long v10;  // [bp-0x578]
    unsigned long long v11;  // [bp-0x570]
    unsigned long long v12;  // [bp-0x568]
    unsigned long long v13;  // [bp-0x560]
    unsigned long long v14;  // [bp-0x558]
    unsigned long long v15;  // [bp-0x550]
    unsigned long long v16;  // [bp-0x548]
    unsigned long long v17;  // [bp-0x540]
    unsigned long long v18;  // [bp-0x538]
    unsigned long long v19;  // [bp-0x530]
    unsigned long long v20;  // [bp-0x528]
    unsigned long long v21;  // [bp-0x520]
    char v22;  // [bp-0x2f8]
    unsigned long long v23;  // [bp-0x3c]
    unsigned int v24;  // [bp-0x34]
    unsigned long long v27;  // rdx

    v5.new(uucore::util_name(), v27);
    v22.version(&v5);
    v5.about(&v22);
    uucore::format_usage(&v2, "{} [OPTION]... [FILE]...Display values are in units of the first available SIZE from --block-size,\nand the DF_BLOCK_SIZE, BLOCK_SIZE and BLOCKSIZE environment variables.\nOtherwise, units default to 1024 bytes (or 512 if POSIXLY_CORRECT is set).\n\nSIZE is an", 24);
    v22.override_usage(&v5, &v2);
    v5.after_help(&v22);
    memcpy(&v22, &v5, 700);
    v23 = 2252349570023552 | v8;
    v24 = v9;
    v5.new("helpnoneUse%Noneshim", 4);
    v2.long(&v5, "helpnoneUse%Noneshim", 4);
    v5.help(&v2, "Print help information.include dummy file systemsblock-sizescale sizes by SIZE before printing them; e.g.'-BM' prints sizes in units of 1,048,576 bytesproduce a grand totalhuman-readableprint sizes in human readable format (e.g., 1K 234M 2G)silikewise, but", 23);
    v2.action(&v5, 5);
    v5.arg(&v22, &v2);
    v22.new("allblocksizehuman-readable-binaryhuman-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs", 3);
    v2.short(&v22, 97);
    v22.long(&v2, "allblocksizehuman-readable-binaryhuman-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs", 3);
    v2.overrides_with(&v22, "allblocksizehuman-readable-binaryhuman-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs", 3);
    v22.help(&v2, "include dummy file systemsblock-sizescale sizes by SIZE before printing them; e.g.'-BM' prints sizes in units of 1,048,576 bytesproduce a grand totalhuman-readableprint sizes in human readable format (e.g., 1K 234M 2G)silikewise, but use powers of 1000 not", 26);
    v2.action(&v22, 2);
    v22.arg(&v5, &v2);
    v5.new("blocksizehuman-readable-binaryhuman-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs", 9);
    v2.short(&v5, 66);
    v5.long(&v2, "block-sizescale sizes by SIZE before printing them; e.g.'-BM' prints sizes in units of 1,048,576 bytesproduce a grand totalhuman-readableprint sizes in human readable format (e.g., 1K 234M 2G)silikewise, but use powers of 1000 not 1024list inode informatio", 10);
    v2.value_name(&v5, "SIZE) = Zero", 4);
    v10 = "kilobindmainchar";
    v11 = 4;
    v12 = "blocksizehuman-readable-binaryhuman-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs";
    v13 = 9;
    v5.overrides_with_all(&v2, &v10);
    v2.help(&v5, "scale sizes by SIZE before printing them; e.g.'-BM' prints sizes in units of 1,048,576 bytesproduce a grand totalhuman-readableprint sizes in human readable format (e.g., 1K 234M 2G)silikewise, but use powers of 1000 not 1024list inode information instead ", 92);
    v5.arg(&v22, &v2);
    v22.new("total%", 5);
    v2.long(&v22, "total%", 5);
    v22.overrides_with(&v2, "total%", 5);
    v2.help(&v22, "produce a grand totalhuman-readableprint sizes in human readable format (e.g., 1K 234M 2G)silikewise, but use powers of 1000 not 1024list inode information instead of block usagelike --block-size=1Klimit listing to local file systemsdo not invoke sync befo", 21);
    v10.action(&v2, 2);
    v22.arg(&v5, &v10);
    v5.new("human-readable-binaryhuman-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs", 21);
    v2.short(&v5, 104);
    v5.long(&v2, "human-readableprint sizes in human readable format (e.g., 1K 234M 2G)silikewise, but use powers of 1000 not 1024list inode information instead of block usagelike --block-size=1Klimit listing to local file systemsdo not invoke sync before getting usage info", 14);
    v10 = "human-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs";
    v11 = 22;
    v12 = "human-readable-binaryhuman-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs";
    v13 = 21;
    v2.overrides_with_all(&v5, &v10);
    v5.help(&v2, "print sizes in human readable format (e.g., 1K 234M 2G)silikewise, but use powers of 1000 not 1024list inode information instead of block usagelike --block-size=1Klimit listing to local file systemsdo not invoke sync before getting usage info (default)FIEL", 55);
    v2.action(&v5, 2);
    v5.arg(&v22, &v2);
    v22.new("human-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs", 22);
    v2.short(&v22, 72);
    v22.long(&v2, "silikewise, but use powers of 1000 not 1024list inode information instead of block usagelike --block-size=1Klimit listing to local file systemsdo not invoke sync before getting usage info (default)FIELD_LISTuse the output format defined by FIELD_LIST, or p", 2);
    v10 = "human-readable-binaryhuman-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs";
    v11 = 21;
    v12 = "human-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs";
    v13 = 22;
    v2.overrides_with_all(&v22, &v10);
    v22.help(&v2, "likewise, but use powers of 1000 not 1024list inode information instead of block usagelike --block-size=1Klimit listing to local file systemsdo not invoke sync before getting usage info (default)FIELD_LISTuse the output format defined by FIELD_LIST, or pri", 41);
    v2.action(&v22, 2);
    v22.arg(&v5, &v2);
    v5.new("inodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs", 6);
    v2.short(&v5, 105);
    v5.long(&v2, "inodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs", 6);
    v2.overrides_with(&v5, "inodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs", 6);
    v5.help(&v2, "list inode information instead of block usagelike --block-size=1Klimit listing to local file systemsdo not invoke sync before getting usage info (default)FIELD_LISTuse the output format defined by FIELD_LIST, or print all fields if FIELD_LIST is omitted.us", 45);
    v2.action(&v5, 2);
    v5.arg(&v22, &v2);
    v22.new("kilobindmainchar", 4);
    v2.short(&v22, 107);
    v22.help(&v2, "like --block-size=1Klimit listing to local file systemsdo not invoke sync before getting usage info (default)FIELD_LISTuse the output format defined by FIELD_LIST, or print all fields if FIELD_LIST is omitted.use the POSIX output formatinvoke sync before g", 20);
    v10 = "blocksizehuman-readable-binaryhuman-readable-decimalinodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs";
    v11 = 9;
    v12 = "kilobindmainchar";
    v13 = 4;
    v2.overrides_with_all(&v22, &v10);
    v10.action(&v2, 2);
    v22.arg(&v5, &v10);
    v5.new("localno-syncoutputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs", 5);
    v2.short(&v5, 108);
    v5.long(&v2, "localno-syncoutputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs", 5);
    v2.overrides_with(&v5, "localno-syncoutputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs", 5);
    v5.help(&v2, "limit listing to local file systemsdo not invoke sync before getting usage info (default)FIELD_LISTuse the output format defined by FIELD_LIST, or print all fields if FIELD_LIST is omitted.use the POSIX output formatinvoke sync before getting usage info (n", 35);
    v2.action(&v5, 2);
    v5.arg(&v22, &v2);
    v22.new("no-syncoutputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs", 7);
    v2.long(&v22, "no-syncoutputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs", 7);
    v10 = "synctypeCyan    TYPE\"`$\\EADVlofs";
    v11 = 4;
    v12 = "no-syncoutputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs";
    v13 = 7;
    v22.overrides_with_all(&v2, &v10);
    v2.help(&v22, "do not invoke sync before getting usage info (default)FIELD_LISTuse the output format defined by FIELD_LIST, or print all fields if FIELD_LIST is omitted.use the POSIX output formatinvoke sync before getting usage info (non-windows only)limit listing to fi", 54);
    v10.action(&v2, 2);
    v22.arg(&v5, &v10);
    v5.new("outputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs", 6);
    v2.long(&v5, "outputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs", 6);
    v5.value_name(&v2, "FIELD_LISTuse the output format defined by FIELD_LIST, or print all fields if FIELD_LIST is omitted.use the POSIX output formatinvoke sync before getting usage info (non-windows only)limit listing to file systems of type TYPEprint file system typelimit listing to file systems not of type TYPE--block-size argument '' too largeinvalid --block-size argument invalid suffix in --block-size argument option --output: field  used more than once: file system type  both selected and excluded", 10);
    v2.action(&v5, 1);
    v5.num_args(&v2);
    memcpy(&v2, &v5, 632);
    v3 = 128 | v6;
    v4 = *((int *)&v7);
    v5.use_value_delimiter(&v2, 1);
    v2.value_parser(&v5, &_ZN5uu_df17OUTPUT_FIELD_LIST17hdf9a91c365a9b214E);
    v5.default_missing_values_os(&v2, &_ZN5uu_df17OUTPUT_FIELD_LIST17hdf9a91c365a9b214E);
    v10 = "sourcefstypeitotaliusediavailipcentavailpcenttarget-total%";
    v11 = 6;
    v12 = "sizefilei128 as dyn usedTypeERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGESTRPIPENotFoundTimedOutENETDOWN\n       ";
    v13 = 4;
    v14 = "usedTypeERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGESTRPIPENotFoundTimedOutENETDOWN\n       ";
    v15 = 4;
    v16 = "availpcenttarget-total%";
    v17 = 5;
    v18 = "pcenttarget-total%";
    v19 = 5;
    v20 = "target-total%";
    v21 = 6;
    v2.default_values(&v5, &v10);
    v10 = "inodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs";
    v11 = 6;
    v12 = "portabilityprint-typeexclude-typesrc/uu/df/src/df.rs";
    v13 = 11;
    v14 = "print-typeexclude-typesrc/uu/df/src/df.rs";
    v15 = 10;
    v5.conflicts_with_all(&v2, &v10);
    v2.help(&v5, "use the output format defined by FIELD_LIST, or print all fields if FIELD_LIST is omitted.use the POSIX output formatinvoke sync before getting usage info (non-windows only)limit listing to file systems of type TYPEprint file system typelimit listing to file systems not of type TYPE--block-size argument '' too largeinvalid --block-size argument invalid suffix in --block-size argument option --output: field  used more than once: file system type  both selected and excluded", 90);
    v5.arg(&v22, &v2);
    v22.new("portabilityprint-typeexclude-typesrc/uu/df/src/df.rs", 11);
    v2.short(&v22, 80);
    v22.long(&v2, "portabilityprint-typeexclude-typesrc/uu/df/src/df.rs", 11);
    v2.overrides_with(&v22, "portabilityprint-typeexclude-typesrc/uu/df/src/df.rs", 11);
    v22.help(&v2, "use the POSIX output formatinvoke sync before getting usage info (non-windows only)limit listing to file systems of type TYPEprint file system typelimit listing to file systems not of type TYPE--block-size argument '' too largeinvalid --block-size argument invalid suffix in --block-size argument option --output: field  used more than once: file system type  both selected and excluded", 27);
    v2.action(&v22, 2);
    v22.arg(&v5, &v2);
    v5.new("synctypeCyan    TYPE\"`$\\EADVlofs", 4);
    v2.long(&v5, "synctypeCyan    TYPE\"`$\\EADVlofs", 4);
    v10 = "no-syncoutputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs";
    v11 = 7;
    v12 = "synctypeCyan    TYPE\"`$\\EADVlofs";
    v13 = 4;
    v5.overrides_with_all(&v2, &v10);
    v2.help(&v5, "invoke sync before getting usage info (non-windows only)limit listing to file systems of type TYPEprint file system typelimit listing to file systems not of type TYPE--block-size argument '' too largeinvalid --block-size argument invalid suffix in --block-size argument option --output: field  used more than once: file system type  both selected and excluded", 56);
    v10.action(&v2, 2);
    v5.arg(&v22, &v10);
    v22.new("typeCyan    TYPE\"`$\\EADVlofs", 4);
    v2.short(&v22, 116);
    v22.long(&v2, "typeCyan    TYPE\"`$\\EADVlofs", 4);
    v1 = 2;
    v2.value_parser(&v22, &v1);
    v22.value_name(&v2, "TYPE\"`$\\EADVlofs", 4);
    v2.action(&v22, 1);
    v10.help(&v2, "limit listing to file systems of type TYPEprint file system typelimit listing to file systems not of type TYPE--block-size argument '' too largeinvalid --block-size argument invalid suffix in --block-size argument option --output: field  used more than once: file system type  both selected and excluded", 42);
    v22.arg(&v5, &v10);
    v5.new("print-typeexclude-typesrc/uu/df/src/df.rs", 10);
    v2.short(&v5, 84);
    v5.long(&v2, "print-typeexclude-typesrc/uu/df/src/df.rs", 10);
    v2.overrides_with(&v5, "print-typeexclude-typesrc/uu/df/src/df.rs", 10);
    v5.help(&v2, "print file system typelimit listing to file systems not of type TYPE--block-size argument '' too largeinvalid --block-size argument invalid suffix in --block-size argument option --output: field  used more than once: file system type  both selected and excluded", 22);
    v2.action(&v5, 2);
    v5.arg(&v22, &v2);
    v22.new("exclude-typesrc/uu/df/src/df.rs", 12);
    v2.short(&v22, 120);
    v22.long(&v2, "exclude-typesrc/uu/df/src/df.rs", 12);
    v2.action(&v22, 1);
    v22.value_parser(&v2, &v1);
    v2.value_name(&v22, "TYPE\"`$\\EADVlofs", 4);
    v22.use_value_delimiter(&v2, 1);
    v2.help(&v22, "limit listing to file systems not of type TYPE--block-size argument '' too largeinvalid --block-size argument invalid suffix in --block-size argument option --output: field  used more than once: file system type  both selected and excluded", 46);
    v22.arg(&v5, &v2);
    v5.new("pathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs", 5);
    v2.action(&v5, 1);
    v5.value_hint(&v2);
    v0.arg(&v22, &v5);
    return a0;
}
