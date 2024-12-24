long long uu_split::strategy::NumberType::from::ha79806469f52295d(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x108], Other Possible Types: unsigned int
    int v1;  // [sp-0xf8]
    char v2;  // [bp-0xe8]
    char v3;  // [bp-0xe0]
    char v4;  // [bp-0xd8]
    int v5;  // [sp-0xc8]
    char v6;  // [bp-0xb0]
    char v7;  // [bp-0xa8]
    char v8;  // [bp-0xa0]
    char v9;  // [bp-0x90]
    char v10;  // [bp-0x88]
    char v11;  // [bp-0x80]
    void* v12;  // [sp-0x78]
    unsigned long long v13;  // [sp-0x70]
    char v14;  // [bp-0x68]
    unsigned short v15;  // [sp-0x38]
    unsigned long long v17;  // rdx
    unsigned long long v18[6];  // r14
    unsigned long long v19;  // rax
    unsigned long long v20;  // r13
    unsigned long long v21;  // rbp
    unsigned long long v22;  // rax
    unsigned long long v23;  // r13
    unsigned long long v24;  // rbp
    unsigned long long v25;  // r15
    unsigned long long v26;  // rcx
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax
    unsigned long long v29;  // r14
    unsigned long long v30;  // r14
    unsigned long long v31;  // rax

    ::0x4d6750::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&v14, a1, a2);
    v12 = 0;
    v13 = a2;
    v15 = 1;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h2ebe1a5661a94346(&v9, &v12, v17);
    v18 = *((long long *)&v10);
    v19 = *((long long *)&v11);
    if (v19 != 3)
    {
        if (v19 != 2)
        {
            if (!(v19 == 1))
                goto LABEL_4d6b6c;
            uucore::parser::parse_size::parse_size_u64::h54ed31d196b685f7(&v2, v18[0], v18[1]);
            if (*((int *)&v2) == 3)
            {
                v22 = *((long long *)&v3);
                goto LABEL_4d6b09;
            }
            else
            {
                *((int128_t *)&v1) = *((int128_t *)&v4);
                *((int128_t *)&v0) = *((int128_t *)&v2);
                uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h457f90c46292ba25(&v6, v18, &v0);
                v26 = *((long long *)&v6);
                v27 = *((long long *)&v7);
                *((int128_t *)&v5) = *((int128_t *)&v8);
                if (v26 == 2)
                {
LABEL_4d6b09:
                    if (!v22)
                    {
                        ::0x4d66e0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h43241f6f21666b6e(&v0, a1, a2);
LABEL_4d6b7a:
                        a0[1] = (long long)v1;
                        *((int128_t *)&a0[1]) = (int128_t)v0;
                        v31 = 0;
                    }
                    else
                    {
                        a0[1] = 0;
LABEL_4d6b1a:
                        a0[2] = v22;
LABEL_4d6ed5:
                        v31 = 2;
                    }
                    a0[0] = v31;
                    return ::0x4d6580::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h8067736f1c302c4c(&v9);
                }
            }
        }
        else
        {
            v20 = v18[0];
            v21 = v18[1];
            v0 = 0;
            if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf8db72e21166909e(v20, v21, ::0x4d65f0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(108, &v0), v17))
            {
LABEL_4d69ec:
                if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h799d22e267aaebaa(v18[0], v18[1], "l", 1))
                {
                    if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h799d22e267aaebaa(v18[0], v18[1], "rinvalid number of lines: invalid number of bytes: invalid number of chunks: invalid chunk number: cannot split in more than one waysrc/uu/split/src/strategy.rs", 1))
                    {
LABEL_4d6b6c:
                        ::0x4d66e0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h43241f6f21666b6e(&v0, a1, a2);
                        goto LABEL_4d6b7a;
                    }
                    uucore::parser::parse_size::parse_size_u64::h54ed31d196b685f7(&v2, v18[2], v18[3]);
                    if (*((int *)&v2) == 3)
                    {
                        v22 = *((long long *)&v3);
                        a0[1] = 4;
                        goto LABEL_4d6b1a;
                    }
                    *((int128_t *)&v1) = *((int128_t *)&v4);
                    *((int128_t *)&v0) = *((int128_t *)&v2);
                    uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::hc6392c4bec70a0ab(&v6, &v18[2], &v0);
                    v26 = *((long long *)&v6);
                    v27 = *((long long *)&v7);
                    *((int128_t *)&v5) = *((int128_t *)&v8);
                    if (v26 == 2)
                    {
                        a0[1] = 4;
                        goto LABEL_4d6b1a;
                    }
                }
                else
                {
                    uucore::parser::parse_size::parse_size_u64::h54ed31d196b685f7(&v2, v18[2], v18[3]);
                    if (*((int *)&v2) == 3)
                    {
                        v22 = *((long long *)&v3);
                        a0[1] = 2;
                        goto LABEL_4d6b1a;
                    }
                    *((int128_t *)&v1) = *((int128_t *)&v4);
                    *((int128_t *)&v0) = *((int128_t *)&v2);
                    uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h1c1408c396adab6d(&v6, &v18[2], &v0);
                    v26 = *((long long *)&v6);
                    v27 = *((long long *)&v7);
                    *((int128_t *)&v5) = *((int128_t *)&v8);
                    if (v26 == 2)
                    {
                        a0[1] = 2;
                        goto LABEL_4d6b1a;
                    }
                }
            }
            else
            {
                v23 = v18[0];
                v24 = v18[1];
                v0 = 0;
                if (!(v19 == 1))
                    goto LABEL_4d69ec;
                uucore::parser::parse_size::parse_size_u64::h54ed31d196b685f7(&v2, v18[2], v18[3]);
                if (*((int *)&v2) == 3)
                {
                    v25 = *((long long *)&v3);
                }
                else
                {
                    *((int128_t *)&v1) = *((int128_t *)&v4);
                    *((int128_t *)&v0) = *((int128_t *)&v2);
                    uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h38ace4fe9bf1a104(&v6, &v18[2], &v0);
                    v28 = *((long long *)&v6);
                    v25 = *((long long *)&v7);
                    *((int128_t *)&v5) = *((int128_t *)&v8);
                    if (v28 != 2)
                    {
                        *((void*)&a0[2]) = v5;
                        a0[0] = v28;
                        a0[1] = v25;
                        return ::0x4d6580::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h8067736f1c302c4c(&v9);
                    }
                }
                uucore::parser::parse_size::parse_size_u64::h54ed31d196b685f7(&v2, v18[0], v18[1]);
                if (*((int *)&v2) == 3)
                {
                    v27 = *((long long *)&(&v2)[8]);
                    goto LABEL_4d6e68;
                }
                *((int128_t *)&v1) = *((int128_t *)&v4);
                *((int128_t *)&v0) = *((int128_t *)&v2);
                uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::hd248d7ff66a8c79a(&v6, v18, &v0);
                v26 = *((long long *)&v6);
                v27 = *((long long *)&v7);
                *((int128_t *)&v5) = *((int128_t *)&v8);
                if (v26 == 2)
                {
LABEL_4d6e68:
                    if (v27 - 1 >= v25)
                    {
                        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::ha8102ff662d2887b(&v0, v18);
                        a0[1] = (long long)v1;
                        *((int128_t *)&a0[1]) = (int128_t)v0;
                        a0[0] = 1;
                        return ::0x4d6580::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h8067736f1c302c4c(&v9);
                    }
                    a0[1] = 1;
                    goto LABEL_4d6ecd;
                }
            }
        }
    }
    else
    {
        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h799d22e267aaebaa(v18[0], v18[1], "l", 1))
        {
            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h799d22e267aaebaa(v18[0], v18[1], "rinvalid number of lines: invalid number of bytes: invalid number of chunks: invalid chunk number: cannot split in more than one waysrc/uu/split/src/strategy.rs", 1))
                goto LABEL_4d6b6c;
            uucore::parser::parse_size::parse_size_u64::h54ed31d196b685f7(&v2, v18[4], v18[5]);
            if (*((int *)&v2) == 3)
            {
                v25 = *((long long *)&v3);
            }
            else
            {
                *((int128_t *)&v1) = *((int128_t *)&v4);
                *((int128_t *)&v0) = *((int128_t *)&v2);
                uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h3a4fdb8b45999355(&v6, &v18[4], &v0);
                v28 = *((long long *)&v6);
                v25 = *((long long *)&v7);
                *((int128_t *)&v5) = *((int128_t *)&v8);
                if (v28 != 2)
                {
                    *((void*)&a0[2]) = v5;
                    a0[0] = v28;
                    a0[1] = v25;
                    return ::0x4d6580::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h8067736f1c302c4c(&v9);
                }
            }
            uucore::parser::parse_size::parse_size_u64::h54ed31d196b685f7(&v2, v18[2], v18[3]);
            v30 = &v18[2];
            if (*((int *)&v2) == 3)
            {
                v27 = *((long long *)&v3);
                goto LABEL_4d6ebc;
            }
            *((int128_t *)&v1) = *((int128_t *)&v4);
            *((int128_t *)&v0) = *((int128_t *)&v2);
            uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h6524762b9906d373(&v6, v30, &v0);
            v26 = *((long long *)&v6);
            v27 = *((long long *)&v7);
            *((int128_t *)&v5) = *((int128_t *)&v8);
            if (v26 == 2)
            {
LABEL_4d6ebc:
                if (v27 - 1 >= v25)
                {
                    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::ha8102ff662d2887b(&v0, v30);
                    a0[1] = (long long)v1;
                    *((int128_t *)&a0[1]) = (int128_t)v0;
                    a0[0] = 1;
                    return ::0x4d6580::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h8067736f1c302c4c(&v9);
                }
                a0[1] = 5;
                goto LABEL_4d6ecd;
            }
        }
        else
        {
            uucore::parser::parse_size::parse_size_u64::h54ed31d196b685f7(&v2, v18[4], v18[5]);
            if (*((int *)&v2) == 3)
            {
                v25 = *((long long *)&v3);
            }
            else
            {
                *((int128_t *)&v1) = *((int128_t *)&v4);
                *((int128_t *)&v0) = *((int128_t *)&v2);
                uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::ha1572207c2921260(&v6, &v18[4], &v0);
                v28 = *((long long *)&v6);
                v25 = *((long long *)&v7);
                *((int128_t *)&v5) = *((int128_t *)&v8);
                if (v28 != 2)
                {
                    *((void*)&a0[2]) = v5;
                    a0[0] = v28;
                    a0[1] = v25;
                    return ::0x4d6580::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h8067736f1c302c4c(&v9);
                }
            }
            uucore::parser::parse_size::parse_size_u64::h54ed31d196b685f7(&v2, v18[2], v18[3]);
            v29 = &v18[2];
            if (*((int *)&v2) == 3)
            {
                v27 = *((long long *)&v3);
            }
            else
            {
                *((int128_t *)&v1) = *((int128_t *)&v4);
                *((int128_t *)&v0) = *((int128_t *)&v2);
                uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::ha86741b1a842a68f(&v6, v29, &v0);
                v26 = *((long long *)&v6);
                v27 = *((long long *)&v7);
                *((int128_t *)&v5) = *((int128_t *)&v8);
                if (v26 != 2)
                {
                    *((void*)&a0[2]) = v5;
                    a0[0] = v26;
                    a0[1] = v27;
                    return ::0x4d6580::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h8067736f1c302c4c(&v9);
                }
            }
            if (v27 - 1 >= v25)
            {
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::ha8102ff662d2887b(&v0, v29);
                a0[1] = (long long)v1;
                *((int128_t *)&a0[1]) = (int128_t)v0;
                a0[0] = 1;
                return ::0x4d6580::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h8067736f1c302c4c(&v9);
            }
            a0[1] = 3;
LABEL_4d6ecd:
            a0[2] = v27;
            a0[1] = v25;
            goto LABEL_4d6ed5;
        }
    }
    *((void*)&a0[2]) = v5;
    a0[0] = v26;
    a0[1] = v27;
    return ::0x4d6580::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h8067736f1c302c4c(&v9);
}
