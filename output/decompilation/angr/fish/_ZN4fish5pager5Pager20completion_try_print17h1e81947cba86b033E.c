long long fish::pager::Pager::completion_try_print(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, struct_1 *a6, unsigned long long a7)
{
    unsigned long long v0;  // [bp-0x178]
    int v1;  // [bp-0x178]
    unsigned long long v2;  // [bp-0x170]
    void* v3;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x158]
    struct_2 *v5;  // [bp-0x150]
    void* v6;  // [bp-0x148], Other Possible Types: int
    unsigned long long v7;  // [bp-0x140]
    void* v8;  // [bp-0x138]
    int v9;  // [bp-0x128], Other Possible Types: void*
    unsigned long long v10;  // [bp-0x120]
    void* v11;  // [bp-0x118]
    unsigned long v12;  // [bp-0x110]
    void* v13;  // [bp-0x108], Other Possible Types: char
    int v14;  // [bp-0x108], Other Possible Types: char *
    char *v15;  // [bp-0x100], Other Possible Types: unsigned long, unsigned long long
    unsigned long long *v16;  // [bp-0xf8], Other Possible Types: void*
    char v17;  // [bp-0xe8]
    void* v18;  // [bp-0xe0], Other Possible Types: unsigned long long
    char v19;  // [bp-0xc8]
    void* v20;  // [bp-0xc0]
    unsigned long v21;  // [bp-0xa8]
    unsigned long v22;  // [bp-0xa0]
    char v23;  // [bp-0x78]
    int v24;  // [bp-0x68], Other Possible Types: unsigned long long
    int v25;  // [bp-0x68]
    uint128_t v26;  // [bp-0x68]
    uint128_t v27;  // [bp-0x58]
    uint128_t v28;  // [bp-0x48]
    char v29;  // [bp-0x38]
    unsigned long v30;  // rax
    unsigned long long v31;  // rax
    void* v32;  // rax
    unsigned long long v33;  // r13
    unsigned long long v34;  // rax
    unsigned long long v35;  // cc_ndep
    unsigned long long v36;  // rax
    unsigned long long *v37;  // rdx
    unsigned long long *v38;  // r12
    void* v39;  // r13
    unsigned long v40;  // rax
    unsigned long long v41;  // rax
    unsigned long long v42;  // cc_op
    unsigned long long v43;  // cc_dep1
    unsigned long long v44;  // cc_dep2
    unsigned long long v45;  // rdi
    unsigned long long v46;  // rax
    unsigned long v47;  // r15
    struct_1 *v48;  // r13
    unsigned long long v49;  // rcx
    unsigned long long v50;  // rax
    unsigned long long v51;  // rcx
    void* v52;  // r14
    unsigned long long v53;  // r14
    void* v54;  // r12
    void* v55;  // rax
    void* v56;  // r14
    char v57;  // bpl
    unsigned long long v58;  // rax
    unsigned long long v59;  // cc_op
    void* v60;  // cc_dep2
    void* v61;  // r12
    struct_0 *v62;  // 4096
    unsigned long long v65;  // rax
    struct_0 *v66;  // rbx
    unsigned long long v68;  // rbx
    unsigned long v69;  // r15
    unsigned long long v70;  // rax

    if (!a1)
        core::panicking::panic("assertion failed: cols > 0assertion failed: start_row <= last_starting_rowassertion failed: stop_row <= row_countassertion failed: stop_row - start_row <= term_height", 26, &g_14dc0c8); /* do not return */
    v28 = 0;
    v27 = 0;
    v26 = 0;
    v31 = v30 & 0xffffffffffffff00 | 1;
    if (a0->field_f8 < 16)
    {
        return v31;
    }
    else if (a0->field_100 >= 4)
    {
        v21 = a0->field_111;
        v22 = a0->field_f8;
        if (a0->field_110 == 1)
        {
            v4 = ~(v21) + a0->field_100;
            v32 = fish::pager::divide_round_up(a5, a1);
            goto LABEL_13d6d2e;
        }
        else
        {
            v33 = v4.min(v4 >> 1.max(4));
            v32 = fish::pager::divide_round_up(a5, a1);
            v34 = v32 - v33;
            if (v32 > v33)
            {
                a6->field_110 = v34;
                v12 = &a6->field_110;
                if (v34 == 1)
                {
                    v35 = v34 < 1;
                    v4 = v33 + 1;
                    *((unsigned long long *)v12) = 0;
                }
                else
                {
                    v4 = v33;
                }
            }
            else
            {
                v4 = v33;
LABEL_13d6d2e:
                v12 = &a6->field_110;
                a6->field_110 = 0;
            }
        }
        v14 = &v26;
        v15 = &v29;
        v16 = 0;
        v36 = v14.next();
        if (v37)
        {
            if (v32)
            {
                v38 = v37;
                do
                {
                    if ((char)_ccall(0, 48, v36, v32, v35))
                        core::panicking::panic_const::panic_const_mul_overflow(&g_14dc218); /* do not return */
                    v39 = 0;
                    do
                    {
                        v40 = v36 * v32;
                        v41 = v40 + v39;
                        if ((char)__CFADD__(v40, v39))
                            core::panicking::panic_const::panic_const_add_overflow(&g_14dc218); /* do not return */
                        v42 = 8;
                        v43 = v41;
                        v44 = a5;
                        if (v41 < a5)
                        {
                            v45 = v41 * 144;
                            v42 = 4;
                            v43 = v45;
                            v44 = a4;
                            v46 = v45 + a4.preferred_width();
                            *(v38) = *(v38).max(v46);
                        }
                        v35 = _ccall(v42, v43, v44, v35);
                        v39 += 1;
                    } while (v32 != v39);
                    v36 = v14.next();
                    v38 = v37;
                } while (v37);
            }
            else
            {
                do
                {
                    v14.next();
                } while (v37);
            }
        }
        if (a1 == 1)
        {
            v47 = v22;
            v24 = v24.min(v47);
            v48 = a6;
            v49 = v4;
            v24 = v25;
        }
        else
        {
            v50 = v26.fold(&v29);
            v35 = a1 < 1;
            v47 = v22;
            v48 = a6;
            if ((char)_ccall(8, 28, a1 - 1, 0, (unsigned long long)(char)(a1 < 1)))
                core::panicking::panic_const::panic_const_mul_overflow(&g_14dc0e0); /* do not return */
            v51 = (a1 - 1) * 2;
            v49 = v4;
            if ((char)__CFADD__(v50, v51))
                core::panicking::panic_const::panic_const_add_overflow(&g_14dc0f8); /* do not return */
            *((uint128_t *)&v24) = v26;
            if (v50 + v51 > v22)
                return 0;
        }
        v52 = v32;
        v53 = v52 - v49;
        if (v52 > v49)
        {
            v49 = v4;
            v54 = a7.min(v53);
            v55 = v54 + v49;
            if ((char)__CFADD__(v54, v49))
            {
                core::panicking::panic_const::panic_const_add_overflow(&g_14dc110); /* do not return */
            }
            else if (v54 > v53)
            {
                core::panicking::panic("assertion failed: start_row <= last_starting_rowassertion failed: stop_row <= row_countassertion failed: stop_row - start_row <= term_height", 48, &g_14dc128); /* do not return */
            }
            else if (v55 <= v32)
            {
                v56 = v55;
            }
            else
            {
                core::panicking::panic("assertion failed: stop_row <= row_countassertion failed: stop_row - start_row <= term_height", 39, &g_14dc140); /* do not return */
            }
        }
        else
        {
            v54 = 0;
            v56 = v32;
        }
        if (v56 - v54 > v49)
            core::panicking::panic("assertion failed: stop_row - start_row <= term_height", 53, &g_14dc158); /* do not return */
        a0.completion_print(a1, &v24, v54, v56, a2, a3, a4, a5, v48);
        v6 = 0;
        v7 = 4;
        v8 = 0;
        if (v48->field_110)
        {
            v57 = v21;
            if (v48->field_110 == 1)
            {
                v13 = 0;
                core::panicking::assert_failed(1, v12, &g_54a550, &v13, &g_14dc170); /* do not return */
            }
            v9 = 0;
            v10 = 4;
            v11 = 0;
            v2 = "%";
            v3 = 20;
            v0 = 0x8000000000000000;
            v58 = v0.localize();
            v13 = 1;
            v15 = fish::common::get_ellipsis_str();
            v16 = v37;
            v17 = 4;
            v18 = *((long long *)v12);
            fish_printf::printf_impl::sprintf_locale(&v23, &v9, v58, v37, ".", &v13, 2);
            v23.unwrap(&g_14dc1b8);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v13);
            goto LABEL_13d71bc;
        }
        else
        {
            v59 = 20;
            v60 = 0;
            v57 = v21;
            v61 = v54;
            if (!v61)
            {
                v59 = 8;
                v60 = v32;
                v61 = v56;
                if (v61 < v32)
                    goto LABEL_13d70f6;
                v62 = a0;
                if (v57)
                {
                    v62 = a0;
                    if (!v5->field_a8)
                    {
                        v2 = "(";
                        v3 = 12;
                        v0 = 0x8000000000000000;
                        v14.to_vec(v0.localize(), a2);
                        v11 = 0;
                        *((int128_t *)&v9) = *((int128_t *)&v14);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6);
                        v8 = 0;
                        *((int128_t *)&v6) = (int128_t)v9;
                        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
                        v62 = a0;
                    }
                }
            }
            else
            {
LABEL_13d70f6:
                v9 = 0;
                v10 = 4;
                v11 = 0;
                v2 = "r";
                v3 = 22;
                v0 = 0x8000000000000000;
                v65 = v0.localize();
                if ((char)_ccall(4, 24, v54 + 1, 0, _ccall(v59, v61, v60, v35)))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14dc188); /* do not return */
                v13 = 4;
                v15 = v54 + 1;
                v17 = 4;
                v18 = v56;
                v19 = 4;
                v20 = v32;
                fish_printf::printf_impl::sprintf_locale(&v23, &v9, v65, v37, ".", &v13, 3);
                v23.unwrap(&g_14dc1a0);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v13);
LABEL_13d71bc:
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
                *((int128_t *)&v14) = *((int128_t *)&v9);
                v16 = 0;
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6);
                v8 = 0;
                *((int128_t *)&v6) = *((int128_t *)&v13);
                v62 = a0;
            }
            v66 = v62;
            if (v66->field_f0)
                v6.spec_extend(a0->field_e8, a0->field_e8 + v66->field_f0 * 4);
            if (!v57)
                return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6) & 0xffffffffffffff00 | 1;
            v13.to_vec(a0->field_38, a0->field_40);
            v3 = 0;
            *((int128_t *)&v1) = (int128_t)v14;
            v0.extend(12);
            v68 = v48->padding_0[48].insert_line_at_index(0);
            v69 = v47 - 1;
            v70 = fish::pager::print_max(0, a1, g_14dc1d0[0].localize(), v37, 0, v69, 0, v68);
            if (v69 < v70)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14dc1e8); /* do not return */
            }
            else if (v69 - v70 >= fish::pager::print_max(0, a1, v2, 0, 0x100, v69 - v70, 0, v68))
            {
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
            }
            else
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14dc200); /* do not return */
            }
            return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6) & 0xffffffffffffff00 | 1;
        }
    }
    else
    {
        return v31;
    }
}
