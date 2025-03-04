long long uu_du::uu_app::h2f2ed9ce6c921f55(unsigned long long a0)
{
    int v0;  // [sp-0xae8], Other Possible Types: void*, char
    unsigned long long v1;  // [sp-0xae0]
    int v2;  // [sp-0xad8], Other Possible Types: void*
    unsigned long long v3;  // [sp-0xad0]
    int v4;  // [sp-0xac8]
    int v5;  // [sp-0xab8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v6;  // [sp-0xab0]
    unsigned long long v7;  // [bp-0xaa8], Other Possible Types: char
    int v8;  // [sp-0xaa0]
    int v9;  // [sp-0xa90]
    int v10;  // [sp-0xa80]
    int v11;  // [sp-0xa70]
    unsigned long long v12;  // [sp-0xa60]
    int v13;  // [sp-0xa58]
    int v14;  // [sp-0xa48]
    int v15;  // [sp-0xa38]
    int v16;  // [sp-0xa28]
    unsigned long long v17;  // [sp-0xa18]
    unsigned int v18;  // [sp-0x8a0]
    unsigned int v19;  // [sp-0x89c]
    char v20;  // [bp-0x898]
    char v21;  // [bp-0x888]
    char v22;  // [bp-0x640]
    char v23;  // [bp-0x63c]
    unsigned long long v24;  // [sp-0x5cc]
    unsigned int v25;  // [sp-0x5c4]
    char v26;  // [bp-0x5c0]
    char v27;  // [bp-0x378]
    char v28;  // [bp-0x374]
    char v29;  // [bp-0x304]
    char v30;  // [bp-0x2fc]
    char v31;  // [bp-0x2f8]
    char v32;  // [bp-0x2e8]
    char v33;  // [bp-0x2d8]
    char v34;  // [bp-0x2c8]
    char v35;  // [bp-0x2b8]
    char v36;  // [bp-0x2b0]
    char v37;  // [bp-0x2a0]
    char v38;  // [bp-0x290]
    char v39;  // [bp-0x280]
    char v40;  // [bp-0x270]
    char v41;  // [bp-0x268]
    char v42;  // [bp-0x258]
    char v43;  // [bp-0x248]
    char v44;  // [bp-0x238]
    char v45;  // [bp-0x228]
    unsigned long long v47;  // rdx
    int v48;  // xmm1
    int v49;  // xmm2
    int v50;  // xmm3

    clap_builder::builder::command::Command::new::h162f37311a2c88cd(&v26, uucore::util_name::h60d842bf27b05e82(), v47);
    clap_builder::builder::command::Command::version::h4713cff2823b85d0(&v21, &v26, "0.0.28", 6);
    clap_builder::builder::command::Command::about::h45b7a1a0e2736312(&v26, &v21, "Estimate file space usage", 25);
    clap_builder::builder::command::Command::after_help::hc73d7b7264e674dd(&v21, &v26, "Display values are in units of the first available SIZE from --block-size,\nand the DU_BLOCK_SIZE, BLOCK_SIZE and BLOCKSIZE environment variables.\nOtherwise, units default to 1024 bytes (or 512 if POSIXLY_CORRECT is set).\n\nSIZE is an integer and optional unit (example: 10M is 10*1024*1024).\nUnits are K, M, G, T, P, E, Z, Y (powers of 1024) or KB, MB,... (powers\nof 1000).\n\nPATTERN allows some advanced exclusions. For example, the following syntaxes\nare supported:\n? will match only one character\n* will match zero or more characters\n{a,b} will match a or b", 558);
    uucore::format_usage::h76fcb2d15fbabc58(&v0, "{} [OPTION]... [FILE]...\n{} [OPTION]... --files0-from=F", 55);
    clap_builder::builder::command::Command::override_usage::h04167bad9a431f50(&v26, &v21, &v0);
    memcpy(&v21, &v26, 700);
    v24 = 1126449662918784 | *((long long *)&v29);
    v25 = *((int *)&v30);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&v26, "help", 4);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&v0, &v26, "help", 4);
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&v26, &v0, "Print help information.", 23);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&v0, &v26, 5);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&v26, &v21, &v0);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&v21, "all", 3);
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&v0, &v21, 97);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&v21, &v0, "all", 3);
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&v0, &v21, "write counts for all files, not just directories", 48);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&v41, &v0, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&v21, &v26, &v41);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&v26, "apparent-size", 13);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&v0, &v26, "apparent-size", 13);
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&v26, &v0, "print apparent sizes, rather than disk usage although the apparent size is usually smaller, it may be larger due to holes in ('sparse') files, internal fragmentation, indirect blocks, and the like", 196);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&v0, &v26, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&v26, &v21, &v0);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&v21, "block-size ignored\nsrc/uu/du/src/du.rsinvalid maximum depth summarizing conflicts with --max-depth=invalid argument  for 'time style'\nValid arguments are:\n- 'full-iso'\n- 'long-iso'\n- 'iso'\nTry ' --help' for more information.'birth' and 'creation' arguments for --time are not supported on this platform.Invalid exclude syntax: ", 10);
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&v0, &v21, 66);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&v21, &v0, "block-size ignored\nsrc/uu/du/src/du.rsinvalid maximum depth summarizing conflicts with --max-depth=invalid argument  for 'time style'\nValid arguments are:\n- 'full-iso'\n- 'long-iso'\n- 'iso'\nTry ' --help' for more information.'birth' and 'creation' arguments for --time are not supported on this platform.Invalid exclude syntax: ", 10);
    clap_builder::builder::arg::Arg::value_name::hb482852006cd427b(&v0, &v21, "SIZE", 4);
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&v41, &v0, "scale sizes by SIZE before printing them. E.g., '-BM' prints sizes in units of 1,048,576 bytes. See SIZE format below.", 118);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&v21, &v26, &v41);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&v26, "b", 1);
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&v0, &v26, 98);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&v26, &v0, "bytes", 5);
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&v0, &v26, "equivalent to '--apparent-size --block-size=1'", 46);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&v41, &v0, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&v26, &v21, &v41);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&v21, "c", 1);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&v0, &v21, "total", 5);
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&v21, &v0, 99);
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&v0, &v21, "produce a grand total", 21);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&v41, &v0, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&v21, &v26, &v41);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&v26, "d", 1);
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&v0, &v26, 100);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&v26, &v0, "max-depth", 9);
    clap_builder::builder::arg::Arg::value_name::hb482852006cd427b(&v0, &v26, "N", 1);
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&v41, &v0, "print the total for a directory (or file, with --all) only if it is N or fewer levels below the command line argument;  --max-depth=0 is the same as --summarize", 160);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&v26, &v21, &v41);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&v21, "h", 1);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&v0, &v21, "human-readable", 14);
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&v21, &v0, 104);
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&v0, &v21, "print sizes in human readable format (e.g., 1K 234M 2G)", 55);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&v41, &v0, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&v21, &v26, &v41);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&v26, "inodes", 6);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&v0, &v26, "inodes", 6);
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&v26, &v0, "list inode usage information instead of block usage like --block-size=1K", 72);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&v0, &v26, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&v26, &v21, &v0);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&v21, "k", 1);
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&v0, &v21, 107);
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&v21, &v0, "like --block-size=1K", 20);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&v0, &v21, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&v21, &v26, &v0);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&v26, "l", 1);
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&v0, &v26, 108);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&v26, &v0, "count-links", 11);
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&v0, &v26, "count sizes many times if hard linked", 37);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&v41, &v0, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&v26, &v21, &v41);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&v21, "dereference", 11);
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&v0, &v21, 76);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&v21, &v0, "dereference", 11);
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&v0, &v21, "follow all symbolic links", 25);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&v41, &v0, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&v21, &v26, &v41);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&v26, "dereference-args", 16);
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&v0, &v26, 68);
    clap_builder::builder::arg::Arg::visible_short_alias::h5d050c0345745f6f(&v26, &v0, 72);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&v0, &v26, "dereference-args", 16);
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&v26, &v0, "follow only symlinks that are listed on the command line", 56);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&v0, &v26, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&v26, &v21, &v0);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&v21, "no-dereference", 14);
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&v0, &v21, 80);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&v21, &v0, "no-dereference", 14);
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&v0, &v21, "don't follow any symbolic links (this is the default)", 53);
    clap_builder::builder::arg::Arg::overrides_with::h68fe5fb7c2f3d782(&v21, &v0, "dereference", 11);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&v0, &v21, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&v21, &v26, &v0);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&v26, "m", 1);
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&v0, &v26, 109);
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&v26, &v0, "like --block-size=1M", 20);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&v0, &v26, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&v26, &v21, &v0);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&v21, "0", 1);
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&v0, &v21, 48);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&v21, &v0, "null", 4);
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&v0, &v21, "end each output line with 0 byte rather than newline", 52);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&v41, &v0, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&v21, &v26, &v41);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&v26, "S", 1);
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&v0, &v26, 83);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&v26, &v0, "separate-dirs", 13);
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&v0, &v26, "do not include size of subdirectories", 37);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&v41, &v0, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&v26, &v21, &v41);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&v21, "s", 1);
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&v0, &v21, 115);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&v21, &v0, "summarize", 9);
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&v0, &v21, "display only a total for each argument", 38);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&v41, &v0, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&v21, &v26, &v41);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&v26, "si", 2);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&v0, &v26, "si", 2);
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&v26, &v0, "like -h, but use powers of 1000 not 1024", 40);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&v0, &v26, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&v26, &v21, &v0);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&v21, "one-file-system", 15);
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&v0, &v21, 120);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&v21, &v0, "one-file-system", 15);
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&v0, &v21, "skip directories on different file systems", 42);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&v41, &v0, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&v21, &v26, &v41);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&v26, "threshold", 9);
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&v0, &v26, 116);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&v26, &v0, "threshold", 9);
    clap_builder::builder::arg::Arg::value_name::hb482852006cd427b(&v0, &v26, "SIZE", 4);
    clap_builder::builder::arg::Arg::num_args::h0c0d87da7d7ac489(&v26, &v0);
    memcpy(&v0, &v26, 584);
    v18 = *((int *)&v27) | 32;
    v19 = *((int *)&v28);
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&v41, &v0, "exclude entries smaller than SIZE if positive, or entries greater than SIZE if negative", 87);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&v26, &v21, &v41);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&v21, "verbose: \n\ttotal\t: read error: Is a directorycannot open '' for reading: No such file or directory:", 7);
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&v0, &v21, 118);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&v21, &v0, "verbose: \n\ttotal\t: read error: Is a directorycannot open '' for reading: No such file or directory:", 7);
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&v0, &v21, "verbose mode (option not present in GNU/Coreutils)", 50);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&v41, &v0, 2);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&v21, &v26, &v41);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&v26, "excludeadding  to the exclude list \n", 7);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&v0, &v26, "excludeadding  to the exclude list \n", 7);
    clap_builder::builder::arg::Arg::value_name::hb482852006cd427b(&v26, &v0, "PATTERN", 7);
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&v0, &v26, "exclude files that match PATTERN", 32);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&v41, &v0, 1);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&v26, &v21, &v41);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&v21, "exclude-from", 12);
    clap_builder::builder::arg::Arg::short::h37d14ffe681ddd9f(&v0, &v21, 88);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&v21, &v0, "exclude-from", 12);
    clap_builder::builder::arg::Arg::value_name::hb482852006cd427b(&v0, &v21, "FILEchar", 4);
    clap_builder::builder::arg::Arg::value_hint::haf2f2a709c5fadce(&v21, &v0, 3);
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&v0, &v21, "exclude files that match any pattern in FILE", 44);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&v41, &v0, 1);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&v21, &v26, &v41);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&v26, "files0-from", 11);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&v0, &v26, "files0-from", 11);
    clap_builder::builder::arg::Arg::value_name::hb482852006cd427b(&v26, &v0, "FILEchar", 4);
    clap_builder::builder::arg::Arg::value_hint::haf2f2a709c5fadce(&v0, &v26, 3);
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&v26, &v0, "summarize device usage of the NUL-terminated file names specified in file F; if F is -, then read names from standard input", 123);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&v0, &v26, 1);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&v26, &v21, &v0);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&v21, "time", 4);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&v0, &v21, "time", 4);
    clap_builder::builder::arg::Arg::value_name::hb482852006cd427b(&v21, &v0, "WORDJuly", 4);
    memcpy(&v0, &v21, 584);
    v18 = 128 | *((int *)&v22);
    v19 = *((int *)&v23);
    clap_builder::builder::arg::Arg::num_args::he1e39bae9b905f29(&v21, &v0);
    v5 = "atime";
    v6 = 5;
    v3 = 0x8000000000000000;
    *((int128_t *)&v4) = *((int128_t *)&v20);
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v7 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::hda18b201abad5f4a(&v41, &v0, "access", 6);
    clap_builder::builder::possible_value::PossibleValue::alias::hda18b201abad5f4a(&v31, &v41, "use", 3);
    v5 = "ctime";
    v6 = 5;
    v3 = 0x8000000000000000;
    *((int128_t *)&v4) = *((int128_t *)&v20);
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v7 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::hda18b201abad5f4a(&v36, &v0, "status", 6);
    v5 = "creation";
    v6 = 8;
    v3 = 0x8000000000000000;
    *((int128_t *)&v4) = *((int128_t *)&v20);
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v7 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::hda18b201abad5f4a(&v41, &v0, "birth", 5);
    v48 = *((int128_t *)&v32);
    v49 = *((int128_t *)&v33);
    v50 = *((int128_t *)&v34);
    *((int128_t *)&v0) = *((int128_t *)&v31);
    v2 = v48;
    v4 = v49;
    v5 = v50;
    v7 = *((long long *)&v35);
    *((int128_t *)&v8) = *((int128_t *)&v36);
    *((int128_t *)&v9) = *((int128_t *)&v37);
    *((int128_t *)&v10) = *((int128_t *)&v38);
    *((int128_t *)&v11) = *((int128_t *)&v39);
    v12 = *((long long *)&v40);
    v17 = *((long long *)&v45);
    *((int128_t *)&v16) = *((int128_t *)&v44);
    *((int128_t *)&v15) = *((int128_t *)&v43);
    *((int128_t *)&v14) = *((int128_t *)&v42);
    *((int128_t *)&v13) = *((int128_t *)&v41);
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::hf68df665b10f09a2(&v41, &v0);
    clap_builder::builder::arg::Arg::value_parser::hdecf3bfdbea0147c(&v0, &v21, &v41);
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&v41, &v0, "show time of the last modification of any file in the directory, or any of its subdirectories. If WORD is given, show time as WORD instead of modification time: atime, access, use, ctime, status, birth or creation", 213);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&v21, &v26, &v41);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&v26, "time-style", 10);
    clap_builder::builder::arg::Arg::long::h0165ed5c4cae0fa6(&v0, &v26, "time-style", 10);
    clap_builder::builder::arg::Arg::value_name::hb482852006cd427b(&v26, &v0, "STYLE", 5);
    clap_builder::builder::arg::Arg::help::h3a366a47e26ba8d4(&v0, &v26, "show times using style STYLE: full-iso, long-iso, iso, +FORMAT FORMAT is interpreted like 'date'invalid suffix in -- argument invalid ---- too large", 96);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(&v26, &v21, &v0);
    clap_builder::builder::arg::Arg::new::h7ed28ed0fae70ede(&v21, "FILEchar", 4);
    memcpy(&v0, &v21, 584);
    v18 = *((int *)&v22) | 4;
    v19 = *((int *)&v23);
    clap_builder::builder::arg::Arg::value_hint::haf2f2a709c5fadce(&v21, &v0, 2);
    clap_builder::builder::arg::Arg::action::he7a7971366893695(&v0, &v21, 1);
    clap_builder::builder::command::Command::arg::h2a205b0c3e684785(a0, &v26, &v0);
    return a0;
}
