long long uu_mktemp::uu_app::ha16b3c5461fbee0e(unsigned long long a0, unsigned long a1, unsigned long a2)
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

    clap_builder::builder::command::Command::new::hf231c258fdef5f4f(&v6, uucore::util_name::h412db5e565a079f3(), v18);
    clap_builder::builder::command::Command::version::h2e937fd6f62aae60(&v11, &v6, "0.0.28", 6);
    clap_builder::builder::command::Command::about::he10577e92b171fd0(&v6, &v11, "Create a temporary file or directory.", 37);
    uucore::format_usage::h00b69bae12d8ac9c(&v3, "{} [OPTION]... [TEMPLATE]", 25);
    clap_builder::builder::command::Command::override_usage::h26d06a347d9e4e9c(&v11, &v6, &v3);
    memcpy(&v6, &v11, 700);
    v9 = 549755814016 | *((long long *)&v12);
    v10 = *((int *)&v13);
    clap_builder::builder::arg::Arg::new::h92bb4c34d1110e46(&v11, "directory", 9);
    clap_builder::builder::arg::Arg::short::h4e7066cd7eb86d55(&v3, &v11, 100);
    clap_builder::builder::arg::Arg::long::hfbd06c4210cb6d24(&v11, &v3, "directory", 9);
    clap_builder::builder::arg::Arg::help::h7efc21728ac1f5fd(&v3, &v11, "Make a directory instead of a file", 34);
    clap_builder::builder::arg::Arg::action::h2df43512d7c9fd40(&v14, &v3);
    clap_builder::builder::command::Command::arg::h58e0fa24a03d1628(&v11, &v6, &v14);
    clap_builder::builder::arg::Arg::new::h92bb4c34d1110e46(&v6, "dry-run", 7);
    clap_builder::builder::arg::Arg::short::h4e7066cd7eb86d55(&v3, &v6, 117);
    clap_builder::builder::arg::Arg::long::hfbd06c4210cb6d24(&v6, &v3, "dry-run", 7);
    clap_builder::builder::arg::Arg::help::h7efc21728ac1f5fd(&v3, &v6, "do not create anything; merely print a name (unsafe)", 52);
    clap_builder::builder::arg::Arg::action::h2df43512d7c9fd40(&v14, &v3);
    clap_builder::builder::command::Command::arg::h58e0fa24a03d1628(&v6, &v11, &v14);
    clap_builder::builder::arg::Arg::new::h92bb4c34d1110e46(&v11, "quiet", 5);
    clap_builder::builder::arg::Arg::short::h4e7066cd7eb86d55(&v3, &v11, 113);
    clap_builder::builder::arg::Arg::long::hfbd06c4210cb6d24(&v11, &v3, "quiet", 5);
    clap_builder::builder::arg::Arg::help::h7efc21728ac1f5fd(&v3, &v11, "Fail silently if an error occurs.", 33);
    clap_builder::builder::arg::Arg::action::h2df43512d7c9fd40(&v14, &v3);
    clap_builder::builder::command::Command::arg::h58e0fa24a03d1628(&v11, &v6, &v14);
    clap_builder::builder::arg::Arg::new::h92bb4c34d1110e46(&v6, "suffix", 6);
    clap_builder::builder::arg::Arg::long::hfbd06c4210cb6d24(&v3, &v6, "suffix", 6);
    clap_builder::builder::arg::Arg::help::h7efc21728ac1f5fd(&v6, &v3, "append SUFFIX to TEMPLATE; SUFFIX must not contain a path separator. This option is implied if TEMPLATE does not end with X.", 124);
    clap_builder::builder::arg::Arg::value_name::h4538e1fb12da9253(&v3, &v6, "SUFFIX", 6);
    clap_builder::builder::command::Command::arg::h58e0fa24a03d1628(&v6, &v11, &v3);
    clap_builder::builder::arg::Arg::new::h92bb4c34d1110e46(&v11, "p", 1);
    clap_builder::builder::arg::Arg::short::h4e7066cd7eb86d55(&v3, &v11, 112);
    clap_builder::builder::arg::Arg::help::h7efc21728ac1f5fd(&v11, &v3, "short form of --tmpdir", 22);
    clap_builder::builder::arg::Arg::value_name::h4538e1fb12da9253(&v3, &v11, "DIR", 3);
    clap_builder::builder::arg::Arg::num_args::hbffbf0d4923ae79b(&v11, &v3, v18);
    v0 = 3;
    v16 = *((long long *)&v2);
    v14 = v0;
    v15 = *((long long *)&v1);
    clap_builder::builder::arg::Arg::value_parser::hcbc57e4289b43e6d(&v3, &v11, &v14);
    clap_builder::builder::arg::Arg::value_hint::hf27ca966a226f133(&v14, &v3, 4);
    clap_builder::builder::command::Command::arg::h58e0fa24a03d1628(&v11, &v6, &v14);
    clap_builder::builder::arg::Arg::new::h92bb4c34d1110e46(&v6, "tmpdir", 6);
    clap_builder::builder::arg::Arg::long::hfbd06c4210cb6d24(&v3, &v6, "tmpdir", 6);
    clap_builder::builder::arg::Arg::help::h7efc21728ac1f5fd(&v6, &v3, "interpret TEMPLATE relative to DIR; if DIR is not specified, use $TMPDIR ($TMP on windows) if set, else /tmp. With this option, TEMPLATE must not be an absolute name; unlike with -t, TEMPLATE may contain slashes, but mktemp creates only the final component", 0x100);
    clap_builder::builder::arg::Arg::value_name::h4538e1fb12da9253(&v3, &v6, "DIR", 3);
    v14 = 0;
    v15 = 1;
    v16 = 0;
    clap_builder::builder::arg::Arg::num_args::hdc0b60cfbfa11419(&v6, &v3, &v14);
    memcpy(&v3, &v6, 584);
    v4 = 128 | *((int *)&v7);
    v5 = *((int *)&v8);
    clap_builder::builder::arg::Arg::overrides_with::h38abe1e8108192db(&v6, &v3, "p", 1);
    clap_builder::builder::arg::Arg::value_parser::hcbc57e4289b43e6d(&v3, &v6, &v0);
    clap_builder::builder::arg::Arg::value_hint::hf27ca966a226f133(&v14, &v3, 4);
    clap_builder::builder::command::Command::arg::h58e0fa24a03d1628(&v6, &v11, &v14);
    clap_builder::builder::arg::Arg::new::h92bb4c34d1110e46(&v11, "tcould not persist file with --suffix, template  must end in Xtoo few X's in template invalid template, , contains directory separatorinvalid suffix ; with --tmpdir, it may not be absolutetoo many templatesfailed to create  via template : No such file or directory", 1);
    clap_builder::builder::arg::Arg::short::h4e7066cd7eb86d55(&v3, &v11, 116);
    clap_builder::builder::arg::Arg::help::h7efc21728ac1f5fd(&v11, &v3, "Generate a template (using the supplied prefix and TMPDIR (TMP on windows) if set) to create a filename template [deprecated]", 125);
    clap_builder::builder::arg::Arg::action::h2df43512d7c9fd40(&v3, &v11);
    clap_builder::builder::command::Command::arg::h58e0fa24a03d1628(&v11, &v6, &v3);
    clap_builder::builder::arg::Arg::new::h92bb4c34d1110e46(&v6, "templateDeadlock", 8);
    clap_builder::builder::arg::Arg::num_args::hc6087d26842c9f07(&v3, &v6);
    clap_builder::builder::command::Command::arg::h58e0fa24a03d1628(a0, &v11, &v3);
    return a0;
}
