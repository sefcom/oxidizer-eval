long long check_docs::find_files(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6)
{
    void* v0;  // [bp-0x200]
    char *v1;  // [bp-0x1f8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x1f0]
    unsigned long long v3;  // [bp-0x1e8]
    unsigned long long v4;  // [bp-0x1e0]
    unsigned long long v5;  // [bp-0x1d8]
    unsigned long long v6;  // [bp-0x1d0]
    unsigned long long v7;  // [bp-0x1c8]
    unsigned long long v8;  // [bp-0x1c0]
    unsigned long long v9;  // [bp-0x1b8]
    unsigned long long v10;  // [bp-0x1b0]
    unsigned long long v11;  // [bp-0x1a8]
    unsigned long long v12;  // [bp-0x1a0]
    unsigned long long v13;  // [bp-0x198]
    unsigned long long v14;  // [bp-0x190]
    unsigned long long v15;  // [bp-0x188]
    unsigned long long v16;  // [bp-0x180]
    unsigned long long v17;  // [bp-0x170]
    unsigned long long v18;  // [bp-0x168]
    char v19;  // [bp-0x160]
    char v20;  // [bp-0x148]
    char v21;  // [bp-0x130]
    char v22;  // [bp-0x128], Other Possible Types: unsigned long long
    int v23;  // [bp-0x120], Other Possible Types: unsigned long long
    char *v24;  // [bp-0x118]
    unsigned long long v25;  // [bp-0x110]
    void* v26;  // [bp-0x108]
    char v27;  // [bp-0x48]

    v17 = a1;
    v18 = a2;
    v22.new("findFAIL");
    v1 = a3;
    v2 = a4;
    v3 = "-typef-nameProgram `find` not in PATHIncludeanchor_nameanchor_fileinclude_fileline_noAnchor";
    v4 = 5;
    v5 = "f-nameProgram `find` not in PATHIncludeanchor_nameanchor_fileinclude_fileline_noAnchor";
    v6 = 1;
    v7 = "-nameProgram `find` not in PATHIncludeanchor_nameanchor_fileinclude_fileline_noAnchor";
    v8 = 5;
    v9 = a1;
    v10 = a2;
    v11 = "!^(\\S+):(\\d+):\\s*\\{\\{\\s*#include\\s*(\\S+?)\\s*(?::\\s*(\\S+)\\s*)?\\}\\}could not construct regexscripts/check-docs/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.3/src/regex/string.rs";
    v12 = 1;
    v13 = "-nameProgram `find` not in PATHIncludeanchor_nameanchor_fileinclude_fileline_noAnchor";
    v14 = 5;
    v15 = a5;
    v16 = a6;
    v22.args(&v1);
    v1.output(&v22);
    v19.expect(&v1, "Program `find` not in PATHIncludeanchor_nameanchor_fileinclude_fileline_noAnchor", 26, &g_5d36d0);
    core::ptr::drop_in_place<std::process::Command>(&v22);
    if (*((int *)&v21))
    {
        v1 = &v17;
        v2 = <&T as core::fmt::Display>::fmt;
        v22 = &g_5d36c0;
        v23 = 1;
        v26 = 0;
        v24 = &v1;
        v25 = 1;
        v27.map_or_else(0, a2, &v22);
        *((long long *)&v0[8]) = v27.msg();
        *((unsigned long long *)v0) = 0x8000000000000000;
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v19);
    }
    else
    {
        v22.from_utf8(&v19);
        memcpy(&v1, &(char)v23, 16);
        v3 = v25;
        if ((char)(((0 ^ v22) & (0 ^ -(v22))) >> 63))
        {
            *((unsigned long long *)&v0[16]) = v3;
            *((int128_t *)v0) = *((int128_t *)&v1);
        }
        else
        {
            v25 = v3;
            *((int128_t *)&v23) = *((int128_t *)&v1);
            *((long long *)&v0[8]) = v22.from();
            *((unsigned long long *)v0) = 0x8000000000000000;
        }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v20);
    return v0;
}
