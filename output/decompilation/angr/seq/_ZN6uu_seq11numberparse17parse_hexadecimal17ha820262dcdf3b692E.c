long long uu_seq::numberparse::parse_hexadecimal::ha820262dcdf3b692(unsigned long long a0[6], unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x88], Other Possible Types: unsigned int
    char v1;  // [bp-0x80]
    char v2;  // [bp-0x7f]
    int v3;  // [sp-0x78]
    char v4;  // [bp-0x70]
    void* v5;  // [sp-0x68]
    unsigned long v6;  // [sp-0x58], Other Possible Types: unsigned long long
    char v7;  // [sp-0x50]
    int v8;  // [bp-0x4f]
    unsigned long long v9;  // [sp-0x40]
    void* v10;  // [sp-0x38]
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // r8
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rdx
    unsigned long long v17;  // r14
    unsigned long long v18;  // r15
    unsigned long long v19;  // rax
    char v20;  // cl
    int v22;  // xmm0
    unsigned int v23;  // esi
    unsigned int *v24;  // rcx
    struct_0 *v25;  // rax
    unsigned int v26;  // esi

    v0 = 0;
    v12 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h9cb9db4a84f1050b(a1, a2, ::0x4cd1a0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(45, &v0), 1);
    if (!(char)v12)
    {
        v13 = ::0x4cd120::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(2, a1, a2);
        if (!(!v13))
            goto LABEL_4ce2a3;
        v14 = &g_543fa0;
        v15 = 2;
    }
    else
    {
        v13 = ::0x4cd120::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(3, a1, a2);
        if (!v13)
        {
            v14 = &g_543fb8;
            v15 = 3;
        }
        else
        {
LABEL_4ce2a3:
            v17 = v13;
            v18 = v16;
            v0 = 0;
            if (!(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h9cb9db4a84f1050b(v17, v18, ::0x4cd1a0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(45, &v0), 1))
            {
                v0 = 0;
                if (!(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h9cb9db4a84f1050b(v17, v18, ::0x4cd1a0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(43, &v0), 1))
                {
                    num_bigint::bigint::convert::_$LT$impl$u20$num_traits..Num$u20$for$u20$num_bigint..bigint..BigInt$GT$::from_str_radix::hb9365f03b0604201(&v0, v17, v18, 16);
                    v19 = *((long long *)&v0);
                    if (v6 == 0x8000000000000000)
                    {
                        *((char *)&a0[1]) = 2;
                        a0[0] = 9223372036854775812;
                        return a0;
                    }
                    v20 = v1;
                    v9 = *((long long *)&v4);
                    *((int128_t *)&v8) = *((int128_t *)&v2);
                    v6 = v19;
                    v7 = v20;
                    v10 = 0;
                    *((uint128_t *)&v3) = 0x10000000000000000;
                    *((uint128_t *)&v0) = 0x80000000000000000;
                    v5 = 0;
                    if (!(char)v12)
                    {
                        a0[4] = v10;
                        v22 = *((int128_t *)&v6);
                        *((int128_t *)&a0[2]) = (int128_t)(&v8)[7];
                        *((void*)&a0[0]) = v22;
                        *((uint128_t *)&a0[5]) = 0;
                    }
                    else if ((char)bigdecimal::impl_cmp::_$LT$impl$u20$core..cmp..PartialEq$u20$for$u20$bigdecimal..BigDecimal$GT$::eq::h0c7161c8c911041f(&v6, &v0))
                    {
                        a0[0] = 9223372036854775810;
                        a0[5] = 2;
                        a0[1] = 0;
                        ::0x4ccea0::core::ptr::drop_in_place$LT$bigdecimal..BigDecimal$GT$::h9ea64fcf6ce46304();
                    }
                    else
                    {
                        v23 = (char)(&v8)[15];
                        v24 = (char *)&a0[3] + 1;
                        v25 = &a0[4];
                        a0[2] = (long long)(&v8)[7];
                        *((int128_t *)&a0[0]) = *((int128_t *)&v6);
                        if (!v23)
                        {
                            *((char *)&a0[3]) = 2;
                        }
                        else if (v23 == 1)
                        {
                            *((char *)&a0[3]) = 1;
                        }
                        else
                        {
                            *((char *)&a0[3]) = 0;
                        }
                        v26 = *((int *)((char *)&v9 + 1));
                        *((int *)((char *)v24 + 3)) = *((int *)((char *)&v9 + 4));
                        *(v24) = v26;
                        v25->field_0 = 0;
                        v25->field_10 = 0;
                    }
                    ::0x4ccea0::core::ptr::drop_in_place$LT$bigdecimal..BigDecimal$GT$::h9ea64fcf6ce46304();
                    return a0;
                }
            }
            *((char *)&a0[1]) = 0;
            a0[0] = 9223372036854775812;
            return a0;
        }
    }
    core::str::slice_error_fail::h5dbb61534404fe7e(a1, a2, v15, a2, v14); /* do not return */
}
