long long uu_mkdir::get_mode::h7b11d1c803beb9f1(struct_0 *a0, unsigned long long a1, char a2)
{
    unsigned long v0;  // [sp-0x100], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xf8]
    unsigned long long v2;  // [sp-0xf0], Other Possible Types: unsigned long
    unsigned long long v3;  // [sp-0xe8]
    void* v4;  // [sp-0xe0]
    int v5;  // [sp-0xc8]
    unsigned long long v6;  // [sp-0xb8]
    unsigned long v7;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0xa8]
    unsigned long v9;  // [sp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x98]
    char v11;  // [bp-0x90]
    char v12;  // [bp-0x80]
    void* v13;  // [bp-0x78], Other Possible Types: char
    unsigned long long v14;  // [sp-0x70]
    char v15;  // [bp-0x68]
    unsigned short v16;  // [sp-0x38]
    unsigned long long v18[3];  // rax
    unsigned long long v19;  // r14
    unsigned long long v21;  // rax
    unsigned int v22;  // ebp
    unsigned long long v23;  // rbx
    unsigned int v24;  // ebp
    unsigned long long v26;  // rdx
    unsigned int v27;  // ebp
    unsigned long long v29;  // rdx
    unsigned long long v33;  // rsi
    unsigned long long v34;  // r13
    int v35;  // ymm0
    unsigned long long v36;  // rax
    int v37;  // xmm0
    unsigned long long v39;  // rax
    unsigned long long v42;  // rsi
    int v43;  // ymm0
    int v44;  // xmm0
    unsigned int v46;  // ecx
    unsigned int v47;  // ecx

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc3f106eb706deb27(&v13, a1, "modei128", 4);
    v18 = clap_builder::parser::error::MatchesError::unwrap::h1cdb75be1051459d("modei128", 4, &v13);
    if (!v18)
    {
        v22 = ~((int)uucore::features::mode::get_umask::h70b753b6c54797b8()) & 511;
        a0->field_8 = v22;
        a0->field_0 = 0x8000000000000000;
        return a0;
    }
    v19 = v18[1];
    ::0x4b2480::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&v15, v19, v14);
    v13 = 0;
    v14 = v18[2];
    v16 = 1;
    v21 = core::str::iter::SplitInternal$LT$P$GT$::next::ha92d82cb8dc7b25f(&v13);
    if (!v21)
    {
        v22 = 511;
    }
    else
    {
        v23 = v21;
        if (a2)
        {
            v24 = 511;
            do
            {
                v7 = v23;
                v8 = v34;
                v0 = v23;
                v1 = v8 + v23;
                if (!_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::ha66758edd6d9b789((unsigned int)core::iter::traits::iterator::Iterator::try_fold::h8cd46e57ce7b15df(&v0, v33, v26)))
                {
                    v9 = &v7;
                    v10 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9810b5e9c6e2013d;
                    v0 = &g_521808;
                    v1 = 1;
                    v4 = 0;
                    v2 = &v9;
                    v3 = 1;
                    ::0x4b2400::core::option::Option$LT$T$GT$::map_or_else::h66fefe564dfa934f(&v11, &v0);
                    v6 = *((long long *)&v12);
                    v37 = *((int128_t *)&v11);
                    v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37;
                    v5 = v37;
                    uucore::features::mode::parse_symbolic::h19e092280ff27ee9(&v0, v24, (long long)(&v5)[8], v6, (unsigned int)uucore::features::mode::get_umask::h70b753b6c54797b8(), 1);
                    v39 = v0;
                    if (v39 != 0x8000000000000000)
                    {
                        vvar_536{reg 24} = v1;
                        vvar_537{reg 112} = a0;
                        *((int *)((char *)&a0->field_c + 4)) = *((int *)((char *)&v2 + 4));
                        *((long long *)&(&a0->field_8)[1]) = *((long long *)((char *)&v1 + 4));
                        a0->field_0 = v39;
                        a0->field_8 = v47;
                        ::0x4b1790::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he40438f4bd21dfca(&v5);
                        return a0;
                    }
                    v22 = v1;
                    ::0x4b1790::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he40438f4bd21dfca(&v5);
                }
                else
                {
                    uucore::features::mode::parse_numeric::hcf8f7a4f92a14c52(&v0, v24, v19, v14, 1);
                    v36 = v0;
                    if (v36 != 0x8000000000000000)
                    {
                        vvar_543{reg 24} = v1;
                        vvar_544{reg 112} = a0;
                        *((int *)((char *)&a0->field_c + 4)) = *((int *)((char *)&v2 + 4));
                        *((long long *)&(&a0->field_8)[1]) = *((long long *)((char *)&v1 + 4));
                        a0->field_0 = v36;
                        a0->field_8 = v46;
                        return a0;
                    }
                    v22 = v1;
                }
            } while ((v23 = core::str::iter::SplitInternal$LT$P$GT$::next::ha92d82cb8dc7b25f(&v13), v23));
        }
        else
        {
            v27 = 511;
            do
            {
                v7 = v23;
                v8 = v34;
                v0 = v23;
                v1 = v23 + v8;
                if (!_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::ha66758edd6d9b789((unsigned int)core::iter::traits::iterator::Iterator::try_fold::h8cd46e57ce7b15df(&v0, v42, v29)))
                {
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha541db94b94c6453(&v0, v23, v8);
                    v6 = v2;
                    v44 = *((int128_t *)&v0);
                    v43 = v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44;
                    v5 = v44;
                    uucore::features::mode::parse_symbolic::h19e092280ff27ee9(&v0, v27, (long long)(&v5)[8], v6, (unsigned int)uucore::features::mode::get_umask::h70b753b6c54797b8(), 1);
                    v39 = v0;
                    if (v39 != 0x8000000000000000)
                    {
                        v47 = v1;
                        a0 = a0;
                        *((int *)((char *)&a0->field_c + 4)) = *((int *)((char *)&v2 + 4));
                        *((long long *)&(&a0->field_8)[1]) = *((long long *)((char *)&v1 + 4));
                        a0->field_0 = v39;
                        a0->field_8 = v47;
                        ::0x4b1790::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he40438f4bd21dfca(&v5);
                        return a0;
                    }
                    v22 = v1;
                    ::0x4b1790::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he40438f4bd21dfca(&v5);
                }
                else
                {
                    uucore::features::mode::parse_numeric::hcf8f7a4f92a14c52(&v0, v27, v19, v14, 1);
                    v36 = v0;
                    if (v36 != 0x8000000000000000)
                    {
                        v46 = v1;
                        a0 = a0;
                        *((int *)((char *)&a0->field_c + 4)) = *((int *)((char *)&v2 + 4));
                        *((long long *)&(&a0->field_8)[1]) = *((long long *)((char *)&v1 + 4));
                        a0->field_0 = v36;
                        a0->field_8 = v46;
                        return a0;
                    }
                    v22 = v1;
                }
            } while ((v23 = core::str::iter::SplitInternal$LT$P$GT$::next::ha92d82cb8dc7b25f(&v13), v23));
        }
    }
    a0->field_8 = v22;
    a0->field_0 = 0x8000000000000000;
    return a0;
}
