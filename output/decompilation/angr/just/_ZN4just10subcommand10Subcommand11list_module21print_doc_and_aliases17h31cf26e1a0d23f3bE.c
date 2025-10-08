long long just::subcommand::Subcommand::list_module::print_doc_and_aliases(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long a7, unsigned long long a8, unsigned long long a9)
{
    char v0;  // [bp-0x1b9]
    char *v1;  // [bp-0x1b8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x1b0]
    unsigned long long v3;  // [sp-0x1a8]
    void* v4;  // [sp-0x1a0]
    unsigned int v5;  // [sp-0x198]
    unsigned int v6;  // [sp-0x194]
    unsigned long long v7;  // [bp-0x188]
    unsigned long long v8;  // [bp-0x180]
    unsigned long long v9;  // [bp-0x178]
    char *v10;  // [bp-0x170], Other Possible Types: unsigned long long
    void* v11;  // [sp-0x168], Other Possible Types: unsigned long long
    void* v12;  // [sp-0x160], Other Possible Types: unsigned int, unsigned long
    unsigned int v13;  // [bp-0x15c]
    unsigned long long v14;  // [bp-0x158]
    char v15;  // [bp-0x14a]
    char v16;  // [bp-0x139]
    char *v17;  // [bp-0x138]
    unsigned long long v18;  // [sp-0x130]
    unsigned long long v19;  // [bp-0x128]
    int v20;  // [bp-0x128]
    unsigned long long v21;  // [bp-0x120]
    int v22;  // [bp-0x118], Other Possible Types: char *, unsigned long long
    unsigned long long v23;  // [bp-0x110]
    int v24;  // [bp-0x110]
    void* v25;  // [bp-0x108]
    int v26;  // [bp-0x108]
    unsigned short v27;  // [bp-0x100]
    int v28;  // [bp-0xf8]
    int v29;  // [bp-0xe8]
    char v30;  // [bp-0xd8]
    unsigned long long v31;  // [bp-0xc8]
    unsigned long long v32;  // [bp-0xc0]
    unsigned long long v33;  // [bp-0xb8]
    char *v34;  // [bp-0xb0]
    unsigned long long v35;  // [bp-0xa8]
    unsigned long long v36;  // [bp-0xa0]
    int v37;  // [bp-0x98], Other Possible Types: char
    int v38;  // [bp-0x88]
    int v39;  // [bp-0x78]
    int v40;  // [bp-0x68]
    int v41;  // [bp-0x58]
    char v42;  // [bp-0x48]
    char v43;  // [bp-0x38]
    char v44;  // dl
    unsigned int v45;  // ecx
    unsigned int v46;  // eax
    unsigned long long *v47;  // rax
    unsigned long v48;  // rcx
    char *v50;  // rbx
    unsigned long long v51;  // r15
    unsigned long long v52;  // r14
    char *v53;  // r13
    char *v54;  // rbp
    unsigned long long v55;  // rax
    unsigned long long v56;  // rdx
    unsigned int v57;  // esi
    unsigned int v58;  // ecx
    unsigned long long v59;  // rax
    unsigned int v60;  // esi
    unsigned int v61;  // ecx
    unsigned long long v62;  // rax
    unsigned int v64;  // ecx
    unsigned long long v65;  // rsi
    unsigned long long v66;  // rdi

    v15.stdout(&a0->padding_0[388]);
    v44 = a0->field_1a6;
    if (a3 || (a6 & a0->field_1a6 != 2))
    {
        v45 = v16;
        v46 = 4;
        v0 = a0->field_1a6;
        if (v45 && (v45 != 1 || !v15))
            v46 = 10;
        v4 = 0;
        v5 = v46;
        v6 = 10;
        v1 = 0x8000000000000000;
        v2 = "#/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/io/mod.rsstream did not contain valid UTF-8a formatting trait implementation returned an error when the underlying stream did notfailed to fill whole bufferfailed to write whole buffer";
        v3 = 1;
        v47 = a8.get(a9, a1, a2);
        if (!v47)
            core::option::expect_failed("no entry found for keyattempted to resolve unknown assignment `", 22, &g_8313a0); /* do not return */
        v48 = (*(v47) <= a7 ? a7 - *(v47) : 0) + 1;
        if (v48 > 65535)
        {
            v19 = &g_82ce08;
            v21 = 1;
            v22 = 8;
            *((uint128_t *)&v24) = 0;
            core::panicking::panic_fmt(&v19, &g_831400); /* do not return */
        }
        v19 = &g_465db0;
        v21 = <&T as core::fmt::Display>::fmt;
        v22 = &v1;
        v23 = <ansi_term::display::ANSIGenericString<str> as core::fmt::Display>::fmt;
        *((unsigned long long *)&v26) = 0;
        v27 = v48;
        v8 = &g_46ca80;
        v9 = 2;
        v12 = &g_471130;
        v14 = 2;
        v10 = &v19;
        v11 = 3;
        std::io::stdio::_print(&v8);
        core::ptr::drop_in_place<ansi_term::display::ANSIGenericString<str>>(&v1);
        v34 = &v15;
        v35 = a5;
        v36 = a6;
        if ((!v0 & a6))
            just::subcommand::Subcommand::list_module::print_doc_and_aliases::{{closure}}(&v34);
        if (a3)
        {
            v19 = &g_82f150;
            v21 = 1;
            v22 = 8;
            *((uint128_t *)&v24) = 0;
            std::io::stdio::_print(&v19);
            v37.find_iter(just::subcommand::backtick_re(), a3, v7);
            v31 = *((long long *)&v43);
            memcpy(&v30, &v42, 16);
            v29 = v41;
            v28 = v40;
            v26 = v39;
            v22 = v38;
            v20 = v37;
            v32 = a3;
            v33 = v7;
            v50 = 0;
            while (true)
            {
                v8.advance(&(unsigned long long)v26, v31, &v19);
                if ((int)v8 != 1)
                    break;
                v51 = v32;
                v52 = v33;
                v53 = v9;
                v54 = v10;
                v55 = v50.get(v53, a3, a4);
                if (!v55)
                    core::str::slice_error_fail(a3, a4, v50, v53, &g_8313d0); /* do not return */
                if (v56)
                {
                    v57 = v16;
                    v58 = 4;
                    if (v57 && (v57 != 1 || !v15))
                        v58 = 10;
                    v4 = 0;
                    v5 = v58;
                    v6 = 10;
                    v1 = 0x8000000000000000;
                    v2 = v55;
                    v3 = v56;
                    v17 = &v1;
                    v18 = <ansi_term::display::ANSIGenericString<str> as core::fmt::Display>::fmt;
                    v8 = &g_465db0;
                    v9 = 1;
                    v12 = 0;
                    v10 = &v17;
                    v11 = 1;
                    std::io::stdio::_print(&v8);
                    core::ptr::drop_in_place<ansi_term::display::ANSIGenericString<str>>(&v1);
                }
                v59 = v53.get(v54, v51, v52);
                if (!v59)
                    core::str::slice_error_fail(v66, v65, v50, v53, &g_8313e8); /* do not return */
                v61 = 6;
                switch (v60)
                {
                case 0:
                    break;
                case 2:
LABEL_6906a8:
                    v61 = 10;
                    break;
                default:
                    if (!v15)
                        goto LABEL_6906a8;
                    else
                        goto LABEL_6906ad;
                }
LABEL_6906ad:
                v4 = 0;
                v5 = v61;
                v6 = 10;
                v1 = 0x8000000000000000;
                v2 = v59;
                v3 = v56;
                v17 = &v1;
                v18 = <ansi_term::display::ANSIGenericString<str> as core::fmt::Display>::fmt;
                v8 = &g_465db0;
                v9 = 1;
                v12 = 0;
                v10 = &v17;
                v11 = 1;
                std::io::stdio::_print(&v8);
                core::ptr::drop_in_place<ansi_term::display::ANSIGenericString<str>>(&v1);
                v50 = v54;
            }
            core::ptr::drop_in_place<regex::regex::string::Matches>(&v19);
            v62 = v50.get(a3, v7);
            if (!v62)
            {
                core::str::slice_error_fail(a3, v7, v50, v7, &g_8313b8); /* do not return */
            }
            else if (v56)
            {
                v64 = 4;
                switch (v16)
                {
                case 0:
                    break;
                case 2:
LABEL_69079d:
                    v64 = 10;
                    break;
                default:
                    if (!v15)
                        goto LABEL_69079d;
                    else
                        goto LABEL_6907a9;
                }
LABEL_6907a9:
                v11 = 0;
                v12 = v64;
                v13 = 10;
                v8 = 0x8000000000000000;
                v9 = v62;
                v10 = v56;
                v1 = &v8;
                v2 = <ansi_term::display::ANSIGenericString<str> as core::fmt::Display>::fmt;
                v19 = &g_465db0;
                v21 = 1;
                v25 = 0;
                v22 = &v1;
                v23 = 1;
                std::io::stdio::_print(&v19);
                core::ptr::drop_in_place<ansi_term::display::ANSIGenericString<str>>(&v8);
            }
        }
        if ((v0 == 1 & a6))
            just::subcommand::Subcommand::list_module::print_doc_and_aliases::{{closure}}(&v34);
    }
    v19 = &g_82dbf8;
    v21 = 1;
    v22 = 8;
    *((uint128_t *)&v24) = 0;
    return std::io::stdio::_print(&v19);
}
