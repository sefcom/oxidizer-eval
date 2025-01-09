long long uu_mkdir::get_mode::hcf7d630052cc85d4(struct_1 *a0, unsigned long long a1, char a2)
{
    unsigned long v0;  // [sp-0x100], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xf8]
    struct struct_0 **v2;  // [sp-0xf0], Other Possible Types: unsigned long
    unsigned long long v3;  // [sp-0xe8]
    void* v4;  // [sp-0xe0]
    int v5;  // [sp-0xc8]
    unsigned long long v6;  // [sp-0xb8]
    unsigned long v7;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0xa8]
    char *v9;  // [sp-0xa0]
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
    unsigned int v25;  // ebp
    unsigned long long v27;  // r13
    int v28;  // ymm0
    unsigned long long v29;  // rax
    int v30;  // xmm0
    unsigned long long v32;  // rax
    int v33;  // ymm0
    int v34;  // xmm0
    unsigned int v37;  // ecx
    unsigned int v38;  // ecx

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::he67b74001b5dafb4(&v13, a1, "modei128", 4);
    v18 = clap_builder::parser::error::MatchesError::unwrap::h4544dc2b3abed5df("modei128", 4, &v13);
    if (!v18)
    {
        v22 = ~((int)uucore::features::mode::get_umask::hd2aa58752ad993fa()) & 511;
        a0->field_8 = v22;
        a0->field_0 = 0x8000000000000000;
        return a0;
    }
    v19 = v18[1];
    ::0x4b1ee0::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&v15, v19, v14);
    v13 = 0;
    v14 = v18[2];
    v16 = 1;
    v21 = core::str::iter::SplitInternal$LT$P$GT$::next::had797e95afa81bfb(&v13);
    if (!v21)
    {
        v24 = 511;
    }
    else
    {
        v23 = v21;
        if (a2)
        {
            v25 = 511;
            do
            {
                v7 = v23;
                v8 = v27;
                v0 = v23;
                v1 = v8 + v23;
                if (!_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h4b3a54094321950c(core::iter::traits::iterator::Iterator::try_fold::hec868b0f829523d7(&v0)))
                {
                    v9 = &v7;
                    v10 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfd6a55cddc5280de;
                    v0 = &g_520500;
                    v1 = 1;
                    v4 = 0;
                    v2 = &v9;
                    v3 = 1;
                    ::0x4b1e60::core::option::Option$LT$T$GT$::map_or_else::h6db0321d2b87c404();
                    v6 = *((long long *)&v12);
                    v30 = *((int128_t *)&v11);
                    v28 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v30;
                    v5 = v30;
                    uucore::features::mode::parse_symbolic::h8b8316294f52b67d(&v0, v25, (long long)(&v5)[8], v6, (unsigned int)uucore::features::mode::get_umask::hd2aa58752ad993fa(), 1);
                    v32 = v0;
                    if (v32 != 0x8000000000000000)
                    {
                        vvar_530{reg 24} = v1;
                        vvar_531{reg 112} = a0;
                        *((int *)((char *)&a0->field_c + 4)) = *((int *)((char *)&v2 + 4));
                        *((long long *)&(&a0->field_8)[1]) = *((long long *)((char *)&v1 + 4));
                        a0->field_0 = v32;
                        a0->field_8 = v38;
                        ::0x4b11f0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h03aa133fcf191ac0(&v5);
                        return a0;
                    }
                    v24 = v1;
                    ::0x4b11f0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h03aa133fcf191ac0(&v5);
                }
                else
                {
                    uucore::features::mode::parse_numeric::h27100faf377a9b0f(&v0, v25, v19, v14, 1);
                    v29 = v0;
                    if (v29 != 0x8000000000000000)
                    {
                        vvar_537{reg 24} = v1;
                        vvar_538{reg 112} = a0;
                        *((int *)((char *)&a0->field_c + 4)) = *((int *)((char *)&v2 + 4));
                        *((long long *)&(&a0->field_8)[1]) = *((long long *)((char *)&v1 + 4));
                        a0->field_0 = v29;
                        a0->field_8 = v37;
                        return a0;
                    }
                    v24 = v1;
                }
            } while ((v23 = core::str::iter::SplitInternal$LT$P$GT$::next::had797e95afa81bfb(&v13), v23));
        }
        else
        {
            v24 = 511;
            do
            {
                v7 = v23;
                v8 = v27;
                v0 = v23;
                v1 = v23 + v8;
                if (!_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h4b3a54094321950c(core::iter::traits::iterator::Iterator::try_fold::hec868b0f829523d7(&v0)))
                {
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha4208e868ecb88cc(&v0, v23, v8);
                    v6 = v2;
                    v34 = *((int128_t *)&v0);
                    v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34;
                    v5 = v34;
                    uucore::features::mode::parse_symbolic::h8b8316294f52b67d(&v0, v24, (long long)(&v5)[8], v6, (unsigned int)uucore::features::mode::get_umask::hd2aa58752ad993fa(), 1);
                    v32 = v0;
                    if (v32 != 0x8000000000000000)
                    {
                        v38 = v1;
                        a0 = a0;
                        *((int *)((char *)&a0->field_c + 4)) = *((int *)((char *)&v2 + 4));
                        *((long long *)&(&a0->field_8)[1]) = *((long long *)((char *)&v1 + 4));
                        a0->field_0 = v32;
                        a0->field_8 = v38;
                        ::0x4b11f0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h03aa133fcf191ac0(&v5);
                        return a0;
                    }
                    v24 = v1;
                    ::0x4b11f0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h03aa133fcf191ac0(&v5);
                }
                else
                {
                    uucore::features::mode::parse_numeric::h27100faf377a9b0f(&v0, v24, v19, v14, 1);
                    v29 = v0;
                    if (v29 != 0x8000000000000000)
                    {
                        v37 = v1;
                        a0 = a0;
                        *((int *)((char *)&a0->field_c + 4)) = *((int *)((char *)&v2 + 4));
                        *((long long *)&(&a0->field_8)[1]) = *((long long *)((char *)&v1 + 4));
                        a0->field_0 = v29;
                        a0->field_8 = v37;
                        return a0;
                    }
                    v24 = v1;
                }
            } while ((v23 = core::str::iter::SplitInternal$LT$P$GT$::next::had797e95afa81bfb(&v13), v23));
        }
    }
    a0->field_8 = v22;
    a0->field_0 = 0x8000000000000000;
    return a0;
}
