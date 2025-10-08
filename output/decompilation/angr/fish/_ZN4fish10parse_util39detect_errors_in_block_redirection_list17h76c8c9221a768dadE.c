char fish::parse_util::detect_errors_in_block_redirection_list(unsigned long a0, struct_0 **a1, char *a2, unsigned int a3, unsigned long long a4)
{
    void* v0;  // [bp-0xe0], Other Possible Types: char
    unsigned int v1;  // [bp-0xdc]
    char v2;  // [bp-0xd8], Other Possible Types: unsigned long long
    void* v3;  // [bp-0xd0]
    int v4;  // [bp-0xc8], Other Possible Types: char
    void* v5;  // [bp-0xb8]
    int v6;  // [bp-0xa8], Other Possible Types: void*
    unsigned long long v7;  // [bp-0xa0]
    int v8;  // [bp-0x98], Other Possible Types: void*
    unsigned long v9;  // [bp-0x90]
    int v10;  // [bp-0x8f]
    unsigned long long v11;  // [bp-0x88]
    char v12;  // [bp-0x80]
    int v13;  // [bp-0x78], Other Possible Types: void*
    unsigned long long v14;  // [bp-0x70]
    int v15;  // [bp-0x68], Other Possible Types: void*
    unsigned long v16;  // [bp-0x60]
    int v17;  // [bp-0x5f]
    unsigned long long v18;  // [bp-0x58]
    char v19;  // [bp-0x50]
    char v20;  // [bp-0x48]
    unsigned long long v22;  // rax
    unsigned int v23;  // ebp
    unsigned int v25;  // r15d
    unsigned long long v27;  // rdx
    char *v28;  // r15
    unsigned long long v29;  // rdx
    unsigned long long v31;  // rdx

    v22 = fish::parse_util::get_first_arg(a2, a3);
    if (!v22)
        return v22;
    (char)v0.try_source_range(v22);
    v23 = 0;
    v25 = 0;
    if (v0)
    {
        v23 = *((int *)&v2);
        v25 = v1;
    }
    a1(&v20, a0);
    if (*((int *)&v20) == 16)
    {
        if (a4)
        {
            v6 = 0;
            v7 = 4;
            *((uint128_t *)&v8) = 0;
            *((uint128_t *)&v10) = 0;
            v9 = v25.start();
            v11 = a0.length(v23);
            v12 = 1;
            v0 = 0;
            v2 = 4;
            v3 = 0;
            fish_printf::printf_impl::sprintf_locale(&v4, &(char)v0, g_14de320[0].localize(), v27, ".", 8, 0);
            v4.unwrap(&g_14de338);
            memcpy(&v4, &(char)v0, 16);
            v5 = 0;
            v28 = &v6;
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6);
            v8 = 0;
            v6 = v4;
            v29 = &g_14de338;
            goto LABEL_13e8af7;
        }
        else
        {
            return v22;
        }
    }
    else
    {
        if (a4)
        {
            v13 = 0;
            v14 = 4;
            *((uint128_t *)&v15) = 0;
            *((uint128_t *)&v17) = 0;
            v16 = v25.start();
            v18 = a0.length(v23);
            v19 = 1;
            v0 = 0;
            v2 = 4;
            v3 = 0;
            fish_printf::printf_impl::sprintf_locale(&(char)v4, &(char)v0, g_14de350[0].localize(), v31, ".", 8, 0);
            (char)v4.unwrap(&g_14de368);
            memcpy(&(char)v4, &(char)v0, 16);
            v5 = 0;
            v28 = &v13;
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v13);
            v15 = 0;
            v13 = v4;
            v29 = &g_14de368;
LABEL_13e8af7:
            a4.push(v28, v29);
        }
    }
    return v22;
}
