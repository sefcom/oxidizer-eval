long long fish::pager::Pager::completion_print_item(unsigned long a0, unsigned int a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5[18], unsigned long a6, char a7, char a8)
{
    char v0;  // [bp-0xc3]
    char v1;  // [bp-0xc2]
    char v2;  // [bp-0xc1]
    unsigned int v3;  // [bp-0xc0]
    unsigned short v4;  // [bp-0xbc]
    char v5;  // [bp-0xba]
    char v6;  // [bp-0xb9]
    unsigned long long v7;  // [bp-0xb8]
    void* v8;  // [bp-0xb0]
    unsigned long long v9;  // [bp-0xa8]
    uint128_t v10;  // [bp-0xa0]
    char v11;  // [bp-0x90]
    unsigned long long v12;  // [bp-0x88]
    unsigned long long v13;  // [bp-0x88]
    unsigned long long v14[18];  // [bp-0x78]
    char *v15;  // [bp-0x70]
    char *v16;  // [bp-0x68]
    struct_0 *v17;  // [bp-0x60]
    unsigned long v18;  // [bp-0x48]
    unsigned long long v19;  // [bp-0x40]
    void* v20;  // [bp-0x38]
    unsigned long long v21;  // r12
    unsigned long long v22;  // rax
    unsigned long v25;  // rbp
    unsigned int v26;  // eax
    unsigned int v27;  // eax
    unsigned long long v28;  // r13
    unsigned long long v29;  // rax
    unsigned long long v30[3];  // rdx
    unsigned long long v31;  // rbp
    unsigned long long v32;  // r13
    unsigned long long v33;  // rax
    unsigned long long v35;  // rax
    unsigned long long v36;  // r13
    unsigned long long v37;  // rax
    unsigned long long v40;  // r12
    unsigned long long v41;  // r12
    unsigned long long v42[18];  // r13
    unsigned long v43;  // r15
    unsigned long long v44;  // rax
    unsigned long long v45;  // r12
    unsigned long v46;  // r15
    unsigned long long v47;  // r12
    unsigned long long v48;  // rax
    unsigned int v49;  // ebx
    unsigned long long v50;  // rax
    unsigned long long v51;  // r12
    unsigned long long v52;  // rax
    unsigned long long v53;  // rax
    unsigned long long v54;  // rax
    int v55;  // xmm0

    v2 = a7;
    v0 = a8;
    v8 = 0;
    v9 = 8;
    v10 = 0;
    v11 = 0;
    if (a5.preferred_width() > a6)
    {
        v21 = a5[16].min(2 <= (4 <= a6 ? a6 - 4 : 0) % 3 | (4 <= a6 ? a6 - 4 : 0) * 12297829382473034411 >> 64 & 18446744073709551614);
        v22 = a5.description_punctuated_width();
        if (a6 > v22)
            v21 = v21.max(a6 - v22);
        if (v21 > a6)
            core::panicking::panic("assertion failed: comp_width <= widthassertion failed: desc_remaining >= 2assertion failed: new_index.is_none_or(|new_index| new_index <= self.completion_infos.len())assertion failed: min_cols_required_for_rows <= colsassertion failed: denom != 0assertion ", 37, &g_14dc2f0); /* do not return */
    }
    else
    {
        v21 = a5[16];
    }
    v13 = v21;
    v25 = fish::pager::Pager::completion_print_item::{{closure}}(&v0, &v2, 16);
    v26 = fish::pager::Pager::completion_print_item::{{closure}}(&v0, &v2, 18 - a1);
    v5 = fish::pager::Pager::completion_print_item::{{closure}}(&v0, &v2, 18);
    v6 = v25;
    v4 = 0;
    v1 = fish::pager::Pager::completion_print_item::{{closure}}(&v0, &v2, 19);
    v18 = a5[1];
    v19 = a5[1] + a5[2] * 24;
    v20 = 0;
    *((unsigned long *)&v3) = (unsigned int)v25 * &g_1000000;
    v7 = &g_14dc410;
    v12 = v13;
    while (true)
    {
        v28 = v12;
        v29 = v18.next();
        if (!v30)
            break;
        v31 = v29;
        v32 = v28;
        if (v29)
        {
            v33 = fish::pager::print_max(3, a2, " ", 2, v3, v28, 1, &v8);
            v32 = v28 - v33;
            if (v28 < v33)
                core::panicking::panic_const::panic_const_sub_overflow(&g_14dc3e0); /* do not return */
        }
        v35 = fish::pager::print_max(3, a2, a3, a4, v26 * 0x10000 | v27, v32, v30[2], &v8);
        v36 = v32 - v35;
        if (v32 < v35)
            core::panicking::panic_const::panic_const_sub_overflow(&g_14dc3f8); /* do not return */
        v14[0] = a5;
        v15 = &v4;
        v16 = &v0;
        if ((char)_ccall(4, 24, v31 + 1, 0, (unsigned long long)(char)(v32 < v35)))
        {
            v7 = &g_14dc410;
            core::panicking::panic_const::panic_const_add_overflow(&g_14dc410); /* do not return */
        }
        v37 = fish::pager::print_max_impl(a2, v30[1], v30[2], &v14, v36, v31 + 1 < a5[2], &v8);
        v12 = v36 - v37;
        if (v36 < v37)
            core::panicking::panic_const::panic_const_sub_overflow(&g_14dc428); /* do not return */
    }
    v40 = a6 - v13;
    if (a6 < v13)
        core::panicking::panic_const::panic_const_sub_overflow(&g_14dc308); /* do not return */
    v41 = v40 + v28;
    if (!((char)__CFADD__(v40, v28)))
    {
        v42 = a5;
        v43 = v42[17];
        if (!v43 || v41 <= 4)
        {
            v14.from_iter(v41);
            fish::pager::print_max(3, a2, v15, v16, v3, v41, 0, &v8);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v14);
LABEL_13d8052:
            v54 = *((long long *)&v11);
            v17->field_20 = v54;
            v55 = *((int128_t *)&v8);
            v17->field_10 = 0;
            *((void*)&v17->field_0) = v55;
            return v54;
        }
        v44 = fish::pager::print_max(3, a2, " ", 2, v3, 2, 0, &v8);
        v45 = v41 - v44;
        if (v41 < v44)
            core::panicking::panic_const::panic_const_sub_overflow(&g_14dc320); /* do not return */
        v46 = v43 + 2;
        if (!((char)__CFADD__(v43, 2)))
        {
            if (v45 > v46)
            {
                do
                {
                    v47 = v45;
                    v48 = fish::pager::print_max(3, a2, " ", 1, v3, 1, 0, &v8);
                    v45 = v47 - v48;
                    if (v47 < v48)
                        core::panicking::panic_const::panic_const_sub_overflow(&g_14dc3c8); /* do not return */
                    v45 = v45;
                } while (v45 > v46);
            }
            if (v45 <= 1)
                core::panicking::panic("assertion failed: desc_remaining >= 2assertion failed: new_index.is_none_or(|new_index| new_index <= self.completion_infos.len())assertion failed: min_cols_required_for_rows <= colsassertion failed: denom != 0assertion failed: comp_info.comp.last().unwrap(", 37, &g_14dc350); /* do not return */
            v49 = v0 * 0x80000 | v3 | 0x120000;
            v50 = fish::pager::print_max(3, a2, "(", 1, v49, 1, 0, &v8);
            v51 = v45 - v50;
            if (v45 < v50)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14dc368); /* do not return */
            }
            else if (v45 != v50)
            {
                v52 = fish::pager::print_max(3, a2, v42[4], v42[5], v1 * 0x10000 | v3, v51 - 1, 0, &v8);
                if (v51 < v52)
                {
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14dc398); /* do not return */
                }
                else if (v51 - v52 < fish::pager::print_max(3, a2, ")", 1, v49, 1, 0, &v8))
                {
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14dc3b0); /* do not return */
                }
            }
            else
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14dc380); /* do not return */
            }
            goto LABEL_13d8052;
        }
        else
        {
            v53 = &g_14dc338;
        }
    }
    else
    {
        v53 = &g_14dc308;
    }
    v7 = v53;
    core::panicking::panic_const::panic_const_add_overflow(v7); /* do not return */
}
