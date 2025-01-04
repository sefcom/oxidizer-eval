long long uu_split::Settings::from::h19dd94bcd15a49c5(struct_2 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [sp-0x378]
    unsigned int v1;  // [sp-0x24c]
    int v2;  // [sp-0x248]
    int v3;  // [bp-0x238], Other Possible Types: unsigned long long
    int v4;  // [bp-0x228], Other Possible Types: char
    char v5;  // [bp-0x218]
    struct_0 *v6;  // [sp-0x200]
    int v7;  // [sp-0x1f8], Other Possible Types: char
    int v8;  // [sp-0x1e8]
    unsigned long long v9;  // [sp-0x1d8]
    int v10;  // [bp-0x1c8], Other Possible Types: char, unsigned long long, unsigned long
    char v11;  // [bp-0x1c0], Other Possible Types: unsigned long long
    int v12;  // [sp-0x1b8]
    char v13;  // [bp-0x1b0]
    int v14;  // [sp-0x1a8], Other Possible Types: unsigned long, unsigned long long
    int v15;  // [bp-0x1a0], Other Possible Types: char
    int v16;  // [bp-0x198]
    unsigned long long v17;  // [sp-0x190]
    int v18;  // [sp-0x188]
    int v19;  // [sp-0x178]
    int v20;  // [sp-0x168]
    int v21;  // [sp-0x158]
    unsigned long long v22;  // [sp-0x148]
    int v23;  // [sp-0x140]
    unsigned long long v24;  // [sp-0x130]
    char v25;  // [sp-0x128]
    char v26;  // [sp-0x127]
    char v27;  // [sp-0x126]
    unsigned long long v28;  // [bp-0x118]
    unsigned long long v29;  // [sp-0x108]
    int v30;  // [bp-0xf8], Other Possible Types: unsigned long, unsigned long long
    int v31;  // [bp-0xf0]
    unsigned long long v32;  // [sp-0xe8]
    int v33;  // [sp-0xe0]
    unsigned long long v34;  // [sp-0xd0]
    int v35;  // [sp-0xc8]
    unsigned long long v36;  // [sp-0xb8]
    char v37;  // [bp-0xa8]
    char v38;  // [bp-0x98]
    char v39;  // [bp-0x90]
    char v40;  // [bp-0x80]
    int v41;  // [sp-0x78]
    unsigned long long v42;  // [sp-0x68]
    char v43;  // [bp-0x58]
    char v44;  // [bp-0x50]
    char v45;  // [bp-0x40]
    unsigned long long v47;  // rax
    int v48;  // xmm0
    unsigned long long v49;  // rcx
    int v51;  // xmm1
    unsigned long long v52;  // rsi
    unsigned long long v53;  // rdx
    struct_0 *v54;  // rax
    unsigned int v55;  // eax
    unsigned long long v56;  // rcx
    struct_0 *v57;  // rax
    char *v58;  // r15
    unsigned long long v59;  // r12
    unsigned long long v60[3];  // r15
    unsigned long long v61;  // r15
    unsigned long long v62;  // rax
    int v63;  // xmm0
    unsigned long long v64;  // rax
    unsigned long long v65;  // rax
    unsigned long long v66;  // rax
    unsigned long v67;  // cc_ndep

    uu_split::strategy::Strategy::from::h55013c26ce2fc8ab(&v43, a1, a2);
    if (*((int *)&v43) == 4)
    {
        v3 = *((long long *)&v45);
        *((int128_t *)&v2) = *((int128_t *)&v44);
    }
    else
    {
        core::ops::function::FnOnce::call_once::haf814ba9ed64f54a(&v10, &v43);
        v47 = v10;
        *((int128_t *)&v2) = *((int128_t *)&v11);
        v3 = *((long long *)&v13);
        if (v47 != 9)
        {
            v32 = v3;
            v48 = v2;
            v30 = v48;
            *((unsigned long long *)&a0->field_18) = v32;
            *((void*)&a0->field_10) = v48;
            a0->field_8 = v47;
            *((unsigned long *)((char *)&a0->field_18 + 8)) = v14;
            a0->field_0 = 2;
            return a0;
        }
    }
    v35 = v2;
    v36 = v3;
    v41 = v35;
    v42 = v36;
    uu_split::filenames::Suffix::from::h650e53160424c56f(&v10, a1, &v41);
    if (v30 == 0x8000000000000000)
    {
        core::ops::function::FnOnce::call_once::hde63b1f7c3946962(&v2, &v11);
        v9 = *((long long *)&v4);
        *((int128_t *)&v8) = *((int128_t *)&v3);
        v7 = v2;
        *((unsigned long long *)((char *)&a0->field_18 + 8)) = v9;
        *((void*)((char *)&a0->field_10 + 8)) = v8;
        *((void*)&a0->field_8) = v7;
        a0->field_0 = 2;
        return a0;
    }
    v49 = *((long long *)&v15);
    *((int128_t *)&v8) = *((int128_t *)&v13);
    *((int128_t *)&v31) = *((int128_t *)&v11);
    v33 = v8;
    v34 = v49;
    v30 = v10;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hf94087d00da7b45f(&v10, a1, "separator", 9);
    if (!(long long)v2)
    {
        v55 = clap_builder::parser::error::MatchesError::unwrap::h33b6edd186448474(&v2, "separator", 9, &v10) | -0x100 | 10;
        goto LABEL_4cb5f1;
    }
    v51 = *((int128_t *)&v3);
    *((int128_t *)&v16) = *((int128_t *)&v5);
    v14 = v4;
    v12 = v51;
    v10 = v2;
    v54 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5d23ecd35bb48587(&v10, v52, v53);
    if (!v54)
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    v6 = v54;
    v56 = 6;
    if (::0x4c9af0::_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::ha5fb3b5979973e2a((unsigned int)core::iter::traits::iterator::Iterator::try_fold::ha4b7b055f3a9f6fe(&v10, &v6, v53)))
    {
        v57 = v6;
        v58 = v57->field_8;
        v59 = v57->field_10;
        if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(v58, v59, "\\0'' would overwrite input; aborting: cannot determine input size: cannot determine file size", 2))
        {
            v1 = 0;
            goto LABEL_4cb5f5;
        }
        else if (v59 != 1)
        {
            ::0x4c95a0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha461c13160c52a35(&v7, v58, v59);
            *((long long *)&a0->field_18) = (long long)v8;
            *((void*)&a0->field_10) = v7;
            v56 = 5;
        }
        else
        {
            v55 = *(v58);
LABEL_4cb5f1:
            v1 = v55;
LABEL_4cb5f5:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b47e11c99165f29(&v10, a1, "-io-blksize", 11);
            v60 = clap_builder::parser::error::MatchesError::unwrap::h5fb9f4927eec1aba("-io-blksize", 11, &v10);
            if (!v60)
            {
                v61 = 0;
                goto LABEL_4cb697;
            }
            else
            {
                uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&v10, v60[1], v60[2]);
                if ((int)v10 == 3)
                {
                    v59 = v11;
                    if (!v59)
                    {
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v2, v60);
                        *((unsigned long long *)&a0->field_18) = v3;
                        *((void*)&a0->field_10) = v2;
                        a0->field_8 = 8;
                        a0->field_0 = 2;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..parser..parse_size..ParseSizeError$GT$$GT$::h015e0a63404a84f0(&v10);
                        core::ptr::drop_in_place$LT$uu_split..filenames..Suffix$GT$::h108240889ad5c101(&v30);
                        return a0;
                    }
                    if (v59 < 536870913)
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..parser..parse_size..ParseSizeError$GT$$GT$::h015e0a63404a84f0(&v10);
                        v61 = 1;
LABEL_4cb697:
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b47e11c99165f29(&v2, a1, "prefix", 6);
                        v62 = clap_builder::parser::error::MatchesError::unwrap::h5fb9f4927eec1aba("prefix", 6, &v2);
                        if (!v62)
                            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v37, v62);
                        v63 = *((int128_t *)&v30);
                        *((int128_t *)&v4) = (int128_t)(&v33)[8];
                        *((int128_t *)&v3) = (int128_t)(&v31)[8];
                        v2 = v63;
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b47e11c99165f29(&v7, a1, "input", 5);
                        v64 = clap_builder::parser::error::MatchesError::unwrap::h5fb9f4927eec1aba("input", 5, &v7);
                        if (!v64)
                            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v39, v64);
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b47e11c99165f29(&v7, a1, "filter", 6);
                        v65 = clap_builder::parser::error::MatchesError::unwrap::h5fb9f4927eec1aba("filter", 6, &v7);
                        if (!v65)
                        {
                            v28 = 0x8000000000000000;
                        }
                        else
                        {
                            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v7, v65);
                            v29 = (long long)v8;
                            *((void*)&v28) = v7;
                        }
                        v17 = *((long long *)&v38);
                        *((int128_t *)&v15) = *((int128_t *)&v37);
                        v18 = v2;
                        *((int128_t *)&v19) = (int128_t)v3;
                        v20 = v4;
                        *((int128_t *)&v21) = *((int128_t *)&v39);
                        v22 = *((long long *)&v40);
                        *((int128_t *)&v23) = *((int128_t *)&v28);
                        v24 = v29;
                        v14 = v36;
                        v12 = v35;
                        v25 = (char)clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h1b5412f9501eb404(a1, "verbose", 7) == 2;
                        v27 = v1;
                        v26 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "elide-empty-files", 17);
                        v10 = v61;
                        v11 = v59;
                        v66 = (long long)v12;
                        if (v66 <= 5 && (char)amd64g_calculate_condition(6, 8, v66, 5, v67))
                        {
                            v0 = 42;
                            if (((char)(*((char *)&v0 + ((v66 & 63) >> 3)) >> (char)(v66 & 63 & 7)) & 1) && (long long)v23 != 0x8000000000000000)
                            {
                                a0->field_8 = 7;
                                a0->field_0 = 2;
                                core::ptr::drop_in_place$LT$uu_split..Settings$GT$::h052f7492a9b4d421(&v10);
                                return a0;
                            }
                        }
                        memcpy(a0, &v10, 168);
                        return a0;
                    }
                }
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v2, v60);
                *((unsigned long long *)&a0->field_18) = v3;
                *((void*)&a0->field_10) = v2;
                a0->field_8 = 8;
                a0->field_0 = 2;
                core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..parser..parse_size..ParseSizeError$GT$$GT$::h015e0a63404a84f0(&v10);
                core::ptr::drop_in_place$LT$uu_split..filenames..Suffix$GT$::h108240889ad5c101(&v30);
                return a0;
            }
        }
    }
    a0->field_8 = v56;
    a0->field_0 = 2;
    core::ptr::drop_in_place$LT$uu_split..filenames..Suffix$GT$::h108240889ad5c101(&v30);
    return a0;
}
