long long fish::pager::process_completions_into_infos(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x128]
    unsigned long long v1;  // [bp-0x118]
    void* v2;  // [bp-0x108]
    struct_1 *v3;  // [bp-0x100]
    int v4;  // [bp-0xf8], Other Possible Types: char
    unsigned long long v5;  // [bp-0xe8]
    unsigned long long v6;  // [bp-0xd8]
    unsigned long long v7;  // [bp-0xd0]
    void* v8;  // [bp-0xc8]
    void* v9;  // [bp-0xc0]
    unsigned long long v10;  // [bp-0xb8]
    uint128_t v11;  // [bp-0xb0]
    unsigned long long v12;  // [bp-0xa0]
    int v13;  // [bp-0x98]
    unsigned long long v14;  // [bp-0x90]
    unsigned long long v15;  // [bp-0x88]
    uint128_t v16;  // [bp-0x80]
    unsigned long long v17;  // [bp-0x70]
    void* v18;  // [bp-0x68]
    unsigned int v19;  // [bp-0x60]
    void* v20;  // [bp-0x58]
    unsigned long long v21;  // [bp-0x50]
    uint128_t v22;  // [bp-0x48]
    void* v23;  // [bp-0x38]
    unsigned long long v25;  // rax
    void* v26;  // rdx
    unsigned long long v27;  // r15
    struct_0 *v28;  // r15
    void* v29;  // rax
    unsigned long v30;  // r14
    int v31;  // xmm0

    v1 = a2.with_capacity_in(8, 144, &g_14dc7d0);
    v2 = 0;
    v6 = a1;
    v7 = a2 * 56 + a1;
    v8 = 0;
    while (true)
    {
        v25 = v6.next();
        if (!v26)
        {
            v3->field_10 = v2;
            v3->field_0 = *((int128_t *)&v1);
            return v2;
        }
        v27 = v25;
        v9 = 0;
        v10 = 8;
        v11 = 0;
        v12 = 4;
        *((uint128_t *)&v13) = 0;
        v15 = 4;
        v16 = 0;
        v17 = 4;
        v20 = 0;
        v19 = 0;
        v18 = 0;
        v21 = 1;
        v22 = 0;
        v23 = 0;
        v1.push(&v9, &g_14dc7e8);
        if (v27 >= v2)
            core::panicking::panic_bounds_check(v27, v2, &g_14dc800); /* do not return */
        v28 = v27 * 144 + v26;
        fish::common::escape_string(&v9, (long long)v26[8], (long long)v26[16], 0);
        v28.push(&v9, &g_14dc818);
        if (((char)v26[50] & 128) && (unsigned long long)fish::libc::MB_CUR_MAX() >= 2)
        {
            v9.empty();
            fish::highlight::highlight::highlight_shell((long long)v26[8], (long long)v26[16], (char *)&v28->field_50 + 8, &v9, 0, 0, *((long long *)&v0));
            core::ptr::drop_in_place<fish::operation_context::OperationContext>(&v9);
            if (!v28->field_10)
                break;
            v29 = v28->field_10 * 24 + v28->field_8;
            if (v29 == 24)
                break;
            if ((long long)v29[8] < *((long long *)&v28->padding_68[0]))
                core::panicking::panic("assertion failed: comp_info.comp.last().unwrap().len() >= comp_info.colors.len()FISH_FAST_FAIL Debug PID %d or press Enter to exit\nsrc/panic.rssrc/parse_constants.rs", 80, &g_14dc848); /* do not return */
        }
        fish::builtins::fish_indent::fish_indent::{{closure}}(&v9, (long long)v26[32], (long long)v26[40]);
        v5 = v11;
        memcpy(&v4, &v9, 16);
        v30 = &(&v28->field_10)[1];
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(v30);
        *((unsigned long long *)((char *)&v28->field_18 + 8)) = v5;
        *((void*)&(&v28->field_10)[1]) = v4;
        fish::pager::mangle_1_completion_description(v30);
        v9.clone(v26);
        core::ptr::drop_in_place<fish::complete::Completion>(&v28->field_28);
        *((unsigned long long *)&v28->field_50) = v14;
        v31 = *((int128_t *)&v9);
        v28->field_40 = *((int128_t *)&v12);
        v28->field_30 = v11;
        *((void*)&v28->field_28) = v31;
    }
    core::option::unwrap_failed(&g_14dc830); /* do not return */
}
