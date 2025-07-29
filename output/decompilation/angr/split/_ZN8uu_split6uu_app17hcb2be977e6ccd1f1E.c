long long uu_split::uu_app(unsigned long long a0)
{
    void* v0;  // [bp-0xaf8]
    unsigned long long v1;  // [bp-0xaf0]
    char v2;  // [bp-0xae8]
    char v3;  // [bp-0xae0]
    unsigned long long v4;  // [bp-0xad8]
    unsigned long long v5;  // [bp-0xad0]
    char v6;  // [bp-0xac8]
    unsigned int v7;  // [bp-0x850]
    unsigned int v8;  // [bp-0x84c]
    char v9;  // [bp-0x848]
    unsigned int v10;  // [bp-0x5d0]
    unsigned int v11;  // [bp-0x5cc]
    unsigned long v12;  // [bp-0x58c]
    unsigned int v13;  // [bp-0x584]
    char v14;  // [bp-0x580]
    unsigned int v15;  // [bp-0x308]
    unsigned int v16;  // [bp-0x304]
    unsigned long long v17;  // [bp-0x2c4]
    unsigned int v18;  // [bp-0x2bc]
    char v19;  // [bp-0x2b8], Other Possible Types: unsigned long long
    unsigned long long v20;  // [bp-0x2b0]
    unsigned long long v21;  // [bp-0x2a8]
    unsigned long long v22;  // [bp-0x2a0]
    unsigned long long v23;  // [bp-0x298]
    unsigned long long v24;  // [bp-0x290]
    unsigned long long v25;  // [bp-0x288]
    unsigned long long v26;  // [bp-0x280]
    unsigned long long v29;  // rdx

    v9.new(uucore::util_name(), v29);
    v14.version(&v9, "(uutils coreutils) 0.1.0split-aboutsplit-usagesplit-help-line-bytesNUMBERCHUNKSsplit-help-numberSUFFIXsplit-help-additional-suffixCOMMANDsplit-help-filtersplit-help-elide-empty-filessplit-help-numeric-suffixes-shortsplit-help-numeric-suffixessplit-help-hex", 24);
    uucore::mods::locale::get_message(&v6, "split-aboutsplit-usagesplit-help-line-bytesNUMBERCHUNKSsplit-help-numberSUFFIXsplit-help-additional-suffixCOMMANDsplit-help-filtersplit-help-elide-empty-filessplit-help-numeric-suffixes-shortsplit-help-numeric-suffixessplit-help-hex-suffixes-shortsplit-hel", 11);
    v9.about(&v14, &v6);
    uucore::mods::locale::get_message(&v6, "split-after-help", 16);
    v14.after_help(&v9, &v6);
    uucore::mods::locale::get_message(&v3, "split-usagesplit-help-line-bytesNUMBERCHUNKSsplit-help-numberSUFFIXsplit-help-additional-suffixCOMMANDsplit-help-filtersplit-help-elide-empty-filessplit-help-numeric-suffixes-shortsplit-help-numeric-suffixessplit-help-hex-suffixes-shortsplit-help-hex-suffi", 11);
    uucore::format_usage(&v6, v4, v5);
    v9.override_usage(&v14, &v6);
    memcpy(&v14, &v9, 700);
    v17 = 549755814016 | v12;
    v18 = v13;
    v9.new("bytesline-byteslinesadditional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 5);
    v6.short(&v9, 98);
    v9.long(&v6, "bytesline-byteslinesadditional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 5);
    memcpy(&v6, &v9, 632);
    v7 = v10 | 32;
    v8 = v11;
    v9.value_name(&v6, "SIZETerm) = manyZero", 4);
    uucore::mods::locale::get_message(&v19, "split-help-bytesthe subcommand 'invalid filenameArgumentConflict", 16);
    v6.help(&v9, &v19);
    v9.arg(&v14, &v6);
    v14.new("line-byteslinesadditional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 10);
    v6.short(&v14, 67);
    v14.long(&v6, "line-byteslinesadditional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 10);
    memcpy(&v6, &v14, 632);
    v7 = v15 | 32;
    v8 = v16;
    v14.value_name(&v6, "SIZETerm) = manyZero", 4);
    uucore::mods::locale::get_message(&v19, "split-help-line-bytesNUMBERCHUNKSsplit-help-numberSUFFIXsplit-help-additional-suffixCOMMANDsplit-help-filtersplit-help-elide-empty-filessplit-help-numeric-suffixes-shortsplit-help-numeric-suffixessplit-help-hex-suffixes-shortsplit-help-hex-suffixesNsplit-h", 21);
    v6.help(&v14, &v19);
    v14.arg(&v9, &v6);
    v9.new("linesadditional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 5);
    v6.short(&v9, 108);
    v9.long(&v6, "linesadditional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 5);
    memcpy(&v6, &v9, 632);
    v7 = v10 | 32;
    v8 = v11;
    v9.value_name(&v6, "NUMBERCHUNKSsplit-help-numberSUFFIXsplit-help-additional-suffixCOMMANDsplit-help-filtersplit-help-elide-empty-filessplit-help-numeric-suffixes-shortsplit-help-numeric-suffixessplit-help-hex-suffixes-shortsplit-help-hex-suffixesNsplit-help-suffix-lengthspli", 6);
    v6.default_value(&v9, "1000", 4);
    uucore::mods::locale::get_message(&v9, "split-help-lines", 16);
    v19.help(&v6, &v9);
    v9.arg(&v14, &v19);
    v14.new("number-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 6);
    v6.short(&v14, 110);
    v14.long(&v6, "number-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 6);
    memcpy(&v6, &v14, 632);
    v7 = v15 | 32;
    v8 = v16;
    v14.value_name(&v6, "CHUNKSsplit-help-numberSUFFIXsplit-help-additional-suffixCOMMANDsplit-help-filtersplit-help-elide-empty-filessplit-help-numeric-suffixes-shortsplit-help-numeric-suffixessplit-help-hex-suffixes-shortsplit-help-hex-suffixesNsplit-help-suffix-lengthsplit-help", 6);
    uucore::mods::locale::get_message(&v19, "split-help-numberSUFFIXsplit-help-additional-suffixCOMMANDsplit-help-filtersplit-help-elide-empty-filessplit-help-numeric-suffixes-shortsplit-help-numeric-suffixessplit-help-hex-suffixes-shortsplit-help-hex-suffixesNsplit-help-suffix-lengthsplit-help-verbo", 17);
    v6.help(&v14, &v19);
    v14.arg(&v9, &v6);
    v9.new("additional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 17);
    v6.long(&v9, "additional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 17);
    memcpy(&v9, &v6, 632);
    v10 = v7 | 32;
    v11 = v8;
    v6.value_name(&v9, "SUFFIXsplit-help-additional-suffixCOMMANDsplit-help-filtersplit-help-elide-empty-filessplit-help-numeric-suffixes-shortsplit-help-numeric-suffixessplit-help-hex-suffixes-shortsplit-help-hex-suffixesNsplit-help-suffix-lengthsplit-help-verboseSEPsplit-help-s", 6);
    v9.default_value(&v6, 1, 0);
    uucore::mods::locale::get_message(&v19, "split-help-additional-suffixCOMMANDsplit-help-filtersplit-help-elide-empty-filessplit-help-numeric-suffixes-shortsplit-help-numeric-suffixessplit-help-hex-suffixes-shortsplit-help-hex-suffixesNsplit-help-suffix-lengthsplit-help-verboseSEPsplit-help-separat", 28);
    v6.help(&v9, &v19);
    v9.arg(&v14, &v6);
    v14.new("filternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 6);
    v6.long(&v14, "filternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 6);
    memcpy(&v14, &v6, 632);
    v15 = v7 | 32;
    v16 = v8;
    v6.value_name(&v14, "COMMANDsplit-help-filtersplit-help-elide-empty-filessplit-help-numeric-suffixes-shortsplit-help-numeric-suffixessplit-help-hex-suffixes-shortsplit-help-hex-suffixesNsplit-help-suffix-lengthsplit-help-verboseSEPsplit-help-separatorio-blksize-x\\0split-error-", 7);
    v14.value_hint(&v6, 6);
    uucore::mods::locale::get_message(&v19, "split-help-filtersplit-help-elide-empty-filessplit-help-numeric-suffixes-shortsplit-help-numeric-suffixessplit-help-hex-suffixes-shortsplit-help-hex-suffixesNsplit-help-suffix-lengthsplit-help-verboseSEPsplit-help-separatorio-blksize-x\\0split-error-would-o", 17);
    v6.help(&v14, &v19);
    v14.arg(&v9, &v6);
    v9.new("elide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 17);
    v6.long(&v9, "elide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 17);
    v9.short(&v6, 101);
    uucore::mods::locale::get_message(&v19, "split-help-elide-empty-filessplit-help-numeric-suffixes-shortsplit-help-numeric-suffixessplit-help-hex-suffixes-shortsplit-help-hex-suffixesNsplit-help-suffix-lengthsplit-help-verboseSEPsplit-help-separatorio-blksize-x\\0split-error-would-overwrite-inputspl", 28);
    v6.help(&v9, &v19);
    v19.action(&v6, 2);
    v9.arg(&v14, &v19);
    v14.new("-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 2);
    v6.short(&v14, 100);
    v14.action(&v6, 2);
    v19 = "numeric-suffixesentity not found";
    v20 = 16;
    v21 = "-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs";
    v22 = 2;
    v23 = "hex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs";
    v24 = 12;
    v25 = "-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs";
    v26 = 2;
    v6.overrides_with_all(&v14, &v19);
    uucore::mods::locale::get_message(&v14, "split-help-numeric-suffixes-shortsplit-help-numeric-suffixessplit-help-hex-suffixes-shortsplit-help-hex-suffixesNsplit-help-suffix-lengthsplit-help-verboseSEPsplit-help-separatorio-blksize-x\\0split-error-would-overwrite-inputsplit-error-cannot-determine-fi", 33);
    v19.help(&v6, &v14);
    v14.arg(&v9, &v19);
    v9.new("numeric-suffixesentity not found", 16);
    v6.long(&v9, "numeric-suffixesentity not found", 16);
    memcpy(&v9, &v6, 632);
    v10 = 128 | v7;
    v11 = v8;
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v21 = *((long long *)&v2);
    v19 = v0;
    v20 = 1;
    v6.num_args(&v9, &v19);
    v19 = "numeric-suffixesentity not found";
    v20 = 16;
    v21 = "-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs";
    v22 = 2;
    v23 = "hex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs";
    v24 = 12;
    v25 = "-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs";
    v26 = 2;
    v9.overrides_with_all(&v6, &v19);
    v6.value_name(&v9, "FROMCyan    \"`$\\NOEXEADV", 4);
    uucore::mods::locale::get_message(&v9, "split-help-numeric-suffixessplit-help-hex-suffixes-shortsplit-help-hex-suffixesNsplit-help-suffix-lengthsplit-help-verboseSEPsplit-help-separatorio-blksize-x\\0split-error-would-overwrite-inputsplit-error-cannot-determine-file-sizesplit-error-cannot-determi", 27);
    v19.help(&v6, &v9);
    v9.arg(&v14, &v19);
    v14.new("-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 2);
    v6.short(&v14, 120);
    v14.action(&v6, 2);
    v19 = "numeric-suffixesentity not found";
    v20 = 16;
    v21 = "-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs";
    v22 = 2;
    v23 = "hex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs";
    v24 = 12;
    v25 = "-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs";
    v26 = 2;
    v6.overrides_with_all(&v14, &v19);
    uucore::mods::locale::get_message(&v14, "split-help-hex-suffixes-shortsplit-help-hex-suffixesNsplit-help-suffix-lengthsplit-help-verboseSEPsplit-help-separatorio-blksize-x\\0split-error-would-overwrite-inputsplit-error-cannot-determine-file-sizesplit-error-cannot-determine-input-sizecreating file ", 29);
    v19.help(&v6, &v14);
    v14.arg(&v9, &v19);
    v9.new("hex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 12);
    v6.long(&v9, "hex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 12);
    memcpy(&v9, &v6, 632);
    v10 = 128 | v7;
    v11 = v8;
    v6.num_args(&v9, &v0);
    v19 = "numeric-suffixesentity not found";
    v20 = 16;
    v21 = "-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs";
    v22 = 2;
    v23 = "hex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs";
    v24 = 12;
    v25 = "-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs";
    v26 = 2;
    v9.overrides_with_all(&v6, &v19);
    v6.value_name(&v9, "FROMCyan    \"`$\\NOEXEADV", 4);
    uucore::mods::locale::get_message(&v9, "split-help-hex-suffixesNsplit-help-suffix-lengthsplit-help-verboseSEPsplit-help-separatorio-blksize-x\\0split-error-would-overwrite-inputsplit-error-cannot-determine-file-sizesplit-error-cannot-determine-input-sizecreating file \n", 23);
    v19.help(&v6, &v9);
    v9.arg(&v14, &v19);
    v14.new("suffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 13);
    v6.short(&v14, 97);
    v14.long(&v6, "suffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 13);
    memcpy(&v6, &v14, 632);
    v7 = v15 | 32;
    v8 = v16;
    v14.value_name(&v6, "Nsplit-help-suffix-lengthsplit-help-verboseSEPsplit-help-separatorio-blksize-x\\0split-error-would-overwrite-inputsplit-error-cannot-determine-file-sizesplit-error-cannot-determine-input-sizecreating file \n", 1);
    uucore::mods::locale::get_message(&v19, "split-help-suffix-lengthsplit-help-verboseSEPsplit-help-separatorio-blksize-x\\0split-error-would-overwrite-inputsplit-error-cannot-determine-file-sizesplit-error-cannot-determine-input-sizecreating file \n", 24);
    v6.help(&v14, &v19);
    v14.arg(&v9, &v6);
    v9.new("verboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 7);
    v6.long(&v9, "verboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 7);
    uucore::mods::locale::get_message(&v19, "split-help-verboseSEPsplit-help-separatorio-blksize-x\\0split-error-would-overwrite-inputsplit-error-cannot-determine-file-sizesplit-error-cannot-determine-input-sizecreating file \n", 18);
    v9.help(&v6, &v19);
    v6.action(&v9, 2);
    v9.arg(&v14, &v6);
    v14.new("separatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 9);
    v6.short(&v14, 116);
    v14.long(&v6, "separatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 9);
    memcpy(&v6, &v14, 632);
    v7 = v15 | 32;
    v8 = v16;
    v14.value_name(&v6, "SEPsplit-help-separatorio-blksize-x\\0split-error-would-overwrite-inputsplit-error-cannot-determine-file-sizesplit-error-cannot-determine-input-sizecreating file \n", 3);
    v6.action(&v14, 1);
    uucore::mods::locale::get_message(&v14, "split-help-separatorio-blksize-x\\0split-error-would-overwrite-inputsplit-error-cannot-determine-file-sizesplit-error-cannot-determine-input-sizecreating file \n", 20);
    v19.help(&v6, &v14);
    v14.arg(&v9, &v19);
    v9.new("-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 11);
    v6.long(&v9, "io-blksize-x\\0split-error-would-overwrite-inputsplit-error-cannot-determine-file-sizesplit-error-cannot-determine-input-sizecreating file \n", 10);
    v9.alias(&v6, "-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 11);
    memcpy(&v6, &v9, 632);
    v7 = v10 | 4;
    v8 = v11;
    v9.arg(&v14, &v6);
    v14.new("inputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 5);
    v6.default_value(&v14, "-x\\0split-error-would-overwrite-inputsplit-error-cannot-determine-file-sizesplit-error-cannot-determine-input-sizecreating file \n", 1);
    v19.value_hint(&v6, 3);
    v14.arg(&v9, &v19);
    v9.new("prefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 6);
    v6.default_value(&v9, "x\\0split-error-would-overwrite-inputsplit-error-cannot-determine-file-sizesplit-error-cannot-determine-input-sizecreating file \n", 1);
    a0.arg(&v14, &v6);
    ::0x4ad8c0::core::ptr::drop_in_place<alloc::string::String>(&v3);
    return a0;
}
