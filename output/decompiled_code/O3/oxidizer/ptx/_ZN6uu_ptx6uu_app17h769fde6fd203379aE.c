fn uu_ptx::uu_app(a0: &struct712, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct24
    let v1: i32;  // [sp-0x800]
    let v2: i32;  // [sp-0x7fc]
    let v3: i4736;  // [sp-0x7f8], Other Possible Types: struct592, struct712
    let v4: i5696;  // [sp-0x530], Other Possible Types: struct592, struct712, struct437
    let v5: i64;  // [sp-0x274]
    let v6: i32;  // [sp-0x26c]
    let v7: struct592;  // [sp-0x268], Other Possible Types: i4736
    let v9: i64;  // rdx

    v4 = clap_builder::builder::command::Command::new(uucore::util_name(), v9);
    v3 = clap_builder::builder::command::Command::about(&v4, &g_45ed0f, 264);
    v4 = clap_builder::builder::command::Command::version(&v3, "0.0.28");
    v0 = uucore::format_usage(&g_45ee1d, 60);
    v3 = clap_builder::builder::command::Command::override_usage(&v4, &v0);
    memcpy(&v4, &v3, 700);
    v5 = 549755814016 | *((&v3 as &char + 700) as &i64);
    v6 = *((&v3 as &char + 708) as &i32);
    v3 = clap_builder::builder::arg::Arg::new("file");
    memcpy(&v0, &v3, 584);
    v1 = *((&v3 as &char + 584) as &i32) | 4;
    v2 = *((&v3 as &char + 588) as &i32);
    v3 = clap_builder::builder::arg::Arg::action(&v0, 0x1);
    v0 = clap_builder::builder::arg::Arg::value_hint(&v3, 0x3);
    v3 = clap_builder::builder::command::Command::arg(&v4, &v0);
    v4 = clap_builder::builder::arg::Arg::new("auto-reference");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 0x41);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "auto-reference");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "output automatically generated references");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v4 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("traditional");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x47);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "traditional");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "behave more like System V 'ptx'");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("flag-truncation");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 0x46);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "flag-truncation");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "use STRING for flagging line truncations");
    v7 = clap_builder::builder::arg::Arg::value_name(&v0, "STRING");
    v4 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("macro-name");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x4d);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "macro-name");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "macro name to use instead of 'xx'");
    v7 = clap_builder::builder::arg::Arg::value_name(&v0, "STRING");
    v3 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("format=roff");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 0x4f);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "format=roff");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "generate output as roff directives");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v4 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("right-side-refs");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x52);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "right-side-refs");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "put references at right, not counted in -w");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("sentence-regexp");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 0x53);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "sentence-regexp");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "for end of lines or end of sentences");
    v7 = clap_builder::builder::arg::Arg::value_name(&v0, "REGEXP");
    v4 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("format=tex");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x54);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "format=tex");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "generate output as TeX directives");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("word-regexp");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 0x57);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "word-regexp");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "use REGEXP to match each keyword");
    v7 = clap_builder::builder::arg::Arg::value_name(&v0, "REGEXP");
    v4 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("break-file");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x62);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "break-file");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "word break characters in this FILE");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "FILE");
    v0 = clap_builder::builder::arg::Arg::value_hint(&v3, 0x3);
    v3 = clap_builder::builder::command::Command::arg(&v4, &v0);
    v4 = clap_builder::builder::arg::Arg::new("ignore-case");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 0x66);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "ignore-case");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "fold lower case to upper case for sorting");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v4 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("gap-size");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x67);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "gap-size");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "gap size in columns between output fields");
    v7 = clap_builder::builder::arg::Arg::value_name(&v0, "NUMBER");
    v3 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("ignore-file");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 0x69);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "ignore-file");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "read ignore word list from FILE");
    v4 = clap_builder::builder::arg::Arg::value_name(&v0, "FILE");
    v0 = clap_builder::builder::arg::Arg::value_hint(&v4, 0x3);
    v4 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("only-file");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x6f);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "only-file");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "read only word list from this FILE");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "FILE");
    v0 = clap_builder::builder::arg::Arg::value_hint(&v3, 0x3);
    v3 = clap_builder::builder::command::Command::arg(&v4, &v0);
    v4 = clap_builder::builder::arg::Arg::new("references");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 0x72);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "references");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "first field of each line is a reference");
    v4 = clap_builder::builder::arg::Arg::value_name(&v0, "FILE");
    v0 = clap_builder::builder::arg::Arg::action(&v4, 0x2);
    v4 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("width");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x77);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "width");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "output width in columns, reference excluded");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "NUMBER");
    clap_builder::builder::command::Command::arg(a0, &v4, &v3);
    return a0;
}
