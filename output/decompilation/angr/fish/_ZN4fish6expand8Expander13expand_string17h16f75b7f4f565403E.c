long long fish::expand::Expander::expand_string(unsigned long long a0[3], unsigned long long a1[4], unsigned int a2, unsigned long long *a3, unsigned long long a4)
{
    int v0;  // [bp-0x198], Other Possible Types: unsigned long long
    struct_0 *v1;  // [bp-0x190]
    unsigned long long v2;  // [bp-0x188]
    unsigned int v3;  // [bp-0x174]
    char v4;  // [bp-0x170]
    void* v5;  // [bp-0x170]
    unsigned long long v6;  // [bp-0x168]
    void* v7;  // [bp-0x160]
    unsigned long long v8;  // [bp-0x150]
    int v9;  // [bp-0x148], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x140]
    unsigned long long v11;  // [bp-0x138]
    int v12;  // [bp-0x138]
    int v13;  // [bp-0x130]
    int v14;  // [bp-0x128]
    unsigned long v15;  // [bp-0x118], Other Possible Types: unsigned long long
    unsigned long long *v16;  // [bp-0x108]
    char *v17;  // [bp-0x100]
    unsigned short v18;  // [bp-0xf8]
    unsigned long v19;  // [bp-0xf0]
    unsigned long v20;  // [bp-0xe8]
    int v21;  // [bp-0xd8], Other Possible Types: char
    unsigned long long v22;  // [bp-0xc8]
    int v23;  // [bp-0xb8]
    unsigned long long v24;  // [bp-0xa8]
    void* v25;  // [bp-0xa0]
    unsigned long long v26;  // [bp-0x98]
    unsigned long long v27;  // [bp-0x90]
    unsigned long long v28;  // [bp-0x88]
    unsigned long long v29;  // [bp-0x80]
    unsigned long long v30;  // [bp-0x78]
    unsigned long long v31;  // [bp-0x70]
    int v32;  // [bp-0x68]
    unsigned long long v33;  // [bp-0x58]
    char v34;  // [bp-0x50]
    unsigned long v36;  // rbp
    struct_0 *v38;  // rax
    struct_0 *v39;  // r14
    int v40;  // xmm0
    int v41;  // xmm1
    char v42;  // r15b
    unsigned int v43;  // r13d
    struct_1 **v44;  // rax
    char v45;  // dl
    unsigned int v46;  // ebx

    v36 = a2;
    v8 = a4;
    if (!((char)v36 & 1) && *(a3) == 1)
    {
        v9 = &g_14d88d8;
        v10 = 1;
        v11 = 8;
        *((uint128_t *)&v13) = 0;
        core::panicking::panic_fmt(&v9, &g_14d88e8); /* do not return */
    }
    if (!((char)v36 & 8) && (char)fish::expand::expand_is_clean(a0[1], a0[2]))
        return (!a1.add(a0) ? (int)fish::expand::append_overflow_error(v8) : 0);
    v16 = a3;
    v18 = v36;
    v17 = &v8;
    v38 = 8.alloc_impl(56, 0);
    if (!v38)
        alloc::alloc::handle_alloc_error(8, 56); /* do not return */
    v39 = v38;
    fish::builtins::fish_indent::fish_indent::{{closure}}(&(char)v9, a0[1], a0[2]);
    v19 = a0[2];
    v20 = a0[1];
    v3 = v36;
    v22 = v11;
    memcpy(&v21, &v9, 16);
    (char)v9.from_completion(&v21);
    v39->field_30 = v15;
    v40 = *((int128_t *)&v9);
    v41 = *((int128_t *)&v11);
    *((void*)&v39->field_20) = v14;
    *((void*)&v39->field_10) = v41;
    *((void*)&v39->field_0) = v40;
    v0 = 1;
    v1 = v39;
    v2 = 1;
    v4.subreceiver(a1);
    v25 = 0;
    v26 = 5;
    v27 = fish::expand::Expander::stage_cmdsubst;
    v28 = fish::expand::Expander::stage_variables;
    v29 = fish::expand::Expander::stage_braces;
    v30 = fish::expand::Expander::stage_home_and_self;
    v31 = fish::expand::Expander::stage_wildcards;
    v42 = 2;
    v43 = 0;
    while (true)
    {
        if (!v25.next())
            break;
        v34.into_iter(&v0);
        while (true)
        {
            v21.next(&v34);
            if ((long long)v21 == 0x8000000000000000)
                break;
            v15 = v24;
            v14 = v23;
            *((int128_t *)&v12) = *((int128_t *)&v22);
            v9 = v21;
            if (!(char)v16.check_cancel())
            {
                v33 = v22;
                v32 = v21;
                v43 = v44(&v16, &v32, &v4);
                if (v45 < 2)
                    goto LABEL_13adee5;
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v12);
            }
            else
            {
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v21);
                v42 = 3;
                v43 = 0;
LABEL_13adee5:
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v12);
                break;
            }
        }
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fish::complete::Completion>>(&v34);
        *((int128_t *)&v0) = *((int128_t *)&v4);
        v2 = v7;
        v5 = 0;
        v6 = 8;
        v7 = 0;
        if (v42 < 2)
            break;
    }
    switch (v42)
    {
    case 2:
        v46 = v43;
        if ((char)v3 < 0)
        {
LABEL_13adf75:
            v16.unexpand_tildes(*((int *)&v18), v20, v19, v1, v2);
        }
        break;
    case 4:
        v46 = 0;
        if (!v2)
            goto LABEL_13adf52;
        if ((char)v3 < 0)
            goto LABEL_13adf75;
        break;
    default:
LABEL_13adf52:
        core::ptr::drop_in_place<fish::complete::CompletionReceiver>(&v4);
        core::ptr::drop_in_place<alloc::vec::Vec<fish::complete::Completion>>(&v0);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a0);
        return v43;
    }
    if (!a1.extend(&v0))
    {
        v43 = fish::expand::append_overflow_error(v8);
        core::ptr::drop_in_place<fish::complete::CompletionReceiver>(&v4);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a0);
        return v43;
    }
    core::ptr::drop_in_place<fish::complete::CompletionReceiver>(&v4);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a0);
    return v46;
}
