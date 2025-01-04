long long uu_fmt::uu_app::h6ccf3ffc03c52d4c(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0xa48]
    unsigned int v1;  // [sp-0x800]
    unsigned int v2;  // [sp-0x7fc]
    unsigned long long v3;  // [sp-0x78c]
    unsigned int v4;  // [sp-0x784]
    char v5;  // [bp-0x780]
    char v6;  // [bp-0x538]
    char v7;  // [bp-0x534]
    char v8;  // [bp-0x530]
    char v9;  // [bp-0x274]
    char v10;  // [bp-0x26c]
    char v11;  // [bp-0x268]
    unsigned long long v13;  // rdx

    clap_builder::builder::command::Command::new::h64509807afd7565f(&v0, uucore::util_name::h60d842bf27b05e82(), v13);
    clap_builder::builder::command::Command::version::h111b6abfa6bca800(&v8, &v0, "0.0.28", 6);
    clap_builder::builder::command::Command::about::h0e50f99de4bec37d(&v0, &v8, "Reformat paragraphs from input files (or stdin) to stdout.", 58);
    uucore::format_usage::h76fcb2d15fbabc58(&v5, "{} [-WIDTH] [OPTION]... [FILE]...", 33);
    clap_builder::builder::command::Command::override_usage::hdfab36e8c8490863(&v8, &v0, &v5);
    memcpy(&v0, &v8, 700);
    v3 = 584115552392 | *((long long *)&v9);
    v4 = *((int *)&v10);
    clap_builder::builder::arg::Arg::new::h29936642834bfc08(&v8, "crown-margin", 12);
    clap_builder::builder::arg::Arg::short::h1ba77015f709dd42(&v5, &v8, 99);
    clap_builder::builder::arg::Arg::long::h84f8c5bb34180439(&v8, &v5, "crown-margin", 12);
    clap_builder::builder::arg::Arg::help::h6d505232ae71569a(&v5, &v8, "First and second line of paragraph may have different indentations, in which case the first line's indentation is preserved, and each subsequent line's indentation matches the second line.", 188);
    clap_builder::builder::arg::Arg::action::h5992498d946b2fbf(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::hd7dea545ae1a6041(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new::h29936642834bfc08(&v0, "tagged-paragraph[short aliases: DASHED_UNDERLINE", 16);
    clap_builder::builder::arg::Arg::short::h1ba77015f709dd42(&v5, &v0, 116);
    clap_builder::builder::arg::Arg::long::h84f8c5bb34180439(&v0, &v5, "tagged-paragraph[short aliases: DASHED_UNDERLINE", 16);
    clap_builder::builder::arg::Arg::help::h6d505232ae71569a(&v5, &v0, "Like -c, except that the first and second line of a paragraph *must* have different indentation or they are treated as separate paragraphs.", 139);
    clap_builder::builder::arg::Arg::action::h5992498d946b2fbf(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::hd7dea545ae1a6041(&v0, &v8, &v11);
    clap_builder::builder::arg::Arg::new::h29936642834bfc08(&v8, "preserve-headersDOUBLE_UNDERLINE", 16);
    clap_builder::builder::arg::Arg::short::h1ba77015f709dd42(&v5, &v8, 109);
    clap_builder::builder::arg::Arg::long::h84f8c5bb34180439(&v8, &v5, "preserve-headersDOUBLE_UNDERLINE", 16);
    clap_builder::builder::arg::Arg::help::h6d505232ae71569a(&v5, &v8, "Attempt to detect and preserve mail headers in the input. Be careful when combining this flag with -p.", 102);
    clap_builder::builder::arg::Arg::action::h5992498d946b2fbf(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::hd7dea545ae1a6041(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new::h29936642834bfc08(&v0, "split-only", 10);
    clap_builder::builder::arg::Arg::short::h1ba77015f709dd42(&v5, &v0, 115);
    clap_builder::builder::arg::Arg::long::h84f8c5bb34180439(&v0, &v5, "split-only", 10);
    clap_builder::builder::arg::Arg::help::h6d505232ae71569a(&v5, &v0, "Split lines only, do not reflow.", 32);
    clap_builder::builder::arg::Arg::action::h5992498d946b2fbf(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::hd7dea545ae1a6041(&v0, &v8, &v11);
    clap_builder::builder::arg::Arg::new::h29936642834bfc08(&v8, "uniform-spacing", 15);
    clap_builder::builder::arg::Arg::short::h1ba77015f709dd42(&v5, &v8, 117);
    clap_builder::builder::arg::Arg::long::h84f8c5bb34180439(&v8, &v5, "uniform-spacing", 15);
    clap_builder::builder::arg::Arg::help::h6d505232ae71569a(&v5, &v8, "Insert exactly one space between words, and two between sentences. Sentence breaks in the input are detected as [?!.] followed by two spaces or a newline; other punctuation is not interpreted as a sentence break.", 212);
    clap_builder::builder::arg::Arg::action::h5992498d946b2fbf(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::hd7dea545ae1a6041(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new::h29936642834bfc08(&v0, "prefix", 6);
    clap_builder::builder::arg::Arg::short::h1ba77015f709dd42(&v5, &v0, 112);
    clap_builder::builder::arg::Arg::long::h84f8c5bb34180439(&v0, &v5, "prefix", 6);
    clap_builder::builder::arg::Arg::help::h6d505232ae71569a(&v5, &v0, "Reformat only lines beginning with PREFIX, reattaching PREFIX to reformatted lines. Unless -x is specified, leading whitespace will be ignored when matching PREFIX.", 164);
    clap_builder::builder::arg::Arg::value_name::h8b63a1c1086fdff9(&v11, &v5, "PREFIX", 6);
    clap_builder::builder::command::Command::arg::hd7dea545ae1a6041(&v0, &v8, &v11);
    clap_builder::builder::arg::Arg::new::h29936642834bfc08(&v8, "skip-prefixinvalid goal: ", 11);
    clap_builder::builder::arg::Arg::short::h1ba77015f709dd42(&v5, &v8, 80);
    clap_builder::builder::arg::Arg::long::h84f8c5bb34180439(&v8, &v5, "skip-prefixinvalid goal: ", 11);
    clap_builder::builder::arg::Arg::help::h6d505232ae71569a(&v5, &v8, "Do not reformat lines beginning with PSKIP. Unless -X is specified, leading whitespace will be ignored when matching PSKIP", 122);
    clap_builder::builder::arg::Arg::value_name::h8b63a1c1086fdff9(&v11, &v5, "PSKIP", 5);
    clap_builder::builder::command::Command::arg::hd7dea545ae1a6041(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new::h29936642834bfc08(&v0, "exact-prefix", 12);
    clap_builder::builder::arg::Arg::short::h1ba77015f709dd42(&v5, &v0, 120);
    clap_builder::builder::arg::Arg::long::h84f8c5bb34180439(&v0, &v5, "exact-prefix", 12);
    clap_builder::builder::arg::Arg::help::h6d505232ae71569a(&v5, &v0, "PREFIX must match at the beginning of the line with no preceding whitespace.", 76);
    clap_builder::builder::arg::Arg::action::h5992498d946b2fbf(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::hd7dea545ae1a6041(&v0, &v8, &v11);
    clap_builder::builder::arg::Arg::new::h29936642834bfc08(&v8, "exact-skip-prefix", 17);
    clap_builder::builder::arg::Arg::short::h1ba77015f709dd42(&v5, &v8, 88);
    clap_builder::builder::arg::Arg::long::h84f8c5bb34180439(&v8, &v5, "exact-skip-prefix", 17);
    clap_builder::builder::arg::Arg::help::h6d505232ae71569a(&v5, &v8, "PSKIP must match at the beginning of the line with no preceding whitespace.", 75);
    clap_builder::builder::arg::Arg::action::h5992498d946b2fbf(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::hd7dea545ae1a6041(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new::h29936642834bfc08(&v0, "widthinvalid width: src/uu/fmt/src/fmt.rs", 5);
    clap_builder::builder::arg::Arg::short::h1ba77015f709dd42(&v5, &v0, 119);
    clap_builder::builder::arg::Arg::long::h84f8c5bb34180439(&v0, &v5, "widthinvalid width: src/uu/fmt/src/fmt.rs", 5);
    clap_builder::builder::arg::Arg::help::h6d505232ae71569a(&v5, &v0, "Fill output lines up to a maximum of WIDTH columns, default 75. This can be specified as a negative number in the first argument.", 129);
    clap_builder::builder::arg::Arg::value_name::h8b63a1c1086fdff9(&v11, &v5, "WIDTH", 5);
    clap_builder::builder::command::Command::arg::hd7dea545ae1a6041(&v0, &v8, &v11);
    clap_builder::builder::arg::Arg::new::h29936642834bfc08(&v8, "goal", 4);
    clap_builder::builder::arg::Arg::short::h1ba77015f709dd42(&v5, &v8, 103);
    clap_builder::builder::arg::Arg::long::h84f8c5bb34180439(&v8, &v5, "goal", 4);
    clap_builder::builder::arg::Arg::help::h6d505232ae71569a(&v5, &v8, "Goal width, default of 93% of WIDTH. Must be less than or equal to WIDTH.", 73);
    clap_builder::builder::arg::Arg::value_name::h8b63a1c1086fdff9(&v11, &v5, "GOAL", 4);
    clap_builder::builder::command::Command::arg::hd7dea545ae1a6041(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new::h29936642834bfc08(&v0, "quick", 5);
    clap_builder::builder::arg::Arg::short::h1ba77015f709dd42(&v5, &v0, 113);
    clap_builder::builder::arg::Arg::long::h84f8c5bb34180439(&v0, &v5, "quick", 5);
    clap_builder::builder::arg::Arg::help::h6d505232ae71569a(&v5, &v0, "Break lines more quickly at the expense of a potentially more ragged appearance.", 80);
    clap_builder::builder::arg::Arg::action::h5992498d946b2fbf(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::hd7dea545ae1a6041(&v0, &v8, &v11);
    clap_builder::builder::arg::Arg::new::h29936642834bfc08(&v8, "tab-width: ", 9);
    clap_builder::builder::arg::Arg::short::h1ba77015f709dd42(&v5, &v8, 84);
    clap_builder::builder::arg::Arg::long::h84f8c5bb34180439(&v8, &v5, "tab-width: ", 9);
    clap_builder::builder::arg::Arg::help::h6d505232ae71569a(&v5, &v8, "Treat tabs as TABWIDTH spaces for determining line length, default 8. Note that this is used only for calculating line lengths; tabs are preserved in the output.", 161);
    clap_builder::builder::arg::Arg::value_name::h8b63a1c1086fdff9(&v11, &v5, "TABWIDTH'; only ", 8);
    clap_builder::builder::command::Command::arg::hd7dea545ae1a6041(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new::h29936642834bfc08(&v0, "files", 5);
    clap_builder::builder::arg::Arg::action::h5992498d946b2fbf(&v5, &v0, 1);
    clap_builder::builder::arg::Arg::value_name::h8b63a1c1086fdff9(&v0, &v5, "FILEScapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs", 5);
    clap_builder::builder::arg::Arg::value_hint::hd91671787faa792c(&v5, &v0, 3);
    memcpy(&v0, &v5, 584);
    v1 = *((int *)&v6) | 64;
    v2 = *((int *)&v7);
    clap_builder::builder::command::Command::arg::hd7dea545ae1a6041(a0, &v8, &v0);
    return a0;
}
