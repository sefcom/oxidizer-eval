long long uu_mkdir::get_mode::hcf7d630052cc85d4(struct_0 *a0, unsigned long long a1, char a2)
{
    unsigned long v0;  // [sp-0x100]
    unsigned long long v1;  // [sp-0xf8]
    struct struct_1 **v2;  // [sp-0xf0], Other Possible Types: unsigned long
    unsigned long long v3;  // [sp-0xe8]
    void* v4;  // [sp-0xe0]
    struct_0 *v5;  // [sp-0xd0]
    int v6;  // [sp-0xc8]
    unsigned long long v7;  // [sp-0xb8]
    unsigned long v8;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0xa8]
    char *v10;  // [sp-0xa0]
    unsigned long long v11;  // [sp-0x98]
    char v12;  // [bp-0x90]
    char v13;  // [bp-0x80]
    void* v14;  // [bp-0x78], Other Possible Types: char
    unsigned long long v15;  // [sp-0x70]
    char v16;  // [bp-0x68]
    unsigned short v17;  // [sp-0x38]
    struct_0 *v19;  // r12
    unsigned long long v20[3];  // rax
    unsigned long long v21;  // r14
    unsigned long long v23;  // rax
    unsigned int v24;  // ebp
    unsigned long long v25;  // rbx
    unsigned long v26;  // rdx
    unsigned long long v27;  // r13
    int v28;  // ymm0
    unsigned long long v29;  // rax
    int v30;  // xmm0
    unsigned long long v32;  // rax
    int v33;  // ymm0
    int v34;  // xmm0
    unsigned int v36;  // ecx
    unsigned int v37;  // ecx

    v19 = a0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::he67b74001b5dafb4(&v14, a1, "modei128", 4);
    v20 = clap_builder::parser::error::MatchesError::unwrap::h4544dc2b3abed5df("modei128", 4, &v14);
    if (!v20)
    {
        v24 = ~((int)uucore::features::mode::get_umask::hd2aa58752ad993fa()) & 511;
        v19->field_8 = v24;
        v19->field_0 = 0x8000000000000000;
        return v19;
    }
    v21 = v20[1];
    ::0x4b1ee0::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&v16, v21, v15);
    v14 = 0;
    v15 = v20[2];
    v17 = 1;
    v23 = core::str::iter::SplitInternal$LT$P$GT$::next::had797e95afa81bfb(&v14);
    v5 = a0;
    if (!v23)
    {
        v24 = 511;
    }
    else
    {
        v25 = v23;
        v27 = v26;
        if (a2)
        {
            v24 = 511;
            do
            {
                v8 = v25;
                v9 = v27;
                v0 = v25;
                v1 = v27 + v25;
                if (!_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h4b3a54094321950c(core::iter::traits::iterator::Iterator::try_fold::hec868b0f829523d7(&v0)))
                {
                    v10 = &v8;
                    v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfd6a55cddc5280de;
                    v0 = &g_520500;
                    v1 = 1;
                    v4 = 0;
                    v2 = &v10;
                    v3 = 1;
                    ::0x4b1e60::core::option::Option$LT$T$GT$::map_or_else::h6db0321d2b87c404(&v12, &v0);
                    v7 = *((long long *)&v13);
                    v30 = *((int128_t *)&v12);
                    v28 = v28 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v30;
                    v6 = v30;
                    uucore::features::mode::parse_symbolic::h8b8316294f52b67d(&v0, v24, (long long)(&v6)[8], v7, (unsigned int)uucore::features::mode::get_umask::hd2aa58752ad993fa(), 1);
                    v32 = v0;
                    if (v32 != 0x8000000000000000)
                    {
                        vvar_525{reg 24} = v1;
                        vvar_526{reg 112} = v5;
                        *((int *)((char *)&v19->field_c + 4)) = *((int *)((char *)&v2 + 4));
                        *((long long *)&(&v19->field_8)[1]) = *((long long *)((char *)&v1 + 4));
                        v19->field_0 = v32;
                        v19->field_8 = v37;
                        ::0x4b11f0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h03aa133fcf191ac0(&v6);
                        return v19;
                    }
                    v24 = v1;
                    ::0x4b11f0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h03aa133fcf191ac0(&v6);
                }
                else
                {
                    uucore::features::mode::parse_numeric::h27100faf377a9b0f(&v0, v24, v21, v15, 1);
                    v29 = v0;
                    if (v29 != 0x8000000000000000)
                    {
                        vvar_532{reg 24} = v1;
                        vvar_533{reg 112} = v5;
                        *((int *)((char *)&v19->field_c + 4)) = *((int *)((char *)&v2 + 4));
                        *((long long *)&(&v19->field_8)[1]) = *((long long *)((char *)&v1 + 4));
                        v19->field_0 = v29;
                        v19->field_8 = v36;
                        return v19;
                    }
                    v24 = v1;
                }
            } while ((v25 = core::str::iter::SplitInternal$LT$P$GT$::next::had797e95afa81bfb(&v14), v27 = v26, v25));
        }
        else
        {
            v24 = 511;
            do
            {
                v8 = v25;
                v9 = v27;
                v0 = v25;
                v1 = v25 + v27;
                if (!_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h4b3a54094321950c(core::iter::traits::iterator::Iterator::try_fold::hec868b0f829523d7(&v0)))
                {
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha4208e868ecb88cc(&v0, v25, v27);
                    v7 = v2;
                    v34 = *((int128_t *)&v0);
                    v33 = v33 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34;
                    v6 = v34;
                    uucore::features::mode::parse_symbolic::h8b8316294f52b67d(&v0, v24, (long long)(&v6)[8], v7, (unsigned int)uucore::features::mode::get_umask::hd2aa58752ad993fa(), 1);
                    v32 = v0;
                    if (v32 != 0x8000000000000000)
                    {
                        v37 = v1;
                        v19 = v5;
                        *((int *)((char *)&v19->field_c + 4)) = *((int *)((char *)&v2 + 4));
                        *((long long *)&(&v19->field_8)[1]) = *((long long *)((char *)&v1 + 4));
                        v19->field_0 = v32;
                        v19->field_8 = v37;
                        ::0x4b11f0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h03aa133fcf191ac0(&v6);
                        return v19;
                    }
                    v24 = v1;
                    ::0x4b11f0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h03aa133fcf191ac0(&v6);
                }
                else
                {
                    uucore::features::mode::parse_numeric::h27100faf377a9b0f(&v0, v24, v21, v15, 1);
                    v29 = v0;
                    if (v29 != 0x8000000000000000)
                    {
                        v36 = v1;
                        v19 = v5;
                        *((int *)((char *)&v19->field_c + 4)) = *((int *)((char *)&v2 + 4));
                        *((long long *)&(&v19->field_8)[1]) = *((long long *)((char *)&v1 + 4));
                        v19->field_0 = v29;
                        v19->field_8 = v36;
                        return v19;
                    }
                    v24 = v1;
                }
            } while ((v25 = core::str::iter::SplitInternal$LT$P$GT$::next::had797e95afa81bfb(&v14), v27 = v26, v25));
        }
    }
    v19 = v5;
    v19->field_8 = v24;
    v19->field_0 = 0x8000000000000000;
    return v19;
}
