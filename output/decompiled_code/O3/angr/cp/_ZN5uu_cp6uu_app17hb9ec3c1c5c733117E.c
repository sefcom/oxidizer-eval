long long uu_cp::uu_app::hb9ec3c1c5c733117(unsigned long long a0, unsigned long a1, unsigned long a2)
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
    unsigned long long v20;  // [sp-0x548]
    unsigned long long v21;  // [sp-0x540]
    void* v22;  // [sp-0x538]
    char v23;  // [bp-0x29c]
    char v24;  // [bp-0x294]
    char v25;  // [bp-0x290]
    void* v26;  // [sp-0x278], Other Possible Types: unsigned long long
    unsigned long long v27;  // [sp-0x270]
    char v28;  // [sp-0x268]
    unsigned long long v30;  // rdx

    clap_builder::builder::command::Command::new::h72827d9523f8a627(&v18, uucore::util_name::h412db5e565a079f3(), v30);
    clap_builder::builder::command::Command::version::h7acc9d99ecd284aa(&v8, &v18, "0.0.28", 6);
    clap_builder::builder::command::Command::about::h9bea9474976a886f(&v18, &v8, "Copy SOURCE to DEST, or multiple SOURCE(s) to DIRECTORY.", 56);
    uucore::format_usage::h00b69bae12d8ac9c(&v0, "{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t DIRECTORY SOURCE...The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backupsDo not copy a non-directory that has an existing destination with the same or newer modification timestamp;\ninstead, silently skip the file without failing. If timestamps are being preserved, the comparison is to the\nsource timestamp truncated to the resolutions of the destination file system and of the system calls used to\nupdate timestamps; this avoids duplicate work if several cp -pu commands are executed with the same source\nand destination. This option is ignored if the -", 104);
    clap_builder::builder::command::Command::override_usage::he7339aa54febde56(&v8, &v18, &v0);
    v0 = &g_5b54f0;
    v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcead1029d5dc0e68;
    v2 = &g_5b54e0;
    v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcead1029d5dc0e68;
    v18 = &g_5b5500;
    v19 = 2;
    v22 = 0;
    v20 = &v0;
    v21 = 2;
    ::0x4fd6d0::core::option::Option$LT$T$GT$::map_or_else::h9667797c75f2b1f6(&v25, &v18);
    clap_builder::builder::command::Command::after_help::h32875b47e38b0e39(&v18, &v8, &v25);
    memcpy(&v8, &v18, 700);
    v16 = 584115552392 | *((long long *)&v23);
    v17 = *((int *)&v24);
    clap_builder::builder::arg::Arg::new::heca1eabbcb806744(&v18, "target-directory", 16);
    clap_builder::builder::arg::Arg::short::hb68c24001e1ab349(&v0, &v18, 116);
    clap_builder::builder::arg::Arg::conflicts_with::h9036487b9e713849(&v18, &v0, "no-target-directory", 19);
    clap_builder::builder::arg::Arg::long::h8e059c0a62ac27ba(&v0, &v18, "target-directory", 16);
    clap_builder::builder::arg::Arg::value_name::hf959ee413775d3ea(&v18, &v0, "target-directory", 16);
    clap_builder::builder::arg::Arg::value_hint::hb143a1dc5b65146d(&v0, &v18, 4);
    v26 = 3;
    clap_builder::builder::arg::Arg::value_parser::h75af19681a79627e(&v18, &v0, &v26);
    clap_builder::builder::arg::Arg::help::h117901fce3951dff(&v0, &v18, "copy all SOURCE arguments into target-directory", 47);
    clap_builder::builder::command::Command::arg::ha911779ad1f6fb63(&v18, &v8, &v0);
    clap_builder::builder::arg::Arg::new::heca1eabbcb806744(&v8, "no-target-directory", 19);
    clap_builder::builder::arg::Arg::short::hb68c24001e1ab349(&v0, &v8, 84);
    clap_builder::builder::arg::Arg::long::h8e059c0a62ac27ba(&v8, &v0, "no-target-directory", 19);
    clap_builder::builder::arg::Arg::conflicts_with::h9036487b9e713849(&v0, &v8, "target-directory", 16);
    clap_builder::builder::arg::Arg::help::h117901fce3951dff(&v8, &v0, "Treat DEST as a regular file and not a directory", 48);
    clap_builder::builder::arg::Arg::action::he563df403a8ed2e0(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg::ha911779ad1f6fb63(&v8, &v18, &v0);
    clap_builder::builder::arg::Arg::new::heca1eabbcb806744(&v18, "interactive", 11);
    clap_builder::builder::arg::Arg::short::hb68c24001e1ab349(&v0, &v18, 105);
    clap_builder::builder::arg::Arg::long::h8e059c0a62ac27ba(&v18, &v0, "interactive", 11);
    clap_builder::builder::arg::Arg::overrides_with::h338076abcecea6ed(&v0, &v18, "no-clobber", 10);
    clap_builder::builder::arg::Arg::help::h117901fce3951dff(&v18, &v0, "ask before overwriting files", 28);
    clap_builder::builder::arg::Arg::action::he563df403a8ed2e0(&v0, &v18, 2);
    clap_builder::builder::command::Command::arg::ha911779ad1f6fb63(&v18, &v8, &v0);
    clap_builder::builder::arg::Arg::new::heca1eabbcb806744(&v8, "link", 4);
    clap_builder::builder::arg::Arg::short::hb68c24001e1ab349(&v0, &v8, 108);
    clap_builder::builder::arg::Arg::long::h8e059c0a62ac27ba(&v8, &v0, "link", 4);
    clap_builder::builder::arg::Arg::overrides_with_all::h6c8e40ee414fd7f9(&v0, &v8, &g_5b5520, 5);
    clap_builder::builder::arg::Arg::help::h117901fce3951dff(&v8, &v0, "hard-link files instead of copying", 34);
    clap_builder::builder::arg::Arg::action::he563df403a8ed2e0(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg::ha911779ad1f6fb63(&v8, &v18, &v0);
    clap_builder::builder::arg::Arg::new::heca1eabbcb806744(&v18, "no-clobber", 10);
    clap_builder::builder::arg::Arg::short::hb68c24001e1ab349(&v0, &v18, 110);
    clap_builder::builder::arg::Arg::long::h8e059c0a62ac27ba(&v18, &v0, "no-clobber", 10);
    clap_builder::builder::arg::Arg::overrides_with::h338076abcecea6ed(&v0, &v18, "interactive", 11);
    clap_builder::builder::arg::Arg::help::h117901fce3951dff(&v18, &v0, "don't overwrite a file that already exists", 42);
    clap_builder::builder::arg::Arg::action::he563df403a8ed2e0(&v0, &v18, 2);
    clap_builder::builder::command::Command::arg::ha911779ad1f6fb63(&v18, &v8, &v0);
    clap_builder::builder::arg::Arg::new::heca1eabbcb806744(&v8, "recursive", 9);
    clap_builder::builder::arg::Arg::short::hb68c24001e1ab349(&v0, &v8, 82);
    clap_builder::builder::arg::Arg::visible_short_alias::hbe821c0e027dad3a(&v8, &v0, 114);
    clap_builder::builder::arg::Arg::long::h8e059c0a62ac27ba(&v0, &v8, "recursive", 9);
    clap_builder::builder::arg::Arg::help::h117901fce3951dff(&v8, &v0, "copy directories recursively", 28);
    clap_builder::builder::arg::Arg::action::he563df403a8ed2e0(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg::ha911779ad1f6fb63(&v8, &v18, &v0);
    clap_builder::builder::arg::Arg::new::heca1eabbcb806744(&v18, "strip-trailing-slashes", 22);
    clap_builder::builder::arg::Arg::long::h8e059c0a62ac27ba(&v0, &v18, "strip-trailing-slashes", 22);
    clap_builder::builder::arg::Arg::help::h117901fce3951dff(&v18, &v0, "remove any trailing slashes from each SOURCE argument", 53);
    clap_builder::builder::arg::Arg::action::he563df403a8ed2e0(&v0, &v18, 2);
    clap_builder::builder::command::Command::arg::ha911779ad1f6fb63(&v18, &v8, &v0);
    clap_builder::builder::arg::Arg::new::heca1eabbcb806744(&v8, "debug", 5);
    clap_builder::builder::arg::Arg::long::h8e059c0a62ac27ba(&v0, &v8, "debug", 5);
    clap_builder::builder::arg::Arg::help::h117901fce3951dff(&v8, &v0, "explain how a file is copied. Implies -v", 40);
    clap_builder::builder::arg::Arg::action::he563df403a8ed2e0(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg::ha911779ad1f6fb63(&v8, &v18, &v0);
    clap_builder::builder::arg::Arg::new::heca1eabbcb806744(&v18, "verbose", 7);
    clap_builder::builder::arg::Arg::short::hb68c24001e1ab349(&v0, &v18, 118);
    clap_builder::builder::arg::Arg::long::h8e059c0a62ac27ba(&v18, &v0, "verbose", 7);
    clap_builder::builder::arg::Arg::help::h117901fce3951dff(&v0, &v18, "explicitly state what is being done", 35);
    clap_builder::builder::arg::Arg::action::he563df403a8ed2e0(&v26, &v0, 2);
    clap_builder::builder::command::Command::arg::ha911779ad1f6fb63(&v18, &v8, &v26);
    clap_builder::builder::arg::Arg::new::heca1eabbcb806744(&v8, "symbolic-link", 13);
    clap_builder::builder::arg::Arg::short::hb68c24001e1ab349(&v0, &v8, 115);
    clap_builder::builder::arg::Arg::long::h8e059c0a62ac27ba(&v8, &v0, "symbolic-link", 13);
    clap_builder::builder::arg::Arg::overrides_with_all::h6c8e40ee414fd7f9(&v0, &v8, &g_5b5520, 5);
    clap_builder::builder::arg::Arg::help::h117901fce3951dff(&v8, &v0, "make symbolic links instead of copying", 38);
    clap_builder::builder::arg::Arg::action::he563df403a8ed2e0(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg::ha911779ad1f6fb63(&v8, &v18, &v0);
    clap_builder::builder::arg::Arg::new::heca1eabbcb806744(&v18, "force", 5);
    clap_builder::builder::arg::Arg::short::hb68c24001e1ab349(&v0, &v18, 102);
    clap_builder::builder::arg::Arg::long::h8e059c0a62ac27ba(&v18, &v0, "force", 5);
    clap_builder::builder::arg::Arg::help::h117901fce3951dff(&v0, &v18, "if an existing destination file cannot be opened, remove it and try again (this option is ignored when the -n option is also used). Currently not implemented for Windows.", 170);
    clap_builder::builder::arg::Arg::action::he563df403a8ed2e0(&v26, &v0, 2);
    clap_builder::builder::command::Command::arg::ha911779ad1f6fb63(&v18, &v8, &v26);
    clap_builder::builder::arg::Arg::new::heca1eabbcb806744(&v8, "remove-destination", 18);
    clap_builder::builder::arg::Arg::long::h8e059c0a62ac27ba(&v0, &v8, "remove-destination", 18);
    clap_builder::builder::arg::Arg::overrides_with::h338076abcecea6ed(&v8, &v0, "force", 5);
    clap_builder::builder::arg::Arg::help::h117901fce3951dff(&v0, &v8, "remove each existing destination file before attempting to open it (contrast with --force). On Windows, currently only works for writeable files.", 145);
    clap_builder::builder::arg::Arg::action::he563df403a8ed2e0(&v26, &v0, 2);
    clap_builder::builder::command::Command::arg::ha911779ad1f6fb63(&v8, &v18, &v26);
    uucore::features::backup_control::arguments::backup::h94d489eabddd6e27(&v0);
    clap_builder::builder::command::Command::arg::ha911779ad1f6fb63(&v18, &v8, &v0);
    uucore::features::backup_control::arguments::backup_no_args::hb69ce73ec840fc19(&v0);
    clap_builder::builder::command::Command::arg::ha911779ad1f6fb63(&v8, &v18, &v0);
    uucore::features::backup_control::arguments::suffix::h2f72f755bdb4d605(&v0);
    clap_builder::builder::command::Command::arg::ha911779ad1f6fb63(&v18, &v8, &v0);
    uucore::features::update_control::arguments::update::h5f8b6fb0eea8d216(&v0);
    clap_builder::builder::command::Command::arg::ha911779ad1f6fb63(&v8, &v18, &v0);
    uucore::features::update_control::arguments::update_no_args::h60edf03ed24e96fb(&v0);
    clap_builder::builder::command::Command::arg::ha911779ad1f6fb63(&v18, &v8, &v0);
    clap_builder::builder::arg::Arg::new::heca1eabbcb806744(&v8, "reflink", 7);
    clap_builder::builder::arg::Arg::long::h8e059c0a62ac27ba(&v0, &v8, "reflink", 7);
    clap_builder::builder::arg::Arg::value_name::hf959ee413775d3ea(&v8, &v0, "WHEN", 4);
    clap_builder::builder::arg::Arg::overrides_with_all::h6c8e40ee414fd7f9(&v0, &v8, &g_5b5520, 5);
    memcpy(&v8, &v0, 584);
    v14 = 128 | v6;
    v15 = v7;
    clap_builder::builder::arg::Arg::default_missing_value::hb3218c640bf1155d(&v0, &v8, "always", 6);
    v8 = "auto";
    v9 = 4;
    v10 = "always";
    v11 = 6;
    v12 = "never";
    v13 = 5;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h2e5ce26fa5d82b94(&v26, &v8);
    clap_builder::builder::arg::Arg::value_parser::hb5d16387cd769490(&v8, &v0, &v26);
    v26 = 0;
    v27 = 1;
    v28 = 0;
    clap_builder::builder::arg::Arg::num_args::h1b11bdf687188f1b(&v0, &v8, &v26);
    clap_builder::builder::arg::Arg::help::h117901fce3951dff(&v26, &v0, "control clone/CoW copies. See below", 35);
    clap_builder::builder::command::Command::arg::ha911779ad1f6fb63(&v8, &v18, &v26);
    clap_builder::builder::arg::Arg::new::heca1eabbcb806744(&v18, "attributes-only", 15);
    clap_builder::builder::arg::Arg::long::h8e059c0a62ac27ba(&v0, &v18, "attributes-only", 15);
    clap_builder::builder::arg::Arg::overrides_with_all::h6c8e40ee414fd7f9(&v18, &v0, &g_5b5520, 5);
    clap_builder::builder::arg::Arg::help::h117901fce3951dff(&v0, &v18, "Don't copy the file data, just the attributes", 45);
    clap_builder::builder::arg::Arg::action::he563df403a8ed2e0(&v26, &v0, 2);
    clap_builder::builder::command::Command::arg::ha911779ad1f6fb63(&v18, &v8, &v26);
    clap_builder::builder::arg::Arg::new::heca1eabbcb806744(&v8, "preserve", 8);
    clap_builder::builder::arg::Arg::long::h8e059c0a62ac27ba(&v0, &v8, "preserve", 8);
    clap_builder::builder::arg::Arg::action::he563df403a8ed2e0(&v8, &v0, 1);
    clap_builder::builder::arg::Arg::use_value_delimiter::h08a784c9b6bad04e(&v0, &v8, 1);
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::haccb03ed086e47f3(&v26, &g_5b5470, 7);
    clap_builder::builder::arg::Arg::value_parser::hb5d16387cd769490(&v8, &v0, &v26);
    clap_builder::builder::arg::Arg::num_args::h6949d51c09810adf(&v0, &v8, 0);
    memcpy(&v8, &v0, 584);
    v14 = 128 | v6;
    v15 = v7;
    clap_builder::builder::arg::Arg::value_name::hf959ee413775d3ea(&v0, &v8, "ATTR_LIST", 9);
    clap_builder::builder::arg::Arg::default_missing_value::hb3218c640bf1155d(&v8, &v0, "mode,ownership,timestamp", 24);
    clap_builder::builder::arg::Arg::help::h117901fce3951dff(&v0, &v8, "Preserve the specified attributes (default: mode, ownership (unix only), timestamps), if possible additional attributes: context, links, xattr, all", 147);
    clap_builder::builder::command::Command::arg::ha911779ad1f6fb63(&v8, &v18, &v0);
    clap_builder::builder::arg::Arg::new::heca1eabbcb806744(&v18, "preserve-default-attributes", 27);
    clap_builder::builder::arg::Arg::short::hb68c24001e1ab349(&v0, &v18, 112);
    clap_builder::builder::arg::Arg::long::h8e059c0a62ac27ba(&v18, &v0, "preserve-default-attributes", 27);
    clap_builder::builder::arg::Arg::help::h117901fce3951dff(&v0, &v18, "same as --preserve=mode,ownership(unix only),timestamps", 55);
    clap_builder::builder::arg::Arg::action::he563df403a8ed2e0(&v26, &v0, 2);
    clap_builder::builder::command::Command::arg::ha911779ad1f6fb63(&v18, &v8, &v26);
    clap_builder::builder::arg::Arg::new::heca1eabbcb806744(&v8, "no-preserve", 11);
    clap_builder::builder::arg::Arg::long::h8e059c0a62ac27ba(&v0, &v8, "no-preserve", 11);
    clap_builder::builder::arg::Arg::action::he563df403a8ed2e0(&v8, &v0, 1);
    clap_builder::builder::arg::Arg::use_value_delimiter::h08a784c9b6bad04e(&v0, &v8, 1);
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::haccb03ed086e47f3(&v26, &g_5b5470, 7);
    clap_builder::builder::arg::Arg::value_parser::hb5d16387cd769490(&v8, &v0, &v26);
    clap_builder::builder::arg::Arg::num_args::h6949d51c09810adf(&v0, &v8, 0);
    memcpy(&v8, &v0, 584);
    v14 = 128 | v6;
    v15 = v7;
    clap_builder::builder::arg::Arg::value_name::hf959ee413775d3ea(&v0, &v8, "ATTR_LIST", 9);
    clap_builder::builder::arg::Arg::help::h117901fce3951dff(&v26, &v0, "don't preserve the specified attributes", 39);
    clap_builder::builder::command::Command::arg::ha911779ad1f6fb63(&v8, &v18, &v26);
    clap_builder::builder::arg::Arg::new::heca1eabbcb806744(&v18, "parents", 7);
    clap_builder::builder::arg::Arg::long::h8e059c0a62ac27ba(&v0, &v18, "parents", 7);
    clap_builder::builder::arg::Arg::alias::he095ff098b7c022a(&v18, &v0, "parent", 6);
    clap_builder::builder::arg::Arg::help::h117901fce3951dff(&v0, &v18, "use full source file name under DIRECTORY", 41);
    clap_builder::builder::arg::Arg::action::he563df403a8ed2e0(&v26, &v0, 2);
    clap_builder::builder::command::Command::arg::ha911779ad1f6fb63(&v18, &v8, &v26);
    clap_builder::builder::arg::Arg::new::heca1eabbcb806744(&v8, "no-dereference", 14);
    clap_builder::builder::arg::Arg::short::hb68c24001e1ab349(&v0, &v8, 80);
    clap_builder::builder::arg::Arg::long::h8e059c0a62ac27ba(&v8, &v0, "no-dereference", 14);
    clap_builder::builder::arg::Arg::overrides_with::h338076abcecea6ed(&v0, &v8, "dereference", 11);
    clap_builder::builder::arg::Arg::help::h117901fce3951dff(&v8, &v0, "never follow symbolic links in SOURCE", 37);
    clap_builder::builder::arg::Arg::action::he563df403a8ed2e0(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg::ha911779ad1f6fb63(&v8, &v18, &v0);
    clap_builder::builder::arg::Arg::new::heca1eabbcb806744(&v18, "dereference", 11);
    clap_builder::builder::arg::Arg::short::hb68c24001e1ab349(&v0, &v18, 76);
    clap_builder::builder::arg::Arg::long::h8e059c0a62ac27ba(&v18, &v0, "dereference", 11);
    clap_builder::builder::arg::Arg::overrides_with::h338076abcecea6ed(&v0, &v18, "no-dereference", 14);
    clap_builder::builder::arg::Arg::help::h117901fce3951dff(&v18, &v0, "always follow symbolic links in SOURCE", 38);
    clap_builder::builder::arg::Arg::action::he563df403a8ed2e0(&v0, &v18, 2);
    clap_builder::builder::command::Command::arg::ha911779ad1f6fb63(&v18, &v8, &v0);
    clap_builder::builder::arg::Arg::new::heca1eabbcb806744(&v8, "cli-symbolic-links", 18);
    clap_builder::builder::arg::Arg::short::hb68c24001e1ab349(&v0, &v8, 72);
    clap_builder::builder::arg::Arg::help::h117901fce3951dff(&v8, &v0, "follow command-line symbolic links in SOURCE", 44);
    clap_builder::builder::arg::Arg::action::he563df403a8ed2e0(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg::ha911779ad1f6fb63(&v8, &v18, &v0);
    clap_builder::builder::arg::Arg::new::heca1eabbcb806744(&v18, "archive", 7);
    clap_builder::builder::arg::Arg::short::hb68c24001e1ab349(&v0, &v18, 97);
    clap_builder::builder::arg::Arg::long::h8e059c0a62ac27ba(&v18, &v0, "archive", 7);
    clap_builder::builder::arg::Arg::help::h117901fce3951dff(&v0, &v18, "Same as -dR --preserve=all", 26);
    clap_builder::builder::arg::Arg::action::he563df403a8ed2e0(&v26, &v0, 2);
    clap_builder::builder::command::Command::arg::ha911779ad1f6fb63(&v18, &v8, &v26);
    clap_builder::builder::arg::Arg::new::heca1eabbcb806744(&v8, "no-dereference-preserve-links", 29);
    clap_builder::builder::arg::Arg::short::hb68c24001e1ab349(&v0, &v8, 100);
    clap_builder::builder::arg::Arg::help::h117901fce3951dff(&v8, &v0, "same as --no-dereference --preserve=links", 41);
    clap_builder::builder::arg::Arg::action::he563df403a8ed2e0(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg::ha911779ad1f6fb63(&v8, &v18, &v0);
    clap_builder::builder::arg::Arg::new::heca1eabbcb806744(&v18, "one-file-system", 15);
    clap_builder::builder::arg::Arg::short::hb68c24001e1ab349(&v0, &v18, 120);
    clap_builder::builder::arg::Arg::long::h8e059c0a62ac27ba(&v18, &v0, "one-file-system", 15);
    clap_builder::builder::arg::Arg::help::h117901fce3951dff(&v0, &v18, "stay on this file system", 24);
    clap_builder::builder::arg::Arg::action::he563df403a8ed2e0(&v26, &v0, 2);
    clap_builder::builder::command::Command::arg::ha911779ad1f6fb63(&v18, &v8, &v26);
    clap_builder::builder::arg::Arg::new::heca1eabbcb806744(&v8, "sparse", 6);
    clap_builder::builder::arg::Arg::long::h8e059c0a62ac27ba(&v0, &v8, "sparse", 6);
    clap_builder::builder::arg::Arg::value_name::hf959ee413775d3ea(&v8, &v0, "WHEN", 4);
    v0 = "never";
    v1 = 5;
    v2 = "auto";
    v3 = 4;
    v4 = "always";
    v5 = 6;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h2e5ce26fa5d82b94(&v26, &v0);
    clap_builder::builder::arg::Arg::value_parser::hb5d16387cd769490(&v0, &v8, &v26);
    clap_builder::builder::arg::Arg::help::h117901fce3951dff(&v26, &v0, "control creation of sparse files. See below", 43);
    clap_builder::builder::command::Command::arg::ha911779ad1f6fb63(&v8, &v18, &v26);
    clap_builder::builder::arg::Arg::new::heca1eabbcb806744(&v18, "copy-contents", 13);
    clap_builder::builder::arg::Arg::long::h8e059c0a62ac27ba(&v0, &v18, "copy-contents", 13);
    clap_builder::builder::arg::Arg::overrides_with::h338076abcecea6ed(&v18, &v0, "attributes-only", 15);
    clap_builder::builder::arg::Arg::help::h117901fce3951dff(&v0, &v18, "NotImplemented: copy contents of special files when recursive", 61);
    clap_builder::builder::arg::Arg::action::he563df403a8ed2e0(&v26, &v0, 2);
    clap_builder::builder::command::Command::arg::ha911779ad1f6fb63(&v18, &v8, &v26);
    clap_builder::builder::arg::Arg::new::heca1eabbcb806744(&v8, "context", 7);
    clap_builder::builder::arg::Arg::long::h8e059c0a62ac27ba(&v0, &v8, "context", 7);
    clap_builder::builder::arg::Arg::value_name::hf959ee413775d3ea(&v8, &v0, "CTX", 3);
    clap_builder::builder::arg::Arg::help::h117901fce3951dff(&v0, &v8, "NotImplemented: set SELinux security context of destination file to default type", 80);
    clap_builder::builder::command::Command::arg::ha911779ad1f6fb63(&v8, &v18, &v0);
    clap_builder::builder::arg::Arg::new::heca1eabbcb806744(&v18, "progress", 8);
    clap_builder::builder::arg::Arg::long::h8e059c0a62ac27ba(&v0, &v18, "progress", 8);
    clap_builder::builder::arg::Arg::short::hb68c24001e1ab349(&v18, &v0, 103);
    clap_builder::builder::arg::Arg::action::he563df403a8ed2e0(&v0, &v18, 2);
    clap_builder::builder::arg::Arg::help::h117901fce3951dff(&v26, &v0, "Display a progress bar. \nNote: this feature is not supported by GNU coreutils.", 78);
    clap_builder::builder::command::Command::arg::ha911779ad1f6fb63(&v18, &v8, &v26);
    clap_builder::builder::arg::Arg::new::heca1eabbcb806744(&v8, "pathsinvalid attribute ", 5);
    clap_builder::builder::arg::Arg::action::he563df403a8ed2e0(&v0, &v8, 1);
    clap_builder::builder::arg::Arg::num_args::h6949d51c09810adf(&v8, &v0, 1);
    memcpy(&v0, &v8, 584);
    v6 = v14 | 1;
    v7 = v15;
    clap_builder::builder::arg::Arg::value_hint::hb143a1dc5b65146d(&v8, &v0, 2);
    v26 = 2;
    clap_builder::builder::arg::Arg::value_parser::h75af19681a79627e(&v0, &v8, &v26);
    clap_builder::builder::command::Command::arg::ha911779ad1f6fb63(a0, &v18, &v0);
    return a0;
}
