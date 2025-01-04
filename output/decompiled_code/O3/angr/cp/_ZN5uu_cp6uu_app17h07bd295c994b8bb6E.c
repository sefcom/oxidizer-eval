long long uu_cp::uu_app::h07bd295c994b8bb6(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0xa70], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xa68]
    unsigned long long v2;  // [sp-0xa60]
    unsigned long long v3;  // [sp-0xa58]
    unsigned long long v4;  // [sp-0xa50]
    unsigned long long v5;  // [sp-0xa48]
    unsigned int v6;  // [sp-0x828]
    unsigned int v7;  // [sp-0x824]
    char v8;  // [bp-0x820], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x818]
    unsigned long long v10;  // [sp-0x810]
    unsigned long long v11;  // [sp-0x808]
    unsigned long long v12;  // [sp-0x800]
    unsigned long long v13;  // [sp-0x7f8]
    unsigned int v14;  // [sp-0x5d8]
    unsigned int v15;  // [sp-0x5d4]
    unsigned long long v16;  // [sp-0x564]
    unsigned int v17;  // [sp-0x55c]
    char v18;  // [bp-0x558], Other Possible Types: unsigned long long
    unsigned long long v19;  // [sp-0x550]
    char *v20;  // [sp-0x548]
    unsigned long long v21;  // [sp-0x540]
    void* v22;  // [sp-0x538]
    char v23;  // [bp-0x29c]
    char v24;  // [bp-0x294]
    char v25;  // [bp-0x290]
    void* v26;  // [sp-0x278], Other Possible Types: unsigned long long
    unsigned long long v27;  // [sp-0x270]
    char v28;  // [sp-0x268]
    unsigned long long v30;  // rdx

    clap_builder::builder::command::Command::new::h2bdc837409817e5f(&v18, uucore::util_name::h60d842bf27b05e82(), v30);
    clap_builder::builder::command::Command::version::hf5d23409933cbf81(&v8, &v18, "0.0.28", 6);
    clap_builder::builder::command::Command::about::hf6807aed0e4a68c3(&v18, &v8, "Copy SOURCE to DEST, or multiple SOURCE(s) to DIRECTORY.", 56);
    uucore::format_usage::h76fcb2d15fbabc58(&v0, "{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t DIRECTORY SOURCE...", 104);
    clap_builder::builder::command::Command::override_usage::hb925896944b21ab7(&v8, &v18, &v0);
    v0 = &g_5b5bc0;
    v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
    v2 = &g_5b5bb0;
    v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
    v18 = &g_5b5bd0;
    v19 = 2;
    v22 = 0;
    v20 = &v0;
    v21 = 2;
    ::0x4fe000::core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&v25, &v18);
    clap_builder::builder::command::Command::after_help::h24742e0eb86c1def(&v18, &v8, &v25);
    memcpy(&v8, &v18, 700);
    v16 = 584115552392 | *((long long *)&v23);
    v17 = *((int *)&v24);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&v18, "target-directory", 16);
    clap_builder::builder::arg::Arg::short::h1fe10d2408911d32(&v0, &v18, 116);
    clap_builder::builder::arg::Arg::conflicts_with::h9f8f59e8a1d46781(&v18, &v0, "no-target-directory", 19);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&v0, &v18, "target-directory", 16);
    clap_builder::builder::arg::Arg::value_name::hcd2d8449df461482(&v18, &v0, "target-directory", 16);
    clap_builder::builder::arg::Arg::value_hint::h909b89e502ddfc03(&v0, &v18, 4);
    v26 = 3;
    clap_builder::builder::arg::Arg::value_parser::h3f95aebc62bb149f(&v18, &v0, &v26);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&v0, &v18, "copy all SOURCE arguments into target-directory", 47);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&v18, &v8, &v0);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&v8, "no-target-directory", 19);
    clap_builder::builder::arg::Arg::short::h1fe10d2408911d32(&v0, &v8, 84);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&v8, &v0, "no-target-directory", 19);
    clap_builder::builder::arg::Arg::conflicts_with::h9f8f59e8a1d46781(&v0, &v8, "target-directory", 16);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&v8, &v0, "Treat DEST as a regular file and not a directory", 48);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&v8, &v18, &v0);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&v18, "interactive", 11);
    clap_builder::builder::arg::Arg::short::h1fe10d2408911d32(&v0, &v18, 105);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&v18, &v0, "interactive", 11);
    clap_builder::builder::arg::Arg::overrides_with::h4f393ec1c0598f7f(&v0, &v18, "no-clobber", 10);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&v18, &v0, "ask before overwriting files", 28);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&v0, &v18, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&v18, &v8, &v0);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&v8, "link", 4);
    clap_builder::builder::arg::Arg::short::h1fe10d2408911d32(&v0, &v8, 108);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&v8, &v0, "link", 4);
    clap_builder::builder::arg::Arg::overrides_with_all::hc22e0e4512b020a1(&v0, &v8, &g_5b5bf0, 5);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&v8, &v0, "hard-link files instead of copying", 34);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&v8, &v18, &v0);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&v18, "no-clobber", 10);
    clap_builder::builder::arg::Arg::short::h1fe10d2408911d32(&v0, &v18, 110);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&v18, &v0, "no-clobber", 10);
    clap_builder::builder::arg::Arg::overrides_with::h4f393ec1c0598f7f(&v0, &v18, "interactive", 11);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&v18, &v0, "don't overwrite a file that already exists", 42);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&v0, &v18, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&v18, &v8, &v0);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&v8, "recursive", 9);
    clap_builder::builder::arg::Arg::short::h1fe10d2408911d32(&v0, &v8, 82);
    clap_builder::builder::arg::Arg::visible_short_alias::hd967a993c23685f5(&v8, &v0, 114);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&v0, &v8, "recursive", 9);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&v8, &v0, "copy directories recursively", 28);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&v8, &v18, &v0);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&v18, "strip-trailing-slashes", 22);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&v0, &v18, "strip-trailing-slashes", 22);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&v18, &v0, "remove any trailing slashes from each SOURCE argument", 53);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&v0, &v18, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&v18, &v8, &v0);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&v8, "debug", 5);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&v0, &v8, "debug", 5);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&v8, &v0, "explain how a file is copied. Implies -v", 40);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&v8, &v18, &v0);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&v18, "verbose", 7);
    clap_builder::builder::arg::Arg::short::h1fe10d2408911d32(&v0, &v18, 118);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&v18, &v0, "verbose", 7);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&v0, &v18, "explicitly state what is being done", 35);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&v26, &v0, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&v18, &v8, &v26);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&v8, "symbolic-link", 13);
    clap_builder::builder::arg::Arg::short::h1fe10d2408911d32(&v0, &v8, 115);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&v8, &v0, "symbolic-link", 13);
    clap_builder::builder::arg::Arg::overrides_with_all::hc22e0e4512b020a1(&v0, &v8, &g_5b5bf0, 5);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&v8, &v0, "make symbolic links instead of copying", 38);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&v8, &v18, &v0);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&v18, "force", 5);
    clap_builder::builder::arg::Arg::short::h1fe10d2408911d32(&v0, &v18, 102);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&v18, &v0, "force", 5);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&v0, &v18, "if an existing destination file cannot be opened, remove it and try again (this option is ignored when the -n option is also used). Currently not implemented for Windows.", 170);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&v26, &v0, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&v18, &v8, &v26);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&v8, "remove-destination", 18);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&v0, &v8, "remove-destination", 18);
    clap_builder::builder::arg::Arg::overrides_with::h4f393ec1c0598f7f(&v8, &v0, "force", 5);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&v0, &v8, "remove each existing destination file before attempting to open it (contrast with --force). On Windows, currently only works for writeable files.", 145);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&v26, &v0, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&v8, &v18, &v26);
    uucore::features::backup_control::arguments::backup::h804b9c4d220a6bfa(&v0);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&v18, &v8, &v0);
    uucore::features::backup_control::arguments::backup_no_args::h7f5ee465b0f6b670(&v0);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&v8, &v18, &v0);
    uucore::features::backup_control::arguments::suffix::h659b6e9a409bb614(&v0);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&v18, &v8, &v0);
    uucore::features::update_control::arguments::update::h43d52bfaa3e04136(&v0);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&v8, &v18, &v0);
    uucore::features::update_control::arguments::update_no_args::h0df581fe31ef9923(&v0);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&v18, &v8, &v0);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&v8, "reflink", 7);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&v0, &v8, "reflink", 7);
    clap_builder::builder::arg::Arg::value_name::hcd2d8449df461482(&v8, &v0, "WHEN", 4);
    clap_builder::builder::arg::Arg::overrides_with_all::hc22e0e4512b020a1(&v0, &v8, &g_5b5bf0, 5);
    memcpy(&v8, &v0, 584);
    v14 = 128 | v6;
    v15 = v7;
    clap_builder::builder::arg::Arg::default_missing_value::h9470ec4a0f010e70(&v0, &v8, "always", 6);
    v8 = "auto";
    v9 = 4;
    v10 = "always";
    v11 = 6;
    v12 = "never";
    v13 = 5;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h5479b6a793fc35d5(&v26, &v8);
    clap_builder::builder::arg::Arg::value_parser::h35d251af9fa43760(&v8, &v0, &v26);
    v26 = 0;
    v27 = 1;
    v28 = 0;
    clap_builder::builder::arg::Arg::num_args::ha657edc7ac01ffd3(&v0, &v8, &v26);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&v26, &v0, "control clone/CoW copies. See below", 35);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&v8, &v18, &v26);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&v18, "attributes-only", 15);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&v0, &v18, "attributes-only", 15);
    clap_builder::builder::arg::Arg::overrides_with_all::hc22e0e4512b020a1(&v18, &v0, &g_5b5bf0, 5);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&v0, &v18, "Don't copy the file data, just the attributes", 45);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&v26, &v0, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&v18, &v8, &v26);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&v8, "preserve", 8);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&v0, &v8, "preserve", 8);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&v8, &v0, 1);
    clap_builder::builder::arg::Arg::use_value_delimiter::h85c0efad243fa3a0(&v0, &v8, 1);
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::hc716d1b08cb9a98e(&v26, &g_5b5b40, 7);
    clap_builder::builder::arg::Arg::value_parser::h35d251af9fa43760(&v8, &v0, &v26);
    clap_builder::builder::arg::Arg::num_args::h480a688d62002bcf(&v0, &v8, 0);
    memcpy(&v8, &v0, 584);
    v14 = 128 | v6;
    v15 = v7;
    clap_builder::builder::arg::Arg::value_name::hcd2d8449df461482(&v0, &v8, "ATTR_LIST", 9);
    clap_builder::builder::arg::Arg::default_missing_value::h9470ec4a0f010e70(&v8, &v0, "mode,ownership,timestamp", 24);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&v0, &v8, "Preserve the specified attributes (default: mode, ownership (unix only), timestamps), if possible additional attributes: context, links, xattr, all", 147);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&v8, &v18, &v0);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&v18, "preserve-default-attributes", 27);
    clap_builder::builder::arg::Arg::short::h1fe10d2408911d32(&v0, &v18, 112);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&v18, &v0, "preserve-default-attributes", 27);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&v0, &v18, "same as --preserve=mode,ownership(unix only),timestamps", 55);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&v26, &v0, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&v18, &v8, &v26);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&v8, "no-preserve", 11);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&v0, &v8, "no-preserve", 11);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&v8, &v0, 1);
    clap_builder::builder::arg::Arg::use_value_delimiter::h85c0efad243fa3a0(&v0, &v8, 1);
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::hc716d1b08cb9a98e(&v26, &g_5b5b40, 7);
    clap_builder::builder::arg::Arg::value_parser::h35d251af9fa43760(&v8, &v0, &v26);
    clap_builder::builder::arg::Arg::num_args::h480a688d62002bcf(&v0, &v8, 0);
    memcpy(&v8, &v0, 584);
    v14 = 128 | v6;
    v15 = v7;
    clap_builder::builder::arg::Arg::value_name::hcd2d8449df461482(&v0, &v8, "ATTR_LIST", 9);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&v26, &v0, "don't preserve the specified attributes", 39);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&v8, &v18, &v26);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&v18, "parents", 7);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&v0, &v18, "parents", 7);
    clap_builder::builder::arg::Arg::alias::ha7b1f7201d9a47a3(&v18, &v0, "parent", 6);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&v0, &v18, "use full source file name under DIRECTORY", 41);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&v26, &v0, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&v18, &v8, &v26);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&v8, "no-dereference", 14);
    clap_builder::builder::arg::Arg::short::h1fe10d2408911d32(&v0, &v8, 80);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&v8, &v0, "no-dereference", 14);
    clap_builder::builder::arg::Arg::overrides_with::h4f393ec1c0598f7f(&v0, &v8, "dereference", 11);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&v8, &v0, "never follow symbolic links in SOURCE", 37);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&v8, &v18, &v0);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&v18, "dereference", 11);
    clap_builder::builder::arg::Arg::short::h1fe10d2408911d32(&v0, &v18, 76);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&v18, &v0, "dereference", 11);
    clap_builder::builder::arg::Arg::overrides_with::h4f393ec1c0598f7f(&v0, &v18, "no-dereference", 14);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&v18, &v0, "always follow symbolic links in SOURCE", 38);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&v0, &v18, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&v18, &v8, &v0);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&v8, "cli-symbolic-links", 18);
    clap_builder::builder::arg::Arg::short::h1fe10d2408911d32(&v0, &v8, 72);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&v8, &v0, "follow command-line symbolic links in SOURCE", 44);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&v8, &v18, &v0);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&v18, "archive", 7);
    clap_builder::builder::arg::Arg::short::h1fe10d2408911d32(&v0, &v18, 97);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&v18, &v0, "archive", 7);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&v0, &v18, "Same as -dR --preserve=all", 26);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&v26, &v0, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&v18, &v8, &v26);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&v8, "no-dereference-preserve-links", 29);
    clap_builder::builder::arg::Arg::short::h1fe10d2408911d32(&v0, &v8, 100);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&v8, &v0, "same as --no-dereference --preserve=links", 41);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&v8, &v18, &v0);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&v18, "one-file-system", 15);
    clap_builder::builder::arg::Arg::short::h1fe10d2408911d32(&v0, &v18, 120);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&v18, &v0, "one-file-system", 15);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&v0, &v18, "stay on this file system", 24);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&v26, &v0, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&v18, &v8, &v26);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&v8, "sparse", 6);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&v0, &v8, "sparse", 6);
    clap_builder::builder::arg::Arg::value_name::hcd2d8449df461482(&v8, &v0, "WHEN", 4);
    v0 = "never";
    v1 = 5;
    v2 = "auto";
    v3 = 4;
    v4 = "always";
    v5 = 6;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h5479b6a793fc35d5(&v26, &v0);
    clap_builder::builder::arg::Arg::value_parser::h35d251af9fa43760(&v0, &v8, &v26);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&v26, &v0, "control creation of sparse files. See below", 43);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&v8, &v18, &v26);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&v18, "copy-contents", 13);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&v0, &v18, "copy-contents", 13);
    clap_builder::builder::arg::Arg::overrides_with::h4f393ec1c0598f7f(&v18, &v0, "attributes-only", 15);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&v0, &v18, "NotImplemented: copy contents of special files when recursive", 61);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&v26, &v0, 2);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&v18, &v8, &v26);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&v8, "context", 7);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&v0, &v8, "context", 7);
    clap_builder::builder::arg::Arg::value_name::hcd2d8449df461482(&v8, &v0, "CTX", 3);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&v0, &v8, "NotImplemented: set SELinux security context of destination file to default type", 80);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&v8, &v18, &v0);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&v18, "progress", 8);
    clap_builder::builder::arg::Arg::long::h4bce140d2a4fe0f3(&v0, &v18, "progress", 8);
    clap_builder::builder::arg::Arg::short::h1fe10d2408911d32(&v18, &v0, 103);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&v0, &v18, 2);
    clap_builder::builder::arg::Arg::help::h15e2b335492f338c(&v26, &v0, "Display a progress bar. \nNote: this feature is not supported by GNU coreutils.", 78);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(&v18, &v8, &v26);
    clap_builder::builder::arg::Arg::new::hb1795cde80765c3f(&v8, "pathsinvalid attribute ", 5);
    clap_builder::builder::arg::Arg::action::h4bb0f48ece02220d(&v0, &v8, 1);
    clap_builder::builder::arg::Arg::num_args::h480a688d62002bcf(&v8, &v0, 1);
    memcpy(&v0, &v8, 584);
    v6 = v14 | 1;
    v7 = v15;
    clap_builder::builder::arg::Arg::value_hint::h909b89e502ddfc03(&v8, &v0, 2);
    v26 = 2;
    clap_builder::builder::arg::Arg::value_parser::h3f95aebc62bb149f(&v0, &v8, &v26);
    clap_builder::builder::command::Command::arg::h347f83ef948f5588(a0, &v18, &v0);
    return a0;
}
