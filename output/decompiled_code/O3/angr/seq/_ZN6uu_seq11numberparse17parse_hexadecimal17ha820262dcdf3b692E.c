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
    unsigned long long v14;  // rdx
    unsigned long long v15;  // r14
    unsigned long long v16;  // r15
    unsigned long long v17;  // rax
    char v18;  // cl
    int v20;  // xmm0
    unsigned int v21;  // esi
    unsigned int *v22;  // rcx
    struct_0 *v23;  // rax
    unsigned int v24;  // esi

    v0 = 0;
    v12 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h9cb9db4a84f1050b(a1, a2, ::0x4cd1a0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(45, &v0), 1);
    if (!(char)v12)
    {
        v13 = ::0x4cd120::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(2, a1, a2);
        if (!(!v13))
            goto LABEL_4ce2a3;
    }
    else
    {
        v13 = ::0x4cd120::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(3, a1, a2);
        if (v13)
        {
LABEL_4ce2a3:
            v15 = v13;
            v16 = v14;
            v0 = 0;
            if (!(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h9cb9db4a84f1050b(v15, v16, ::0x4cd1a0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(45, &v0), 1))
            {
                v0 = 0;
                if (!(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h9cb9db4a84f1050b(v15, v16, ::0x4cd1a0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(43, &v0), 1))
                {
                    num_bigint::bigint::convert::_$LT$impl$u20$num_traits..Num$u20$for$u20$num_bigint..bigint..BigInt$GT$::from_str_radix::hb9365f03b0604201(&v0, v15, v16, 16);
                    v17 = *((long long *)&v0);
                    if (v6 == 0x8000000000000000)
                    {
                        *((char *)&a0[1]) = 2;
                        a0[0] = 9223372036854775812;
                        return a0;
                    }
                    v18 = v1;
                    v9 = *((long long *)&v4);
                    *((int128_t *)&v8) = *((int128_t *)&v2);
                    v6 = v17;
                    v7 = v18;
                    v10 = 0;
                    *((int128_t *)&v3) = 0x10000000000000000;
                    *((int128_t *)&v0) = 0x80000000000000000;
                    v5 = 0;
                    if (!(char)v12)
                    {
                        a0[4] = v10;
                        v20 = *((int128_t *)&v6);
                        *((int128_t *)&a0[2]) = (int128_t)(&v8)[7];
                        *((void*)&a0[0]) = v20;
                        *((int128_t *)&a0[5]) = 0;
                    }
                    else if ((char)bigdecimal::impl_cmp::_$LT$impl$u20$core..cmp..PartialEq$u20$for$u20$bigdecimal..BigDecimal$GT$::eq::h0c7161c8c911041f(&v6, &v0))
                    {
                        a0[0] = 9223372036854775810;
                        a0[5] = 2;
                        a0[1] = 0;
                        ::0x4ccea0::core::ptr::drop_in_place$LT$bigdecimal..BigDecimal$GT$::h9ea64fcf6ce46304(&v6);
                    }
                    else
                    {
                        v21 = (char)(&v8)[15];
                        v22 = (char *)&a0[3] + 1;
                        v23 = &a0[4];
                        a0[2] = (long long)(&v8)[7];
                        *((int128_t *)&a0[0]) = *((int128_t *)&v6);
                        if (!v21)
                        {
                            *((char *)&a0[3]) = 2;
                        }
                        else if (v21 == 1)
                        {
                            *((char *)&a0[3]) = 1;
                        }
                        else
                        {
                            *((char *)&a0[3]) = 0;
                        }
                        v24 = *((int *)((char *)&v9 + 1));
                        *((int *)((char *)v22 + 3)) = *((int *)((char *)&v9 + 4));
                        *(v22) = v24;
                        v23->field_0 = 0;
                        v23->field_10 = 0;
                    }
                    ::0x4ccea0::core::ptr::drop_in_place$LT$bigdecimal..BigDecimal$GT$::h9ea64fcf6ce46304(&v0);
                    return a0;
                }
            }
            *((char *)&a0[1]) = 0;
            a0[0] = 9223372036854775812;
            return a0;
        }
    }
    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
}
