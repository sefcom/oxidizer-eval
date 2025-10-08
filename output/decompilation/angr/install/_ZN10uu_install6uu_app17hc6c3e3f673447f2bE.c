long long uu_install::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab0]
    char v1;  // [bp-0x830]
    unsigned long long v2;  // [bp-0x574]
    unsigned int v3;  // [bp-0x56c]
    char v4;  // [bp-0x568]
    unsigned long v5;  // [bp-0x2ac]
    unsigned int v6;  // [bp-0x2a4]
    char v7;  // [bp-0x2a0]
    unsigned long long v10;  // rdx

    v1.new(uucore::util_name(), v10);
    v4.version(&v1);
    v1.about(&v4);
    uucore::format_usage(&v0, "{} [OPTION]... [FILE]...compare each pair of source and destination files, and in some cases, do not modify the destination at alltreat all arguments as directory names. create all components of the specified directoriescreate all leading components of DES", 24);
    v4.override_usage(&v1, &v0);
    memcpy(&v1, &v4, 700);
    v2 = 549755814016 | v5;
    v3 = v6;
    uucore::features::backup_control::arguments::backup(&v0);
    v4.arg(&v1, &v0);
    uucore::features::backup_control::arguments::backup_no_args(&v0);
    v1.arg(&v4, &v0);
    v4.new("ignoredcreate-leadingownerpreserve-timestampsstripstrip-programno-target-directoryverbosefiles(uutils coreutils) 0.0.30Copy SOURCE to DEST or multiple SOURCE(s) to the existing\nDIRECTORY, while setting permission modes and owner/group{} [OPTION]... [FILE].", 7);
    v0.short(&v4, 99);
    v4.help(&v0, "ignoredcreate-leadingownerpreserve-timestampsstripstrip-programno-target-directoryverbosefiles(uutils coreutils) 0.0.30Copy SOURCE to DEST or multiple SOURCE(s) to the existing\nDIRECTORY, while setting permission modes and owner/group{} [OPTION]... [FILE].", 7);
    v0.action(&v4, 2);
    v4.arg(&v1, &v0);
    v1.new("comparedirectoryignoredcreate-leadingownerpreserve-timestampsstripstrip-programno-target-directoryverbosefiles(uutils coreutils) 0.0.30Copy SOURCE to DEST or multiple SOURCE(s) to the existing\nDIRECTORY, while setting permission modes and owner/group{} [OP", 7);
    v0.short(&v1, 67);
    v1.long(&v0, "comparedirectoryignoredcreate-leadingownerpreserve-timestampsstripstrip-programno-target-directoryverbosefiles(uutils coreutils) 0.0.30Copy SOURCE to DEST or multiple SOURCE(s) to the existing\nDIRECTORY, while setting permission modes and owner/group{} [OP", 7);
    v0.help(&v1, "compare each pair of source and destination files, and in some cases, do not modify the destination at alltreat all arguments as directory names. create all components of the specified directoriescreate all leading components of DEST except the last, then ", 106);
    v7.action(&v0, 2);
    v1.arg(&v4, &v7);
    v4.new("directoryignoredcreate-leadingownerpreserve-timestampsstripstrip-programno-target-directoryverbosefiles(uutils coreutils) 0.0.30Copy SOURCE to DEST or multiple SOURCE(s) to the existing\nDIRECTORY, while setting permission modes and owner/group{} [OPTION]..", 9);
    v0.short(&v4, 100);
    v4.long(&v0, "directoryignoredcreate-leadingownerpreserve-timestampsstripstrip-programno-target-directoryverbosefiles(uutils coreutils) 0.0.30Copy SOURCE to DEST or multiple SOURCE(s) to the existing\nDIRECTORY, while setting permission modes and owner/group{} [OPTION]..", 9);
    v0.help(&v4, "treat all arguments as directory names. create all components of the specified directoriescreate all leading components of DEST except the last, then copy SOURCE to DESTset group ownership, instead of process's current groupGROUPset permission mode (as in ", 90);
    v7.action(&v0, 2);
    v4.arg(&v1, &v7);
    v1.new("create-leadingownerpreserve-timestampsstripstrip-programno-target-directoryverbosefiles(uutils coreutils) 0.0.30Copy SOURCE to DEST or multiple SOURCE(s) to the existing\nDIRECTORY, while setting permission modes and owner/group{} [OPTION]... [FILE]...compa", 14);
    v0.short(&v1, 68);
    v1.help(&v0, "create all leading components of DEST except the last, then copy SOURCE to DESTset group ownership, instead of process's current groupGROUPset permission mode (as in chmod), instead of rwxr-xr-xset ownership (super-user only)OWNERapply access/modification ", 79);
    v0.action(&v1, 2);
    v1.arg(&v4, &v0);
    v4.new("group/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uucore/src/lib/features/perms.rsunexpected end of data/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uucore/src/lib/features/pipes.rsunexpected end of pipe/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uucore/src/lib/features/buf_copy/linux.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs: chmod failed with error \n", 5);
    v0.short(&v4, 103);
    v4.long(&v0, "group/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uucore/src/lib/features/perms.rsunexpected end of data/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uucore/src/lib/features/pipes.rsunexpected end of pipe/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uucore/src/lib/features/buf_copy/linux.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs: chmod failed with error \n", 5);
    v0.help(&v4, "set group ownership, instead of process's current groupGROUPset permission mode (as in chmod), instead of rwxr-xr-xset ownership (super-user only)OWNERapply access/modification times of SOURCE files to corresponding destination filesstrip symbol tables (no", 55);
    v7.value_name(&v0, "GROUPset permission mode (as in chmod), instead of rwxr-xr-xset ownership (super-user only)OWNERapply access/modification times of SOURCE files to corresponding destination filesstrip symbol tables (no action Windows)program used to strip binaries (no acti", 5);
    v4.arg(&v1, &v7);
    v1.new("modei128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG", 4);
    v0.short(&v1, 109);
    v1.long(&v0, "modei128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG", 4);
    v0.help(&v1, "set permission mode (as in chmod), instead of rwxr-xr-xset ownership (super-user only)OWNERapply access/modification times of SOURCE files to corresponding destination filesstrip symbol tables (no action Windows)program used to strip binaries (no action Wi", 55);
    v7.value_name(&v0, "MODEEADV", 4);
    v1.arg(&v4, &v7);
    v4.new("ownerpreserve-timestampsstripstrip-programno-target-directoryverbosefiles(uutils coreutils) 0.0.30Copy SOURCE to DEST or multiple SOURCE(s) to the existing\nDIRECTORY, while setting permission modes and owner/group{} [OPTION]... [FILE]...compare each pair o", 5);
    v0.short(&v4, 111);
    v4.long(&v0, "ownerpreserve-timestampsstripstrip-programno-target-directoryverbosefiles(uutils coreutils) 0.0.30Copy SOURCE to DEST or multiple SOURCE(s) to the existing\nDIRECTORY, while setting permission modes and owner/group{} [OPTION]... [FILE]...compare each pair o", 5);
    v0.help(&v4, "set ownership (super-user only)OWNERapply access/modification times of SOURCE files to corresponding destination filesstrip symbol tables (no action Windows)program used to strip binaries (no action Windows)PROGRAMmove all SOURCE arguments into DIRECTORYDI", 31);
    v4.value_name(&v0, "OWNERapply access/modification times of SOURCE files to corresponding destination filesstrip symbol tables (no action Windows)program used to strip binaries (no action Windows)PROGRAMmove all SOURCE arguments into DIRECTORYDIRECTORYtreat DEST as a normal f", 5);
    v0.value_hint(&v4, 9);
    v4.arg(&v1, &v0);
    v1.new("preserve-timestampsstripstrip-programno-target-directoryverbosefiles(uutils coreutils) 0.0.30Copy SOURCE to DEST or multiple SOURCE(s) to the existing\nDIRECTORY, while setting permission modes and owner/group{} [OPTION]... [FILE]...compare each pair of sou", 19);
    v0.short(&v1, 112);
    v1.long(&v0, "preserve-timestampsstripstrip-programno-target-directoryverbosefiles(uutils coreutils) 0.0.30Copy SOURCE to DEST or multiple SOURCE(s) to the existing\nDIRECTORY, while setting permission modes and owner/group{} [OPTION]... [FILE]...compare each pair of sou", 19);
    v0.help(&v1, "apply access/modification times of SOURCE files to corresponding destination filesstrip symbol tables (no action Windows)program used to strip binaries (no action Windows)PROGRAMmove all SOURCE arguments into DIRECTORYDIRECTORYtreat DEST as a normal fileex", 82);
    v7.action(&v0, 2);
    v1.arg(&v4, &v7);
    v4.new("stripstrip-programno-target-directoryverbosefiles(uutils coreutils) 0.0.30Copy SOURCE to DEST or multiple SOURCE(s) to the existing\nDIRECTORY, while setting permission modes and owner/group{} [OPTION]... [FILE]...compare each pair of source and destination", 5);
    v0.short(&v4, 115);
    v4.long(&v0, "stripstrip-programno-target-directoryverbosefiles(uutils coreutils) 0.0.30Copy SOURCE to DEST or multiple SOURCE(s) to the existing\nDIRECTORY, while setting permission modes and owner/group{} [OPTION]... [FILE]...compare each pair of source and destination", 5);
    v0.help(&v4, "strip symbol tables (no action Windows)program used to strip binaries (no action Windows)PROGRAMmove all SOURCE arguments into DIRECTORYDIRECTORYtreat DEST as a normal fileexplain what is being done(unimplemented) preserve security context(unimplemented) s", 39);
    v7.action(&v0, 2);
    v4.arg(&v1, &v7);
    v1.new("strip-programno-target-directoryverbosefiles(uutils coreutils) 0.0.30Copy SOURCE to DEST or multiple SOURCE(s) to the existing\nDIRECTORY, while setting permission modes and owner/group{} [OPTION]... [FILE]...compare each pair of source and destination file", 13);
    v0.long(&v1, "strip-programno-target-directoryverbosefiles(uutils coreutils) 0.0.30Copy SOURCE to DEST or multiple SOURCE(s) to the existing\nDIRECTORY, while setting permission modes and owner/group{} [OPTION]... [FILE]...compare each pair of source and destination file", 13);
    v1.help(&v0, "program used to strip binaries (no action Windows)PROGRAMmove all SOURCE arguments into DIRECTORYDIRECTORYtreat DEST as a normal fileexplain what is being done(unimplemented) preserve security context(unimplemented) set security context of files and direct", 50);
    v0.value_name(&v1, "PROGRAMmove all SOURCE arguments into DIRECTORYDIRECTORYtreat DEST as a normal fileexplain what is being done(unimplemented) preserve security context(unimplemented) set security context of files and directoriesCONTEXT--preserve-context, -P--context, -ZOpt", 7);
    v7.value_hint(&v0, 6);
    v1.arg(&v4, &v7);
    uucore::features::backup_control::arguments::suffix(&v0);
    v4.arg(&v1, &v0);
    v1.new("target-directoryfailed to chmod ", 16);
    v0.short(&v1, 116);
    v1.long(&v0, "target-directoryfailed to chmod ", 16);
    v0.help(&v1, "move all SOURCE arguments into DIRECTORYDIRECTORYtreat DEST as a normal fileexplain what is being done(unimplemented) preserve security context(unimplemented) set security context of files and directoriesCONTEXT--preserve-context, -P--context, -ZOptions --", 40);
    v1.value_name(&v0, "DIRECTORYtreat DEST as a normal fileexplain what is being done(unimplemented) preserve security context(unimplemented) set security context of files and directoriesCONTEXT--preserve-context, -P--context, -ZOptions --target-directory and --no-target-directo", 9);
    v0.value_hint(&v1, 4);
    v1.arg(&v4, &v0);
    v4.new("no-target-directoryverbosefiles(uutils coreutils) 0.0.30Copy SOURCE to DEST or multiple SOURCE(s) to the existing\nDIRECTORY, while setting permission modes and owner/group{} [OPTION]... [FILE]...compare each pair of source and destination files, and in som", 19);
    v0.short(&v4, 84);
    v4.long(&v0, "no-target-directoryverbosefiles(uutils coreutils) 0.0.30Copy SOURCE to DEST or multiple SOURCE(s) to the existing\nDIRECTORY, while setting permission modes and owner/group{} [OPTION]... [FILE]...compare each pair of source and destination files, and in som", 19);
    v0.help(&v4, "treat DEST as a normal fileexplain what is being done(unimplemented) preserve security context(unimplemented) set security context of files and directoriesCONTEXT--preserve-context, -P--context, -ZOptions --target-directory and --no-target-directory are mu", 27);
    v7.action(&v0, 2);
    v4.arg(&v1, &v7);
    v1.new("verbosefiles(uutils coreutils) 0.0.30Copy SOURCE to DEST or multiple SOURCE(s) to the existing\nDIRECTORY, while setting permission modes and owner/group{} [OPTION]... [FILE]...compare each pair of source and destination files, and in some cases, do not mod", 7);
    v0.short(&v1, 118);
    v1.long(&v0, "verbosefiles(uutils coreutils) 0.0.30Copy SOURCE to DEST or multiple SOURCE(s) to the existing\nDIRECTORY, while setting permission modes and owner/group{} [OPTION]... [FILE]...compare each pair of source and destination files, and in some cases, do not mod", 7);
    v0.help(&v1, "explain what is being done(unimplemented) preserve security context(unimplemented) set security context of files and directoriesCONTEXT--preserve-context, -P--context, -ZOptions --target-directory and --no-target-directory are mutually exclusive\nOptions --", 26);
    v7.action(&v0, 2);
    v1.arg(&v4, &v7);
    v4.new("preserve-context", 16);
    v0.short(&v4, 80);
    v4.long(&v0, "preserve-context", 16);
    v0.help(&v4, "(unimplemented) preserve security context(unimplemented) set security context of files and directoriesCONTEXT--preserve-context, -P--context, -ZOptions --target-directory and --no-target-directory are mutually exclusive\nOptions --compare and --preserve-tim", 41);
    v7.action(&v0, 2);
    v4.arg(&v1, &v7);
    v1.new("contextinnerUUsageErrormessagechanging : ", 7);
    v0.short(&v1, 90);
    v1.long(&v0, "contextinnerUUsageErrormessagechanging : ", 7);
    v0.help(&v1, "(unimplemented) set security context of files and directoriesCONTEXT--preserve-context, -P--context, -ZOptions --target-directory and --no-target-directory are mutually exclusive\nOptions --compare and --preserve-timestamps are mutually exclusive\nOptions --", 61);
    v1.value_name(&v0, "CONTEXT--preserve-context, -P--context, -ZOptions --target-directory and --no-target-directory are mutually exclusive\nOptions --compare and --preserve-timestamps are mutually exclusive\nOptions --compare and --strip are mutually exclusive\nInvalid mode strin", 7);
    v0.action(&v1, 2);
    v1.arg(&v4, &v0);
    v4.new("files(uutils coreutils) 0.0.30Copy SOURCE to DEST or multiple SOURCE(s) to the existing\nDIRECTORY, while setting permission modes and owner/group{} [OPTION]... [FILE]...compare each pair of source and destination files, and in some cases, do not modify the", 5);
    v0.action(&v4, 1);
    v4.num_args(&v0);
    v0.value_hint(&v4, 2);
    a0.arg(&v1, &v0);
    return a0;
}
