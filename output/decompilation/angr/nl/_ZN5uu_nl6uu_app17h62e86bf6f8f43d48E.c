long long uu_nl::uu_app::h62e86bf6f8f43d48(unsigned long long a0)
{
    char v0;  // [bp-0xa48]
    unsigned int v1;  // [sp-0x800]
    unsigned int v2;  // [sp-0x7fc]
    char v3;  // [bp-0x7f8]
    char v4;  // [bp-0x53c]
    char v5;  // [bp-0x534]
    char v6;  // [bp-0x530]
    char v7;  // [bp-0x2e8]
    char v8;  // [bp-0x2e4]
    unsigned long long v9;  // [sp-0x274]
    unsigned int v10;  // [sp-0x26c]
    char v11;  // [bp-0x268], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x260]
    unsigned long long v13;  // [sp-0x258]
    unsigned long long v14;  // [sp-0x250]
    unsigned long long v15;  // [sp-0x248]
    unsigned long long v16;  // [sp-0x240]
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rsi

    clap_builder::builder::command::Command::new::hd78aab08a8b31c20(&v3, uucore::util_name::h60d842bf27b05e82(), v18);
    clap_builder::builder::command::Command::about::h40bfd31f33fa63c5(&v6, &v3, "Number lines of files0.0.28{} [OPTION]... [FILE]...STYLE is one of:\n\n* a     number all lines\n* t     number only nonempty lines\n* n     number no lines\n* pBRE  number only lines that contain a match for the basic regular\n        expression, BRE\n\nFORMAT is", 21);
    clap_builder::builder::command::Command::version::h3a7547e439a5f2d6(&v3, &v6, "0.0.28{} [OPTION]... [FILE]...STYLE is one of:\n\n* a     number all lines\n* t     number only nonempty lines\n* n     number no lines\n* pBRE  number only lines that contain a match for the basic regular\n        expression, BRE\n\nFORMAT is one of:\n\n* ln    lef", 6);
    uucore::format_usage::h76fcb2d15fbabc58(&v0, "{} [OPTION]... [FILE]...STYLE is one of:\n\n* a     number all lines\n* t     number only nonempty lines\n* n     number no lines\n* pBRE  number only lines that contain a match for the basic regular\n        expression, BRE\n\nFORMAT is one of:\n\n* ln    left just", 24);
    clap_builder::builder::command::Command::override_usage::hc45c9c787b169d6c(&v6, &v3, &v0);
    clap_builder::builder::command::Command::after_help::hc7b8767b1b6b1de1(&v3, &v6, "STYLE is one of:\n\n* a     number all lines\n* t     number only nonempty lines\n* n     number no lines\n* pBRE  number only lines that contain a match for the basic regular\n        expression, BRE\n\nFORMAT is one of:\n\n* ln    left justified, no leading zeros\n* rn    right justified, no leading zeros\n* rz    right justified, leading zeros", 336);
    memcpy(&v6, &v3, 700);
    v9 = 1126449662918784 | *((long long *)&v4);
    v10 = *((int *)&v5);
    clap_builder::builder::arg::Arg::new::h44f368f26e40926b(&v3, "helpt", 4);
    clap_builder::builder::arg::Arg::long::he99126bf183af45a(&v0, &v3, "helpt", 4);
    clap_builder::builder::arg::Arg::help::h8b61f4007585e044(&v3, &v0, "Print help information.body-numberinguse STYLE for numbering body linesSTYLEsection-delimiteruse CC for separating logical pagesCCuse STYLE for numbering footer linesuse STYLE for numbering header linesline-incrementline number increment at each lineNUMBER", 23);
    clap_builder::builder::arg::Arg::action::he34be3aec48eea3d(&v0, &v3, 5);
    clap_builder::builder::command::Command::arg::h47326fbf44751a69(&v3, &v6, &v0);
    clap_builder::builder::arg::Arg::new::h44f368f26e40926b(&v6, "fileEDOMmode{", 4);
    memcpy(&v0, &v6, 584);
    v1 = *((int *)&v7) | 4;
    v2 = *((int *)&v8);
    clap_builder::builder::arg::Arg::action::he34be3aec48eea3d(&v6, &v0, 1);
    clap_builder::builder::arg::Arg::value_hint::h60190d51d1c5eb8b(&v0, &v6, 3);
    clap_builder::builder::command::Command::arg::h47326fbf44751a69(&v6, &v3, &v0);
    clap_builder::builder::arg::Arg::new::h44f368f26e40926b(&v3, "body-numberinguse STYLE for numbering body linesSTYLEsection-delimiteruse CC for separating logical pagesCCuse STYLE for numbering footer linesuse STYLE for numbering header linesline-incrementline number increment at each lineNUMBERgroup of NUMBER empty l", 14);
    clap_builder::builder::arg::Arg::short::hb89f1ce4d7c5bc2c(&v0, &v3, 98);
    clap_builder::builder::arg::Arg::long::he99126bf183af45a(&v3, &v0, "body-numberinguse STYLE for numbering body linesSTYLEsection-delimiteruse CC for separating logical pagesCCuse STYLE for numbering footer linesuse STYLE for numbering header linesline-incrementline number increment at each lineNUMBERgroup of NUMBER empty l", 14);
    clap_builder::builder::arg::Arg::help::h8b61f4007585e044(&v0, &v3, "use STYLE for numbering body linesSTYLEsection-delimiteruse CC for separating logical pagesCCuse STYLE for numbering footer linesuse STYLE for numbering header linesline-incrementline number increment at each lineNUMBERgroup of NUMBER empty lines counted a", 34);
    clap_builder::builder::arg::Arg::value_name::h72b97bc36a496091(&v11, &v0, "STYLEsection-delimiteruse CC for separating logical pagesCCuse STYLE for numbering footer linesuse STYLE for numbering header linesline-incrementline number increment at each lineNUMBERgroup of NUMBER empty lines counted as onenumber-formatinsert line numb", 5);
    clap_builder::builder::command::Command::arg::h47326fbf44751a69(&v3, &v6, &v11);
    clap_builder::builder::arg::Arg::new::h44f368f26e40926b(&v6, "section-delimiteruse CC for separating logical pagesCCuse STYLE for numbering footer linesuse STYLE for numbering header linesline-incrementline number increment at each lineNUMBERgroup of NUMBER empty lines counted as onenumber-formatinsert line numbers a", 17);
    clap_builder::builder::arg::Arg::short::hb89f1ce4d7c5bc2c(&v0, &v6, 100);
    clap_builder::builder::arg::Arg::long::he99126bf183af45a(&v6, &v0, "section-delimiteruse CC for separating logical pagesCCuse STYLE for numbering footer linesuse STYLE for numbering header linesline-incrementline number increment at each lineNUMBERgroup of NUMBER empty lines counted as onenumber-formatinsert line numbers a", 17);
    clap_builder::builder::arg::Arg::help::h8b61f4007585e044(&v0, &v6, "use CC for separating logical pagesCCuse STYLE for numbering footer linesuse STYLE for numbering header linesline-incrementline number increment at each lineNUMBERgroup of NUMBER empty lines counted as onenumber-formatinsert line numbers according to FORMA", 35);
    clap_builder::builder::arg::Arg::value_name::h72b97bc36a496091(&v11, &v0, "CCuse STYLE for numbering footer linesuse STYLE for numbering header linesline-incrementline number increment at each lineNUMBERgroup of NUMBER empty lines counted as onenumber-formatinsert line numbers according to FORMATFORMATno-renumberdo not reset line", 2);
    clap_builder::builder::command::Command::arg::h47326fbf44751a69(&v6, &v3, &v11);
    clap_builder::builder::arg::Arg::new::h44f368f26e40926b(&v3, &g_460e70, 16);
    clap_builder::builder::arg::Arg::short::hb89f1ce4d7c5bc2c(&v0, &v3, 102);
    clap_builder::builder::arg::Arg::long::he99126bf183af45a(&v3, &v0, &g_460e70, 16);
    clap_builder::builder::arg::Arg::help::h8b61f4007585e044(&v0, &v3, "use STYLE for numbering footer linesuse STYLE for numbering header linesline-incrementline number increment at each lineNUMBERgroup of NUMBER empty lines counted as onenumber-formatinsert line numbers according to FORMATFORMATno-renumberdo not reset line n", 36);
    clap_builder::builder::arg::Arg::value_name::h72b97bc36a496091(&v11, &v0, "STYLEsection-delimiteruse CC for separating logical pagesCCuse STYLE for numbering footer linesuse STYLE for numbering header linesline-incrementline number increment at each lineNUMBERgroup of NUMBER empty lines counted as onenumber-formatinsert line numb", 5);
    clap_builder::builder::command::Command::arg::h47326fbf44751a69(&v3, &v6, &v11);
    clap_builder::builder::arg::Arg::new::h44f368f26e40926b(&v6, "header-numbering", 16);
    clap_builder::builder::arg::Arg::short::hb89f1ce4d7c5bc2c(&v0, &v6, 104);
    clap_builder::builder::arg::Arg::long::he99126bf183af45a(&v6, &v0, "header-numbering", 16);
    clap_builder::builder::arg::Arg::help::h8b61f4007585e044(&v0, &v6, "use STYLE for numbering header linesline-incrementline number increment at each lineNUMBERgroup of NUMBER empty lines counted as onenumber-formatinsert line numbers according to FORMATFORMATno-renumberdo not reset line numbers at logical pagesadd STRING af", 36);
    clap_builder::builder::arg::Arg::value_name::h72b97bc36a496091(&v11, &v0, "STYLEsection-delimiteruse CC for separating logical pagesCCuse STYLE for numbering footer linesuse STYLE for numbering header linesline-incrementline number increment at each lineNUMBERgroup of NUMBER empty lines counted as onenumber-formatinsert line numb", 5);
    clap_builder::builder::command::Command::arg::h47326fbf44751a69(&v6, &v3, &v11);
    clap_builder::builder::arg::Arg::new::h44f368f26e40926b(&v3, "line-incrementline number increment at each lineNUMBERgroup of NUMBER empty lines counted as onenumber-formatinsert line numbers according to FORMATFORMATno-renumberdo not reset line numbers at logical pagesadd STRING after (possible) line numberSTRINGstar", 14);
    clap_builder::builder::arg::Arg::short::hb89f1ce4d7c5bc2c(&v0, &v3, 105);
    clap_builder::builder::arg::Arg::long::he99126bf183af45a(&v3, &v0, "line-incrementline number increment at each lineNUMBERgroup of NUMBER empty lines counted as onenumber-formatinsert line numbers according to FORMATFORMATno-renumberdo not reset line numbers at logical pagesadd STRING after (possible) line numberSTRINGstar", 14);
    clap_builder::builder::arg::Arg::help::h8b61f4007585e044(&v0, &v3, "line number increment at each lineNUMBERgroup of NUMBER empty lines counted as onenumber-formatinsert line numbers according to FORMATFORMATno-renumberdo not reset line numbers at logical pagesadd STRING after (possible) line numberSTRINGstarting-line-numb", 34);
    clap_builder::builder::arg::Arg::value_name::h72b97bc36a496091(&v3, &v0, "NUMBERgroup of NUMBER empty lines counted as onenumber-formatinsert line numbers according to FORMATFORMATno-renumberdo not reset line numbers at logical pagesadd STRING after (possible) line numberSTRINGstarting-line-numberfirst line number on each logica", 6);
    _$LT$i64$u20$as$u20$clap_builder..builder..value_parser..ValueParserFactory$GT$::value_parser::h49a810d89a08e531(&v11, v19);
    clap_builder::builder::arg::Arg::value_parser::h4e017dd67ef25d56(&v0, &v3, &v11);
    clap_builder::builder::command::Command::arg::h47326fbf44751a69(&v3, &v6, &v0);
    clap_builder::builder::arg::Arg::new::h44f368f26e40926b(&v6, "join-blank-lines", 16);
    clap_builder::builder::arg::Arg::short::hb89f1ce4d7c5bc2c(&v0, &v6, 108);
    clap_builder::builder::arg::Arg::long::he99126bf183af45a(&v6, &v0, "join-blank-lines", 16);
    clap_builder::builder::arg::Arg::help::h8b61f4007585e044(&v0, &v6, "group of NUMBER empty lines counted as onenumber-formatinsert line numbers according to FORMATFORMATno-renumberdo not reset line numbers at logical pagesadd STRING after (possible) line numberSTRINGstarting-line-numberfirst line number on each logical page", 42);
    clap_builder::builder::arg::Arg::value_name::h72b97bc36a496091(&v6, &v0, "NUMBERgroup of NUMBER empty lines counted as onenumber-formatinsert line numbers according to FORMATFORMATno-renumberdo not reset line numbers at logical pagesadd STRING after (possible) line numberSTRINGstarting-line-numberfirst line number on each logica", 6);
    _$LT$u64$u20$as$u20$clap_builder..builder..value_parser..ValueParserFactory$GT$::value_parser::hb2c940b47939cb64(&v11);
    clap_builder::builder::arg::Arg::value_parser::hb966a35be36ae890(&v0, &v6, &v11);
    clap_builder::builder::command::Command::arg::h47326fbf44751a69(&v6, &v3, &v0);
    clap_builder::builder::arg::Arg::new::h44f368f26e40926b(&v3, "number-formatinsert line numbers according to FORMATFORMATno-renumberdo not reset line numbers at logical pagesadd STRING after (possible) line numberSTRINGstarting-line-numberfirst line number on each logical pagenumber-widthuse NUMBER columns for line nu", 13);
    clap_builder::builder::arg::Arg::short::hb89f1ce4d7c5bc2c(&v0, &v3, 110);
    clap_builder::builder::arg::Arg::long::he99126bf183af45a(&v3, &v0, "number-formatinsert line numbers according to FORMATFORMATno-renumberdo not reset line numbers at logical pagesadd STRING after (possible) line numberSTRINGstarting-line-numberfirst line number on each logical pagenumber-widthuse NUMBER columns for line nu", 13);
    clap_builder::builder::arg::Arg::help::h8b61f4007585e044(&v0, &v3, "insert line numbers according to FORMATFORMATno-renumberdo not reset line numbers at logical pagesadd STRING after (possible) line numberSTRINGstarting-line-numberfirst line number on each logical pagenumber-widthuse NUMBER columns for line numbers..... is", 39);
    clap_builder::builder::arg::Arg::value_name::h72b97bc36a496091(&v3, &v0, "FORMATno-renumberdo not reset line numbers at logical pagesadd STRING after (possible) line numberSTRINGstarting-line-numberfirst line number on each logical pagenumber-widthuse NUMBER columns for line numbers..... is not in a Display implementation return", 6);
    v11 = "lnrnrzinternal error: entered unreachable code: Should have been caught by clap-";
    v12 = 2;
    v13 = "rnrzinternal error: entered unreachable code: Should have been caught by clap-";
    v14 = 2;
    v15 = "rzinternal error: entered unreachable code: Should have been caught by clap-";
    v16 = 2;
    clap_builder::builder::arg::Arg::value_parser::hc89b69345b3b823d(&v0, &v3, &v11);
    clap_builder::builder::command::Command::arg::h47326fbf44751a69(&v3, &v6, &v0);
    clap_builder::builder::arg::Arg::new::h44f368f26e40926b(&v6, "no-renumberdo not reset line numbers at logical pagesadd STRING after (possible) line numberSTRINGstarting-line-numberfirst line number on each logical pagenumber-widthuse NUMBER columns for line numbers..... is not in a Display implementation returned an ", 11);
    clap_builder::builder::arg::Arg::short::hb89f1ce4d7c5bc2c(&v0, &v6, 112);
    clap_builder::builder::arg::Arg::long::he99126bf183af45a(&v6, &v0, "no-renumberdo not reset line numbers at logical pagesadd STRING after (possible) line numberSTRINGstarting-line-numberfirst line number on each logical pagenumber-widthuse NUMBER columns for line numbers..... is not in a Display implementation returned an ", 11);
    clap_builder::builder::arg::Arg::help::h8b61f4007585e044(&v0, &v6, "do not reset line numbers at logical pagesadd STRING after (possible) line numberSTRINGstarting-line-numberfirst line number on each logical pagenumber-widthuse NUMBER columns for line numbers..... is not in a Display implementation returned an error unexp", 42);
    clap_builder::builder::arg::Arg::action::he34be3aec48eea3d(&v11, &v0, 3);
    clap_builder::builder::command::Command::arg::h47326fbf44751a69(&v6, &v3, &v11);
    clap_builder::builder::arg::Arg::new::h44f368f26e40926b(&v3, "number-separator", 16);
    clap_builder::builder::arg::Arg::short::hb89f1ce4d7c5bc2c(&v0, &v3, 115);
    clap_builder::builder::arg::Arg::long::he99126bf183af45a(&v3, &v0, "number-separator", 16);
    clap_builder::builder::arg::Arg::help::h8b61f4007585e044(&v0, &v3, "add STRING after (possible) line numberSTRINGstarting-line-numberfirst line number on each logical pagenumber-widthuse NUMBER columns for line numbers..... is not in a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda7279617", 39);
    clap_builder::builder::arg::Arg::value_name::h72b97bc36a496091(&v11, &v0, "STRINGstarting-line-numberfirst line number on each logical pagenumber-widthuse NUMBER columns for line numbers..... is not in a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.r", 6);
    clap_builder::builder::command::Command::arg::h47326fbf44751a69(&v3, &v6, &v11);
    clap_builder::builder::arg::Arg::new::h44f368f26e40926b(&v6, "starting-line-numberfirst line number on each logical pagenumber-widthuse NUMBER columns for line numbers..... is not in a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs", 20);
    clap_builder::builder::arg::Arg::short::hb89f1ce4d7c5bc2c(&v0, &v6, 118);
    clap_builder::builder::arg::Arg::long::he99126bf183af45a(&v6, &v0, "starting-line-numberfirst line number on each logical pagenumber-widthuse NUMBER columns for line numbers..... is not in a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs", 20);
    clap_builder::builder::arg::Arg::help::h8b61f4007585e044(&v0, &v6, "first line number on each logical pagenumber-widthuse NUMBER columns for line numbers..... is not in a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs", 38);
    clap_builder::builder::arg::Arg::value_name::h72b97bc36a496091(&v6, &v0, "NUMBERgroup of NUMBER empty lines counted as onenumber-formatinsert line numbers according to FORMATFORMATno-renumberdo not reset line numbers at logical pagesadd STRING after (possible) line numberSTRINGstarting-line-numberfirst line number on each logica", 6);
    _$LT$i64$u20$as$u20$clap_builder..builder..value_parser..ValueParserFactory$GT$::value_parser::h49a810d89a08e531(&v11, v19);
    clap_builder::builder::arg::Arg::value_parser::h4e017dd67ef25d56(&v0, &v6, &v11);
    clap_builder::builder::command::Command::arg::h47326fbf44751a69(&v6, &v3, &v0);
    clap_builder::builder::arg::Arg::new::h44f368f26e40926b(&v3, "number-widthuse NUMBER columns for line numbers..... is not in a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs", 12);
    clap_builder::builder::arg::Arg::short::hb89f1ce4d7c5bc2c(&v0, &v3, 119);
    clap_builder::builder::arg::Arg::long::he99126bf183af45a(&v3, &v0, "number-widthuse NUMBER columns for line numbers..... is not in a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs", 12);
    clap_builder::builder::arg::Arg::help::h8b61f4007585e044(&v0, &v3, "use NUMBER columns for line numbers..... is not in a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs", 35);
    clap_builder::builder::arg::Arg::value_name::h72b97bc36a496091(&v3, &v0, "NUMBERgroup of NUMBER empty lines counted as onenumber-formatinsert line numbers according to FORMATFORMATno-renumberdo not reset line numbers at logical pagesadd STRING after (possible) line numberSTRINGstarting-line-numberfirst line number on each logica", 6);
    v11 = 4;
    v12 = ::0x5ac4f0::alloc::boxed::Box$LT$T$GT$::new::h256edf188ae77d63();
    v13 = &g_6d9aa8;
    clap_builder::builder::arg::Arg::value_parser::hd5dbec673a1006bb(&v0, &v3, &v11);
    clap_builder::builder::command::Command::arg::h47326fbf44751a69(a0, &v6, &v0);
    return a0;
}
