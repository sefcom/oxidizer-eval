long long uu_nl::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab0]
    unsigned int v1;  // [bp-0x838]
    unsigned int v2;  // [bp-0x834]
    char v3;  // [bp-0x830]
    unsigned long v4;  // [bp-0x574]
    unsigned int v5;  // [bp-0x56c]
    char v6;  // [bp-0x568]
    unsigned int v7;  // [bp-0x2f0]
    char v8;  // [bp-0x2ec]
    unsigned long long v9;  // [bp-0x2ac]
    unsigned int v10;  // [bp-0x2a4]
    char v11;  // [bp-0x2a0], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x298]
    unsigned long long v13;  // [bp-0x290]
    unsigned long long v14;  // [bp-0x288]
    unsigned long long v15;  // [bp-0x280]
    unsigned long long v16;  // [bp-0x278]
    unsigned long long v19;  // rdx
    unsigned long long v20;  // rsi

    v3.new(uucore::util_name(), v19);
    v6.about(&v3);
    v3.version(&v6);
    uucore::format_usage(&v0, "{} [OPTION]... [FILE]...STYLE is one of:\n\n* a     number all lines\n* t     number only nonempty lines\n* n     number no lines\n* pBRE  number only lines that contain a match for the basic regular\n        expression, BRE\n\nFORMAT is one of:\n\n* ln    left just", 24);
    v6.override_usage(&v3, &v0);
    v3.after_help(&v6);
    memcpy(&v6, &v3, 700);
    v9 = 2252349570023552 | v4;
    v10 = v5;
    v3.new("helpt", 4);
    v0.long(&v3, "helpt", 4);
    v3.help(&v0, "Print help information.use STYLE for numbering body linesSTYLEuse CC for separating logical pagesCCuse STYLE for numbering footer linesuse STYLE for numbering header linesline number increment at each lineNUMBERgroup of NUMBER empty lines counted as oneins", 23);
    v0.action(&v3, 5);
    v3.arg(&v6, &v0);
    v6.new("fileEDOMmode{", 4);
    memcpy(&v0, &v6, 632);
    v1 = v7 | 4;
    v2 = *((int *)&v8);
    v6.action(&v0, 1);
    v0.value_hint(&v6);
    v6.arg(&v3, &v0);
    v3.new("body-numberingnumber-widthline-incrementstarting-line-number\\:\tatninvalid regular expressioninvalid numbering style: ''src/uu/nl/src/nl.rs", 14);
    v0.short(&v3, 98);
    v3.long(&v0, "body-numberingnumber-widthline-incrementstarting-line-number\\:\tatninvalid regular expressioninvalid numbering style: ''src/uu/nl/src/nl.rs", 14);
    v0.help(&v3, "use STYLE for numbering body linesSTYLEuse CC for separating logical pagesCCuse STYLE for numbering footer linesuse STYLE for numbering header linesline number increment at each lineNUMBERgroup of NUMBER empty lines counted as oneinsert line numbers accord", 34);
    v11.value_name(&v0, "STYLEuse CC for separating logical pagesCCuse STYLE for numbering footer linesuse STYLE for numbering header linesline number increment at each lineNUMBERgroup of NUMBER empty lines counted as oneinsert line numbers according to FORMATFORMATdo not reset li", 5);
    v3.arg(&v6, &v11);
    v6.new("section-delimiternumber-formatsrc/uu/nl/src/helper.rs", 17);
    v0.short(&v6, 100);
    v6.long(&v0, "section-delimiternumber-formatsrc/uu/nl/src/helper.rs", 17);
    v0.help(&v6, "use CC for separating logical pagesCCuse STYLE for numbering footer linesuse STYLE for numbering header linesline number increment at each lineNUMBERgroup of NUMBER empty lines counted as oneinsert line numbers according to FORMATFORMATdo not reset line nu", 35);
    v11.value_name(&v0, "CCuse STYLE for numbering footer linesuse STYLE for numbering header linesline number increment at each lineNUMBERgroup of NUMBER empty lines counted as oneinsert line numbers according to FORMATFORMATdo not reset line numbers at logical pagesadd STRING af", 2);
    v6.arg(&v3, &v11);
    v3.new(&g_44e410, 16);
    v0.short(&v3, 102);
    v3.long(&v0, &g_44e410, 16);
    v0.help(&v3, "use STYLE for numbering footer linesuse STYLE for numbering header linesline number increment at each lineNUMBERgroup of NUMBER empty lines counted as oneinsert line numbers according to FORMATFORMATdo not reset line numbers at logical pagesadd STRING afte", 36);
    v11.value_name(&v0, "STYLEuse CC for separating logical pagesCCuse STYLE for numbering footer linesuse STYLE for numbering header linesline number increment at each lineNUMBERgroup of NUMBER empty lines counted as oneinsert line numbers according to FORMATFORMATdo not reset li", 5);
    v3.arg(&v6, &v11);
    v6.new("header-numbering", 16);
    v0.short(&v6, 104);
    v6.long(&v0, "header-numbering", 16);
    v0.help(&v6, "use STYLE for numbering header linesline number increment at each lineNUMBERgroup of NUMBER empty lines counted as oneinsert line numbers according to FORMATFORMATdo not reset line numbers at logical pagesadd STRING after (possible) line numberSTRINGfirst ", 36);
    v11.value_name(&v0, "STYLEuse CC for separating logical pagesCCuse STYLE for numbering footer linesuse STYLE for numbering header linesline number increment at each lineNUMBERgroup of NUMBER empty lines counted as oneinsert line numbers according to FORMATFORMATdo not reset li", 5);
    v6.arg(&v3, &v11);
    v3.new("line-incrementstarting-line-number\\:\tatninvalid regular expressioninvalid numbering style: ''src/uu/nl/src/nl.rs", 14);
    v0.short(&v3, 105);
    v3.long(&v0, "line-incrementstarting-line-number\\:\tatninvalid regular expressioninvalid numbering style: ''src/uu/nl/src/nl.rs", 14);
    v0.help(&v3, "line number increment at each lineNUMBERgroup of NUMBER empty lines counted as oneinsert line numbers according to FORMATFORMATdo not reset line numbers at logical pagesadd STRING after (possible) line numberSTRINGfirst line number on each logical pageuse NUMBER columns for line numbers", 34);
    v3.value_name(&v0, "NUMBERgroup of NUMBER empty lines counted as oneinsert line numbers according to FORMATFORMATdo not reset line numbers at logical pagesadd STRING after (possible) line numberSTRINGfirst line number on each logical pageuse NUMBER columns for line numbers", 6);
    v11.value_parser(v20);
    v0.value_parser(&v3, &v11);
    v3.arg(&v6, &v0);
    v6.new("join-blank-lines", 16);
    v0.short(&v6, 108);
    v6.long(&v0, "join-blank-lines", 16);
    v0.help(&v6, "group of NUMBER empty lines counted as oneinsert line numbers according to FORMATFORMATdo not reset line numbers at logical pagesadd STRING after (possible) line numberSTRINGfirst line number on each logical pageuse NUMBER columns for line numbers", 42);
    v6.value_name(&v0, "NUMBERgroup of NUMBER empty lines counted as oneinsert line numbers according to FORMATFORMATdo not reset line numbers at logical pagesadd STRING after (possible) line numberSTRINGfirst line number on each logical pageuse NUMBER columns for line numbers", 6);
    v11.value_parser();
    v0.value_parser(&v6, &v11);
    v6.arg(&v3, &v0);
    v3.new("number-formatsrc/uu/nl/src/helper.rs", 13);
    v0.short(&v3, 110);
    v3.long(&v0, "number-formatsrc/uu/nl/src/helper.rs", 13);
    v0.help(&v3, "insert line numbers according to FORMATFORMATdo not reset line numbers at logical pagesadd STRING after (possible) line numberSTRINGfirst line number on each logical pageuse NUMBER columns for line numbers", 39);
    v3.value_name(&v0, "FORMATdo not reset line numbers at logical pagesadd STRING after (possible) line numberSTRINGfirst line number on each logical pageuse NUMBER columns for line numbers", 6);
    v11 = "lnrnrzinternal error: entered unreachable code: Should have been caught by clap";
    v12 = 2;
    v13 = "rnrzinternal error: entered unreachable code: Should have been caught by clap";
    v14 = 2;
    v15 = "rzinternal error: entered unreachable code: Should have been caught by clap";
    v16 = 2;
    v0.value_parser(&v3, &v11);
    v3.arg(&v6, &v0);
    v6.new("no-renumbersection-delimiternumber-formatsrc/uu/nl/src/helper.rs", 11);
    v0.short(&v6, 112);
    v6.long(&v0, "no-renumbersection-delimiternumber-formatsrc/uu/nl/src/helper.rs", 11);
    v0.help(&v6, "do not reset line numbers at logical pagesadd STRING after (possible) line numberSTRINGfirst line number on each logical pageuse NUMBER columns for line numbers", 42);
    v11.action(&v0, 3);
    v6.arg(&v3, &v11);
    v3.new("number-separator", 16);
    v0.short(&v3, 115);
    v3.long(&v0, "number-separator", 16);
    v0.help(&v3, "add STRING after (possible) line numberSTRINGfirst line number on each logical pageuse NUMBER columns for line numbers", 39);
    v11.value_name(&v0, "STRINGfirst line number on each logical pageuse NUMBER columns for line numbers", 6);
    v3.arg(&v6, &v11);
    v6.new("starting-line-number\\:\tatninvalid regular expressioninvalid numbering style: ''src/uu/nl/src/nl.rs", 20);
    v0.short(&v6, 118);
    v6.long(&v0, "starting-line-number\\:\tatninvalid regular expressioninvalid numbering style: ''src/uu/nl/src/nl.rs", 20);
    v0.help(&v6, "first line number on each logical pageuse NUMBER columns for line numbers", 38);
    v6.value_name(&v0, "NUMBERgroup of NUMBER empty lines counted as oneinsert line numbers according to FORMATFORMATdo not reset line numbers at logical pagesadd STRING after (possible) line numberSTRINGfirst line number on each logical pageuse NUMBER columns for line numbers", 6);
    v11.value_parser(v20);
    v0.value_parser(&v6, &v11);
    v6.arg(&v3, &v0);
    v3.new("number-widthline-incrementstarting-line-number\\:\tatninvalid regular expressioninvalid numbering style: ''src/uu/nl/src/nl.rs", 12);
    v0.short(&v3, 119);
    v3.long(&v0, "number-widthline-incrementstarting-line-number\\:\tatninvalid regular expressioninvalid numbering style: ''src/uu/nl/src/nl.rs", 12);
    v0.help(&v3, "use NUMBER columns for line numbers", 35);
    v3.value_name(&v0, "NUMBERgroup of NUMBER empty lines counted as oneinsert line numbers according to FORMATFORMATdo not reset line numbers at logical pagesadd STRING after (possible) line numberSTRINGfirst line number on each logical pageuse NUMBER columns for line numbers", 6);
    v11 = 4;
    v12 = core::num::<impl core::str::traits::FromStr for usize>::from_str.new();
    v13 = &g_63a038;
    v0.value_parser(&v3, &v11);
    a0.arg(&v6, &v0);
    return a0;
}
