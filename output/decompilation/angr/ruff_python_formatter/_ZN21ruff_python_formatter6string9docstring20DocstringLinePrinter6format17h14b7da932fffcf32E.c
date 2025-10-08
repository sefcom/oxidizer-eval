long long ruff_python_formatter::string::docstring::DocstringLinePrinter::format(unsigned long a0, struct_6 *a1, unsigned long long *a2)
{
    void* v0;  // [bp-0x1c8]
    unsigned int v1;  // [bp-0x1c0]
    unsigned short v2;  // [bp-0x1bc]
    unsigned int v3;  // [bp-0x1ba]
    char v4;  // [bp-0x1b6]
    char v5;  // [bp-0x1b5]
    char v6;  // [bp-0x1b4]
    unsigned short v7;  // [bp-0x1b3]
    char v8;  // [bp-0x1b1]
    unsigned long long v9;  // [bp-0x1b0]
    unsigned long long v10;  // [bp-0x1a8]
    unsigned long v11;  // [bp-0x1a0]
    int v12;  // [bp-0x198]
    unsigned long long v13;  // [bp-0x190]
    unsigned long long v14;  // [bp-0x188]
    unsigned long long v15;  // [bp-0x180]
    char *v16;  // [bp-0x178]
    unsigned long long v17;  // [bp-0x170]
    char v18;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long long v19;  // [bp-0x160]
    char *v20;  // [bp-0x158], Other Possible Types: unsigned long long
    unsigned long long v21;  // [bp-0x150]
    void* v22;  // [bp-0x148], Other Possible Types: unsigned long
    int v23;  // [bp-0x138]
    int v24;  // [bp-0x128]
    char v25;  // [bp-0x118]
    int v26;  // [bp-0xf8]
    unsigned long long v27;  // [bp-0xf0]
    unsigned long long v28;  // [bp-0xe8]
    int v29;  // [bp-0xd8], Other Possible Types: char
    unsigned long long v30;  // [bp-0xd0]
    char v31;  // [bp-0xc8]
    char v32;  // [bp-0xb8]
    int v33;  // [bp-0xa8]
    int v34;  // [bp-0x98]
    unsigned long long v35;  // [bp-0x88]
    void* v36;  // [bp-0x80], Other Possible Types: char
    void* v37;  // [bp-0x78]
    unsigned long long v38;  // [bp-0x70]
    char v39;  // [bp-0x68]
    unsigned short v40;  // [bp-0x38]
    struct_5 *v42;  // rbx
    unsigned long v43;  // rbp
    char v44;  // r12b
    unsigned int v45;  // eax
    unsigned short v47;  // r12w
    unsigned long long v48;  // cc_ndep
    unsigned long long v49;  // r13
    unsigned long long v50;  // rax
    unsigned long long v51;  // rax
    unsigned int v52;  // eax
    unsigned short v53;  // _bp
    void* v54;  // rax
    struct_0 *v55;  // rdx
    unsigned long long v56;  // rdx
    void* v58;  // r13
    void* v59;  // r13
    struct_0 *v60;  // r12
    struct_0 *v61;  // rdx
    struct_1 *v62;  // rax
    char v63;  // bpl
    unsigned long v64;  // rax
    unsigned long long v65;  // rax
    unsigned long long v66;  // r15
    unsigned long long v67;  // r14
    struct_2 *v68;  // rax
    void* v69;  // rax

    v42 = a1->field_88;
    if (!*((short *)(v42->field_0.options(v42->field_8) + 2)))
    {
        v43 = *((short *)(v42->field_0.options(v42->field_8) + 4));
        v44 = *((char *)(v42->field_0.options(v42->field_8) + 6));
        v45 = *((int *)(v42->field_8->field_30(v42->field_0) + 40)).to_ascii_spaces(*((char *)(v42->field_0.options(v42->field_8) + 6)));
        v18.indent(a2);
        v49 = (unsigned long long)v18.columns();
        v50 = (unsigned long long)a1->padding_0[112].columns();
        v51 = (v50 <= v49 ? v49 - v50 : 0);
        if (v51 >= 65535)
            v51 = 65535;
        v52 = ((char)_ccall(2, 6, v43 & 65535, ((char)_ccall(3, 2, v51 & 65535, (unsigned long long)v47, v48) ? (unsigned int)v51 & 0xffff0000 | (unsigned short)v51 + v47 : 65535) & 65535, v48) ? 0 : (unsigned int)(v43 - ((char)_ccall(3, 2, v51 & 65535, (unsigned long long)v47, v48) ? (unsigned int)v51 & 0xffff0000 | (unsigned short)v51 + v47 : 65535))).max();
        v52.expect();
    }
    v54 = a2.code();
    v56 = v55 * 56;
    if (!v55)
        v58 = 0;
    else
        v58 = v54;
    v59 = v58;
    v60 = v54 + v56 - 56;
    if (!v55)
        v61 = v55;
    else
        v61 = v60;
    if ((!v61 | !v59) == 1)
    {
        *((unsigned long long *)&v0[8]) = 0x8000000000000000;
        *((unsigned long long *)v0) = 0;
        return a0;
    }
    (char)v29.collect(v54, v56 + v54);
    alloc::str::join_generic_copy(&v18, v30, *((long long *)&v31));
    v28 = v20;
    *((int128_t *)&v26) = *((int128_t *)&v18);
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(*((long long *)&v29), v30);
    v62 = v42->field_0.options(v42->field_8);
    *((char [1])&v8) = (&v62->padding_c)[1];
    v7 = *((short *)&v62->field_b);
    v1 = v62->field_0;
    v2 = v53;
    v3 = *((int *)&(&v62->padding_4)[1]);
    v4 = 1;
    v5 = *((char *)&v62->field_6 + 3);
    v6 = 0;
    v63 = a1->field_95;
    ruff_python_formatter::string::docstring::docstring_format_source(&v18, &v1, v63, v27, v28);
    if (v18 == 0x8000000000000000)
    {
        v64 = v0 + 8;
        if ((char)(&v18)[1] == 41)
        {
            *((unsigned long *)(v64 + 16)) = v22;
            *((int128_t *)v64) = *((int128_t *)&v20);
            v65 = 1;
        }
        else
        {
            *((unsigned long long *)v64) = 0x8000000000000000;
            v65 = 0;
        }
        *((unsigned long long *)v0) = v65;
        v18.drop_in_place<core::result::Result<ruff_formatter::Printed,ruff_python_formatter::FormatModuleError>>();
    }
    else
    {
        v35 = *((long long *)&v25);
        v34 = v24;
        v33 = v23;
        memcpy(&v32, &v22, 16);
        memcpy(&v31, &v20, 16);
        *((int128_t *)&v29) = *((int128_t *)&v18);
        if (v63)
        {
            v66 = v30;
            v67 = *((long long *)&v31);
            v9 = v66;
            v10 = v67;
            v16 = &v9;
            v17 = <&T as core::fmt::Display>::fmt;
            v18 = &g_97f168;
            v19 = 2;
            v22 = 0;
            v20 = &v16;
            v21 = 1;
            v36.map_or_else(&v18);
        }
        else
        {
            v66 = v30;
            v67 = *((long long *)&v31);
            v9 = v66;
            v10 = v67;
            v16 = &v9;
            v17 = <&T as core::fmt::Display>::fmt;
            v18 = &g_97f148;
            v19 = 2;
            v22 = 0;
            v20 = &v16;
            v21 = 1;
            v36.map_or_else(&v18);
        }
        v15 = v66;
        *((int128_t *)&v12) = *((int128_t *)&v36);
        v14 = v38;
        v68 = v42->field_0.options(v42->field_8);
        ruff_python_parser::parse(&v18, v13, v14, (2 <= v68->field_7) * 3 + 0x90300);
        if (v18 == 0x8000000000000000)
        {
            *((unsigned long long *)&v0[8]) = 0x8000000000000000;
            *((unsigned long long *)v0) = 0;
            core::ptr::drop_in_place<core::result::Result<ruff_python_parser::Parsed<ruff_python_ast::generated::Mod>,ruff_python_parser::error::ParseError>>(&v18);
        }
        else
        {
            v39.into_searcher(10, v15, v67);
            v37 = 0;
            v38 = v67;
            v40 = 0;
            v36 = v59;
            v9.collect(&v36);
            v69 = v11 * 32 + v10;
            if (!v69 == 32 && !!v11)
                *((char *)&v69[4]) = !v61->field_10;
            *((unsigned long *)&v0[24]) = v11;
            *((int128_t *)&v0[8]) = *((int128_t *)&v9);
            *((unsigned long long *)v0) = 0;
            core::ptr::drop_in_place<core::result::Result<ruff_python_parser::Parsed<ruff_python_ast::generated::Mod>,ruff_python_parser::error::ParseError>>(&v18);
        }
        core::ptr::drop_in_place<alloc::string::String>(&(char)v12);
        core::ptr::drop_in_place<ruff_formatter::Printed>(&(char)v29);
    }
    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&(char)v26);
}
