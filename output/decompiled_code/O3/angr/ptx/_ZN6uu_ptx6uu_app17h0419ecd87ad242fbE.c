long long uu_ptx::uu_app::h0419ecd87ad242fb(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0xa48]
    unsigned int v1;  // [sp-0x800]
    unsigned int v2;  // [sp-0x7fc]
    char v3;  // [bp-0x7f8]
    char v4;  // [bp-0x5b0]
    char v5;  // [bp-0x5ac]
    char v6;  // [bp-0x53c]
    char v7;  // [bp-0x534]
    char v8;  // [bp-0x530]
    unsigned long long v9;  // [sp-0x274]
    unsigned int v10;  // [sp-0x26c]
    char v11;  // [bp-0x268]
    unsigned long long v13;  // rdx

    clap_builder::builder::command::Command::new::hd863acf7820526e7(&v8, uucore::util_name::h412db5e565a079f3(), v13);
    clap_builder::builder::command::Command::about::h8f926e9d32f8169e(&v3, &v8, "Produce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for short options too.\nWith no FILE, or when FILE is -, read standard input. Default is '-F /'.", 264);
    clap_builder::builder::command::Command::version::h81b0d6f8f6f4c548(&v8, &v3, "0.0.28{} [OPTION]... [INPUT]...\n{} -G [OPTION]... [INPUT [OUTPUT]]output automatically generated referencesbehave more like System V 'ptx'use STRING for flagging line truncationsSTRINGmacro name to use instead of 'xx'generate output as roff directivesput r", 6);
    uucore::format_usage::h00b69bae12d8ac9c(&v0, "{} [OPTION]... [INPUT]...\n{} -G [OPTION]... [INPUT [OUTPUT]]output automatically generated referencesbehave more like System V 'ptx'use STRING for flagging line truncationsSTRINGmacro name to use instead of 'xx'generate output as roff directivesput referen", 60);
    clap_builder::builder::command::Command::override_usage::h80b5c59025c9e3a5(&v3, &v8, &v0);
    memcpy(&v8, &v3, 700);
    v9 = 549755814016 | *((long long *)&v6);
    v10 = *((int *)&v7);
    clap_builder::builder::arg::Arg::new::h239cff7b0455f1b2(&v3, "filemode{", 4);
    memcpy(&v0, &v3, 584);
    v1 = *((int *)&v4) | 4;
    v2 = *((int *)&v5);
    clap_builder::builder::arg::Arg::action::hc6cabb5da18cf922(&v3, &v0, 1);
    clap_builder::builder::arg::Arg::value_hint::h87af80d88ca40bc5(&v0, &v3, 3);
    clap_builder::builder::command::Command::arg::h9c330cc125856f67(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::h239cff7b0455f1b2(&v8, "auto-referencetraditionalflag-truncationmacro-nameformat=roffright-side-refssentence-regexpformat=texword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/btree/navi", 14);
    clap_builder::builder::arg::Arg::short::h762356691e027942(&v0, &v8, 65);
    clap_builder::builder::arg::Arg::long::h40cef8f62aa3d2b7(&v8, &v0, "auto-referencetraditionalflag-truncationmacro-nameformat=roffright-side-refssentence-regexpformat=texword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/btree/navi", 14);
    clap_builder::builder::arg::Arg::help::hf49416e1edb6ec01(&v0, &v8, "output automatically generated referencesbehave more like System V 'ptx'use STRING for flagging line truncationsSTRINGmacro name to use instead of 'xx'generate output as roff directivesput references at right, not counted in -wfor end of lines or end of se", 41);
    clap_builder::builder::arg::Arg::action::hc6cabb5da18cf922(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::h9c330cc125856f67(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new::h239cff7b0455f1b2(&v3, "traditionalflag-truncationmacro-nameformat=roffright-side-refssentence-regexpformat=texword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/btree/navigate.rsEmptyIn", 11);
    clap_builder::builder::arg::Arg::short::h762356691e027942(&v0, &v3, 71);
    clap_builder::builder::arg::Arg::long::h40cef8f62aa3d2b7(&v3, &v0, "traditionalflag-truncationmacro-nameformat=roffright-side-refssentence-regexpformat=texword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/btree/navigate.rsEmptyIn", 11);
    clap_builder::builder::arg::Arg::help::hf49416e1edb6ec01(&v0, &v3, "behave more like System V 'ptx'use STRING for flagging line truncationsSTRINGmacro name to use instead of 'xx'generate output as roff directivesput references at right, not counted in -wfor end of lines or end of sentencesREGEXPgenerate output as TeX direc", 31);
    clap_builder::builder::arg::Arg::action::hc6cabb5da18cf922(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::h9c330cc125856f67(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new::h239cff7b0455f1b2(&v8, "flag-truncationmacro-nameformat=roffright-side-refssentence-regexpformat=texword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/btree/navigate.rsEmptyInvalidDigitP", 15);
    clap_builder::builder::arg::Arg::short::h762356691e027942(&v0, &v8, 70);
    clap_builder::builder::arg::Arg::long::h40cef8f62aa3d2b7(&v8, &v0, "flag-truncationmacro-nameformat=roffright-side-refssentence-regexpformat=texword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/btree/navigate.rsEmptyInvalidDigitP", 15);
    clap_builder::builder::arg::Arg::help::hf49416e1edb6ec01(&v0, &v8, "use STRING for flagging line truncationsSTRINGmacro name to use instead of 'xx'generate output as roff directivesput references at right, not counted in -wfor end of lines or end of sentencesREGEXPgenerate output as TeX directivesword break characters in t", 40);
    clap_builder::builder::arg::Arg::value_name::h255efab9ec0ec1f5(&v11, &v0, "STRINGmacro name to use instead of 'xx'generate output as roff directivesput references at right, not counted in -wfor end of lines or end of sentencesREGEXPgenerate output as TeX directivesword break characters in this FILEfold lower case to upper case fo", 6);
    clap_builder::builder::command::Command::arg::h9c330cc125856f67(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new::h239cff7b0455f1b2(&v3, "macro-nameformat=roffright-side-refssentence-regexpformat=texword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/btree/navigate.rsEmptyInvalidDigitPosOverflowNegOv", 10);
    clap_builder::builder::arg::Arg::short::h762356691e027942(&v0, &v3, 77);
    clap_builder::builder::arg::Arg::long::h40cef8f62aa3d2b7(&v3, &v0, "macro-nameformat=roffright-side-refssentence-regexpformat=texword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/btree/navigate.rsEmptyInvalidDigitPosOverflowNegOv", 10);
    clap_builder::builder::arg::Arg::help::hf49416e1edb6ec01(&v0, &v3, "macro name to use instead of 'xx'generate output as roff directivesput references at right, not counted in -wfor end of lines or end of sentencesREGEXPgenerate output as TeX directivesword break characters in this FILEfold lower case to upper case for sort", 33);
    clap_builder::builder::arg::Arg::value_name::h255efab9ec0ec1f5(&v11, &v0, "STRINGmacro name to use instead of 'xx'generate output as roff directivesput references at right, not counted in -wfor end of lines or end of sentencesREGEXPgenerate output as TeX directivesword break characters in this FILEfold lower case to upper case fo", 6);
    clap_builder::builder::command::Command::arg::h9c330cc125856f67(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new::h239cff7b0455f1b2(&v8, "format=roffright-side-refssentence-regexpformat=texword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/btree/navigate.rsEmptyInvalidDigitPosOverflowNegOverflow", 11);
    clap_builder::builder::arg::Arg::short::h762356691e027942(&v0, &v8, 79);
    clap_builder::builder::arg::Arg::long::h40cef8f62aa3d2b7(&v8, &v0, "format=roffright-side-refssentence-regexpformat=texword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/btree/navigate.rsEmptyInvalidDigitPosOverflowNegOverflow", 11);
    clap_builder::builder::arg::Arg::help::hf49416e1edb6ec01(&v0, &v8, "generate output as roff directivesput references at right, not counted in -wfor end of lines or end of sentencesREGEXPgenerate output as TeX directivesword break characters in this FILEfold lower case to upper case for sortinggap size in columns between ou", 34);
    clap_builder::builder::arg::Arg::action::hc6cabb5da18cf922(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::h9c330cc125856f67(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new::h239cff7b0455f1b2(&v3, "right-side-refssentence-regexpformat=texword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/btree/navigate.rsEmptyInvalidDigitPosOverflowNegOverflow", 15);
    clap_builder::builder::arg::Arg::short::h762356691e027942(&v0, &v3, 82);
    clap_builder::builder::arg::Arg::long::h40cef8f62aa3d2b7(&v3, &v0, "right-side-refssentence-regexpformat=texword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/btree/navigate.rsEmptyInvalidDigitPosOverflowNegOverflow", 15);
    clap_builder::builder::arg::Arg::help::hf49416e1edb6ec01(&v0, &v3, "put references at right, not counted in -wfor end of lines or end of sentencesREGEXPgenerate output as TeX directivesword break characters in this FILEfold lower case to upper case for sortinggap size in columns between output fieldsNUMBERread ignore word ", 42);
    clap_builder::builder::arg::Arg::action::hc6cabb5da18cf922(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::h9c330cc125856f67(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new::h239cff7b0455f1b2(&v8, "sentence-regexpformat=texword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/btree/navigate.rsEmptyInvalidDigitPosOverflowNegOverflow", 15);
    clap_builder::builder::arg::Arg::short::h762356691e027942(&v0, &v8, 83);
    clap_builder::builder::arg::Arg::long::h40cef8f62aa3d2b7(&v8, &v0, "sentence-regexpformat=texword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/btree/navigate.rsEmptyInvalidDigitPosOverflowNegOverflow", 15);
    clap_builder::builder::arg::Arg::help::hf49416e1edb6ec01(&v0, &v8, "for end of lines or end of sentencesREGEXPgenerate output as TeX directivesword break characters in this FILEfold lower case to upper case for sortinggap size in columns between output fieldsNUMBERread ignore word list from FILEread only word list from thi", 36);
    clap_builder::builder::arg::Arg::value_name::h255efab9ec0ec1f5(&v11, &v0, "REGEXPgenerate output as TeX directivesword break characters in this FILEfold lower case to upper case for sortinggap size in columns between output fieldsNUMBERread ignore word list from FILEread only word list from this FILEfirst field of each line is a ", 6);
    clap_builder::builder::command::Command::arg::h9c330cc125856f67(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new::h239cff7b0455f1b2(&v3, "format=texword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/btree/navigate.rsEmptyInvalidDigitPosOverflowNegOverflow", 10);
    clap_builder::builder::arg::Arg::short::h762356691e027942(&v0, &v3, 84);
    clap_builder::builder::arg::Arg::long::h40cef8f62aa3d2b7(&v3, &v0, "format=texword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/btree/navigate.rsEmptyInvalidDigitPosOverflowNegOverflow", 10);
    clap_builder::builder::arg::Arg::help::hf49416e1edb6ec01(&v0, &v3, "generate output as TeX directivesword break characters in this FILEfold lower case to upper case for sortinggap size in columns between output fieldsNUMBERread ignore word list from FILEread only word list from this FILEfirst field of each line is a refere", 33);
    clap_builder::builder::arg::Arg::action::hc6cabb5da18cf922(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::h9c330cc125856f67(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new::h239cff7b0455f1b2(&v8, "word-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/btree/navigate.rsEmptyInvalidDigitPosOverflowNegOverflow", 11);
    clap_builder::builder::arg::Arg::short::h762356691e027942(&v0, &v8, 87);
    clap_builder::builder::arg::Arg::long::h40cef8f62aa3d2b7(&v8, &v0, "word-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/btree/navigate.rsEmptyInvalidDigitPosOverflowNegOverflow", 11);
    clap_builder::builder::arg::Arg::help::hf49416e1edb6ec01(&v0, &v8, "use REGEXP to match each keyword", 32);
    clap_builder::builder::arg::Arg::value_name::h255efab9ec0ec1f5(&v11, &v0, "REGEXPgenerate output as TeX directivesword break characters in this FILEfold lower case to upper case for sortinggap size in columns between output fieldsNUMBERread ignore word list from FILEread only word list from this FILEfirst field of each line is a ", 6);
    clap_builder::builder::command::Command::arg::h9c330cc125856f67(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new::h239cff7b0455f1b2(&v3, "break-fileignore-caseignore-fileonly-filereferenceswidth/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/btree/navigate.rsEmptyInvalidDigitPosOverflowNegOverflow", 10);
    clap_builder::builder::arg::Arg::short::h762356691e027942(&v0, &v3, 98);
    clap_builder::builder::arg::Arg::long::h40cef8f62aa3d2b7(&v3, &v0, "break-fileignore-caseignore-fileonly-filereferenceswidth/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/btree/navigate.rsEmptyInvalidDigitPosOverflowNegOverflow", 10);
    clap_builder::builder::arg::Arg::help::hf49416e1edb6ec01(&v0, &v3, "word break characters in this FILEfold lower case to upper case for sortinggap size in columns between output fieldsNUMBERread ignore word list from FILEread only word list from this FILEfirst field of each line is a referenceoutput width in columns, refer", 34);
    clap_builder::builder::arg::Arg::value_name::h255efab9ec0ec1f5(&v3, &v0, &g_44f240, 4);
    clap_builder::builder::arg::Arg::value_hint::h87af80d88ca40bc5(&v0, &v3, 3);
    clap_builder::builder::command::Command::arg::h9c330cc125856f67(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::h239cff7b0455f1b2(&v8, "ignore-caseignore-fileonly-filereferenceswidth/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/btree/navigate.rsEmptyInvalidDigitPosOverflowNegOverflow", 11);
    clap_builder::builder::arg::Arg::short::h762356691e027942(&v0, &v8, 102);
    clap_builder::builder::arg::Arg::long::h40cef8f62aa3d2b7(&v8, &v0, "ignore-caseignore-fileonly-filereferenceswidth/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/btree/navigate.rsEmptyInvalidDigitPosOverflowNegOverflow", 11);
    clap_builder::builder::arg::Arg::help::hf49416e1edb6ec01(&v0, &v8, "fold lower case to upper case for sortinggap size in columns between output fieldsNUMBERread ignore word list from FILEread only word list from this FILEfirst field of each line is a referenceoutput width in columns, reference excludedDumbFormatNotImplemen", 41);
    clap_builder::builder::arg::Arg::action::hc6cabb5da18cf922(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::h9c330cc125856f67(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new::h239cff7b0455f1b2(&v3, &anon.2a006399170f7188a90d81ab0d3d1c41.20.llvm.26549548904132577, 8);
    clap_builder::builder::arg::Arg::short::h762356691e027942(&v0, &v3, 103);
    clap_builder::builder::arg::Arg::long::h40cef8f62aa3d2b7(&v3, &v0, &anon.2a006399170f7188a90d81ab0d3d1c41.20.llvm.26549548904132577, 8);
    clap_builder::builder::arg::Arg::help::hf49416e1edb6ec01(&v0, &v3, "gap size in columns between output fieldsNUMBERread ignore word list from FILEread only word list from this FILEfirst field of each line is a referenceoutput width in columns, reference excludedDumbFormatNotImplementedParseError/rustc/8bfcae730a5db2438bbda", 41);
    clap_builder::builder::arg::Arg::value_name::h255efab9ec0ec1f5(&v11, &v0, "NUMBERread ignore word list from FILEread only word list from this FILEfirst field of each line is a referenceoutput width in columns, reference excludedDumbFormatNotImplementedParseError/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/", 6);
    clap_builder::builder::command::Command::arg::h9c330cc125856f67(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new::h239cff7b0455f1b2(&v8, "ignore-fileonly-filereferenceswidth/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/btree/navigate.rsEmptyInvalidDigitPosOverflowNegOverflow", 11);
    clap_builder::builder::arg::Arg::short::h762356691e027942(&v0, &v8, 105);
    clap_builder::builder::arg::Arg::long::h40cef8f62aa3d2b7(&v8, &v0, "ignore-fileonly-filereferenceswidth/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/btree/navigate.rsEmptyInvalidDigitPosOverflowNegOverflow", 11);
    clap_builder::builder::arg::Arg::help::hf49416e1edb6ec01(&v0, &v8, "read ignore word list from FILEread only word list from this FILEfirst field of each line is a referenceoutput width in columns, reference excludedDumbFormatNotImplementedParseError/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/patter", 31);
    clap_builder::builder::arg::Arg::value_name::h255efab9ec0ec1f5(&v8, &v0, &g_44f240, 4);
    clap_builder::builder::arg::Arg::value_hint::h87af80d88ca40bc5(&v0, &v8, 3);
    clap_builder::builder::command::Command::arg::h9c330cc125856f67(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new::h239cff7b0455f1b2(&v3, "only-filereferenceswidth/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/btree/navigate.rsEmptyInvalidDigitPosOverflowNegOverflow", 9);
    clap_builder::builder::arg::Arg::short::h762356691e027942(&v0, &v3, 111);
    clap_builder::builder::arg::Arg::long::h40cef8f62aa3d2b7(&v3, &v0, "only-filereferenceswidth/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/btree/navigate.rsEmptyInvalidDigitPosOverflowNegOverflow", 9);
    clap_builder::builder::arg::Arg::help::hf49416e1edb6ec01(&v0, &v3, "read only word list from this FILEfirst field of each line is a referenceoutput width in columns, reference excludedDumbFormatNotImplementedParseError/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs/rustc/8bfcae730a5db2438bbd", 34);
    clap_builder::builder::arg::Arg::value_name::h255efab9ec0ec1f5(&v3, &v0, &g_44f240, 4);
    clap_builder::builder::arg::Arg::value_hint::h87af80d88ca40bc5(&v0, &v3, 3);
    clap_builder::builder::command::Command::arg::h9c330cc125856f67(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::h239cff7b0455f1b2(&v8, "referenceswidth/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/btree/navigate.rsEmptyInvalidDigitPosOverflowNegOverflow", 10);
    clap_builder::builder::arg::Arg::short::h762356691e027942(&v0, &v8, 114);
    clap_builder::builder::arg::Arg::long::h40cef8f62aa3d2b7(&v8, &v0, "referenceswidth/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/btree/navigate.rsEmptyInvalidDigitPosOverflowNegOverflow", 10);
    clap_builder::builder::arg::Arg::help::hf49416e1edb6ec01(&v0, &v8, "first field of each line is a referenceoutput width in columns, reference excludedDumbFormatNotImplementedParseError/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/", 39);
    clap_builder::builder::arg::Arg::value_name::h255efab9ec0ec1f5(&v8, &v0, &g_44f240, 4);
    clap_builder::builder::arg::Arg::action::hc6cabb5da18cf922(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg::h9c330cc125856f67(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new::h239cff7b0455f1b2(&v3, "width/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/btree/navigate.rsEmptyInvalidDigitPosOverflowNegOverflow", 5);
    clap_builder::builder::arg::Arg::short::h762356691e027942(&v0, &v3, 119);
    clap_builder::builder::arg::Arg::long::h40cef8f62aa3d2b7(&v3, &v0, "width/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/btree/navigate.rsEmptyInvalidDigitPosOverflowNegOverflow", 5);
    clap_builder::builder::arg::Arg::help::hf49416e1edb6ec01(&v0, &v3, "output width in columns, reference excludedDumbFormatNotImplementedParseError/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/iter.rs\\", 43);
    clap_builder::builder::arg::Arg::value_name::h255efab9ec0ec1f5(&v3, &v0, "NUMBERread ignore word list from FILEread only word list from this FILEfirst field of each line is a referenceoutput width in columns, reference excludedDumbFormatNotImplementedParseError/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/", 6);
    clap_builder::builder::command::Command::arg::h9c330cc125856f67(a0, &v8, &v3);
    return a0;
}
