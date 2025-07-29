long long uu_join::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xad0]
    unsigned long long v1;  // [bp-0xac8]
    unsigned long long v2;  // [bp-0xac0]
    char v3;  // [bp-0xab8]
    unsigned int v4;  // [bp-0x840]
    unsigned int v5;  // [bp-0x83c]
    char v6;  // [bp-0x838]
    unsigned int v7;  // [bp-0x5c0]
    unsigned int v8;  // [bp-0x5bc]
    unsigned long v9;  // [bp-0x57c]
    unsigned int v10;  // [bp-0x574]
    char v11;  // [bp-0x570]
    unsigned int v12;  // [bp-0x2f8]
    char v13;  // [bp-0x2f4]
    unsigned long long v14;  // [bp-0x2b4]
    unsigned int v15;  // [bp-0x2ac]
    unsigned long long v16;  // [bp-0x2a8]
    unsigned long long v17;  // [bp-0x2a0]
    unsigned long long v18;  // [bp-0x298]
    unsigned long long v19;  // [bp-0x290]
    unsigned int v20;  // [bp-0x30]
    unsigned int v21;  // [bp-0x2c]
    unsigned long long v24;  // rdx

    v11.new(uucore::util_name(), v24);
    v6.version(&v11, "(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderzero-terminatedjoin-help-zfile1FILE", 24);
    uucore::mods::locale::get_message(&v3, "join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderzero-terminatedjoin-help-zfile1FILE1file2FILE2field1field2j", 10);
    v11.about(&v6, &v3);
    uucore::mods::locale::get_message(&v0, "join-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderzero-terminatedjoin-help-zfile1FILE1file2FILE2field1field2join-error-", 10);
    uucore::format_usage(&v3, v1, v2);
    v6.override_usage(&v11, &v3);
    memcpy(&v11, &v6, 700);
    v14 = 549755814016 | v9;
    v15 = v10;
    v6.new("aj12itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-o", 1);
    v3.short(&v6, 97);
    v6.action(&v3, 1);
    v3.num_args(&v6);
    v16 = "12itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-ord";
    v17 = 1;
    v18 = "2itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orde";
    v19 = 1;
    v6.value_parser(&v3, &v16);
    v3.value_name(&v6, "FILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderzero-terminatedjoin-help-zfile1FILE1file2FILE2field1field2join-error-incompatib", 7);
    uucore::mods::locale::get_message(&v6, "join-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderzero-terminatedjoin-help-zfile1FILE1file2FILE2field1field2join-error-incompatible-fiel", 11);
    v16.help(&v3, &v6);
    v6.arg(&v11, &v16);
    v11.new("vaj12itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-", 1);
    v3.short(&v11, 118);
    v11.action(&v3, 1);
    v3.num_args(&v11);
    v16 = "12itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-ord";
    v17 = 1;
    v18 = "2itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orde";
    v19 = 1;
    v11.value_parser(&v3, &v16);
    v3.value_name(&v11, "FILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderzero-terminatedjoin-help-zfile1FILE1file2FILE2field1field2join-error-incompatib", 7);
    uucore::mods::locale::get_message(&v11, "join-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderzero-terminatedjoin-help-zfile1FILE1file2FILE2field1field2join-error-incompatible-fieldsjoin-erro", 11);
    v16.help(&v3, &v11);
    v11.arg(&v6, &v16);
    v6.new("enocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderzer", 1);
    v3.short(&v6, 101);
    v6.value_name(&v3, "EMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderzero-terminatedjoin-help-zfile1FILE1file2FILE2field1field2join-error-incompatible-fieldsjoin-error-invalid-f", 5);
    uucore::mods::locale::get_message(&v16, "join-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderzero-terminatedjoin-help-zfile1FILE1file2FILE2field1field2join-error-incompatible-fieldsjoin-error-invalid-field-", 11);
    v3.help(&v6, &v16);
    v6.arg(&v11, &v3);
    v11.new("itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-order", 1);
    v3.short(&v11, 105);
    v11.long(&v3, "ignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderzero-terminatedjoin-help-zfile1FILE1file2FILE2field1field2join-error-incompatible-fieldsjoin-error-invalid-field-numberjoin-", 11);
    uucore::mods::locale::get_message(&v16, "join-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderzero-terminatedjoin-help-zfile1FILE1file2FILE2field1field2join-error-incompatible-fieldsjoin-error-invalid-field-numberjoin-error-inval", 11);
    v3.help(&v11, &v16);
    v16.action(&v3, 2);
    v11.arg(&v6, &v16);
    v6.new("j12itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-or", 1);
    v3.short(&v6, 106);
    v6.value_name(&v3, "FIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderzero-terminatedjoin-help-zfile1FILE1file2FILE2field1field2join-error-incompatible-fieldsjoin-error-invalid-field-numberjoin-error-invalid-file-num", 5);
    uucore::mods::locale::get_message(&v16, "join-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderzero-terminatedjoin-help-zfile1FILE1file2FILE2field1field2join-error-incompatible-fieldsjoin-error-invalid-field-numberjoin-error-invalid-file-number-s", 11);
    v3.help(&v6, &v16);
    v6.arg(&v11, &v3);
    v11.new("oenocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderze", 1);
    v3.short(&v11, 111);
    v11.value_name(&v3, "FORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderzero-terminatedjoin-help-zfile1FILE1file2FILE2field1field2join-error-incompatible-fieldsjoin-error-invalid-field-numberjoin-error-invalid-file-number-simpleerrorjoin-error-io", 6);
    uucore::mods::locale::get_message(&v16, "join-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderzero-terminatedjoin-help-zfile1FILE1file2FILE2field1field2join-error-incompatible-fieldsjoin-error-invalid-field-numberjoin-error-invalid-file-number-simpleerrorjoin-error-io", 11);
    v3.help(&v11, &v16);
    v11.arg(&v6, &v3);
    v6.new("toenocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderz", 1);
    v3.short(&v6, 116);
    v6.value_name(&v3, "CHARmanyZero", 4);
    v16 = 2;
    v3.value_parser(&v6, &v16);
    uucore::mods::locale::get_message(&v6, "join-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderzero-terminatedjoin-help-zfile1FILE1file2FILE2field1field2join-error-incompatible-fieldsjoin-error-invalid-field-numberjoin-error-invalid-file-number-simpleerrorjoin-error-io", 11);
    v16.help(&v3, &v6);
    v6.arg(&v11, &v16);
    v11.new("12itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-ord", 1);
    v3.short(&v11, 49);
    v11.value_name(&v3, "FIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderzero-terminatedjoin-help-zfile1FILE1file2FILE2field1field2join-error-incompatible-fieldsjoin-error-invalid-field-numberjoin-error-invalid-file-num", 5);
    uucore::mods::locale::get_message(&v16, "join-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderzero-terminatedjoin-help-zfile1FILE1file2FILE2field1field2join-error-incompatible-fieldsjoin-error-invalid-field-numberjoin-error-invalid-file-number-simpleerrorjoin-error-io", 11);
    v3.help(&v11, &v16);
    v11.arg(&v6, &v3);
    v6.new("2itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orde", 1);
    v3.short(&v6, 50);
    v6.value_name(&v3, "FIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderzero-terminatedjoin-help-zfile1FILE1file2FILE2field1field2join-error-incompatible-fieldsjoin-error-invalid-field-numberjoin-error-invalid-file-num", 5);
    uucore::mods::locale::get_message(&v16, "join-help-2join-help-check-orderjoin-help-nocheck-orderzero-terminatedjoin-help-zfile1FILE1file2FILE2field1field2join-error-incompatible-fieldsjoin-error-invalid-field-numberjoin-error-invalid-file-number-simpleerrorjoin-error-io", 11);
    v3.help(&v6, &v16);
    v6.arg(&v11, &v3);
    v11.new("check-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderzero-terminatedjo", 11);
    v3.long(&v11, "check-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderzero-terminatedjo", 11);
    uucore::mods::locale::get_message(&v16, "join-help-check-orderjoin-help-nocheck-orderzero-terminatedjoin-help-zfile1FILE1file2FILE2field1field2join-error-incompatible-fieldsjoin-error-invalid-field-numberjoin-error-invalid-file-number-simpleerrorjoin-error-io", 21);
    v11.help(&v3, &v16);
    v3.action(&v11, 2);
    v11.arg(&v6, &v3);
    v6.new("nocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderzero", 13);
    v3.long(&v6, "nocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderzero", 13);
    uucore::mods::locale::get_message(&v16, "join-help-nocheck-orderzero-terminatedjoin-help-zfile1FILE1file2FILE2field1field2join-error-incompatible-fieldsjoin-error-invalid-field-numberjoin-error-invalid-file-number-simpleerrorjoin-error-io", 23);
    v6.help(&v3, &v16);
    v3.action(&v6, 2);
    v6.arg(&v11, &v3);
    v11.new("headerz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderzero-terminatedjoin-help-zfi", 6);
    v3.long(&v11, "headerz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderzero-terminatedjoin-help-zfi", 6);
    uucore::mods::locale::get_message(&v16, "join-help-header", 16);
    v11.help(&v3, &v16);
    v3.action(&v11, 2);
    v11.arg(&v6, &v3);
    v6.new("z(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderzero-terminatedjoin-help-zfile1FIL", 1);
    v3.short(&v6, 122);
    v6.long(&v3, "zero-terminatedjoin-help-zfile1FILE1file2FILE2field1field2join-error-incompatible-fieldsjoin-error-invalid-field-numberjoin-error-invalid-file-number-simpleerrorjoin-error-io", 15);
    uucore::mods::locale::get_message(&v16, "join-help-zfile1FILE1file2FILE2field1field2join-error-incompatible-fieldsjoin-error-invalid-field-numberjoin-error-invalid-file-number-simpleerrorjoin-error-io", 11);
    v3.help(&v6, &v16);
    v16.action(&v3, 2);
    v6.arg(&v11, &v16);
    v11.new("file1FILE1file2FILE2field1field2join-error-incompatible-fieldsjoin-error-invalid-field-numberjoin-error-invalid-file-number-simpleerrorjoin-error-io", 5);
    memcpy(&v3, &v11, 632);
    v4 = v12 | 1;
    v5 = *((int *)&v13);
    v11.value_name(&v3, "FILE1file2FILE2field1field2join-error-incompatible-fieldsjoin-error-invalid-field-numberjoin-error-invalid-file-number-simpleerrorjoin-error-io", 5);
    v3.value_hint(&v11, 3);
    memcpy(&v16, &v3, 632);
    v20 = v4 | 4;
    v21 = v5;
    v11.arg(&v6, &v16);
    v6.new("file2FILE2field1field2join-error-incompatible-fieldsjoin-error-invalid-field-numberjoin-error-invalid-file-number-simpleerrorjoin-error-io", 5);
    memcpy(&v3, &v6, 632);
    v4 = v7 | 1;
    v5 = v8;
    v6.value_name(&v3, "FILE2field1field2join-error-incompatible-fieldsjoin-error-invalid-field-numberjoin-error-invalid-file-number-simpleerrorjoin-error-io", 5);
    v3.value_hint(&v6, 3);
    memcpy(&v6, &v3, 632);
    v7 = v4 | 4;
    v8 = v5;
    a0.arg(&v11, &v6);
    ::0x4b1c30::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
