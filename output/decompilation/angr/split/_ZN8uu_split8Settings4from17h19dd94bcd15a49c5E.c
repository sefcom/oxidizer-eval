long long uu_split::Settings::from::h19dd94bcd15a49c5(struct_2 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [sp-0x378]
    unsigned int v1;  // [sp-0x24c]
    int v2;  // [sp-0x248]
    int v3;  // [bp-0x238]
    unsigned long long v4;  // [bp-0x238]
    int v5;  // [bp-0x228], Other Possible Types: char
    char v6;  // [bp-0x218]
    struct_0 *v7;  // [sp-0x200]
    int v8;  // [sp-0x1f8], Other Possible Types: char
    int v9;  // [sp-0x1e8]
    unsigned long long v10;  // [sp-0x1d8]
    unsigned long v11;  // [sp-0x1c8]
    int v12;  // [bp-0x1c8], Other Possible Types: unsigned long long, char
    unsigned long long v13;  // [sp-0x1c0]
    int v14;  // [sp-0x1b8]
    char v15;  // [bp-0x1b0]
    int v16;  // [sp-0x1a8], Other Possible Types: unsigned long, unsigned long long
    int v17;  // [bp-0x1a0], Other Possible Types: char
    int v18;  // [bp-0x198]
    unsigned long long v19;  // [sp-0x190]
    int v20;  // [sp-0x188]
    int v21;  // [sp-0x178]
    int v22;  // [sp-0x168]
    int v23;  // [sp-0x158]
    unsigned long long v24;  // [sp-0x148]
    int v25;  // [sp-0x140]
    unsigned long long v26;  // [sp-0x130]
    char v27;  // [sp-0x128]
    char v28;  // [sp-0x127]
    char v29;  // [sp-0x126]
    unsigned long long v31;  // [bp-0x118]
    unsigned long long v32;  // [sp-0x108]
    int v33;  // [bp-0xf8], Other Possible Types: unsigned long
    int v34;  // [bp-0xf0]
    unsigned long long v35;  // [sp-0xe8]
    int v36;  // [sp-0xe0]
    unsigned long long v37;  // [sp-0xd0]
    int v38;  // [sp-0xc8]
    unsigned long long v39;  // [sp-0xb8]
    char v40;  // [bp-0xa8]
    char v41;  // [bp-0x98]
    char v42;  // [bp-0x90]
    char v43;  // [bp-0x80]
    int v44;  // [sp-0x78]
    unsigned long long v45;  // [sp-0x68]
    char v46;  // [bp-0x58]
    char v47;  // [bp-0x50]
    char v48;  // [bp-0x40]
    unsigned long long v50;  // rax
    int v51;  // xmm0
    unsigned long long v52;  // rcx
    int v54;  // xmm1
    struct_0 *v55;  // rax
    unsigned int v56;  // eax
    unsigned long long v58;  // rcx
    struct_0 *v59;  // rax
    char *v60;  // r15
    unsigned long long v61;  // r12
    unsigned long long v62[3];  // r15
    unsigned long long v63;  // r15
    unsigned long long v64;  // rax
    int v65;  // xmm0
    unsigned long long v66;  // rax
    unsigned long long v67;  // rax
    unsigned long long v68;  // rax
    unsigned long v69;  // cc_ndep

    uu_split::strategy::Strategy::from::h55013c26ce2fc8ab(&v46, a1, a2);
    if (*((int *)&v46) == 4)
    {
        v4 = *((long long *)&v48);
        *((int128_t *)&v2) = *((int128_t *)&v47);
    }
    else
    {
        core::ops::function::FnOnce::call_once::haf814ba9ed64f54a(&v12, &v46);
        v50 = v11;
        *((int128_t *)&v2) = *((int128_t *)&v12);
        v4 = *((long long *)&v15);
        if (v50 != 9)
        {
            v35 = v4;
            v51 = v2;
            v33 = v51;
            *((unsigned long long *)&a0->field_18) = v35;
            *((void*)&a0->field_10) = v51;
            a0->field_8 = v50;
            *((unsigned long *)((char *)&a0->field_18 + 8)) = v16;
            a0->field_0 = 2;
            return a0;
        }
    }
    v38 = v2;
    v39 = v4;
    v44 = v38;
    v45 = v39;
    uu_split::filenames::Suffix::from::h650e53160424c56f(&v12, a1, &v44);
    if (v33 == 0x8000000000000000)
    {
        core::ops::function::FnOnce::call_once::hde63b1f7c3946962(&v2, &v12);
        v10 = *((long long *)&v5);
        *((int128_t *)&v9) = *((int128_t *)&v4);
        v8 = v2;
        *((unsigned long long *)((char *)&a0->field_18 + 8)) = v10;
        *((void*)((char *)&a0->field_10 + 8)) = v9;
        *((void*)&a0->field_8) = v8;
        a0->field_0 = 2;
        return a0;
    }
    v52 = *((long long *)&v17);
    *((int128_t *)&v9) = *((int128_t *)&v15);
    *((int128_t *)&v34) = *((int128_t *)&v12);
    v36 = v9;
    v37 = v52;
    v33 = v11;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hf94087d00da7b45f(&v12, a1, "separator", 9);
    if (!(long long)v2)
    {
        v56 = clap_builder::parser::error::MatchesError::unwrap::h33b6edd186448474(&v2, "separator", 9, &v12) & 0xffffffffffffff00 | 10;
        goto LABEL_4cb5f1;
    }
    v54 = *((int128_t *)&v4);
    *((int128_t *)&v18) = *((int128_t *)&v6);
    v16 = v5;
    v14 = v54;
    v12 = v2;
    v55 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5d23ecd35bb48587(&v12);
    if (!v55)
        core::option::unwrap_failed::h0e11329e76906eaa(&g_548338); /* do not return */
    v7 = v55;
    v58 = 6;
    if (::0x4c9af0::_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::ha5fb3b5979973e2a(core::iter::traits::iterator::Iterator::try_fold::ha4b7b055f3a9f6fe(&v12, &v7)))
    {
        v59 = v7;
        v60 = v59->field_8;
        v61 = v59->field_10;
        if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(v60, v61, "\\0'' would overwrite input; aborting: cannot determine input size: cannot determine file size", 2))
        {
            v1 = 0;
            goto LABEL_4cb5f5;
        }
        else if (v61 != 1)
        {
            ::0x4c95a0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha461c13160c52a35(&v8, v60, v61);
            *((long long *)&a0->field_18) = (long long)v9;
            *((void*)&a0->field_10) = v8;
            v58 = 5;
        }
        else
        {
            v56 = *(v60);
LABEL_4cb5f1:
            v1 = v56;
LABEL_4cb5f5:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b47e11c99165f29(&v12, a1, "-io-blksize", 11);
            v62 = clap_builder::parser::error::MatchesError::unwrap::h5fb9f4927eec1aba("-io-blksize", 11, &v12);
            if (!v62)
            {
                v63 = 0;
                goto LABEL_4cb697;
            }
            else
            {
                uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&v12, v62[1], v62[2]);
                if ((int)v12 == 3)
                {
                    v61 = v12;
                    if (!v61)
                    {
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v2, v62);
                        *((unsigned long long *)&a0->field_18) = v4;
                        *((void*)&a0->field_10) = v2;
                        a0->field_8 = 8;
                        a0->field_0 = 2;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..parser..parse_size..ParseSizeError$GT$$GT$::h015e0a63404a84f0(&v12);
                        core::ptr::drop_in_place$LT$uu_split..filenames..Suffix$GT$::h108240889ad5c101(&v33);
                        return a0;
                    }
                    if (v61 < 536870913)
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..parser..parse_size..ParseSizeError$GT$$GT$::h015e0a63404a84f0(&v12);
                        v63 = 1;
LABEL_4cb697:
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b47e11c99165f29(&v2, a1, "prefix", 6);
                        v64 = clap_builder::parser::error::MatchesError::unwrap::h5fb9f4927eec1aba("prefix", 6, &v2);
                        if (!v64)
                            core::option::unwrap_failed::h0e11329e76906eaa(&g_548350); /* do not return */
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v40, v64);
                        v65 = *((int128_t *)&v33);
                        *((int128_t *)&v5) = (int128_t)(&v36)[8];
                        *((int128_t *)&v3) = (int128_t)(&v34)[8];
                        v2 = v65;
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b47e11c99165f29(&v8, a1, "input", 5);
                        v66 = clap_builder::parser::error::MatchesError::unwrap::h5fb9f4927eec1aba("input", 5, &v8);
                        if (!v66)
                            core::option::unwrap_failed::h0e11329e76906eaa(&g_548368); /* do not return */
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v42, v66);
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b47e11c99165f29(&v8, a1, "filter", 6);
                        v67 = clap_builder::parser::error::MatchesError::unwrap::h5fb9f4927eec1aba("filter", 6, &v8);
                        if (!v67)
                        {
                            v31 = 0x8000000000000000;
                        }
                        else
                        {
                            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v8, v67);
                            v32 = (long long)v9;
                            *((void*)&v31) = v8;
                        }
                        v19 = *((long long *)&v41);
                        *((int128_t *)&v17) = *((int128_t *)&v40);
                        v20 = v2;
                        *((int128_t *)&v21) = (int128_t)v3;
                        v22 = v5;
                        *((int128_t *)&v23) = *((int128_t *)&v42);
                        v24 = *((long long *)&v43);
                        *((int128_t *)&v25) = *((int128_t *)&v31);
                        v26 = v32;
                        v16 = v39;
                        v14 = v38;
                        v27 = (char)clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h1b5412f9501eb404(a1, "verbose", 7) == 2;
                        v29 = v1;
                        v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "elide-empty-files", 17);
                        v11 = v63;
                        v13 = v61;
                        v68 = (long long)v14;
                        if (v68 <= 5 && (char)amd64g_calculate_condition(6, 8, v68, 5, v69))
                        {
                            v0 = 42;
                            if (((char)(*((char *)&v0 + ((v68 & 63) >> 3)) >> (char)(v68 & 63 & 7)) & 1) && (long long)v25 != 0x8000000000000000)
                            {
                                a0->field_8 = 7;
                                a0->field_0 = 2;
                                core::ptr::drop_in_place$LT$uu_split..Settings$GT$::h052f7492a9b4d421(&v12);
                                return a0;
                            }
                        }
                        memcpy(a0, &v12, 168);
                        return a0;
                    }
                }
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v2, v62);
                *((unsigned long long *)&a0->field_18) = v4;
                *((void*)&a0->field_10) = v2;
                a0->field_8 = 8;
                a0->field_0 = 2;
                core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..parser..parse_size..ParseSizeError$GT$$GT$::h015e0a63404a84f0(&v12);
                core::ptr::drop_in_place$LT$uu_split..filenames..Suffix$GT$::h108240889ad5c101(&v33);
                return a0;
            }
        }
    }
    a0->field_8 = v58;
    a0->field_0 = 2;
    core::ptr::drop_in_place$LT$uu_split..filenames..Suffix$GT$::h108240889ad5c101(&v33);
    return a0;
}
