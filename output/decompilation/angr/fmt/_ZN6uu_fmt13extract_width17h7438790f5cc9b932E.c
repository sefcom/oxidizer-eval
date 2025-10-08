long long uu_fmt::extract_width(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0xa8], Other Possible Types: unsigned int, unsigned long long
    void* v1;  // [bp-0xa0], Other Possible Types: unsigned long long
    char *v2;  // [bp-0x98]
    unsigned long long v3;  // [bp-0x90]
    void* v4;  // [bp-0x88]
    char *v5;  // [bp-0x78]
    unsigned long long v6;  // [bp-0x70]
    void* v7;  // [bp-0x68]
    unsigned long v8;  // [bp-0x60]
    unsigned long v9;  // [bp-0x58]
    char v10;  // [bp-0x50]
    char v11;  // [bp-0x48]
    unsigned int v12;  // [bp-0x30]
    unsigned long long v14[3];  // rax
    void* v15;  // rax
    struct_0 *v16;  // r13
    unsigned long long v17;  // rdx
    unsigned long long v18[3];  // rax
    unsigned long long v19;  // rax

    v0.try_get_one(a1, "width(uutils coreutils) 0.0.30Reformat paragraphs from input files (or stdin) to stdout.{} [-WIDTH] [OPTION]... [FILE]...First and second line of paragraph may have different indentations, in which case the first line's indentation is preserved, and each s", 5);
    v14 = "width(uutils coreutils) 0.0.30Reformat paragraphs from input files (or stdin) to stdout.{} [-WIDTH] [OPTION]... [FILE]...First and second line of paragraph may have different indentations, in which case the first line's indentation is preserved, and each s".unwrap(5, &v0);
    if (v14)
    {
        ::0x45cf80::core::num::<impl usize>::from_ascii_radix(&v0, v14[1], v14[2]);
        if (v0)
        {
            v7 = 0;
            v8 = v14[1];
            v9 = v14[2];
            v10 = 1;
            v5 = &v7;
            v6 = <os_display::Quoted as core::fmt::Display>::fmt;
            v0 = &g_4f0928;
            v1 = 1;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            v11.map_or_else(&v0);
            v12 = 1;
            *((double *)&a0->field_8) = v11.new();
            a0->field_10 = &g_4f0720;
            a0->field_0 = 1;
            return &g_4f0720;
        }
        v15 = v1;
        a0->field_8 = 1;
        a0->field_10 = v1;
    }
    else
    {
        v16 = 8;
        if ((v17 == 1 & (char)a1.index_of("filesa negative number should be at least two characters longinvalid option -- ; -WIDTH is recognized only when it is the first\noption; use -w N insteadsrc/uu/fmt/src/fmt.rsinvalid width: ", 5)))
        {
            v0.try_get_one(a1, "filesa negative number should be at least two characters longinvalid option -- ; -WIDTH is recognized only when it is the first\noption; use -w N insteadsrc/uu/fmt/src/fmt.rsinvalid width: ", 5);
            v18 = "filesa negative number should be at least two characters longinvalid option -- ; -WIDTH is recognized only when it is the first\noption; use -w N insteadsrc/uu/fmt/src/fmt.rsinvalid width: ".unwrap(5, &v0);
            if (!v18)
                core::option::unwrap_failed(&g_4f0938); /* do not return */
            v0 = 0;
            v19 = ::0x45e500::core::char::methods::encode_utf8_raw(45, &v0).strip_prefix_of(v18[1], v18[2]);
            if (!v19)
                goto LABEL_464f18;
            ::0x45cf80::core::num::<impl usize>::from_ascii_radix(&v0, v19, v17);
            v15 = v1;
            a0->field_8 = (char)v0 ^ 1;
            v16 = 16;
        }
        else
        {
LABEL_464f18:
            v15 = 0;
        }
        *((void* *)(a0 + v16)) = v15;
    }
    a0->field_0 = 0;
    return v15;
}
