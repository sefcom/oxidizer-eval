long long ruff_python_formatter::string::docstring::docstring_format_source(void* a0, struct_0 *a1, char a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0[3];  // [bp-0x2b0]
    char v1;  // [bp-0x2a8]
    int v2;  // [bp-0x298], Other Possible Types: char
    unsigned long long v3;  // [bp-0x288]
    char *v4;  // [bp-0x280]
    int v5;  // [bp-0x278], Other Possible Types: char *
    unsigned long long v6;  // [bp-0x270]
    int v7;  // [bp-0x268], Other Possible Types: char
    unsigned long long v8;  // [bp-0x258]
    int v9;  // [bp-0x248]
    int v10;  // [bp-0x238]
    char v11;  // [bp-0x228]
    unsigned long long v12;  // [bp-0x218]
    unsigned long long v13;  // [bp-0x210]
    unsigned long long v14;  // [bp-0x208]
    char *v15;  // [bp-0x200]
    unsigned short v16;  // [bp-0x1f8]
    unsigned short v17;  // [bp-0x1f0]
    char v18;  // [bp-0x1ee]
    int v19;  // [bp-0x1ec]
    char v20;  // [bp-0x1dc]
    unsigned long long v21;  // [bp-0x1d8]
    char v22;  // [bp-0x1d0]
    int v23;  // [bp-0x1c0]
    unsigned long long v24;  // [bp-0x1b0]
    int v25;  // [bp-0x1a8]
    int v26;  // [bp-0x198]
    unsigned long v27;  // [bp-0x190]
    int v28;  // [bp-0x188]
    char v29;  // [bp-0x178]
    unsigned long long v30;  // [bp-0x168]
    int v31;  // [bp-0x160]
    unsigned long long v32;  // [bp-0x150]
    char v33;  // [bp-0x148]
    int v34;  // [bp-0x138]
    int v35;  // [bp-0x128]
    unsigned long long v36;  // [bp-0x118]
    char v37;  // [bp-0x110], Other Possible Types: unsigned long long
    char v38;  // [bp-0x109]
    char v39;  // [bp-0x108]
    unsigned long v40;  // [bp-0x101]
    unsigned long long v41;  // [bp-0xf9]
    char v42;  // [bp-0xf8], Other Possible Types: unsigned long long
    char v43;  // [bp-0xf0]
    unsigned long long v44;  // [bp-0xe8]
    int v45;  // [bp-0xe0]
    int v46;  // [bp-0xd0]
    int v47;  // [bp-0xc0]
    char v48;  // [bp-0xb0]
    int v50;  // xmm0
    char *v51;  // rsi
    unsigned long long v52;  // rax
    unsigned long long v53;  // rcx
    int v54;  // xmm1

    ruff_python_parser::parse(&v37, a3, a4, (2 <= a1->field_0[7]) * 3 + 0x90300);
    *((int128_t *)&v5) = *((int128_t *)&v39);
    memcpy(&v7, &v42, 16);
    v8 = v44;
    if ((char)(((0 ^ v37) & (0 ^ -(v37))) >> 63))
    {
        *((unsigned long long *)&a0[40]) = v8;
        v50 = (int128_t)v5;
        a0[24] = v7;
        a0[8] = v50;
        *((unsigned long long *)a0) = 0x8000000000000000;
        return v8;
    }
    memcpy(&v29, &v48, 16);
    v28 = v47;
    v26 = v46;
    v25 = v45;
    memcpy(&v22, &v5, 16);
    v23 = v7;
    v24 = v8;
    v21 = v37;
    v0.from(&v21);
    v51 = &v28;
    if (v27 != 0x8000000000000000)
        v51 = &(unsigned long long)v26;
    v52 = ruff_python_formatter::comments::Comments::from_ast::collect_comments(v27 == 0x8000000000000000, v51, a3, a4, &v0);
    *((char [16])&v19) = a1->field_0;
    v12 = a3;
    v13 = a4;
    v14 = v52;
    v15 = &v21;
    v16 = 0x100;
    v17 = 0;
    v20 = a2;
    v18 = 2;
    v4 = &(unsigned long long)v26;
    v5 = &v4;
    v6 = &g_97f528;
    ruff_formatter::format(&v37, &v12, &v5);
    memcpy(&v2, &v39, 16);
    v3 = v42;
    if (v37 == 0x8000000000000000)
    {
        v41 = v3;
        memcpy(&v38, &v2, 16);
        *((char *)&a0[8]) = 41;
        v53 = v41;
        *((int128_t *)&a0[9]) = *((int128_t *)&v37);
        *((unsigned long *)&a0[24]) = v40;
        *((unsigned long long *)&a0[32]) = v53;
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        v36 = (long long)v47;
        v35 = v46;
        v34 = v45;
        memcpy(&v33, &v43, 16);
        v31 = v2;
        v32 = v3;
        v30 = v37;
        v37.create_printer(&v30);
        v5.print(&v37, &v30);
        if (v5 == 0x8000000000000000)
        {
            *((char *)&a0[8]) = 42;
            *((unsigned long long **)&a0[12]) = &g_97f528;
            *((unsigned long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<ruff_formatter::Formatted<ruff_python_formatter::context::PyFormatContext>>(&v30);
        }
        else
        {
            *((long long *)&a0[80]) = *((long long *)&v11);
            v54 = *((int128_t *)&v8);
            a0[64] = v10;
            a0[48] = v9;
            a0[32] = v54;
            a0[16] = v7;
            *((char **)a0) = v5;
            *((unsigned long long **)&a0[8]) = &g_97f528;
            core::ptr::drop_in_place<ruff_formatter::Formatted<ruff_python_formatter::context::PyFormatContext>>(&v30);
        }
    }
    core::ptr::drop_in_place<ruff_python_trivia::comment_ranges::CommentRanges>(v0, *((long long *)&v1));
    return (unsigned long long)core::ptr::drop_in_place<ruff_python_parser::Parsed<ruff_python_ast::generated::Mod>>(&v21);
}
