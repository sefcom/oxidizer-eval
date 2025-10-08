long long uu_ptx::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xac0]
    unsigned int v1;  // [bp-0x848]
    unsigned int v2;  // [bp-0x844]
    char v3;  // [bp-0x840], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x838]
    unsigned long long v5;  // [bp-0x830]
    unsigned long long v6;  // [bp-0x828]
    unsigned long long v7;  // [bp-0x820]
    unsigned long long v8;  // [bp-0x818]
    unsigned int v9;  // [bp-0x5c8]
    unsigned int v10;  // [bp-0x5c4]
    unsigned long long v11;  // [bp-0x584]
    unsigned int v12;  // [bp-0x57c]
    char v13;  // [bp-0x578]
    unsigned int v14;  // [bp-0x300]
    char v15;  // [bp-0x2fc]
    unsigned long v16;  // [bp-0x2bc]
    unsigned int v17;  // [bp-0x2b4]
    char v18;  // [bp-0x2b0], Other Possible Types: unsigned long long
    unsigned long long v19;  // [bp-0x2a8]
    unsigned long long v20;  // [bp-0x2a0]
    unsigned long long v21;  // [bp-0x298]
    unsigned long long v22;  // [bp-0x290]
    unsigned long long v23;  // [bp-0x288]
    unsigned long long v26;  // rdx

    v3.new(uucore::util_name(), v26);
    v13.about(&v3);
    v3.version(&v13);
    uucore::format_usage(&v0, "{} [OPTION]... [INPUT]...\n{} -G [OPTION]... [INPUT [OUTPUT]]output automatically generated referencesbehave more like System V 'ptx'use STRING for flagging line truncationsSTRINGmacro name to use instead of 'xx'generate output as roff directivesgenerate ou", 60);
    v13.override_usage(&v3, &v0);
    memcpy(&v3, &v13, 700);
    v11 = 549755814016 | v16;
    v12 = v17;
    v13.new("filemode{", 4);
    memcpy(&v0, &v13, 632);
    v1 = v14 | 4;
    v2 = *((int *)&v15);
    v13.action(&v0, 1);
    v0.value_hint(&v13);
    v13.arg(&v3, &v0);
    v3.new("auto-referencetraditionalflag-truncationmacro-nameformatright-side-refssentence-regexpword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in t", 14);
    v0.short(&v3, 65);
    v3.long(&v0, "auto-referencetraditionalflag-truncationmacro-nameformatright-side-refssentence-regexpword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in t", 14);
    v0.help(&v3, "output automatically generated referencesbehave more like System V 'ptx'use STRING for flagging line truncationsSTRINGmacro name to use instead of 'xx'generate output as roff directivesgenerate output as TeX directivesput references at right, not counted i", 41);
    v18.action(&v0, 2);
    v3.arg(&v13, &v18);
    v13.new("traditionalflag-truncationmacro-nameformatright-side-refssentence-regexpword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files", 11);
    v0.short(&v13, 71);
    v13.long(&v0, "traditionalflag-truncationmacro-nameformatright-side-refssentence-regexpword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files", 11);
    v0.help(&v13, "behave more like System V 'ptx'use STRING for flagging line truncationsSTRINGmacro name to use instead of 'xx'generate output as roff directivesgenerate output as TeX directivesput references at right, not counted in -wfor end of lines or end of sentencesR", 31);
    v18.action(&v0, 2);
    v13.arg(&v3, &v18);
    v3.new("flag-truncationmacro-nameformatright-side-refssentence-regexpword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory", 15);
    v0.short(&v3, 70);
    v3.long(&v0, "flag-truncationmacro-nameformatright-side-refssentence-regexpword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory", 15);
    v0.help(&v3, "use STRING for flagging line truncationsSTRINGmacro name to use instead of 'xx'generate output as roff directivesgenerate output as TeX directivesput references at right, not counted in -wfor end of lines or end of sentencesREGEXPword break characters in t", 40);
    v18.value_name(&v0, "STRINGmacro name to use instead of 'xx'generate output as roff directivesgenerate output as TeX directivesput references at right, not counted in -wfor end of lines or end of sentencesREGEXPword break characters in this FILEfold lower case to upper case fo", 6);
    v3.arg(&v13, &v18);
    v13.new("macro-nameformatright-side-refssentence-regexpword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to l", 10);
    v0.short(&v13, 77);
    v13.long(&v0, "macro-nameformatright-side-refssentence-regexpword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to l", 10);
    v0.help(&v13, "macro name to use instead of 'xx'generate output as roff directivesgenerate output as TeX directivesput references at right, not counted in -wfor end of lines or end of sentencesREGEXPword break characters in this FILEfold lower case to upper case for sort", 33);
    v18.value_name(&v0, "STRINGmacro name to use instead of 'xx'generate output as roff directivesgenerate output as TeX directivesput references at right, not counted in -wfor end of lines or end of sentencesREGEXPword break characters in this FILEfold lower case to upper case fo", 6);
    v13.arg(&v3, &v18);
    v3.new("formatright-side-refssentence-regexpword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long option", 6);
    v0.long(&v3, "formatright-side-refssentence-regexpword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long option", 6);
    memcpy(&v3, &v0, 632);
    v9 = v1 | 4;
    v10 = v2;
    v18 = "roffHashj";
    v19 = 4;
    v20 = "texinternal error: entered unreachable code: should be caught by clap";
    v21 = 3;
    v0.value_parser(&v3, &v18);
    v3 = "formatright-side-refssentence-regexpword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long option";
    v4 = 6;
    v5 = "roffHashj";
    v6 = 4;
    v7 = "texinternal error: entered unreachable code: should be caught by clap";
    v8 = 3;
    v18.overrides_with_all(&v0, &v3);
    v3.arg(&v13, &v18);
    v13.new("roffHashj", 4);
    v0.short(&v13, 79);
    v13.help(&v0, "generate output as roff directivesgenerate output as TeX directivesput references at right, not counted in -wfor end of lines or end of sentencesREGEXPword break characters in this FILEfold lower case to upper case for sortinggap size in columns between ou", 34);
    v18 = "formatright-side-refssentence-regexpword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long option";
    v19 = 6;
    v20 = "roffHashj";
    v21 = 4;
    v22 = "texinternal error: entered unreachable code: should be caught by clap";
    v23 = 3;
    v0.overrides_with_all(&v13, &v18);
    v18.action(&v0, 2);
    v13.arg(&v3, &v18);
    v3.new("texinternal error: entered unreachable code: should be caught by clap", 3);
    v0.short(&v3, 84);
    v3.help(&v0, "generate output as TeX directivesput references at right, not counted in -wfor end of lines or end of sentencesREGEXPword break characters in this FILEfold lower case to upper case for sortinggap size in columns between output fieldsNUMBERread ignore word ", 33);
    v18 = "formatright-side-refssentence-regexpword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long option";
    v19 = 6;
    v20 = "roffHashj";
    v21 = 4;
    v22 = "texinternal error: entered unreachable code: should be caught by clap";
    v23 = 3;
    v0.overrides_with_all(&v3, &v18);
    v18.action(&v0, 2);
    v3.arg(&v13, &v18);
    v13.new("right-side-refssentence-regexpword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are ", 15);
    v0.short(&v13, 82);
    v13.long(&v0, "right-side-refssentence-regexpword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are ", 15);
    v0.help(&v13, "put references at right, not counted in -wfor end of lines or end of sentencesREGEXPword break characters in this FILEfold lower case to upper case for sortinggap size in columns between output fieldsNUMBERread ignore word list from FILEread only word list", 42);
    v18.action(&v0, 2);
    v13.arg(&v3, &v18);
    v3.new("sentence-regexpword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for s", 15);
    v0.short(&v3, 83);
    v3.long(&v0, "sentence-regexpword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for s", 15);
    v0.help(&v3, "for end of lines or end of sentencesREGEXPword break characters in this FILEfold lower case to upper case for sortinggap size in columns between output fieldsNUMBERread ignore word list from FILEread only word list from this FILEfirst field of each line is", 36);
    v18.value_name(&v0, "REGEXPword break characters in this FILEfold lower case to upper case for sortinggap size in columns between output fieldsNUMBERread ignore word list from FILEread only word list from this FILEfirst field of each line is a referenceoutput width in columns,", 6);
    v3.arg(&v13, &v18);
    v13.new("word-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for short options to", 11);
    v0.short(&v13, 87);
    v13.long(&v0, "word-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for short options to", 11);
    v0.help(&v13, "use REGEXP to match each keyword", 32);
    v18.value_name(&v0, "REGEXPword break characters in this FILEfold lower case to upper case for sortinggap size in columns between output fieldsNUMBERread ignore word list from FILEread only word list from this FILEfirst field of each line is a referenceoutput width in columns,", 6);
    v13.arg(&v3, &v18);
    v3.new("break-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for short options too.\nWith no ", 10);
    v0.short(&v3, 98);
    v3.long(&v0, "break-fileignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for short options too.\nWith no ", 10);
    v0.help(&v3, "word break characters in this FILEfold lower case to upper case for sortinggap size in columns between output fieldsNUMBERread ignore word list from FILEread only word list from this FILEfirst field of each line is a referenceoutput width in columns, refer", 34);
    v3.value_name(&v0, &g_45119c, 4);
    v0.value_hint(&v3);
    v3.arg(&v13, &v0);
    v13.new("ignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for short options too.\nWith no FILE, or w", 11);
    v0.short(&v13, 102);
    v13.long(&v0, "ignore-caseignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for short options too.\nWith no FILE, or w", 11);
    v0.help(&v13, "fold lower case to upper case for sortinggap size in columns between output fieldsNUMBERread ignore word list from FILEread only word list from this FILEfirst field of each line is a referenceoutput width in columns, reference excludedDumbFormatNotImplemen", 41);
    v18.action(&v0, 2);
    v13.arg(&v3, &v18);
    v3.new(&g_4525d8, 8);
    v0.short(&v3, 103);
    v3.long(&v0, &g_4525d8, 8);
    v0.help(&v3, "gap size in columns between output fieldsNUMBERread ignore word list from FILEread only word list from this FILEfirst field of each line is a referenceoutput width in columns, reference excludedDumbFormatNotImplementedParseError not implemented yetThere is no dumb format with GNU extensions disabled", 41);
    v18.value_name(&v0, "NUMBERread ignore word list from FILEread only word list from this FILEfirst field of each line is a referenceoutput width in columns, reference excludedDumbFormatNotImplementedParseError not implemented yetThere is no dumb format with GNU extensions disabled", 6);
    v3.arg(&v13, &v18);
    v13.new("ignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for short options too.\nWith no FILE, or when FILE is", 11);
    v0.short(&v13, 105);
    v13.long(&v0, "ignore-fileonly-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for short options too.\nWith no FILE, or when FILE is", 11);
    v0.help(&v13, "read ignore word list from FILEread only word list from this FILEfirst field of each line is a referenceoutput width in columns, reference excludedDumbFormatNotImplementedParseError not implemented yetThere is no dumb format with GNU extensions disabled", 31);
    v13.value_name(&v0, &g_45119c, 4);
    v0.value_hint(&v13);
    v13.arg(&v3, &v0);
    v3.new("only-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for short options too.\nWith no FILE, or when FILE is -, read st", 9);
    v0.short(&v3, 111);
    v3.long(&v0, "only-filereferenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for short options too.\nWith no FILE, or when FILE is -, read st", 9);
    v0.help(&v3, "read only word list from this FILEfirst field of each line is a referenceoutput width in columns, reference excludedDumbFormatNotImplementedParseError not implemented yetThere is no dumb format with GNU extensions disabled", 34);
    v3.value_name(&v0, &g_45119c, 4);
    v0.value_hint(&v3);
    v3.arg(&v13, &v0);
    v13.new("referenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for short options too.\nWith no FILE, or when FILE is -, read standard in", 10);
    v0.short(&v13, 114);
    v13.long(&v0, "referenceswidthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for short options too.\nWith no FILE, or when FILE is -, read standard in", 10);
    v0.help(&v13, "first field of each line is a referenceoutput width in columns, reference excludedDumbFormatNotImplementedParseError not implemented yetThere is no dumb format with GNU extensions disabled", 39);
    v13.value_name(&v0, &g_45119c, 4);
    v0.action(&v13, 2);
    v13.arg(&v3, &v0);
    v3.new("widthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for short options too.\nWith no FILE, or when FILE is -, read standard input. Defau", 5);
    v0.short(&v3, 119);
    v3.long(&v0, "widthProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for short options too.\nWith no FILE, or when FILE is -, read standard input. Defau", 5);
    v0.help(&v3, "output width in columns, reference excludedDumbFormatNotImplementedParseError not implemented yetThere is no dumb format with GNU extensions disabled", 43);
    v3.value_name(&v0, "NUMBERread ignore word list from FILEread only word list from this FILEfirst field of each line is a referenceoutput width in columns, reference excludedDumbFormatNotImplementedParseError not implemented yetThere is no dumb format with GNU extensions disabled", 6);
    a0.arg(&v13, &v3);
    return a0;
}
