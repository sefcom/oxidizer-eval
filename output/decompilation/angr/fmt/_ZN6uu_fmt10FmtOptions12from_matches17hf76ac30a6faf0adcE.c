long long uu_fmt::FmtOptions::from_matches(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0xb0]
    char v1;  // [bp-0xaf]
    char v2;  // [bp-0xae]
    char v3;  // [bp-0xad]
    char v4;  // [bp-0xac]
    char v5;  // [bp-0xab]
    char v6;  // [bp-0xaa]
    char v7;  // [bp-0xa9]
    int v8;  // [bp-0xa8], Other Possible Types: char, unsigned int
    int v9;  // [bp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x98]
    unsigned long v11;  // [bp-0x90], Other Possible Types: unsigned long long
    unsigned long v12;  // [bp-0x88]
    unsigned long long v13;  // [bp-0x80]
    char v14;  // [bp-0x78], Other Possible Types: unsigned long long
    int v15;  // [bp-0x78]
    unsigned long long v16;  // [bp-0x68]
    unsigned long long v18;  // [bp-0x60]
    unsigned long long v19;  // [bp-0x50]
    int v20;  // [bp-0x48], Other Possible Types: char
    char v21;  // [bp-0x38]
    unsigned long long v23;  // rax
    unsigned long long v24;  // rax
    unsigned long long v25;  // r15
    unsigned long long v26[3];  // rbp
    unsigned long long v27;  // rbp
    unsigned long long v28[3];  // r14
    int v29;  // xmm0

    v7 = a1.get_flag("tagged-paragraphDASHED_UNDERLINE", 16);
    v2 = a1.get_flag("crown-marginuniform-spacingquicksplit-onlyexact-prefixskip-prefixprefixtab-width-\nfileswidthsrc/uu/fmt/src/fmt.rs", 12);
    v5 = a1.get_flag("preserve-headers", 16);
    v6 = a1.get_flag("uniform-spacingquicksplit-onlyexact-prefixskip-prefixprefixtab-width-\nfileswidthsrc/uu/fmt/src/fmt.rs", 15);
    v4 = a1.get_flag("quicksplit-onlyexact-prefixskip-prefixprefixtab-width-\nfileswidthsrc/uu/fmt/src/fmt.rs", 5);
    v3 = a1.get_flag("split-onlyexact-prefixskip-prefixprefixtab-width-\nfileswidthsrc/uu/fmt/src/fmt.rs", 10);
    v1 = a1.contains_id("exact-prefixskip-prefixprefixtab-width-\nfileswidthsrc/uu/fmt/src/fmt.rs", 12);
    v0 = a1.contains_id("skip-prefixprefixtab-width-\nfileswidthsrc/uu/fmt/src/fmt.rs", 11);
    v8.try_get_one(a1, "prefixtab-width-\nfileswidthsrc/uu/fmt/src/fmt.rs", 6);
    v23 = "prefixtab-width-\nfileswidthsrc/uu/fmt/src/fmt.rs".unwrap(6, &v8);
    if (v23)
        (char)v18.call_once(v23);
    else
        v18 = 0x8000000000000000;
    v8.try_get_one(a1, "skip-prefixprefixtab-width-\nfileswidthsrc/uu/fmt/src/fmt.rs", 11);
    v24 = "skip-prefixprefixtab-width-\nfileswidthsrc/uu/fmt/src/fmt.rs".unwrap(11, &v8);
    if (v24)
    {
        v8.call_once(v24);
        v16 = v10;
        memcpy(&v14, &v8, 16);
    }
    else
    {
        v14 = 0x8000000000000000;
    }
    uu_fmt::extract_width(&v8, a1);
    v25 = v10;
    if ((v8 & 1))
    {
        *((unsigned long long *)&a0->padding_1[7]) = v9;
        a0->field_10 = v25;
        *((unsigned long long *)&a0->field_0) = 9223372036854775809;
        ::0x4a17b0::core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v15);
        ::0x4a17b0::core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&(char)v18);
        return a0;
    }
    v8.try_get_one(a1, "goal", 4);
    v26 = "goal".unwrap(4, &v8);
    if (v26)
    {
        ::0x4a0cb0::core::num::<impl u64>::from_str_radix(&v8, v26[1], v26[2]);
        if (v8 == 1)
        {
            v20.clone(v26);
            v11 = *((long long *)&v21);
            v9 = v20;
            v8 = 0;
            v9 = v8.from();
        }
        else
        {
            v27 = v9;
            if (v9)
            {
                if (v27 <= v25)
                    goto LABEL_4a2312;
                v8 = 1;
                v9 = v8.from();
            }
            else if (v27 > 75)
            {
                v8 = 1;
                v9 = v8.from();
            }
            else
            {
                v25 = ::0x4a0c80::core::cmp::max_by(((((unsigned int)v27 * 100 - ((unsigned int)v27 * 2466500 >> 16) & 4294967295) >> 1) + ((unsigned int)v27 * 2466500 >> 16) & 4294967295) >> 6 & 4294967295, v27 + 3);
LABEL_4a2312:
                if (v25 <= 2500)
                    goto LABEL_4a2338;
                v9 = v25;
                v8 = 3;
                v9 = v8.from();
            }
        }
    }
    else
    {
        if (!v9)
        {
            v25 = 75;
            v27 = 70;
            goto LABEL_4a2338;
        }
        if (v25)
        {
            v27 = ::0x4a0c80::core::cmp::max_by((v25 * 93 >> 2) / 25, 1);
            goto LABEL_4a2312;
        }
        else
        {
            v27 = 0;
            v25 = 0;
LABEL_4a2338:
            v8.try_get_one(a1, "tab-width-\nfileswidthsrc/uu/fmt/src/fmt.rs", 9);
            v28 = "tab-width-\nfileswidthsrc/uu/fmt/src/fmt.rs".unwrap(9, &v8);
            if (v28)
            {
                ::0x4a0cb0::core::num::<impl u64>::from_str_radix(&v8, v28[1], v28[2]);
                if (v8 != 1)
                {
LABEL_4a240a:
                    v10 = v19;
                    v29 = *((int128_t *)&v18);
                    v8 = v29;
                    v13 = v16;
                    memcpy(&(char)v11, &v15, 16);
                    *((void*)&a0->field_0) = v29;
                    a0->field_20 = v12;
                    a0->field_28 = v13;
                    a0->field_10 = v10;
                    a0->field_18 = v11;
                    a0->field_30 = v25;
                    a0->field_38 = v27;
                    a0->field_40 = v9 + (v9 < 1);
                    a0->field_48 = (0 CONCAT (v4 * 0x100 | v6) * 0x1000000000000) | ((0 CONCAT (v0 * 0x100 | v1) * 0x100000000) | v3 * 0x1000000 | v5 * 0x10000 | (v7 & ((v2 | v3) ^ 1)) * 0x100 | (v3 ^ 1) & v2) & 281474976710655;
                    return a0;
                }
                v20.clone(v28);
                v11 = *((long long *)&v21);
                v9 = v20;
                v8 = 4;
                v9 = v8.from();
            }
            else
            {
                v9 = 8;
                goto LABEL_4a240a;
            }
        }
    }
    *((unsigned long long *)&a0->padding_1[7]) = v9;
    a0->field_10 = v25;
    *((unsigned long long *)&a0->field_0) = 9223372036854775809;
    ::0x4a17b0::core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v15);
    ::0x4a17b0::core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&(char)v18);
    return a0;
}
