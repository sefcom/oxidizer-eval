long long fish::parse_util::detect_errors_in_decorated_statement(unsigned long a0, unsigned long long a1, unsigned long long a2[3], struct_4 *a3, unsigned long long a4)
{
    char v0;  // [bp-0x2c1]
    int v1;  // [bp-0x2b8], Other Possible Types: void*
    int v2;  // [bp-0x2b8]
    void* v3;  // [bp-0x2b8]
    unsigned long long v4;  // [bp-0x2b0]
    void* v5;  // [bp-0x2a8]
    void* v6;  // [bp-0x298], Other Possible Types: int, unsigned long long, unsigned long
    int v7;  // [bp-0x298], Other Possible Types: void*
    void* v8;  // [bp-0x298]
    char v9;  // [bp-0x298]
    unsigned int v10;  // [bp-0x294]
    unsigned int v11;  // [bp-0x294]
    unsigned int v12;  // [bp-0x294]
    int v13;  // [bp-0x290], Other Possible Types: char, unsigned long long
    unsigned long long v14;  // [bp-0x290]
    void* v15;  // [bp-0x288], Other Possible Types: unsigned long long
    unsigned long long v16;  // [bp-0x280]
    unsigned long long v17;  // [bp-0x250]
    unsigned long long v18;  // [bp-0x248]
    void* v19;  // [bp-0x240], Other Possible Types: unsigned int
    char v20;  // [bp-0x238]
    void* v21;  // [bp-0x228]
    void* v22;  // [bp-0x220]
    unsigned long long v23;  // [bp-0x218]
    void* v24;  // [bp-0x210]
    unsigned long long v25;  // [bp-0x208]
    unsigned long long v26;  // [bp-0x200]
    void* v27;  // [bp-0x1f8]
    unsigned long long v28;  // [bp-0x1f0]
    void* v29;  // [bp-0x1e8]
    unsigned long long v30;  // [bp-0x1e0]
    unsigned long v31;  // [bp-0x1d8]
    unsigned long v32;  // [bp-0x1d0]
    int v34;  // [bp-0x1c8]
    unsigned long long v35;  // [bp-0x1c0]
    void* v36;  // [bp-0x1b8]
    unsigned long long v37;  // [bp-0x1b0]
    unsigned long long v38;  // [bp-0x1a8]
    char v39;  // [bp-0x1a0]
    int v41;  // [bp-0x198]
    unsigned long long v42;  // [bp-0x190]
    void* v43;  // [bp-0x188]
    unsigned long long v44;  // [bp-0x180]
    unsigned long long v45;  // [bp-0x178]
    char v46;  // [bp-0x170]
    int v48;  // [bp-0x168]
    unsigned long long v49;  // [bp-0x160]
    void* v50;  // [bp-0x158]
    unsigned long long v51;  // [bp-0x150]
    unsigned long long v52;  // [bp-0x148]
    char v53;  // [bp-0x140]
    int v55;  // [bp-0x138]
    unsigned long long v56;  // [bp-0x130]
    void* v57;  // [bp-0x128]
    unsigned long long v58;  // [bp-0x120]
    unsigned long long v59;  // [bp-0x118]
    char v60;  // [bp-0x110]
    int v61;  // [bp-0x108]
    unsigned long long v63;  // [bp-0x100]
    void* v64;  // [bp-0xf8]
    unsigned long long v65;  // [bp-0xf0]
    unsigned long long v66;  // [bp-0xe8]
    char v67;  // [bp-0xe0]
    int v69;  // [bp-0xd8]
    unsigned long long v70;  // [bp-0xd0]
    void* v71;  // [bp-0xc8]
    unsigned long long v72;  // [bp-0xc0]
    unsigned long long v73;  // [bp-0xb8]
    char v74;  // [bp-0xb0]
    int v76;  // [bp-0xa8]
    unsigned long long v77;  // [bp-0xa0]
    void* v78;  // [bp-0x98]
    unsigned long long v79;  // [bp-0x90]
    unsigned long long v80;  // [bp-0x88]
    char v81;  // [bp-0x80]
    int v83;  // [bp-0x78]
    unsigned long long v84;  // [bp-0x70]
    void* v85;  // [bp-0x68]
    unsigned long long v86;  // [bp-0x60]
    unsigned long long v87;  // [bp-0x58]
    char v88;  // [bp-0x50]
    char v89;  // [bp-0x40]
    unsigned int v92;  // edi
    unsigned int v93;  // esi
    unsigned long long v94;  // rax
    unsigned long long v95;  // rax
    unsigned long long v96;  // rdi
    unsigned long long v97;  // rax
    struct_2 *v98;  // rdx
    unsigned long long v99;  // r15
    struct_3 *v100;  // rax
    char v101;  // r13b
    char v103;  // r15b
    unsigned long long v104;  // r15
    unsigned long long v105;  // rax
    unsigned long long v106;  // r13
    unsigned long long v107;  // rbx
    unsigned long long v108;  // rax
    unsigned long long v110;  // rax
    unsigned long long v111;  // r12
    unsigned long long v112;  // rbp
    unsigned long long v114;  // rbx
    void* v115;  // r13
    struct_0 *v118;  // rax
    unsigned int v119;  // eax
    char v122;  // al
    unsigned int v124;  // edi

    (char)v6.try_source_range(a3);
    v19 = 0;
    v92 = 0;
    if (v9)
    {
        v12 = v11;
        v92 = v11;
    }
    v10 = v12;
    v18 = v92.start();
    (char)v6.try_source_range(a3);
    v93 = 0;
    if (v9)
        v93 = *((int *)&v13);
    v17 = a0.length(v93);
    v0 = a3.decoration();
    v94 = fish::parse_util::get_first_arg(a3->field_20, *((long long *)&a3->field_28));
    if (v94)
    {
        v95 = v94.try_source(a0, a1);
        if (v95)
        {
            v96 = v95;
            if (v95)
                goto LABEL_13e77de;
LABEL_13e77dd:
        }
        else
        {
            v96 = 4;
            if (!v95)
                goto LABEL_13e77dd;
LABEL_13e77de:
        }
        v19 = fish::parse_util::parse_util_argument_is_help(v96, v95);
    }
    v97 = a2.parent(a3, &g_14c4440);
    v98->field_40(&(char)v6, v97);
    if (*((int *)&(char)v6) != 7)
        fish::parse_util::detect_errors_in_decorated_statement::panic_cold_explicit(); /* do not return */
    v99 = a2[1] + a2[2] * 24;
    v31 = a2[1];
    v6 = v31;
    v13 = v99;
    v100 = (char)v6.try_rfold();
    if (!v100)
        core::option::expect_failed("should have found the job", 25, &g_14de1e8); /* do not return */
    v32 = v100->field_68;
    v30 = v99;
    if (v100->field_68)
    {
        v101 = fish::ast::is_same_node(&v100->padding_0[32], &g_14c2078, v14, &g_14c2078);
        if (v0 != 3)
        {
            v104 = 0;
            if (!v101)
                goto LABEL_13e79ee;
        }
        else if (a4)
        {
            *((unsigned long long *)&v34) = 0;
            v35 = 4;
            v36 = 0;
            v37 = v18;
            v38 = v17;
            v39 = 1;
            v3 = 0;
            v4 = 4;
            v5 = 0;
            v9 = 0;
            v13 = "execselffg.1smirdclkkfndkEXTsbim";
            v15 = 4;
            fish_printf::printf_impl::sprintf_locale(&v20, &v3, g_14c5740[0].localize(), v98, ".", &v9, 1);
            v20.unwrap(&g_14de200);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v9);
            *((int128_t *)&v6) = *((int128_t *)&v3);
            v15 = 0;
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(unsigned long long)v34);
            v36 = v15;
            *((int128_t *)&v34) = *((int128_t *)&(char)v6);
            a4.push(&(unsigned long long)v34, &g_14de200);
            v103 = 1;
            v104 = v99 & 0xffffffffffffff00 | 1;
            if (!v101)
                goto LABEL_13e79ee;
        }
        else
        {
            v103 = 1;
            v104 = v99 & 0xffffffffffffff00 | 1;
            if (!v101)
            {
LABEL_13e79ee:
                if (!(char)a3.decoration())
                {
                    v105 = a3.try_source(a0, a1);
                    if (v105)
                    {
                        v106 = v105;
                        if (v105)
                            goto LABEL_13e7e25;
LABEL_13e7e24:
                        v107 = v105;
                    }
                    else
                    {
                        v106 = 4;
                        if (!v105)
                            goto LABEL_13e7e24;
LABEL_13e7e25:
                    }
                    v25 = v106;
                    v26 = v107;
                    v6 = "a";
                    v13 = 3;
                    v15 = "o";
                    v16 = 2;
                    if (!v25.slice_contains(&v9, 2))
                    {
LABEL_13e7fc1:
                        if (v106.eq_by(v107 * 4 + v106, "time~%ls", "~%ls"))
                        {
                            v103 = 1;
                            v104 = v104 & 0xffffffffffffff00 | 1;
                            if (a4)
                            {
                                *((unsigned long long *)&v48) = 0;
                                v49 = 4;
                                v50 = 0;
                                v51 = v18;
                                v52 = v17;
                                v53 = 1;
                                v6 = 0;
                                v13 = 4;
                                v15 = 0;
                                fish_printf::printf_impl::sprintf_locale(&v3, &v9, g_14de230[0].localize(), v98, ".", 8, 0);
                                v3.unwrap(&g_14de248);
                                *((int128_t *)&v1) = *((int128_t *)&(char)v6);
                                v5 = v15;
                                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(unsigned long long)v48);
                                v50 = v5;
                                *((int128_t *)&v48) = *((int128_t *)&v3);
                                a4.push(&(unsigned long long)v48, &g_14de248);
                            }
                        }
                    }
                    else if (a4)
                    {
                        *((unsigned long long *)&v41) = 0;
                        v42 = 4;
                        v43 = 0;
                        v44 = v18;
                        v45 = v17;
                        v46 = 1;
                        v3 = 0;
                        v4 = 4;
                        v5 = 0;
                        v108 = g_14c5740[0].localize();
                        v9 = 1;
                        *((int128_t *)&v13) = *((int128_t *)&v25);
                        fish_printf::printf_impl::sprintf_locale(&v20, &v3, v108, v98, ".", &v9, 1);
                        v20.unwrap(&g_14de218);
                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v9);
                        *((int128_t *)&v6) = *((int128_t *)&v3);
                        v15 = 0;
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(unsigned long long)v41);
                        v43 = v15;
                        *((int128_t *)&v41) = *((int128_t *)&(char)v6);
                        a4.push(&(unsigned long long)v41, &g_14de218);
                        v106 = v25;
                        v107 = v26;
                        v103 = 1;
                        v104 = v104 & 0xffffffffffffff00 | 1;
                        goto LABEL_13e7fc1;
                    }
                    else
                    {
                        v106.eq_by(v107 * 4 + v106, "time~%ls", "~%ls");
                        v103 = 1;
                        v104 = v104 & 0xffffffffffffff00 | 1;
                    }
                }
            }
        }
    }
    else
    {
        v104 = 0;
    }
    v110 = a3.try_source(a0, a1);
    v111 = (v110 ? v110 : 4);
    if (!v110)
        v112 = v110;
    if (v111.eq_by(v111 + v112 * 4, "$status", &g_a1e363))
    {
        v103 = 1;
        v104 = v104 & 0xffffffffffffff00 | 1;
        if (a4)
        {
            *((unsigned long long *)&v55) = 0;
            v56 = 4;
            v57 = 0;
            v58 = v18;
            v59 = v17;
            v60 = 1;
            v3 = 0;
            v4 = 4;
            v5 = 0;
            v13 = "$";
            v15 = 56;
            v6 = 0x8000000000000000;
            fish_printf::printf_impl::sprintf_locale(&v20, &v3, (char)v6.localize(), v98, ".", 8, 0);
            v20.unwrap(&g_14de260);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&(char)v6);
            *((int128_t *)&v7) = *((int128_t *)&v3);
            v15 = 0;
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(unsigned long long)v55);
            v57 = v15;
            *((int128_t *)&v55) = *((int128_t *)&(char)v6);
            a4.push(&(unsigned long long)v55, &g_14de260);
        }
    }
    if (v112)
    {
        v27 = 0;
        v28 = 8;
        v29 = 0;
        v22 = 0;
        v23 = 4;
        v24 = 0;
        (char)v6.empty();
        fish::expand::expand_to_command_and_args(v111, v112, &(char)v6, &v22, 0, &v27, 1);
        if ((char)v98 < 2)
        {
            core::ptr::drop_in_place<fish::operation_context::OperationContext>(&(char)v6);
            v104 = v104 & 0xffffffffffffff00 | 1;
            goto LABEL_13e7c2f;
        }
        core::ptr::drop_in_place<fish::operation_context::OperationContext>(&(char)v6);
        if (v103)
            goto LABEL_13e7c2f;
        v114 = v23;
        v115 = v24;
        if (v32 && fish::parse_util::parser_is_pipe_forbidden(v114, v115))
        {
            if (!a4)
                goto LABEL_13e861a;
            *((unsigned long long *)&v61) = 0;
            v63 = 4;
            v64 = 0;
            v65 = v18;
            v66 = v17;
            v67 = 1;
            v1 = 0;
            v4 = 4;
            v5 = 0;
            v9 = 1;
            v13 = v114;
            v15 = v115;
            fish_printf::printf_impl::sprintf_locale(&v20, &v1, g_14c5740[0].localize(), v98, ".", &v9, 1);
            v20.unwrap(&g_14de278);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v9);
            *((int128_t *)&v6) = *((int128_t *)&v1);
            v15 = 0;
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(unsigned long long)v61);
            v64 = 0;
            *((int128_t *)&v61) = *((int128_t *)&(char)v6);
            v104 = v104 & 0xffffffffffffff00 | 1;
            a4.push(&(unsigned long long)v61, &g_14de278);
            goto LABEL_13e7c3b;
        }
        if (v23.eq(v24, "breakbreakpointbuiltincdcommandcommandlinecountdisownendfalsefgfish_key_readerforfunctionshistoryifnotorprintfpwdrandomreturnsetset_colorsourcestatusswitchulimitwhileP", 5))
        {
            if (!(char)v19)
                goto LABEL_13e815d;
LABEL_13e81c2:
            if (v0 == 2)
            {
                v9.to_vec(v111, v112);
                v21 = v15;
                memcpy(&v20, &v9, 16);
                v9.empty();
                if ((char)fish::expand::expand_one(&v20, 1, &v9, a4))
                {
                    core::ptr::drop_in_place<fish::operation_context::OperationContext>(&v9);
                    v122 = fish::builtins::shared::builtin_exists(v111, v112);
                    v104 = (v122 ? 0 : 1);
                    if (!!a4 && !v122)
                    {
                        *((unsigned long long *)&v83) = 0;
                        v84 = 4;
                        v85 = 0;
                        v86 = v18;
                        v87 = v17;
                        v88 = 1;
                        v1 = 0;
                        v4 = 4;
                        v5 = 0;
                        v9 = 1;
                        v13 = v111;
                        v15 = v112;
                        fish_printf::printf_impl::sprintf_locale(&v89, &v1, g_14c5f50[0].localize(), v98, ".", &v9, 1);
                        v89.unwrap(&g_14de2f0);
                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v9);
                        *((int128_t *)&v6) = *((int128_t *)&v1);
                        v15 = 0;
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(unsigned long long)v83);
                        v85 = 0;
                        *((int128_t *)&v83) = *((int128_t *)&(char)v6);
                        v104 = v104 & 0xffffffffffffff00 | 1;
                        a4.push(&(unsigned long long)v83, &g_14de2f0);
                    }
                }
                else
                {
                    core::ptr::drop_in_place<fish::operation_context::OperationContext>(&v9);
                }
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v20);
            }
LABEL_13e7c2f:
            if (!a4)
                goto LABEL_13e861d;
            goto LABEL_13e7c3b;
        }
        else
        {
            if ((char)v19 || (v23.eq(v24, "continuet", 8) ^ 1))
                goto LABEL_13e81c2;
LABEL_13e815d:
            v19 = v24;
            v6 = v31;
            v13 = v30;
            do
            {
                v118 = (char)v6.try_rfold();
                if (!v118)
                    goto LABEL_13e83b0;
                v119 = v118->field_10 - 2;
                if (v119 >= 4)
                    v119 = 2;
            } while (!v119);
            if (v119 - 1 < 2)
                goto LABEL_13e81c2;
LABEL_13e83b0:
            if (v23.eq(v19, "breakbreakpointbuiltincdcommandcommandlinecountdisownendfalsefgfish_key_readerforfunctionshistoryifnotorprintfpwdrandomreturnsetset_colorsourcestatusswitchulimitwhileP", 5))
            {
                if (!a4)
                    goto LABEL_13e861a;
                *((unsigned long long *)&v69) = 0;
                v70 = 4;
                v71 = 0;
                v72 = v18;
                v73 = v17;
                v74 = 1;
                v7 = 0;
                v13 = 4;
                v15 = 0;
                fish_printf::printf_impl::sprintf_locale(&v3, &(char)v6, g_14de2c0[0].localize(), v98, ".", 8, 0);
                v3.unwrap(&g_14de2d8);
                *((int128_t *)&v1) = *((int128_t *)&(char)v6);
                v5 = 0;
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(unsigned long long)v69);
                v71 = 0;
                *((int128_t *)&v69) = *((int128_t *)&v3);
                v104 = v104 & 0xffffffffffffff00 | 1;
                a4.push(&(unsigned long long)v69, &g_14de2d8);
                goto LABEL_13e7c3b;
            }
            if (a4)
            {
                *((unsigned long long *)&v76) = 0;
                v77 = 4;
                v78 = 0;
                v79 = v18;
                v80 = v17;
                v81 = 1;
                v8 = 0;
                v13 = 4;
                v15 = 0;
                fish_printf::printf_impl::sprintf_locale(&v3, &(char)v6, g_14de290[0].localize(), v98, ".", 8, 0);
                v3.unwrap(&g_14de2a8);
                *((int128_t *)&v2) = *((int128_t *)&(char)v6);
                v5 = 0;
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(unsigned long long)v76);
                v78 = 0;
                *((int128_t *)&v76) = *((int128_t *)&v3);
                v104 = v104 & 0xffffffffffffff00 | 1;
                a4.push(&(unsigned long long)v76, &g_14de2a8);
LABEL_13e7c3b:
                v9.try_source_range(a3);
                v124 = 0;
                if (v9)
                    v124 = v10;
                fish::parse_constants::parse_error_offset_source_start(&v27, v124.start());
                v9.into_iter(&v27);
                a4.spec_extend(&v9);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v22);
            }
            else
            {
LABEL_13e861a:
                v104 = v104 & 0xffffffffffffff00 | 1;
LABEL_13e861d:
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v22);
                core::ptr::drop_in_place<alloc::vec::Vec<fish::parser::ProfileItem>>(&v27);
            }
        }
    }
    return v104 & 4294967295;
}
