long long uu_mv::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xb20]
    unsigned long long v1;  // [bp-0xb18]
    unsigned long long v2;  // [bp-0xb10]
    unsigned long long v3;  // [bp-0xb08]
    unsigned long long v4;  // [bp-0xb00]
    unsigned long long v5;  // [bp-0xaf8]
    char v6;  // [bp-0xaf0]
    unsigned long long v7;  // [bp-0xae0]
    char v8;  // [bp-0xad8]
    unsigned long long v9;  // [bp-0xac8]
    char *v10;  // [bp-0xab8], Other Possible Types: char
    unsigned long long v11;  // [bp-0xab0]
    unsigned long long v12;  // [bp-0xaa8]
    unsigned long long v13;  // [bp-0xaa0]
    unsigned int v14;  // [bp-0x840]
    unsigned int v15;  // [bp-0x83c]
    char v16;  // [bp-0x838]
    unsigned int v17;  // [bp-0x5c0]
    char v18;  // [bp-0x5bc]
    unsigned long long v19;  // [bp-0x57c]
    unsigned int v20;  // [bp-0x574]
    char v21;  // [bp-0x570], Other Possible Types: unsigned long long
    unsigned long long v22;  // [bp-0x568]
    char *v23;  // [bp-0x560]
    unsigned long long v24;  // [bp-0x558]
    void* v25;  // [bp-0x550]
    unsigned long v26;  // [bp-0x2b4]
    unsigned int v27;  // [bp-0x2ac]
    char v28;  // [bp-0x2a8], Other Possible Types: unsigned long long
    unsigned long long v29;  // [bp-0x2a0]
    unsigned long long v30;  // [bp-0x298]
    unsigned long long v31;  // [bp-0x290]
    unsigned long long v34;  // rdx

    v21.new(uucore::util_name(), v34);
    v16.version(&v21, "(uutils coreutils) 0.1.0mv-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n", 24);
    uucore::mods::locale::get_message(&v10, "mv-aboutENOTUNIQELIBEXECon_greenVariableENOTSOCK", 8);
    v21.about(&v16, &v10);
    uucore::mods::locale::get_message(&v0, "mv-usagewide_barduration", 8);
    uucore::format_usage(&v10, v1, v2);
    v16.override_usage(&v21, &v10);
    uucore::mods::locale::get_message(&v28, "mv-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups", 13);
    v10 = &v28;
    v11 = <alloc::string::String as core::fmt::Display>::fmt;
    v12 = &g_5d9990;
    v13 = <&T as core::fmt::Display>::fmt;
    v21 = &g_5d9970;
    v22 = 2;
    v25 = 0;
    v23 = &v10;
    v24 = 2;
    v6.map_or_else(&v21);
    ::0x4c7460::core::ptr::drop_in_place<alloc::string::String>(&v28);
    memcpy(&v8, &v6, 16);
    v9 = v7;
    v21.after_help(&v16, &v8);
    memcpy(&v16, &v21, 700);
    v19 = 549755814016 | v26;
    v20 = v27;
    v21.new("forceinteractiveno-clobberstrip-trailing-slashesno-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.1.0mv-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --back", 5);
    v10.short(&v21, 102);
    v21.long(&v10, "forceinteractiveno-clobberstrip-trailing-slashesno-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.1.0mv-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --back", 5);
    uucore::mods::locale::get_message(&v28, "mv-help-forcemv-help-interactivemv-help-no-clobbermv-help-strip-trailing-slashesmv-help-target-directoryDIRECTORYmv-help-no-target-directorymv-help-verbosemv-help-debug/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rus", 13);
    v10.help(&v21, &v28);
    v28 = "interactiveno-clobberstrip-trailing-slashesno-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.1.0mv-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup op";
    v29 = 11;
    v30 = "no-clobberstrip-trailing-slashesno-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.1.0mv-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or thr";
    v31 = 10;
    v21.overrides_with_all(&v10, &v28);
    v10.action(&v21, 2);
    v21.arg(&v16, &v10);
    v16.new("interactiveno-clobberstrip-trailing-slashesno-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.1.0mv-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup op", 11);
    v10.short(&v16, 105);
    v16.long(&v10, "interactiveno-clobberstrip-trailing-slashesno-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.1.0mv-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup op", 11);
    uucore::mods::locale::get_message(&v28, "mv-help-interactivemv-help-no-clobbermv-help-strip-trailing-slashesmv-help-target-directoryDIRECTORYmv-help-no-target-directorymv-help-verbosemv-help-debug/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/cor", 19);
    v10.help(&v16, &v28);
    v28 = "forceinteractiveno-clobberstrip-trailing-slashesno-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.1.0mv-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --back";
    v29 = 5;
    v30 = "no-clobberstrip-trailing-slashesno-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.1.0mv-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or thr";
    v31 = 10;
    v16.overrides_with_all(&v10, &v28);
    v10.action(&v16, 2);
    v16.arg(&v21, &v10);
    v21.new("no-clobberstrip-trailing-slashesno-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.1.0mv-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or thr", 10);
    v10.short(&v21, 110);
    v21.long(&v10, "no-clobberstrip-trailing-slashesno-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.1.0mv-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or thr", 10);
    uucore::mods::locale::get_message(&v28, "mv-help-no-clobbermv-help-strip-trailing-slashesmv-help-target-directoryDIRECTORYmv-help-no-target-directorymv-help-verbosemv-help-debug/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/i", 18);
    v10.help(&v21, &v28);
    v28 = "forceinteractiveno-clobberstrip-trailing-slashesno-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.1.0mv-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --back";
    v29 = 5;
    v30 = "interactiveno-clobberstrip-trailing-slashesno-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.1.0mv-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup op";
    v31 = 11;
    v21.overrides_with_all(&v10, &v28);
    v10.action(&v21, 2);
    v21.arg(&v16, &v10);
    v16.new("strip-trailing-slashesno-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.1.0mv-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe V", 22);
    v10.long(&v16, "strip-trailing-slashesno-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.1.0mv-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe V", 22);
    uucore::mods::locale::get_message(&v28, "mv-help-strip-trailing-slashesmv-help-target-directoryDIRECTORYmv-help-no-target-directorymv-help-verbosemv-help-debug/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 30);
    v16.help(&v10, &v28);
    v10.action(&v16, 2);
    v16.arg(&v21, &v10);
    uucore::features::backup_control::arguments::backup(&v10);
    v21.arg(&v16, &v10);
    uucore::features::backup_control::arguments::backup_no_args(&v10);
    v16.arg(&v21, &v10);
    uucore::features::backup_control::arguments::suffix(&v10);
    v21.arg(&v16, &v10);
    uucore::features::update_control::arguments::update(&v10);
    v16.arg(&v21, &v10);
    uucore::features::update_control::arguments::update_no_args(&v10);
    v21.arg(&v16, &v10);
    v16.new("target-directory", 16);
    v10.short(&v16, 116);
    v16.long(&v10, "target-directory", 16);
    uucore::mods::locale::get_message(&v28, "mv-help-target-directoryDIRECTORYmv-help-no-target-directorymv-help-verbosemv-help-debug/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 24);
    v10.help(&v16, &v28);
    v16.value_name(&v10);
    v10.value_hint(&v16, 4);
    v16.conflicts_with(&v10, "no-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.1.0mv-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environ", 19);
    v3 = 2;
    v30 = v5;
    v28 = v3;
    v29 = v4;
    v10.value_parser(&v16, &v28);
    v16.arg(&v21, &v10);
    v21.new("no-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.1.0mv-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environ", 19);
    v10.short(&v21, 84);
    v21.long(&v10, "no-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.1.0mv-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environ", 19);
    uucore::mods::locale::get_message(&v28, "mv-help-no-target-directorymv-help-verbosemv-help-debug/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 27);
    v10.help(&v21, &v28);
    v28.action(&v10, 2);
    v21.arg(&v16, &v28);
    v16.new("verbosefilesdebug\n\n(uutils coreutils) 0.1.0mv-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Her", 7);
    v10.short(&v16, 118);
    v16.long(&v10, "verbosefilesdebug\n\n(uutils coreutils) 0.1.0mv-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Her", 7);
    uucore::mods::locale::get_message(&v28, "mv-help-verbosemv-help-debug/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 15);
    v10.help(&v16, &v28);
    v28.action(&v10, 2);
    v16.arg(&v21, &v28);
    v21.new("progress", 8);
    v10.short(&v21, 103);
    v21.long(&v10, "progress", 8);
    uucore::mods::locale::get_message(&v28, "mv-help-progressbackupopt_suffix: \nTry ' --help' for more information.\n", 16);
    v10.help(&v21, &v28);
    v28.action(&v10, 2);
    v21.arg(&v16, &v28);
    v16.new("filesdebug\n\n(uutils coreutils) 0.1.0mv-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are t", 5);
    v10.action(&v16, 1);
    v16.num_args(&v10);
    memcpy(&v10, &v16, 632);
    v14 = v17 | 1;
    v15 = *((int *)&v18);
    v16.value_parser(&v10, &v3);
    v10.value_hint(&v16, 2);
    v16.arg(&v21, &v10);
    v21.new("debug\n\n(uutils coreutils) 0.1.0mv-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the va", 5);
    v10.long(&v21, "debug\n\n(uutils coreutils) 0.1.0mv-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the va", 5);
    uucore::mods::locale::get_message(&v28, "mv-help-debug/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 13);
    v21.help(&v10, &v28);
    v10.action(&v21, 2);
    a0.arg(&v16, &v10);
    ::0x4c7460::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
