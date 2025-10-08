fn uu_ptx::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xac0], Other Possible Types: struct640
    let v1: u32;  // [bp-0x848]
    let v2: u32;  // [bp-0x844]
    let v3: struct437;  // [bp-0x840], Other Possible Types: struct48, struct712, struct640
    let v4: u32;  // [bp-0x5c8]
    let v5: u32;  // [bp-0x5c4]
    let v6: u64;  // [bp-0x584]
    let v7: u32;  // [bp-0x57c]
    let v8: struct712;  // [bp-0x578], Other Possible Types: struct640
    let v9: struct712;  // [bp-0x578]
    let v10: struct712;  // [bp-0x578]
    let v11: u32;  // [bp-0x300]
    let v12: u64;  // [bp-0x2bc]
    let v13: u32;  // [bp-0x2b4]
    let v14: struct32;  // [bp-0x2b0], Other Possible Types: struct48, struct640
    let v17: u64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v17);
    v9 = clap_builder::builder::command::Command::about(&v3);
    v3 = clap_builder::builder::command::Command::version(&v9);
    v0 = uucore::format_usage("{} [OPTION]... [INPUT]...\n{} -G [OPTION]... [INPUT [OUTPUT]]");
    v10 = clap_builder::builder::command::Command::override_usage(&v3, &v0);
    memcpy(&v3, &v10, 700);
    v6 = 549755814016 | v12;
    v7 = v13;
    v8 = clap_builder::builder::arg::Arg::new("file");
    memcpy(&v0, &v8, 632);
    v1 = v11 | 4;
    v2 = v11;
    v8 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::value_hint(&v8);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("auto-reference");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 65);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "auto-reference");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "output automatically generated references");
    v14 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v8, &v14);
    v8 = clap_builder::builder::arg::Arg::new("traditional");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 71);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "traditional");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "behave more like System V 'ptx'");
    v14 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v14);
    v3 = clap_builder::builder::arg::Arg::new("flag-truncation");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 70);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "flag-truncation");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "use STRING for flagging line truncations");
    v14 = clap_builder::builder::arg::Arg::value_name(&v0, "STRING");
    v3 = clap_builder::builder::command::Command::arg(&v8, &v14);
    v8 = clap_builder::builder::arg::Arg::new("macro-name");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 77);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "macro-name");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "macro name to use instead of 'xx'");
    v14 = clap_builder::builder::arg::Arg::value_name(&v0, "STRING");
    v8 = clap_builder::builder::command::Command::arg(&v3, &v14);
    v3 = clap_builder::builder::arg::Arg::new("format");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "format");
    memcpy(&v3, &v0, 632);
    v4 = v1 | 4;
    v5 = v2;
    v14 = struct32 {
        field_0: "roff"
        field_16: "tex"
    };
    v0 = clap_builder::builder::arg::Arg::value_parser(&v3, &v14);
    v3 = struct48 {
        field_0: "format"
        field_16: "roff"
        field_32: "tex"
    };
    v14 = clap_builder::builder::arg::Arg::overrides_with_all(&v0, &v3);
    v3 = clap_builder::builder::command::Command::arg(&v8, &v14);
    v8 = clap_builder::builder::arg::Arg::new("roff");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 79);
    v8 = clap_builder::builder::arg::Arg::help(&v0, "generate output as roff directives");
    v14 = struct48 {
        field_0: "format"
        field_16: "roff"
        field_32: "tex"
    };
    v0 = clap_builder::builder::arg::Arg::overrides_with_all(&v8, &v14);
    v14 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v14);
    v3 = clap_builder::builder::arg::Arg::new("tex");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 84);
    v3 = clap_builder::builder::arg::Arg::help(&v0, "generate output as TeX directives");
    v14 = struct48 {
        field_0: "format"
        field_16: "roff"
        field_32: "tex"
    };
    v0 = clap_builder::builder::arg::Arg::overrides_with_all(&v3, &v14);
    v14 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v8, &v14);
    v8 = clap_builder::builder::arg::Arg::new("right-side-refs");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 82);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "right-side-refs");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "put references at right, not counted in -w");
    v14 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v14);
    v3 = clap_builder::builder::arg::Arg::new("sentence-regexp");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 83);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "sentence-regexp");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "for end of lines or end of sentences");
    v14 = clap_builder::builder::arg::Arg::value_name(&v0, "REGEXP");
    v3 = clap_builder::builder::command::Command::arg(&v8, &v14);
    v8 = clap_builder::builder::arg::Arg::new("word-regexp");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 87);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "word-regexp");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "use REGEXP to match each keyword");
    v14 = clap_builder::builder::arg::Arg::value_name(&v0, "REGEXP");
    v8 = clap_builder::builder::command::Command::arg(&v3, &v14);
    v3 = clap_builder::builder::arg::Arg::new("break-file");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 98);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "break-file");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "word break characters in this FILE");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "FILE");
    v0 = clap_builder::builder::arg::Arg::value_hint(&v3);
    v3 = clap_builder::builder::command::Command::arg(&v8, &v0);
    v8 = clap_builder::builder::arg::Arg::new("ignore-case");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 102);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "ignore-case");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "fold lower case to upper case for sorting");
    v14 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v14);
    v3 = clap_builder::builder::arg::Arg::new("gap-size");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 103);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "gap-size");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "gap size in columns between output fields");
    v14 = clap_builder::builder::arg::Arg::value_name(&v0, "NUMBER");
    v3 = clap_builder::builder::command::Command::arg(&v8, &v14);
    v8 = clap_builder::builder::arg::Arg::new("ignore-file");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 105);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "ignore-file");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "read ignore word list from FILE");
    v8 = clap_builder::builder::arg::Arg::value_name(&v0, "FILE");
    v0 = clap_builder::builder::arg::Arg::value_hint(&v8);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("only-file");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 111);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "only-file");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "read only word list from this FILE");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "FILE");
    v0 = clap_builder::builder::arg::Arg::value_hint(&v3);
    v3 = clap_builder::builder::command::Command::arg(&v8, &v0);
    v8 = clap_builder::builder::arg::Arg::new("references");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 114);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "references");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "first field of each line is a reference");
    v8 = clap_builder::builder::arg::Arg::value_name(&v0, "FILE");
    v0 = clap_builder::builder::arg::Arg::action(&v8, 2);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("width");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 119);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "width");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "output width in columns, reference excluded");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "NUMBER");
    clap_builder::builder::command::Command::arg(a0, &v8, &v3);
    return;
}
