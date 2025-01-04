long long uu_mktemp::uu_app::h678f679507a186e9(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    unsigned long long v0;  // [sp-0xa60]
    char v1;  // [bp-0xa58]
    char v2;  // [bp-0xa50]
    char v3;  // [bp-0xa48]
    unsigned int v4;  // [sp-0x800]
    unsigned int v5;  // [sp-0x7fc]
    char v6;  // [bp-0x7f8]
    char v7;  // [bp-0x5b0]
    char v8;  // [bp-0x5ac]
    unsigned long long v9;  // [sp-0x53c]
    unsigned int v10;  // [sp-0x534]
    char v11;  // [bp-0x530]
    char v12;  // [bp-0x274]
    char v13;  // [bp-0x26c]
    void* v14;  // [bp-0x268], Other Possible Types: char, unsigned long long
    unsigned long long v15;  // [sp-0x260]
    char v16;  // [bp-0x258], Other Possible Types: unsigned long long
    unsigned long long v18;  // rdx

    clap_builder::builder::command::Command::new::h76c7f6d05f88d66b(&v6, uucore::util_name::h60d842bf27b05e82(), v18);
    clap_builder::builder::command::Command::version::hd42484b89d9bacd4(&v11, &v6, "0.0.28", 6);
    clap_builder::builder::command::Command::about::h7938a9e7ef03708f(&v6, &v11, "Create a temporary file or directory.", 37);
    uucore::format_usage::h76fcb2d15fbabc58(&v3, "{} [OPTION]... [TEMPLATE]", 25);
    clap_builder::builder::command::Command::override_usage::h619a592790955547(&v11, &v6, &v3);
    memcpy(&v6, &v11, 700);
    v9 = 549755814016 | *((long long *)&v12);
    v10 = *((int *)&v13);
    clap_builder::builder::arg::Arg::new::ha5d5728112458319(&v11, "directory", 9);
    clap_builder::builder::arg::Arg::short::h64644c15e6ab22da(&v3, &v11, 100);
    clap_builder::builder::arg::Arg::long::haebb94b99a5f5408(&v11, &v3, "directory", 9);
    clap_builder::builder::arg::Arg::help::h379e16b3ef3e663d(&v3, &v11, "Make a directory instead of a file", 34);
    clap_builder::builder::arg::Arg::action::hfdbb6a40310369cc(&v14, &v3);
    clap_builder::builder::command::Command::arg::hf4963ed5bd9d715d(&v11, &v6, &v14);
    clap_builder::builder::arg::Arg::new::ha5d5728112458319(&v6, "dry-run", 7);
    clap_builder::builder::arg::Arg::short::h64644c15e6ab22da(&v3, &v6, 117);
    clap_builder::builder::arg::Arg::long::haebb94b99a5f5408(&v6, &v3, "dry-run", 7);
    clap_builder::builder::arg::Arg::help::h379e16b3ef3e663d(&v3, &v6, "do not create anything; merely print a name (unsafe)", 52);
    clap_builder::builder::arg::Arg::action::hfdbb6a40310369cc(&v14, &v3);
    clap_builder::builder::command::Command::arg::hf4963ed5bd9d715d(&v6, &v11, &v14);
    clap_builder::builder::arg::Arg::new::ha5d5728112458319(&v11, "quiet", 5);
    clap_builder::builder::arg::Arg::short::h64644c15e6ab22da(&v3, &v11, 113);
    clap_builder::builder::arg::Arg::long::haebb94b99a5f5408(&v11, &v3, "quiet", 5);
    clap_builder::builder::arg::Arg::help::h379e16b3ef3e663d(&v3, &v11, "Fail silently if an error occurs.", 33);
    clap_builder::builder::arg::Arg::action::hfdbb6a40310369cc(&v14, &v3);
    clap_builder::builder::command::Command::arg::hf4963ed5bd9d715d(&v11, &v6, &v14);
    clap_builder::builder::arg::Arg::new::ha5d5728112458319(&v6, "suffix", 6);
    clap_builder::builder::arg::Arg::long::haebb94b99a5f5408(&v3, &v6, "suffix", 6);
    clap_builder::builder::arg::Arg::help::h379e16b3ef3e663d(&v6, &v3, "append SUFFIX to TEMPLATE; SUFFIX must not contain a path separator. This option is implied if TEMPLATE does not end with X.", 124);
    clap_builder::builder::arg::Arg::value_name::h2a7635652bc5a76e(&v3, &v6, "SUFFIX", 6);
    clap_builder::builder::command::Command::arg::hf4963ed5bd9d715d(&v6, &v11, &v3);
    clap_builder::builder::arg::Arg::new::ha5d5728112458319(&v11, "p", 1);
    clap_builder::builder::arg::Arg::short::h64644c15e6ab22da(&v3, &v11, 112);
    clap_builder::builder::arg::Arg::help::h379e16b3ef3e663d(&v11, &v3, "short form of --tmpdir", 22);
    clap_builder::builder::arg::Arg::value_name::h2a7635652bc5a76e(&v3, &v11, "DIR", 3);
    clap_builder::builder::arg::Arg::num_args::h6743cf132f863e79(&v11, &v3, v18);
    v0 = 3;
    v16 = *((long long *)&v2);
    v14 = v0;
    v15 = *((long long *)&v1);
    clap_builder::builder::arg::Arg::value_parser::hb5266bfd1f63f64c(&v3, &v11, &v14);
    clap_builder::builder::arg::Arg::value_hint::h5b4535c7fc4341eb(&v14, &v3, 4);
    clap_builder::builder::command::Command::arg::hf4963ed5bd9d715d(&v11, &v6, &v14);
    clap_builder::builder::arg::Arg::new::ha5d5728112458319(&v6, "tmpdir", 6);
    clap_builder::builder::arg::Arg::long::haebb94b99a5f5408(&v3, &v6, "tmpdir", 6);
    clap_builder::builder::arg::Arg::help::h379e16b3ef3e663d(&v6, &v3, "interpret TEMPLATE relative to DIR; if DIR is not specified, use $TMPDIR ($TMP on windows) if set, else /tmp. With this option, TEMPLATE must not be an absolute name; unlike with -t, TEMPLATE may contain slashes, but mktemp creates only the final component", 0x100);
    clap_builder::builder::arg::Arg::value_name::h2a7635652bc5a76e(&v3, &v6, "DIR", 3);
    v14 = 0;
    v15 = 1;
    v16 = 0;
    clap_builder::builder::arg::Arg::num_args::he75e4a05b31a31ab(&v6, &v3, &v14);
    memcpy(&v3, &v6, 584);
    v4 = 128 | *((int *)&v7);
    v5 = *((int *)&v8);
    clap_builder::builder::arg::Arg::overrides_with::h2c072bf86a60bf55(&v6, &v3, "p", 1);
    clap_builder::builder::arg::Arg::value_parser::hb5266bfd1f63f64c(&v3, &v6, &v0);
    clap_builder::builder::arg::Arg::value_hint::h5b4535c7fc4341eb(&v14, &v3, 4);
    clap_builder::builder::command::Command::arg::hf4963ed5bd9d715d(&v6, &v11, &v14);
    clap_builder::builder::arg::Arg::new::ha5d5728112458319(&v11, "tcould not persist file with --suffix, template  must end in Xtoo few X's in template invalid template, , contains directory separatorinvalid suffix ; with --tmpdir, it may not be absolutetoo many templatesfailed to create  via template : No such file or directory", 1);
    clap_builder::builder::arg::Arg::short::h64644c15e6ab22da(&v3, &v11, 116);
    clap_builder::builder::arg::Arg::help::h379e16b3ef3e663d(&v11, &v3, "Generate a template (using the supplied prefix and TMPDIR (TMP on windows) if set) to create a filename template [deprecated]", 125);
    clap_builder::builder::arg::Arg::action::hfdbb6a40310369cc(&v3, &v11);
    clap_builder::builder::command::Command::arg::hf4963ed5bd9d715d(&v11, &v6, &v3);
    clap_builder::builder::arg::Arg::new::ha5d5728112458319(&v6, "templateDeadlock", 8);
    clap_builder::builder::arg::Arg::num_args::hc0a90c4cca44ae1d(&v3, &v6);
    clap_builder::builder::command::Command::arg::hf4963ed5bd9d715d(a0, &v11, &v3);
    return a0;
}
