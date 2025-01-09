long long uu_seq::numberparse::parse_no_decimal_no_exponent::h94839c74700e929c(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x98], Other Possible Types: unsigned long
    int v1;  // [sp-0x88]
    unsigned long v2;  // [sp-0x78], Other Possible Types: unsigned long long
    char v3;  // [bp-0x68]
    char v4;  // [bp-0x58]
    char v5;  // [bp-0x48]
    char v6;  // [bp-0x40]
    char v7;  // [bp-0x38]
    char v8;  // [bp-0x30]
    unsigned long long v10;  // r14
    unsigned long long v11;  // r15
    unsigned long long v12;  // r13
    int v13;  // xmm0
    int v14;  // xmm0

    bigdecimal::impl_num::_$LT$impl$u20$num_traits..Num$u20$for$u20$bigdecimal..BigDecimal$GT$::from_str_radix::h190f4d397e37218e(&v3, a1, a2);
    if (*((long long *)&v3) != 0x8000000000000000)
    {
        v2 = *((long long *)&v5);
        *((int128_t *)&v1) = *((int128_t *)&v4);
        *((int128_t *)&v0) = *((int128_t *)&v3);
        if (!(char)uu_seq::numberparse::is_minus_zero_int::h47d80c233c19cf6c(a1, a2, &v0))
        {
            a0->field_20 = v2;
            v13 = (int128_t)v0;
            *((void*)&a0->field_10) = v1;
            *((void*)&a0->field_0) = v13;
            a0->field_28 = a2;
            a0[1].field_0 = 0;
            if (*((long long *)&v3) != 0x8000000000000000)
                return a0;
        }
        else
        {
            a0->field_0 = 9223372036854775810;
            a0->field_28 = a2;
            a0[1].field_0 = 0;
            ::0x4ccea0::core::ptr::drop_in_place$LT$bigdecimal..BigDecimal$GT$::h9ea64fcf6ce46304();
            goto LABEL_4cdbec;
        }
    }
    else
    {
        alloc::str::_$LT$impl$u20$str$GT$::to_ascii_lowercase::h8cd21fd193cd3011(&v6, a1, a2);
        v10 = *((long long *)&v7);
        v11 = *((long long *)&v8);
        v12 = 0x8000000000000000;
        if (!(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb94513a628a0df55(v10, v11, "inf-infinitynansrc/uu/seq/src/numberparse.rs", 3)) || !((v12 = 0x8000000000000000, !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb94513a628a0df55(v10, v11, "infinity'; only all-args", 8))))
        {
LABEL_4cdb6a:
            v0 = v12;
            ::0x4cce90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbf11645ab5eda60b(&v6);
            a0->field_20 = v2;
            v14 = *((int128_t *)&v0);
            *((void*)&a0->field_10) = v1;
            *((void*)&a0->field_0) = v14;
            *((int128_t *)&a0->field_28) = 0;
            if (*((long long *)&v3) != 0x8000000000000000)
                return a0;
        }
        else
        {
            v12 = 9223372036854775809;
            if (!(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb94513a628a0df55(v10, v11, "-infhelpNoneshimname", 4)) || !(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb94513a628a0df55(v10, v11, "-infinitynansrc/uu/seq/src/numberparse.rs", 9)))
                goto LABEL_4cdb6a;
            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb94513a628a0df55(v10, v11, "nansrc/uu/seq/src/numberparse.rs", 3))
                _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb94513a628a0df55(v10, v11, "-nan", 4);
            a0->padding_8[0] = 1;
            a0->field_0 = 9223372036854775812;
            ::0x4cce90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbf11645ab5eda60b(&v6);
LABEL_4cdbec:
            if (*((long long *)&v3) != 0x8000000000000000)
                return a0;
        }
    }
    core::ptr::drop_in_place$LT$core..result..Result$LT$bigdecimal..BigDecimal$C$bigdecimal..ParseBigDecimalError$GT$$GT$::h894d82047a2fe72d(&v3);
    return a0;
}
