fn uu_ptx::uu_app(a0: &struct712) -> long long {
    let v0: u8;  // [bp-0xa48]
    let v1: struct24;  // [bp-0x800]
    let v2: struct24;  // [bp-0x7fc]
    let v3: u8;  // [bp-0x7f8]
    let v4: u32;  // [bp-0x5b0]
    let v5: i8;  // [bp-0x5ac]
    let v6: u64;  // [bp-0x53c]
    let v7: u32;  // [bp-0x534]
    let v8: struct437;  // [bp-0x530]
    let v9: u64;  // [bp-0x274]
    let v10: u32;  // [bp-0x26c]
    let v11: u8;  // [bp-0x268]
    let v14: u64;  // rdx

    v8 = clap_builder::builder::command::Command::new(uucore::util_name(), v14);
    clap_builder::builder::command::Command::about(&v3, &v8, "Produce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for short options too.\nWith no FILE, or when FILE is -, read standard input. Default is '-F /'.");
    clap_builder::builder::command::Command::version(&v8, &v3, "0.0.28");
    uucore::format_usage(&v0, "{} [OPTION]... [INPUT]...\n{} -G [OPTION]... [INPUT [OUTPUT]]");
    clap_builder::builder::command::Command::override_usage(&v3, &v8, &v0);
    memcpy(&v8, &v3, 700);
    v9 = 549755814016 | v6;
    v10 = v7;
    clap_builder::builder::arg::Arg::new(&v3, "file");
    memcpy(&v0, &v3, 584);
    v1 = v4 | 4;
    v2 = *(&v5 as &i32);
    clap_builder::builder::arg::Arg::action(&v3, &v0, 1);
    clap_builder::builder::arg::Arg::value_hint(&v0, &v3, 3);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new(&v8, "auto-reference");
    clap_builder::builder::arg::Arg::short(&v0, &v8, 65);
    clap_builder::builder::arg::Arg::long(&v8, &v0, "auto-reference");
    clap_builder::builder::arg::Arg::help(&v0, &v8, "output automatically generated references");
    clap_builder::builder::arg::Arg::action(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new(&v3, "traditional");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 71);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "traditional");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "behave more like System V 'ptx'");
    clap_builder::builder::arg::Arg::action(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "flag-truncation");
    clap_builder::builder::arg::Arg::short(&v0, &v8, 70);
    clap_builder::builder::arg::Arg::long(&v8, &v0, "flag-truncation");
    clap_builder::builder::arg::Arg::help(&v0, &v8, "use STRING for flagging line truncations");
    clap_builder::builder::arg::Arg::value_name(&v11, &v0, "STRING");
    clap_builder::builder::command::Command::arg(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new(&v3, "macro-name");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 77);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "macro-name");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "macro name to use instead of 'xx'");
    clap_builder::builder::arg::Arg::value_name(&v11, &v0, "STRING");
    clap_builder::builder::command::Command::arg(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "format=roff");
    clap_builder::builder::arg::Arg::short(&v0, &v8, 79);
    clap_builder::builder::arg::Arg::long(&v8, &v0, "format=roff");
    clap_builder::builder::arg::Arg::help(&v0, &v8, "generate output as roff directives");
    clap_builder::builder::arg::Arg::action(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new(&v3, "right-side-refs");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 82);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "right-side-refs");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "put references at right, not counted in -w");
    clap_builder::builder::arg::Arg::action(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "sentence-regexp");
    clap_builder::builder::arg::Arg::short(&v0, &v8, 83);
    clap_builder::builder::arg::Arg::long(&v8, &v0, "sentence-regexp");
    clap_builder::builder::arg::Arg::help(&v0, &v8, "for end of lines or end of sentences");
    clap_builder::builder::arg::Arg::value_name(&v11, &v0, "REGEXP");
    clap_builder::builder::command::Command::arg(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new(&v3, "format=tex");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 84);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "format=tex");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "generate output as TeX directives");
    clap_builder::builder::arg::Arg::action(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "word-regexp");
    clap_builder::builder::arg::Arg::short(&v0, &v8, 87);
    clap_builder::builder::arg::Arg::long(&v8, &v0, "word-regexp");
    clap_builder::builder::arg::Arg::help(&v0, &v8, "use REGEXP to match each keyword");
    clap_builder::builder::arg::Arg::value_name(&v11, &v0, "REGEXP");
    clap_builder::builder::command::Command::arg(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new(&v3, "break-file");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 98);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "break-file");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "word break characters in this FILE");
    clap_builder::builder::arg::Arg::value_name(&v3, &v0, "FILE");
    clap_builder::builder::arg::Arg::value_hint(&v0, &v3, 3);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new(&v8, "ignore-case");
    clap_builder::builder::arg::Arg::short(&v0, &v8, 102);
    clap_builder::builder::arg::Arg::long(&v8, &v0, "ignore-case");
    clap_builder::builder::arg::Arg::help(&v0, &v8, "fold lower case to upper case for sorting");
    clap_builder::builder::arg::Arg::action(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new(&v3, "gap-size");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 103);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "gap-size");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "gap size in columns between output fields");
    clap_builder::builder::arg::Arg::value_name(&v11, &v0, "NUMBER");
    clap_builder::builder::command::Command::arg(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "ignore-file");
    clap_builder::builder::arg::Arg::short(&v0, &v8, 105);
    clap_builder::builder::arg::Arg::long(&v8, &v0, "ignore-file");
    clap_builder::builder::arg::Arg::help(&v0, &v8, "read ignore word list from FILE");
    clap_builder::builder::arg::Arg::value_name(&v8, &v0, "FILE");
    clap_builder::builder::arg::Arg::value_hint(&v0, &v8, 3);
    clap_builder::builder::command::Command::arg(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new(&v3, "only-file");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 111);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "only-file");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "read only word list from this FILE");
    clap_builder::builder::arg::Arg::value_name(&v3, &v0, "FILE");
    clap_builder::builder::arg::Arg::value_hint(&v0, &v3, 3);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new(&v8, "references");
    clap_builder::builder::arg::Arg::short(&v0, &v8, 114);
    clap_builder::builder::arg::Arg::long(&v8, &v0, "references");
    clap_builder::builder::arg::Arg::help(&v0, &v8, "first field of each line is a reference");
    clap_builder::builder::arg::Arg::value_name(&v8, &v0, "FILE");
    clap_builder::builder::arg::Arg::action(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new(&v3, "width");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 119);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "width");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "output width in columns, reference excluded");
    clap_builder::builder::arg::Arg::value_name(&v3, &v0, "NUMBER");
    clap_builder::builder::command::Command::arg(a0, &v8, &v3);
    return a0;
}
