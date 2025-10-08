long long uu_fmt::FmtOptions::from_matches(void* a0, unsigned long long a1)
{
    char v0;  // [bp-0x141]
    char v1;  // [bp-0x140]
    char v2;  // [bp-0x13f]
    char v3;  // [bp-0x13e]
    char v4;  // [bp-0x13d]
    char v5;  // [bp-0x13c]
    char v6;  // [bp-0x13b]
    char v7;  // [bp-0x13a]
    char v8;  // [bp-0x139]
    int v9;  // [bp-0x138], Other Possible Types: char
    int v10;  // [bp-0x138]
    unsigned long v11;  // [bp-0x130], Other Possible Types: unsigned long long
    char *v12;  // [bp-0x128], Other Possible Types: unsigned long long
    unsigned long v13;  // [bp-0x120], Other Possible Types: unsigned long long, unsigned int
    void* v14;  // [bp-0x118], Other Possible Types: unsigned long
    unsigned long long v15;  // [bp-0x110]
    char *v16;  // [bp-0x100], Other Possible Types: void*
    unsigned long long v17;  // [bp-0xf8], Other Possible Types: unsigned long
    unsigned long v18;  // [bp-0xf0], Other Possible Types: unsigned long long
    char v19;  // [bp-0xe8]
    char v20;  // [bp-0xe0]
    char v21;  // [bp-0xe0]
    char v22;  // [bp-0xdf]
    unsigned long long v23;  // [bp-0xd8]
    unsigned long long v24;  // [bp-0xd0]
    char v25;  // [bp-0xc8], Other Possible Types: unsigned long long
    int v26;  // [bp-0xc8]
    unsigned long long v27;  // [bp-0xb8]
    unsigned long long v29;  // [bp-0xb0]
    unsigned long long v30;  // [bp-0xa0]
    char *v31;  // [bp-0x98]
    unsigned long long v32;  // [bp-0x90]
    char *v33;  // [bp-0x88]
    unsigned long long v34;  // [bp-0x80]
    int v35;  // [bp-0x78], Other Possible Types: char
    unsigned long long v36;  // [bp-0x68]
    int v37;  // [bp-0x60], Other Possible Types: char
    unsigned long long v38;  // [bp-0x50]
    int v39;  // [bp-0x48], Other Possible Types: char
    char v40;  // [bp-0x38]
    unsigned long long v42;  // rax
    unsigned long long v43;  // rax
    unsigned long long v44;  // r15
    unsigned long long v45[3];  // rax
    unsigned long long v46;  // r14
    unsigned long v47;  // rax
    unsigned long long v48[3];  // rax
    int v49;  // xmm0

    v7 = a1.get_flag("tagged-paragraph[short aliases: DASHED_UNDERLINE", 16);
    v2 = a1.get_flag("crown-marginuniform-spacingquicksplit-onlyexact-prefixskip-prefixprefixtab-width-read errorcannot open  for readingcannot get metadata for ", 12);
    v5 = a1.get_flag("preserve-headersDOUBLE_UNDERLINE", 16);
    v6 = a1.get_flag("uniform-spacingquicksplit-onlyexact-prefixskip-prefixprefixtab-width-read errorcannot open  for readingcannot get metadata for ", 15);
    v4 = a1.get_flag("quicksplit-onlyexact-prefixskip-prefixprefixtab-width-read errorcannot open  for readingcannot get metadata for ", 5);
    v3 = a1.get_flag("split-onlyexact-prefixskip-prefixprefixtab-width-read errorcannot open  for readingcannot get metadata for ", 10);
    v1 = a1.contains_id("exact-prefixskip-prefixprefixtab-width-read errorcannot open  for readingcannot get metadata for ", 12);
    v0 = a1.contains_id("skip-prefixprefixtab-width-read errorcannot open  for readingcannot get metadata for ", 11);
    v9.try_get_one(a1, "prefixtab-width-read errorcannot open  for readingcannot get metadata for ", 6);
    v42 = "prefixtab-width-read errorcannot open  for readingcannot get metadata for ".unwrap(6, &v9);
    if (v42)
        (char)v29.clone(v42);
    else
        v29 = 0x8000000000000000;
    v9.try_get_one(a1, "skip-prefixprefixtab-width-read errorcannot open  for readingcannot get metadata for ", 11);
    v43 = "skip-prefixprefixtab-width-read errorcannot open  for readingcannot get metadata for ".unwrap(11, &v9);
    if (v43)
    {
        v9.clone(v43);
        v27 = v12;
        memcpy(&v25, &v9, 16);
    }
    else
    {
        v25 = 0x8000000000000000;
    }
    uu_fmt::extract_width(&v9, a1);
    v44 = v12;
    if (*((int *)&v9) == 1)
    {
        *((unsigned long *)&a0[8]) = v11;
        *((unsigned long long *)&a0[16]) = v44;
        goto LABEL_464213;
    }
    v9.try_get_one(a1, "goalBlue", 4);
    v45 = "goalBlue".unwrap(4, &v9);
    if (v45)
    {
        ::0x45cf80::core::num::<impl usize>::from_ascii_radix(&v20, v45[1], v45[2]);
        if (v21 == 1)
        {
            v16 = 0;
            v17 = v45[1];
            v18 = v45[2];
            v19 = 1;
            v31 = &v16;
            v32 = <os_display::Quoted as core::fmt::Display>::fmt;
            *((unsigned long long **)&v10) = &g_4f06b0;
            v11 = 1;
            v14 = 0;
            v12 = &v31;
            v13 = 1;
            v35.map_or_else(&(unsigned long long)v10);
            v13 = 1;
            v10 = v35;
            v12 = v36;
            *((double *)&a0[8]) = (unsigned long long)v10.new();
            *((unsigned long long **)&a0[16]) = &g_4f0720;
            *((unsigned long long *)a0) = 9223372036854775809;
        }
        else
        {
            v46 = v23;
            if (((char)v11 & 1))
            {
                if (v46 <= v44)
                    goto LABEL_46416b;
                (char)v16.to_vec("GOAL cannot be greater than WIDTH.Print help for the subcommand(s)library/alloc/src/raw_vec/mod.rsindex out of bounds: the len is ': Numerical result out of range", 34);
                v12 = v18;
                *((int128_t *)&v9) = *((int128_t *)&v16);
                v13 = 1;
                v47 = v9.new();
            }
            else if (v46 > 75)
            {
                (char)v16.to_vec("GOAL cannot be greater than WIDTH.Print help for the subcommand(s)library/alloc/src/raw_vec/mod.rsindex out of bounds: the len is ': Numerical result out of range", 34);
                v12 = v18;
                *((int128_t *)&v9) = *((int128_t *)&v16);
                v13 = 1;
                v47 = v9.new();
            }
            else
            {
                v44 = ((((unsigned int)v46 * 100 - ((unsigned int)v46 * 2466500 >> 16) & 4294967295) >> 1) + ((unsigned int)v46 * 2466500 >> 16) & 4294967295) >> 6 & 4294967295.max(v46 + 3);
LABEL_46416b:
                v24 = v44;
                if (v44 <= 2500)
                    goto LABEL_464250;
                v16 = &v24;
                v17 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                *((unsigned long long **)&v10) = &g_4f06c0;
                v11 = 2;
                v14 = 0;
                v12 = &v16;
                v13 = 1;
                v37.map_or_else(&(unsigned long long)v10);
                v13 = 1;
                v10 = v37;
                v12 = v38;
                v47 = (unsigned long long)v10.new();
            }
            *((unsigned long *)&a0[8]) = v47;
            *((unsigned long long **)&a0[16]) = &g_4f0720;
LABEL_464213:
            *((unsigned long long *)a0) = 9223372036854775809;
        }
    }
    else
    {
        if (!((char)v11 & 1))
        {
            v46 = 70;
            v44 = 75;
            goto LABEL_46424b;
        }
        if (v44)
        {
            v46 = (v44 * 93 >> 2) / 25.max(1);
            goto LABEL_46416b;
        }
        else
        {
            v44 = 0;
            v46 = 0;
LABEL_46424b:
            v24 = v44;
LABEL_464250:
            v9.try_get_one(a1, "tab-width-read errorcannot open  for readingcannot get metadata for ", 9);
            v48 = "tab-width-read errorcannot open  for readingcannot get metadata for ".unwrap(9, &v9);
            if (v48)
            {
                ::0x45cf80::core::num::<impl usize>::from_ascii_radix(&v21, v48[1], v48[2]);
                if (v21 != 1)
                {
LABEL_464399:
                    v12 = v30;
                    v49 = *((int128_t *)&v29);
                    v9 = v49;
                    v15 = v27;
                    memcpy(&(char)v13, &v26, 16);
                    *(a0) = v49;
                    *((unsigned long *)&a0[32]) = v14;
                    *((unsigned long long *)&a0[40]) = v15;
                    *((unsigned long long *)&a0[16]) = v12;
                    *((unsigned long *)&a0[24]) = v13;
                    *((unsigned long long *)&a0[48]) = v44;
                    *((unsigned long long *)&a0[56]) = v46;
                    *((unsigned long long *)&a0[64]) = v23 + (v23 < 1);
                    *((unsigned long long *)&a0[72]) = (0 CONCAT (v4 * 0x100 | v6) * 0x1000000000000) | ((0 CONCAT (v0 * 0x100 | v1) * 0x100000000) | v3 * 0x1000000 | v5 * 0x10000 | (v7 & ((v2 | v3) ^ 1)) * 0x100 | (v3 ^ 1) & v2) & 281474976710655;
                    return a0;
                }
                v8 = v22;
                v16 = 0;
                v17 = v48[1];
                v18 = v48[2];
                v19 = 1;
                v31 = &v16;
                v32 = <os_display::Quoted as core::fmt::Display>::fmt;
                v33 = &v8;
                v34 = <core::num::error::ParseIntError as core::fmt::Display>::fmt;
                *((unsigned long long **)&v10) = &g_4f06e0;
                v11 = 2;
                v14 = 0;
                v12 = &v31;
                v13 = 2;
                v39.map_or_else(&(unsigned long long)v10);
                v13 = 1;
                v10 = v39;
                v12 = *((long long *)&v40);
                *((double *)&a0[8]) = (unsigned long long)v10.new();
                *((unsigned long long **)&a0[16]) = &g_4f0720;
                *((unsigned long long *)a0) = 9223372036854775809;
            }
            else
            {
                v23 = 8;
                goto LABEL_464399;
            }
        }
    }
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v26);
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&(char)v29);
    return a0;
}
