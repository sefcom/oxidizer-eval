long long uu_split::uu_app::h8ecc4f4e2c344dd0(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    unsigned long v0;  // [sp-0xab0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xaa8]
    unsigned long v2;  // [sp-0xaa0], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0xa98]
    unsigned long v4;  // [sp-0xa90], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0xa88]
    unsigned long v6;  // [sp-0xa80], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0xa78]
    void* v8;  // [sp-0xa70]
    unsigned long long v9;  // [sp-0xa68]
    char v10;  // [sp-0xa60]
    char v11;  // [bp-0xa58]
    unsigned int v12;  // [sp-0x810]
    unsigned int v13;  // [sp-0x80c]
    char v14;  // [bp-0x808]
    unsigned int v15;  // [sp-0x5c0]
    unsigned int v16;  // [sp-0x5bc]
    char v17;  // [bp-0x54c]
    char v18;  // [bp-0x544]
    char v19;  // [bp-0x540]
    unsigned int v20;  // [sp-0x2f8]
    unsigned int v21;  // [sp-0x2f4]
    unsigned long long v22;  // [sp-0x284]
    unsigned int v23;  // [sp-0x27c]
    int v24;  // [bp-0x278], Other Possible Types: char, unsigned long long
    unsigned long long v25;  // [sp-0x270]
    int v26;  // [sp-0x268], Other Possible Types: unsigned long long
    unsigned long long v27;  // [sp-0x260]
    int v28;  // [sp-0x258], Other Possible Types: unsigned long long
    unsigned long long v29;  // [sp-0x250]
    int v30;  // [sp-0x248], Other Possible Types: unsigned long long
    unsigned long long v31;  // [sp-0x240]
    unsigned long long v33;  // rdx
    int v34;  // xmm0
    int v35;  // xmm1
    int v36;  // xmm2
    int v37;  // xmm0
    int v38;  // xmm1
    int v39;  // xmm2

    clap_builder::builder::command::Command::new::h2004006e8e24f7bb(&v14, uucore::util_name::h412db5e565a079f3(), v33);
    clap_builder::builder::command::Command::version::hcbfbe8b2523be6e0(&v19, &v14, "0.0.28", 6);
    clap_builder::builder::command::Command::about::hd7edd7356cefd748(&v14, &v19, "Create output files containing consecutive or interleaved sections of input", 75);
    clap_builder::builder::command::Command::after_help::hed2db4f14f72a565(&v19, &v14, "Output fixed-size pieces of INPUT to PREFIXaa, PREFIXab, ...; default size is 1000, and default PREFIX is 'x'. With no INPUT, or when INPUT is -, read standard input.\n\nThe SIZE argument is an integer and optional unit (example: 10K is 10*1024).\nUnits are K,M,G,T,P,E,Z,Y,R,Q (powers of 1024) or KB,MB,... (powers of 1000).\nBinary prefixes can be used, too: KiB=K, MiB=M, and so on.\n\nCHUNKS may be:\n\n- N       split into N files based on size of input\n- K/N     output Kth of N to stdout\n- l/N     split into N files without splitting lines/records\n- l/K/N   output Kth of N to stdout without splitting lines/records\n- r/N     like 'l' but use round robin distribution\n- r/K/N   likewise but only output Kth of N to stdout", 721);
    uucore::format_usage::h00b69bae12d8ac9c(&v11, "{} [OPTION]... [INPUT [PREFIX]]", 31);
    clap_builder::builder::command::Command::override_usage::h0b68218f63d937fd(&v14, &v19, &v11);
    memcpy(&v19, &v14, 700);
    v22 = 549755814016 | *((long long *)&v17);
    v23 = *((int *)&v18);
    clap_builder::builder::arg::Arg::new::hf7a122551d392dc1(&v14, "bytes", 5);
    clap_builder::builder::arg::Arg::short::hf4044b66c7440bec(&v11, &v14, 98);
    clap_builder::builder::arg::Arg::long::h1d06c0516731f959(&v14, &v11, "bytes", 5);
    memcpy(&v11, &v14, 584);
    v12 = v15 | 32;
    v13 = v16;
    clap_builder::builder::arg::Arg::value_name::h3fb566232f8d02c5(&v14, &v11, "SIZE", 4);
    clap_builder::builder::arg::Arg::help::he289d01d8eae3665(&v11, &v14, "put SIZE bytes per output file", 30);
    clap_builder::builder::command::Command::arg::ha40fdc0f0ce3e322(&v14, &v19, &v11);
    clap_builder::builder::arg::Arg::new::hf7a122551d392dc1(&v19, "line-bytes", 10);
    clap_builder::builder::arg::Arg::short::hf4044b66c7440bec(&v11, &v19, 67);
    clap_builder::builder::arg::Arg::long::h1d06c0516731f959(&v19, &v11, "line-bytes", 10);
    memcpy(&v11, &v19, 584);
    v12 = v20 | 32;
    v13 = v21;
    clap_builder::builder::arg::Arg::value_name::h3fb566232f8d02c5(&v19, &v11, "SIZE", 4);
    clap_builder::builder::arg::Arg::help::he289d01d8eae3665(&v11, &v19, "put at most SIZE bytes of lines per output file", 47);
    clap_builder::builder::command::Command::arg::ha40fdc0f0ce3e322(&v19, &v14, &v11);
    clap_builder::builder::arg::Arg::new::hf7a122551d392dc1(&v14, "lines", 5);
    clap_builder::builder::arg::Arg::short::hf4044b66c7440bec(&v11, &v14, 108);
    clap_builder::builder::arg::Arg::long::h1d06c0516731f959(&v14, &v11, "lines", 5);
    memcpy(&v11, &v14, 584);
    v12 = v15 | 32;
    v13 = v16;
    clap_builder::builder::arg::Arg::value_name::h3fb566232f8d02c5(&v14, &v11, "NUMBER", 6);
    clap_builder::builder::arg::Arg::default_value::h49117650b64724f0(&v11, &v14, &g_417994, 4);
    clap_builder::builder::arg::Arg::help::he289d01d8eae3665(&v24, &v11, "put NUMBER lines/records per output file", 40);
    clap_builder::builder::command::Command::arg::ha40fdc0f0ce3e322(&v14, &v19, &v24);
    clap_builder::builder::arg::Arg::new::hf7a122551d392dc1(&v19, "number", 6);
    clap_builder::builder::arg::Arg::short::hf4044b66c7440bec(&v11, &v19, 110);
    clap_builder::builder::arg::Arg::long::h1d06c0516731f959(&v19, &v11, "number", 6);
    memcpy(&v11, &v19, 584);
    v12 = v20 | 32;
    v13 = v21;
    clap_builder::builder::arg::Arg::value_name::h3fb566232f8d02c5(&v19, &v11, "CHUNKS", 6);
    clap_builder::builder::arg::Arg::help::he289d01d8eae3665(&v11, &v19, "generate CHUNKS output files; see explanation below", 51);
    clap_builder::builder::command::Command::arg::ha40fdc0f0ce3e322(&v19, &v14, &v11);
    clap_builder::builder::arg::Arg::new::hf7a122551d392dc1(&v14, "additional-suffix", 17);
    clap_builder::builder::arg::Arg::long::h1d06c0516731f959(&v11, &v14, "additional-suffix", 17);
    memcpy(&v14, &v11, 584);
    v15 = v12 | 32;
    v16 = v13;
    clap_builder::builder::arg::Arg::value_name::h3fb566232f8d02c5(&v11, &v14, "SUFFIX", 6);
    clap_builder::builder::arg::Arg::default_value::h49117650b64724f0(&v14, &v11, 1, 0);
    clap_builder::builder::arg::Arg::help::he289d01d8eae3665(&v11, &v14, "additional SUFFIX to append to output file names", 48);
    clap_builder::builder::command::Command::arg::ha40fdc0f0ce3e322(&v14, &v19, &v11);
    clap_builder::builder::arg::Arg::new::hf7a122551d392dc1(&v19, "filter", 6);
    clap_builder::builder::arg::Arg::long::h1d06c0516731f959(&v11, &v19, "filter", 6);
    memcpy(&v19, &v11, 584);
    v20 = v12 | 32;
    v21 = v13;
    clap_builder::builder::arg::Arg::value_name::h3fb566232f8d02c5(&v11, &v19, "COMMAND", 7);
    clap_builder::builder::arg::Arg::value_hint::h7114cad85bacfb26(&v19, &v11, 6);
    clap_builder::builder::arg::Arg::help::he289d01d8eae3665(&v11, &v19, "write to shell COMMAND; file name is $FILE (Currently not implemented for Windows)", 82);
    clap_builder::builder::command::Command::arg::ha40fdc0f0ce3e322(&v19, &v14, &v11);
    clap_builder::builder::arg::Arg::new::hf7a122551d392dc1(&v14, "elide-empty-files", 17);
    clap_builder::builder::arg::Arg::long::h1d06c0516731f959(&v11, &v14, "elide-empty-files", 17);
    clap_builder::builder::arg::Arg::short::hf4044b66c7440bec(&v14, &v11, 101);
    clap_builder::builder::arg::Arg::help::he289d01d8eae3665(&v11, &v14, "do not generate empty output files with '-n'", 44);
    clap_builder::builder::arg::Arg::action::hcae145e79d3b1f16(&v24, &v11, 2);
    clap_builder::builder::command::Command::arg::ha40fdc0f0ce3e322(&v14, &v19, &v24);
    clap_builder::builder::arg::Arg::new::hf7a122551d392dc1(&v19, "-d", 2);
    clap_builder::builder::arg::Arg::short::hf4044b66c7440bec(&v11, &v19, 100);
    clap_builder::builder::arg::Arg::action::hcae145e79d3b1f16(&v19, &v11, 2);
    v0 = "numeric-suffixes";
    v1 = 16;
    v2 = "-d";
    v3 = 2;
    v4 = "hex-suffixes";
    v5 = 12;
    v6 = "-x";
    v7 = 2;
    v30 = v6;
    v31 = v7;
    v28 = v4;
    v29 = v5;
    v26 = v2;
    v27 = v3;
    *((int128_t *)&v24) = *((int128_t *)&v0);
    clap_builder::builder::arg::Arg::overrides_with_all::hf785a2d70c6d4e6e(&v11, &v19, &v24);
    clap_builder::builder::arg::Arg::help::he289d01d8eae3665(&v24, &v11, "use numeric suffixes starting at 0, not alphabetic", 50);
    clap_builder::builder::command::Command::arg::ha40fdc0f0ce3e322(&v19, &v14, &v24);
    clap_builder::builder::arg::Arg::new::hf7a122551d392dc1(&v14, "numeric-suffixes", 16);
    clap_builder::builder::arg::Arg::long::h1d06c0516731f959(&v11, &v14, "numeric-suffixes", 16);
    memcpy(&v14, &v11, 584);
    v15 = 128 | v12;
    v16 = v13;
    v8 = 0;
    v9 = 1;
    v10 = 0;
    v26 = *((long long *)&v10);
    v24 = v8;
    v25 = v9;
    clap_builder::builder::arg::Arg::num_args::h79dea2ad13372642(&v11, &v14, &v24);
    v34 = *((int128_t *)&v0);
    v35 = *((int128_t *)&v2);
    v36 = *((int128_t *)&v4);
    *((int128_t *)&v30) = *((int128_t *)&v6);
    v28 = v36;
    v26 = v35;
    v24 = v34;
    clap_builder::builder::arg::Arg::overrides_with_all::hf785a2d70c6d4e6e(&v14, &v11, &v24);
    clap_builder::builder::arg::Arg::value_name::h3fb566232f8d02c5(&v11, &v14, "FROMCyan", 4);
    clap_builder::builder::arg::Arg::help::he289d01d8eae3665(&v24, &v11, "same as -d, but allow setting the start value", 45);
    clap_builder::builder::command::Command::arg::ha40fdc0f0ce3e322(&v14, &v19, &v24);
    clap_builder::builder::arg::Arg::new::hf7a122551d392dc1(&v19, "-x", 2);
    clap_builder::builder::arg::Arg::short::hf4044b66c7440bec(&v11, &v19, 120);
    clap_builder::builder::arg::Arg::action::hcae145e79d3b1f16(&v19, &v11, 2);
    v37 = *((int128_t *)&v0);
    v38 = *((int128_t *)&v2);
    v39 = *((int128_t *)&v4);
    *((int128_t *)&v30) = *((int128_t *)&v6);
    v28 = v39;
    v26 = v38;
    v24 = v37;
    clap_builder::builder::arg::Arg::overrides_with_all::hf785a2d70c6d4e6e(&v11, &v19, &v24);
    clap_builder::builder::arg::Arg::help::he289d01d8eae3665(&v24, &v11, "use hex suffixes starting at 0, not alphabetic", 46);
    clap_builder::builder::command::Command::arg::ha40fdc0f0ce3e322(&v19, &v14, &v24);
    clap_builder::builder::arg::Arg::new::hf7a122551d392dc1(&v14, "hex-suffixes", 12);
    clap_builder::builder::arg::Arg::long::h1d06c0516731f959(&v11, &v14, "hex-suffixes", 12);
    memcpy(&v14, &v11, 584);
    v15 = 128 | v12;
    v16 = v13;
    clap_builder::builder::arg::Arg::num_args::h79dea2ad13372642(&v11, &v14, &v8);
    clap_builder::builder::arg::Arg::overrides_with_all::hf785a2d70c6d4e6e(&v14, &v11, &v0);
    clap_builder::builder::arg::Arg::value_name::h3fb566232f8d02c5(&v11, &v14, "FROMCyan", 4);
    clap_builder::builder::arg::Arg::help::he289d01d8eae3665(&v24, &v11, "same as -x, but allow setting the start value", 45);
    clap_builder::builder::command::Command::arg::ha40fdc0f0ce3e322(&v14, &v19, &v24);
    clap_builder::builder::arg::Arg::new::hf7a122551d392dc1(&v19, "suffix-length", 13);
    clap_builder::builder::arg::Arg::short::hf4044b66c7440bec(&v11, &v19, 97);
    clap_builder::builder::arg::Arg::long::h1d06c0516731f959(&v19, &v11, "suffix-length", 13);
    memcpy(&v11, &v19, 584);
    v12 = v20 | 32;
    v13 = v21;
    clap_builder::builder::arg::Arg::value_name::h3fb566232f8d02c5(&v19, &v11, "N", 1);
    clap_builder::builder::arg::Arg::help::he289d01d8eae3665(&v11, &v19, "generate suffixes of length N (default 2)", 41);
    clap_builder::builder::command::Command::arg::ha40fdc0f0ce3e322(&v19, &v14, &v11);
    clap_builder::builder::arg::Arg::new::hf7a122551d392dc1(&v14, "verbose", 7);
    clap_builder::builder::arg::Arg::long::h1d06c0516731f959(&v11, &v14, "verbose", 7);
    clap_builder::builder::arg::Arg::help::he289d01d8eae3665(&v14, &v11, "print a diagnostic just before each output file is opened", 57);
    clap_builder::builder::arg::Arg::action::hcae145e79d3b1f16(&v11, &v14, 2);
    clap_builder::builder::command::Command::arg::ha40fdc0f0ce3e322(&v14, &v19, &v11);
    clap_builder::builder::arg::Arg::new::hf7a122551d392dc1(&v19, "separator", 9);
    clap_builder::builder::arg::Arg::short::hf4044b66c7440bec(&v11, &v19, 116);
    clap_builder::builder::arg::Arg::long::h1d06c0516731f959(&v19, &v11, "separator", 9);
    memcpy(&v11, &v19, 584);
    v12 = v20 | 32;
    v13 = v21;
    clap_builder::builder::arg::Arg::value_name::h3fb566232f8d02c5(&v19, &v11, "SEP", 3);
    clap_builder::builder::arg::Arg::action::hcae145e79d3b1f16(&v11, &v19, 1);
    clap_builder::builder::arg::Arg::help::he289d01d8eae3665(&v24, &v11, "use SEP instead of newline as the record separator; '\\0' (zero) specifies the NUL character", 91);
    clap_builder::builder::command::Command::arg::ha40fdc0f0ce3e322(&v19, &v14, &v24);
    clap_builder::builder::arg::Arg::new::hf7a122551d392dc1(&v14, "-io-blksize", 11);
    clap_builder::builder::arg::Arg::long::h1d06c0516731f959(&v11, &v14, "io-blksize", 10);
    clap_builder::builder::arg::Arg::alias::h7b40893bec405f63(&v14, &v11, "-io-blksize", 11);
    memcpy(&v11, &v14, 584);
    v12 = v15 | 4;
    v13 = v16;
    clap_builder::builder::command::Command::arg::ha40fdc0f0ce3e322(&v14, &v19, &v11);
    clap_builder::builder::arg::Arg::new::hf7a122551d392dc1(&v19, "input", 5);
    clap_builder::builder::arg::Arg::default_value::h49117650b64724f0(&v11, &v19, "-", 1);
    clap_builder::builder::arg::Arg::value_hint::h7114cad85bacfb26(&v24, &v11, 3);
    clap_builder::builder::command::Command::arg::ha40fdc0f0ce3e322(&v19, &v14, &v24);
    clap_builder::builder::arg::Arg::new::hf7a122551d392dc1(&v14, "prefix", 6);
    clap_builder::builder::arg::Arg::default_value::h49117650b64724f0(&v11, &v14, "xmulti-character separator multiple separator characters specified--filter does not process a chunk extracted to stdoutinvalid IO block size: ", 1);
    clap_builder::builder::command::Command::arg::ha40fdc0f0ce3e322(a0, &v19, &v11);
    return a0;
}
