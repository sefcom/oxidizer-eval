long long forc_fmt::examples()
{
    char v0;  // [bp-0x188]
    int v1;  // [bp-0x180], Other Possible Types: char
    unsigned long long v2;  // [bp-0x170]
    unsigned long long v3;  // [bp-0x168]
    int v4;  // [bp-0x168]
    unsigned long long v5;  // [bp-0x160]
    char *v6;  // [bp-0x158], Other Possible Types: unsigned long long
    uint128_t v7;  // [bp-0x150]
    unsigned long long v8;  // [bp-0x140]
    int v9;  // [bp-0x138]
    unsigned long long v10;  // [bp-0x128]
    char v11;  // [bp-0x120]
    unsigned long long v12;  // [bp-0x110]
    int v13;  // [bp-0x108]
    unsigned long long v14;  // [bp-0xf8]
    char v15;  // [bp-0xf0]
    unsigned long long v16;  // [bp-0xe0]
    int v17;  // [bp-0xd8]
    unsigned long long v18;  // [bp-0xc8]
    int v19;  // [bp-0xb8]
    unsigned long long v20;  // [bp-0xa8]
    int v21;  // [bp-0x98]
    unsigned long long v22;  // [bp-0x88]
    int v23;  // [bp-0x78]
    unsigned long long v24;  // [bp-0x68]
    int v25;  // [bp-0x58], Other Possible Types: char
    unsigned long long v26;  // [bp-0x48]
    char v27;  // [bp-0x40]
    unsigned long long v28;  // [bp-0x30]
    char v29;  // [bp-0x28]
    unsigned long long v31;  // rax

    v3 = &g_c0a4d0;
    v5 = 1;
    v6 = &v0;
    v7 = 0;
    v25.map_or_else("    # Run the formatter in check mode on the current directory\n    forc fmt --check\n\n    # Run the formatter in check mode on the current directory with short format\n    forc fmt -c\n\n    # Run formatter against a given file\n    forc fmt --file {path}/src/m", 85, &v3);
    v3 = &g_c0a4e0;
    v5 = 1;
    v6 = &v0;
    v7 = 0;
    v1.map_or_else("    # Run the formatter in check mode on the current directory with short format\n    forc fmt -c\n\n    # Run formatter against a given file\n    forc fmt --file {path}/src/main.sw\n\n    # Run formatter against a given file with short format\n    forc fmt -f {p", 98, &v3);
    v17 = v1;
    v18 = v2;
    v3 = &g_c0a4f0;
    v5 = 1;
    v6 = &v0;
    v7 = 0;
    v1.map_or_else("    # Run formatter against a given file\n    forc fmt --file {path}/src/main.sw\n\n    # Run formatter against a given file with short format\n    forc fmt -f {path}/src/main.sw\n\n    # Run formatter against a given dir\n    forc fmt --path {path}\n\n    # Run fo", 81, &v3);
    v19 = v1;
    v20 = v2;
    v3 = &g_c0a500;
    v5 = 1;
    v6 = &v0;
    v7 = 0;
    v1.map_or_else("    # Run formatter against a given file with short format\n    forc fmt -f {path}/src/main.sw\n\n    # Run formatter against a given dir\n    forc fmt --path {path}\n\n    # Run formatter against a given dir with short format\n    forc fmt -p {path}\n\ncheckThe fo", 95, &v3);
    v21 = v1;
    v22 = v2;
    v3 = &g_c0a510;
    v5 = 1;
    v6 = &v0;
    v7 = 0;
    v1.map_or_else("    # Run formatter against a given dir\n    forc fmt --path {path}\n\n    # Run formatter against a given dir with short format\n    forc fmt -p {path}\n\ncheckThe following required argument was not provided: checkAppCHECKRun in 'check' modeRun in 'check' mode", 68, &v3);
    v23 = v1;
    v24 = v2;
    *((unsigned long long **)&v4) = &g_c0a520;
    v5 = 1;
    v6 = &v0;
    v7 = 0;
    v27.map_or_else("    # Run formatter against a given dir with short format\n    forc fmt -p {path}\n\ncheckThe following required argument was not provided: checkAppCHECKRun in 'check' modeRun in 'check' mode.\n\n- Exits with `0` if input is formatted correctly. - Exits with `1", 82, &(unsigned long long)v4);
    v4 = v25;
    v6 = v26;
    memcpy(&v7, &v17, 16);
    v8 = v18;
    v9 = v19;
    v10 = v20;
    memcpy(&v11, &v21, 16);
    v12 = v22;
    v14 = v24;
    v13 = v23;
    v16 = v28;
    memcpy(&v15, &v27, 16);
    alloc::str::join_generic_copy(&v29, &(unsigned long long)v4);
    v31 = v29.into_boxed_slice();
    core::ptr::drop_in_place<[alloc::string::String; 6]>(&(unsigned long long)v4);
    return v31;
}
