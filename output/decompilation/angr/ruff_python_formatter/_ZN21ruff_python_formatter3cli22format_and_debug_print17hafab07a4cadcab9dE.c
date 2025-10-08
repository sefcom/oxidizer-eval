long long ruff_python_formatter::cli::format_and_debug_print(void* a0, unsigned long long a1, unsigned long long a2, char a3[29], unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x3c0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x3b8]
    unsigned long long v2;  // [bp-0x3b0]
    char v3;  // [bp-0x3a8]
    unsigned int v4;  // [bp-0x3a4]
    unsigned int v5;  // [bp-0x3a0]
    char v6;  // [bp-0x39c]
    unsigned int v7;  // [bp-0x398]
    unsigned int v8;  // [bp-0x394]
    unsigned long v9;  // [bp-0x388]
    int v10;  // [bp-0x388], Other Possible Types: char
    unsigned long long v11;  // [bp-0x388]
    unsigned long long v12;  // [bp-0x380]
    unsigned long long v13;  // [bp-0x378]
    int v14;  // [bp-0x378], Other Possible Types: char
    unsigned long long v15;  // [bp-0x370]
    int v16;  // [bp-0x368], Other Possible Types: char
    unsigned long long v17;  // [bp-0x360]
    int v18;  // [bp-0x358]
    int v19;  // [bp-0x348]
    int v20;  // [bp-0x338]
    char v21;  // [bp-0x328]
    char v22;  // [bp-0x30c]
    unsigned int v23;  // [bp-0x308]
    unsigned int v24;  // [bp-0x304]
    unsigned long long v25;  // [bp-0x300]
    unsigned int v26;  // [bp-0x2f9]
    char v27;  // [bp-0x2f5]
    unsigned int v28;  // [bp-0x2f4]
    char *v29;  // [bp-0x2f0]
    unsigned long long v30;  // [bp-0x2e8]
    int v31;  // [bp-0x2e0]
    int v32;  // [bp-0x2d0]
    int v33;  // [bp-0x2c0]
    int v34;  // [bp-0x2b0]
    unsigned long long v35;  // [bp-0x2a0]
    unsigned long long v36;  // [bp-0x290]
    char v37;  // [bp-0x288]
    unsigned long v38;  // [bp-0x278]
    char *v39;  // [bp-0x270], Other Possible Types: char, unsigned long long, unsigned long
    unsigned int v40;  // [bp-0x269]
    unsigned long v41;  // [bp-0x268], Other Possible Types: unsigned long long
    char v42;  // [bp-0x264]
    char v43;  // [bp-0x262]
    char *v44;  // [sp-0x260], Other Possible Types: unsigned long long
    int v45;  // [bp-0x258], Other Possible Types: unsigned long long
    void* v46;  // [bp-0x250], Other Possible Types: char *, unsigned long long
    unsigned long long v47;  // [bp-0x248]
    char *v48;  // [bp-0x240]
    unsigned long long v49;  // [bp-0x238]
    char *v50;  // [bp-0x230]
    unsigned long long v51;  // [bp-0x228]
    unsigned long long v52;  // [bp-0x190]
    unsigned long long v53;  // [bp-0x188]
    unsigned long long v54;  // [bp-0x180]
    unsigned long long v55;  // [bp-0x178]
    char *v56;  // [bp-0x170], Other Possible Types: unsigned long long
    unsigned long long v57;  // [bp-0x168]
    char *v58;  // [bp-0x160]
    int v59;  // [bp-0x160]
    unsigned long long v60;  // [bp-0x158]
    int v61;  // [bp-0x150], Other Possible Types: void*
    int v62;  // [bp-0x140]
    int v63;  // [bp-0x130]
    unsigned long long v64;  // [bp-0x120]
    unsigned long long v65;  // [bp-0x118]
    unsigned long long v66;  // [bp-0x110]
    int v67;  // [bp-0x108]
    int v68;  // [bp-0xf8]
    unsigned long v69;  // [bp-0xf0]
    int v70;  // [bp-0xe8]
    int v71;  // [bp-0xd8]
    unsigned long long v72;  // [bp-0xc8]
    unsigned long long v73;  // [bp-0xc0]
    unsigned long long v74;  // [bp-0xb8]
    int v75;  // [bp-0xb0]
    int v76;  // [bp-0xa0]
    int v77;  // [bp-0x90]
    int v78;  // [bp-0x80]
    int v79;  // [bp-0x70]
    char v80;  // [bp-0x60]
    char v81;  // [bp-0x50]
    char v83;  // al
    int v84;  // xmm0
    int v85;  // xmm1
    void* v86;  // rbx
    int v87;  // xmm0
    int v88;  // xmm0
    unsigned long long v89;  // rdi
    unsigned int v90;  // edx

    v83 = a4.try_from_path(a5);
    ruff_python_parser::parse(&v39, a1, a2, (v83 != 3 ? (2 <= v83) * 3 + 0x90300 : 0x90300));
    v10.context(&v39);
    if ((char)(((0 ^ v11) & (0 ^ -(v11))) >> 63))
    {
        *((unsigned long long *)&a0[8]) = v12;
        *((unsigned long long *)a0) = 0x8000000000000000;
        return a0;
    }
    memcpy(&v80, &v21, 16);
    v79 = v20;
    v84 = *((int128_t *)&v14);
    v85 = *((int128_t *)&v16);
    v78 = v19;
    v77 = v18;
    v76 = v85;
    v75 = v84;
    v73 = v11;
    v74 = v12;
    v39.from_extension(a4, a5);
    v43 = a3[25];
    v25 = *((long long *)&v39);
    v26 = v40;
    v27 = a3[28];
    v28 = *((int *)&v42);
    v0.from(&v73);
    ruff_python_formatter::format_module_ast(&v39, &v73, &v0, a1, a2, &(char)v25);
    v86 = a0;
    v10.context(&v39);
    if (v11 == 0x8000000000000000)
    {
        *((unsigned long long *)&v86[8]) = v66;
        *((unsigned long long *)v86) = 0x8000000000000000;
    }
    else
    {
        v72 = (long long)v20;
        v87 = *((int128_t *)&v14);
        v71 = v19;
        v70 = v18;
        *((int128_t *)&v68) = *((int128_t *)&v16);
        v67 = v87;
        v65 = v11;
        v66 = v12;
        if (a3[26])
        {
            v11 = v66;
            v12 = (long long)v67;
            v13 = a1;
            v15 = a2;
            v29 = &v11;
            v30 = <ruff_formatter::format_element::document::DisplayDocument as core::fmt::Display>::fmt;
            v39 = &g_97c928;
            v41 = 2;
            v46 = 0;
            v44 = &v29;
            v45 = 1;
            std::io::stdio::_print(&v39);
        }
        if (a3[27])
        {
            ruff_python_formatter::comments::visitor::collect_comments(&v37, &(char)v78, a1, a2, v1, v2);
            if (v38)
            {
                v39 = &g_97c948;
                v41 = 1;
                v44 = 8;
                *((uint128_t *)&v45) = 0;
                std::io::stdio::_print(&v39);
            }
            v81.into_iter(&v37);
            v29.next(&v81);
            if ((int)v29 != 94)
            {
                do
                {
                    v19 = v34;
                    v88 = *((int128_t *)&v29);
                    v18 = v33;
                    v16 = v32;
                    v14 = v31;
                    v10 = v88;
                    v36 = (long long)v19;
                    if (v13 == 94)
                    {
                        v3 = 94;
                        v89 = (long long)v16;
                        if (v89 != 94)
                            goto LABEL_6fe70f;
                        goto LABEL_6fe6bf;
                    }
                    else
                    {
                        v39 = v13;
                        v41 = v15;
                        v3 = v13.kind();
                        v4 = (unsigned int)v39.range();
                        v5 = v90;
                        v89 = (long long)v16;
                        if (v89 == 94)
                        {
LABEL_6fe6bf:
                            v6 = 94;
                            continue;
                        }
                        else
                        {
LABEL_6fe70f:
                            v39 = v89;
                            v41 = v17;
                            v6 = v89.kind();
                            v7 = (unsigned int)v39.range();
                            v8 = v90;
                        }
                    }
                    v52 = v11;
                    v53 = v12;
                    v22 = v52.kind();
                    v23 = (unsigned int)v52.range();
                    v24 = v90;
                    v54 = v19.text(a1, a2);
                    v55 = v90;
                    v39 = &v36;
                    v41 = <ruff_text_size::range::TextRange as core::fmt::Debug>::fmt;
                    v44 = &v3;
                    v45 = <core::option::Option<T> as core::fmt::Debug>::fmt;
                    v46 = &v6;
                    v47 = <core::option::Option<T> as core::fmt::Debug>::fmt;
                    v48 = &v22;
                    v49 = <(U,T) as core::fmt::Debug>::fmt;
                    v50 = &v54;
                    v51 = <&T as core::fmt::Debug>::fmt;
                    v56 = &g_97c958;
                    v57 = 6;
                    v61 = 0;
                    v58 = &v39;
                    v60 = 5;
                    std::io::stdio::_print(&v56);
                    v29.next(&v81);
                } while ((int)v29 != 94);
            }
            core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<ruff_python_formatter::comments::visitor::DecoratedComment>>(&v81);
            v9 = v69 + 16;
            v12 = a1;
            v13 = a2;
            v29 = &v9;
            v30 = <ruff_python_formatter::comments::debug::DebugComments as core::fmt::Debug>::fmt;
            v39 = &g_97c928;
            v41 = 2;
            v46 = &g_48a670;
            v47 = 1;
            v44 = &v29;
            v45 = 1;
            std::io::stdio::_print(&v39);
            v86 = a0;
        }
        v39.create_printer(&v65);
        v10.print(&v39, &v65);
        v29.context(&v10);
        if (v29 == 0x8000000000000000)
        {
            *((unsigned long long *)&v86[8]) = v30;
            *((unsigned long long *)v86) = 0x8000000000000000;
            core::ptr::drop_in_place<ruff_formatter::Formatted<ruff_python_formatter::context::PyFormatContext>>(&v65);
        }
        else
        {
            v64 = v35;
            v63 = v34;
            v62 = v33;
            v61 = v32;
            v59 = v31;
            v56 = v29;
            v57 = v30;
            v39.to_vec(v30, v58);
            *((char **)&v86[16]) = v44;
            *((int128_t *)v86) = *((int128_t *)&v39);
            core::ptr::drop_in_place<ruff_formatter::Printed>(&v56);
            core::ptr::drop_in_place<ruff_formatter::Formatted<ruff_python_formatter::context::PyFormatContext>>(&v65);
        }
    }
    core::ptr::drop_in_place<ruff_python_trivia::comment_ranges::CommentRanges>(v0, v1);
    core::ptr::drop_in_place<ruff_python_parser::Parsed<ruff_python_ast::generated::Mod>>(&v73);
    return v86;
}
