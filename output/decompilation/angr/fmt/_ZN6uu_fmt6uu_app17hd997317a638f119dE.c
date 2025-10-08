long long uu_fmt::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab0]
    unsigned int v1;  // [bp-0x838]
    unsigned int v2;  // [bp-0x834]
    char v3;  // [bp-0x830]
    unsigned int v4;  // [bp-0x5b8]
    unsigned int v5;  // [bp-0x5b4]
    unsigned long long v6;  // [bp-0x574]
    unsigned int v7;  // [bp-0x56c]
    char v8;  // [bp-0x568]
    unsigned long v9;  // [bp-0x2ac]
    unsigned int v10;  // [bp-0x2a4]
    char v11;  // [bp-0x2a0]
    unsigned long long v14;  // rdx

    v3.new(uucore::util_name(), v14);
    v8.version(&v3);
    v3.about(&v8);
    uucore::format_usage(&v0, "{} [-WIDTH] [OPTION]... [FILE]...First and second line of paragraph may have different indentations, in which case the first line's indentation is preserved, and each subsequent line's indentation matches the second line.Like -c, except that the first and ", 33);
    v8.override_usage(&v3, &v0);
    memcpy(&v3, &v8, 700);
    v6 = 584115552392 | v9;
    v7 = v10;
    v8.new("crown-marginuniform-spacingquicksplit-onlyexact-prefixskip-prefixprefixtab-width-read errorcannot open  for readingcannot get metadata for ", 12);
    v0.short(&v8, 99);
    v8.long(&v0, "crown-marginuniform-spacingquicksplit-onlyexact-prefixskip-prefixprefixtab-width-read errorcannot open  for readingcannot get metadata for ", 12);
    v0.help(&v8, "First and second line of paragraph may have different indentations, in which case the first line's indentation is preserved, and each subsequent line's indentation matches the second line.Like -c, except that the first and second line of a paragraph *must*", 188);
    v11.action(&v0, 2);
    v8.arg(&v3, &v11);
    v3.new("tagged-paragraph[short aliases: DASHED_UNDERLINE", 16);
    v0.short(&v3, 116);
    v3.long(&v0, "tagged-paragraph[short aliases: DASHED_UNDERLINE", 16);
    v0.help(&v3, "Like -c, except that the first and second line of a paragraph *must* have different indentation or they are treated as separate paragraphs.Attempt to detect and preserve mail headers in the input. Be careful when combining this flag with -p.Insert exactly ", 139);
    v11.action(&v0, 2);
    v3.arg(&v8, &v11);
    v8.new("preserve-headersDOUBLE_UNDERLINE", 16);
    v0.short(&v8, 109);
    v8.long(&v0, "preserve-headersDOUBLE_UNDERLINE", 16);
    v0.help(&v8, "Attempt to detect and preserve mail headers in the input. Be careful when combining this flag with -p.Insert exactly one space between words, and two between sentences. Sentence breaks in the input are detected as [?!.] followed by two spaces or a newline;", 102);
    v11.action(&v0, 2);
    v8.arg(&v3, &v11);
    v3.new("split-onlyexact-prefixskip-prefixprefixtab-width-read errorcannot open  for readingcannot get metadata for ", 10);
    v0.short(&v3, 115);
    v3.long(&v0, "split-onlyexact-prefixskip-prefixprefixtab-width-read errorcannot open  for readingcannot get metadata for ", 10);
    v0.help(&v3, "Split lines only, do not reflow.assertion failed: idx < CAPACITYsrc/uucore/src/lib/mods/error.rsFormatting argument out of rangelibrary/std/src/sys/args/unix.rs: ", 32);
    v11.action(&v0, 2);
    v3.arg(&v8, &v11);
    v8.new("uniform-spacingquicksplit-onlyexact-prefixskip-prefixprefixtab-width-read errorcannot open  for readingcannot get metadata for ", 15);
    v0.short(&v8, 117);
    v8.long(&v0, "uniform-spacingquicksplit-onlyexact-prefixskip-prefixprefixtab-width-read errorcannot open  for readingcannot get metadata for ", 15);
    v0.help(&v8, "Insert exactly one space between words, and two between sentences. Sentence breaks in the input are detected as [?!.] followed by two spaces or a newline; other punctuation is not interpreted as a sentence break.Reformat only lines beginning with PREFIX, r", 212);
    v11.action(&v0, 2);
    v8.arg(&v3, &v11);
    v3.new("prefixtab-width-read errorcannot open  for readingcannot get metadata for ", 6);
    v0.short(&v3, 112);
    v3.long(&v0, "prefixtab-width-read errorcannot open  for readingcannot get metadata for ", 6);
    v0.help(&v3, "Reformat only lines beginning with PREFIX, reattaching PREFIX to reformatted lines. Unless -x is specified, leading whitespace will be ignored when matching PREFIX.PREFIXDo not reformat lines beginning with PSKIP. Unless -X is specified, leading whitespace", 164);
    v11.value_name(&v0, "PREFIXDo not reformat lines beginning with PSKIP. Unless -X is specified, leading whitespace will be ignored when matching PSKIPPSKIPPREFIX must match at the beginning of the line with no preceding whitespace.exact-skip-prefixPSKIP must match at the beginn", 6);
    v3.arg(&v8, &v11);
    v8.new("skip-prefixprefixtab-width-read errorcannot open  for readingcannot get metadata for ", 11);
    v0.short(&v8, 80);
    v8.long(&v0, "skip-prefixprefixtab-width-read errorcannot open  for readingcannot get metadata for ", 11);
    v0.help(&v8, "Do not reformat lines beginning with PSKIP. Unless -X is specified, leading whitespace will be ignored when matching PSKIPPSKIPPREFIX must match at the beginning of the line with no preceding whitespace.exact-skip-prefixPSKIP must match at the beginning of", 122);
    v11.value_name(&v0, "PSKIPPREFIX must match at the beginning of the line with no preceding whitespace.exact-skip-prefixPSKIP must match at the beginning of the line with no preceding whitespace.Fill output lines up to a maximum of WIDTH columns, default 75. This can be specifi", 5);
    v8.arg(&v3, &v11);
    v3.new("exact-prefixskip-prefixprefixtab-width-read errorcannot open  for readingcannot get metadata for ", 12);
    v0.short(&v3, 120);
    v3.long(&v0, "exact-prefixskip-prefixprefixtab-width-read errorcannot open  for readingcannot get metadata for ", 12);
    v0.help(&v3, "PREFIX must match at the beginning of the line with no preceding whitespace.exact-skip-prefixPSKIP must match at the beginning of the line with no preceding whitespace.Fill output lines up to a maximum of WIDTH columns, default 75. This can be specified as", 76);
    v11.action(&v0, 2);
    v3.arg(&v8, &v11);
    v8.new("exact-skip-prefixPSKIP must match at the beginning of the line with no preceding whitespace.Fill output lines up to a maximum of WIDTH columns, default 75. This can be specified as a negative number in the first argument.WIDTHGoal width, default of 93% of ", 17);
    v0.short(&v8, 88);
    v8.long(&v0, "exact-skip-prefixPSKIP must match at the beginning of the line with no preceding whitespace.Fill output lines up to a maximum of WIDTH columns, default 75. This can be specified as a negative number in the first argument.WIDTHGoal width, default of 93% of ", 17);
    v0.help(&v8, "PSKIP must match at the beginning of the line with no preceding whitespace.Fill output lines up to a maximum of WIDTH columns, default 75. This can be specified as a negative number in the first argument.WIDTHGoal width, default of 93% of WIDTH. Must be le", 75);
    v11.action(&v0, 2);
    v8.arg(&v3, &v11);
    v3.new("width(uutils coreutils) 0.0.30Reformat paragraphs from input files (or stdin) to stdout.{} [-WIDTH] [OPTION]... [FILE]...First and second line of paragraph may have different indentations, in which case the first line's indentation is preserved, and each s", 5);
    v0.short(&v3, 119);
    v3.long(&v0, "width(uutils coreutils) 0.0.30Reformat paragraphs from input files (or stdin) to stdout.{} [-WIDTH] [OPTION]... [FILE]...First and second line of paragraph may have different indentations, in which case the first line's indentation is preserved, and each s", 5);
    v0.help(&v3, "Fill output lines up to a maximum of WIDTH columns, default 75. This can be specified as a negative number in the first argument.WIDTHGoal width, default of 93% of WIDTH. Must be less than or equal to WIDTH.Break lines more quickly at the expense of a pote", 129);
    v11.value_name(&v0, "WIDTHGoal width, default of 93% of WIDTH. Must be less than or equal to WIDTH.Break lines more quickly at the expense of a potentially more ragged appearance.Treat tabs as TABWIDTH spaces for determining line length, default 8. Note that this is used only ", 5);
    v3.arg(&v8, &v11);
    v8.new("goalBlue", 4);
    v0.short(&v8, 103);
    v8.long(&v0, "goalBlue", 4);
    v0.help(&v8, "Goal width, default of 93% of WIDTH. Must be less than or equal to WIDTH.Break lines more quickly at the expense of a potentially more ragged appearance.Treat tabs as TABWIDTH spaces for determining line length, default 8. Note that this is used only for c", 73);
    v11.value_name(&v0, "GOALi128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGESTRPIPENotFoundTimedOutENETDOWN\n       ", 4);
    v8.arg(&v3, &v11);
    v3.new("quicksplit-onlyexact-prefixskip-prefixprefixtab-width-read errorcannot open  for readingcannot get metadata for ", 5);
    v0.short(&v3, 113);
    v3.long(&v0, "quicksplit-onlyexact-prefixskip-prefixprefixtab-width-read errorcannot open  for readingcannot get metadata for ", 5);
    v0.help(&v3, "Break lines more quickly at the expense of a potentially more ragged appearance.Treat tabs as TABWIDTH spaces for determining line length, default 8. Note that this is used only for calculating line lengths; tabs are preserved in the output.FILES", 80);
    v11.action(&v0, 2);
    v3.arg(&v8, &v11);
    v8.new("tab-width-read errorcannot open  for readingcannot get metadata for ", 9);
    v0.short(&v8, 84);
    v8.long(&v0, "tab-width-read errorcannot open  for readingcannot get metadata for ", 9);
    v0.help(&v8, "Treat tabs as TABWIDTH spaces for determining line length, default 8. Note that this is used only for calculating line lengths; tabs are preserved in the output.FILES", 161);
    v11.value_name(&v0, "TABWIDTH'; only ", 8);
    v8.arg(&v3, &v11);
    v3.new("filesa negative number should be at least two characters longinvalid option -- ; -WIDTH is recognized only when it is the first\noption; use -w N insteadsrc/uu/fmt/src/fmt.rsinvalid width: ", 5);
    v0.action(&v3, 1);
    v3.value_name(&v0, "FILES", 5);
    v0.value_hint(&v3);
    memcpy(&v3, &v0, 632);
    v4 = v1 | 64;
    v5 = v2;
    a0.arg(&v8, &v3);
    return a0;
}
