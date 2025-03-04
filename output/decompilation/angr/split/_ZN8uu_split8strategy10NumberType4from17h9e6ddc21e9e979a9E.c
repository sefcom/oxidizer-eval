long long uu_split::strategy::NumberType::from::h9e6ddc21e9e979a9(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    int v0;  // [sp-0x108], Other Possible Types: unsigned int
    int v1;  // [bp-0x108]
    int v2;  // [sp-0xf8]
    int v3;  // [sp-0xf8]
    char v4;  // [bp-0xe8]
    char v5;  // [bp-0xe8]
    char v6;  // [bp-0xe0]
    char v7;  // [bp-0xd8]
    int v8;  // [sp-0xc8]
    char v9;  // [bp-0xb0]
    char v10;  // [bp-0xa8]
    char v11;  // [bp-0xa0]
    char v12;  // [bp-0x90]
    char v13;  // [bp-0x88]
    char v14;  // [bp-0x80]
    void* v15;  // [sp-0x78]
    unsigned long long v16;  // [sp-0x70]
    char v17;  // [bp-0x68]
    unsigned short v18;  // [sp-0x38]
    unsigned long long v20[6];  // r14
    unsigned long long v21;  // rax
    unsigned long long v22;  // r13
    unsigned long long v23;  // rbp
    unsigned long long v24;  // rdx
    unsigned long long v25;  // r13
    unsigned long long v26;  // rbp
    unsigned long long v27;  // r15
    unsigned long long v28;  // rcx
    unsigned long long v29;  // rax
    unsigned long long v30;  // rax
    unsigned long long v31;  // r14
    unsigned long long v32;  // r14
    unsigned long long v33;  // rax

    ::0x4d6680::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&v17, a1, a2);
    v15 = 0;
    v16 = a2;
    v18 = 1;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hb7d063058b59f453(&v12, &v15);
    v20 = *((long long *)&v13);
    v21 = *((long long *)&v14);
    if (v21 != 3)
    {
        if (v21 != 2)
        {
            if (!(v21 == 1))
                goto LABEL_4d6a9c;
            uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&v4, v20[0], v20[1]);
            if (*((int *)&v5) == 3)
            {
                v29 = *((long long *)&v6);
                goto LABEL_4d6a39;
            }
            else
            {
                *((int128_t *)&v3) = *((int128_t *)&v7);
                *((int128_t *)&v0) = *((int128_t *)&v5);
                uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h0c2f1a54dfcf23c8(&v9, v20, &v0);
                v28 = *((long long *)&v9);
                v29 = *((long long *)&v10);
                *((int128_t *)&v8) = *((int128_t *)&v11);
                if (v28 == 2)
                {
LABEL_4d6a39:
                    if (!v29)
                    {
                        ::0x4d6610::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha461c13160c52a35(&v0, a1, a2);
LABEL_4d6aaa:
                        a0[1] = (long long)v3;
                        *((int128_t *)&a0[1]) = (int128_t)v0;
                        v33 = 0;
                    }
                    else
                    {
                        a0[1] = 0;
LABEL_4d6a4a:
                        a0[2] = v29;
LABEL_4d6e05:
                        v33 = 2;
                    }
                    a0[0] = v33;
                    return ::0x4d64b0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hb91d4d90968b37bf(&v12);
                }
            }
        }
        else
        {
            v22 = v20[0];
            v23 = v20[1];
            v0 = 0;
            if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hcb49aff15e773791(v22, v23, ::0x4d6520::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(108, &v0), v24))
            {
LABEL_4d691c:
                if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(v20[0], v20[1], "lcannot split in more than one wayinvalid number of lines: invalid number of bytes: invalid number of chunks: invalid chunk number: src/uu/split/src/strategy.rs", 1))
                {
                    if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(v20[0], v20[1], "r", 1))
                    {
LABEL_4d6a9c:
                        ::0x4d6610::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha461c13160c52a35(&v0, a1, a2);
                        goto LABEL_4d6aaa;
                    }
                    uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&v4, v20[2], v20[3]);
                    if (*((int *)&v5) == 3)
                    {
                        v29 = *((long long *)&v6);
                        a0[1] = 4;
                        goto LABEL_4d6a4a;
                    }
                    *((int128_t *)&v3) = *((int128_t *)&v7);
                    *((int128_t *)&v1) = *((int128_t *)&v5);
                    uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h78aa2187d3c4e60e(&v9, &v20[2], &v0);
                    v28 = *((long long *)&v9);
                    v29 = *((long long *)&v10);
                    *((int128_t *)&v8) = *((int128_t *)&v11);
                    if (v28 == 2)
                    {
                        a0[1] = 4;
                        goto LABEL_4d6a4a;
                    }
                }
                else
                {
                    uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&v4, v20[2], v20[3]);
                    if (*((int *)&v5) == 3)
                    {
                        v29 = *((long long *)&v6);
                        a0[1] = 2;
                        goto LABEL_4d6a4a;
                    }
                    *((int128_t *)&v3) = *((int128_t *)&v7);
                    *((int128_t *)&v1) = *((int128_t *)&v5);
                    uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::hf0efa26e5c8f8979(&v9, &v20[2], &v0);
                    v28 = *((long long *)&v9);
                    v29 = *((long long *)&v10);
                    *((int128_t *)&v8) = *((int128_t *)&v11);
                    if (v28 == 2)
                    {
                        a0[1] = 2;
                        goto LABEL_4d6a4a;
                    }
                }
            }
            else
            {
                v25 = v20[0];
                v26 = v20[1];
                v0 = 0;
                if (!(!(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hcb49aff15e773791(v25, v26, ::0x4d6520::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(114, &v0), v24)))
                    goto LABEL_4d691c;
                uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&v4, v20[2], v20[3]);
                if (*((int *)&v5) == 3)
                {
                    v27 = *((long long *)&v6);
                }
                else
                {
                    *((int128_t *)&v2) = *((int128_t *)&v7);
                    *((int128_t *)&v0) = *((int128_t *)&v5);
                    uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h06b2dfbb4a152b45(&v9, &v20[2], &v0);
                    v30 = *((long long *)&v9);
                    v27 = *((long long *)&v10);
                    *((int128_t *)&v8) = *((int128_t *)&v11);
                    if (v30 != 2)
                    {
                        *((void*)&a0[2]) = v8;
                        a0[0] = v30;
                        a0[1] = v27;
                        return ::0x4d64b0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hb91d4d90968b37bf(&v12);
                    }
                }
                uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&v4, v20[0], v20[1]);
                if (*((int *)&v5) == 3)
                {
                    v29 = *((long long *)&(&v5)[8]);
                    goto LABEL_4d6d98;
                }
                *((int128_t *)&v2) = *((int128_t *)&v7);
                *((int128_t *)&v0) = *((int128_t *)&v5);
                uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::hbe5df86a08721417(&v9, v20, &v0);
                v28 = *((long long *)&v9);
                v29 = *((long long *)&v10);
                *((int128_t *)&v8) = *((int128_t *)&v11);
                if (v28 == 2)
                {
LABEL_4d6d98:
                    if (v29 - 1 >= v27)
                    {
                        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h973f901dc7acf26e(&v0, v20);
                        a0[1] = (long long)v2;
                        *((int128_t *)&a0[1]) = (int128_t)v0;
                        a0[0] = 1;
                        return ::0x4d64b0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hb91d4d90968b37bf(&v12);
                    }
                    a0[1] = 1;
                    goto LABEL_4d6dfd;
                }
            }
        }
    }
    else
    {
        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(v20[0], v20[1], "lcannot split in more than one wayinvalid number of lines: invalid number of bytes: invalid number of chunks: invalid chunk number: src/uu/split/src/strategy.rs", 1))
        {
            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(v20[0], v20[1], "r", 1))
                goto LABEL_4d6a9c;
            uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&v4, v20[4], v20[5]);
            if (*((int *)&v5) == 3)
            {
                v27 = *((long long *)&v6);
            }
            else
            {
                *((int128_t *)&v2) = *((int128_t *)&v7);
                *((int128_t *)&v0) = *((int128_t *)&v5);
                uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h987e1a854451dac2(&v9, &v20[4], &v0);
                v30 = *((long long *)&v9);
                v27 = *((long long *)&v10);
                *((int128_t *)&v8) = *((int128_t *)&v11);
                if (v30 != 2)
                {
                    *((void*)&a0[2]) = v8;
                    a0[0] = v30;
                    a0[1] = v27;
                    return ::0x4d64b0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hb91d4d90968b37bf(&v12);
                }
            }
            uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&v4, v20[2], v20[3]);
            v32 = &v20[2];
            if (*((int *)&v5) == 3)
            {
                v29 = *((long long *)&(&v5)[8]);
                goto LABEL_4d6dec;
            }
            *((int128_t *)&v2) = *((int128_t *)&v7);
            *((int128_t *)&v0) = *((int128_t *)&v5);
            uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::hb3130f27d1223ddd(&v9, v32, &v0);
            v28 = *((long long *)&v9);
            v29 = *((long long *)&v10);
            *((int128_t *)&v8) = *((int128_t *)&v11);
            if (v28 == 2)
            {
LABEL_4d6dec:
                if (v29 - 1 >= v27)
                {
                    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h973f901dc7acf26e(&v0, v32);
                    a0[1] = (long long)v2;
                    *((int128_t *)&a0[1]) = (int128_t)v0;
                    a0[0] = 1;
                    return ::0x4d64b0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hb91d4d90968b37bf(&v12);
                }
                a0[1] = 5;
                goto LABEL_4d6dfd;
            }
        }
        else
        {
            uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&v4, v20[4], v20[5]);
            if (*((int *)&v5) == 3)
            {
                v27 = *((long long *)&v6);
            }
            else
            {
                *((int128_t *)&v2) = *((int128_t *)&v7);
                *((int128_t *)&v0) = *((int128_t *)&v5);
                uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h7312dcea870b9dcf(&v9, &v20[4], &v0);
                v30 = *((long long *)&v9);
                v27 = *((long long *)&v10);
                *((int128_t *)&v8) = *((int128_t *)&v11);
                if (v30 != 2)
                {
                    *((void*)&a0[2]) = v8;
                    a0[0] = v30;
                    a0[1] = v27;
                    return ::0x4d64b0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hb91d4d90968b37bf(&v12);
                }
            }
            uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&v4, v20[2], v20[3]);
            v31 = &v20[2];
            if (*((int *)&v5) == 3)
            {
                v29 = *((long long *)&v5);
            }
            else
            {
                *((int128_t *)&v2) = *((int128_t *)&v7);
                *((int128_t *)&v0) = *((int128_t *)&v5);
                uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h35d40f7825808af8(&v9, v31, &v0);
                v28 = *((long long *)&v9);
                v29 = *((long long *)&v10);
                *((int128_t *)&v8) = *((int128_t *)&v11);
                if (v28 != 2)
                {
                    *((void*)&a0[2]) = v8;
                    a0[0] = v28;
                    a0[1] = v29;
                    return ::0x4d64b0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hb91d4d90968b37bf(&v12);
                }
            }
            if (v29 - 1 >= v27)
            {
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h973f901dc7acf26e(&v0, v31);
                a0[1] = (long long)v2;
                *((int128_t *)&a0[1]) = (int128_t)v0;
                a0[0] = 1;
                return ::0x4d64b0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hb91d4d90968b37bf(&v12);
            }
            a0[1] = 3;
LABEL_4d6dfd:
            a0[2] = v29;
            a0[1] = v27;
            goto LABEL_4d6e05;
        }
    }
    *((void*)&a0[2]) = v8;
    a0[0] = v28;
    a0[1] = v29;
    return ::0x4d64b0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hb91d4d90968b37bf(&v12);
}
