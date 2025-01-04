long long uu_split::filenames::Suffix::from::h650e53160424c56f(struct_0 *a0, unsigned long long a1, unsigned long long *a2)
{
    unsigned long long v0;  // [sp-0xa0]
    unsigned int v1;  // [sp-0x94]
    char v2;  // [bp-0x90]
    char v3;  // [bp-0x88]
    char v4;  // [bp-0x80]
    unsigned long long *v5;  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned int v6;  // [sp-0x6c]
    char v7;  // [bp-0x68], Other Possible Types: unsigned long, unsigned long long
    char v8;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long v9;  // [sp-0x40]
    unsigned long long v10;  // [sp-0x38]
    unsigned long long v15[3];  // rax
    unsigned int v16;  // r15d
    unsigned long long v17;  // cc_ndep
    unsigned long long v18;  // r13
    unsigned long long v19;  // rdi
    unsigned long long v20;  // r13
    void* v21;  // rbp
    unsigned long long *v22;  // rdx
    unsigned long long v23;  // rax
    int v24;  // xmm1
    int v25;  // xmm1
    int v26;  // xmm1
    unsigned long long v27;  // xmm1lq
    int v28;  // ymm0
    int v29;  // ymm0
    unsigned long long v30;  // rdi
    unsigned long long v31;  // rsi
    unsigned long long v32;  // rdx
    unsigned long long v33;  // rcx
    unsigned long long v34;  // r8
    unsigned long long v35;  // r9
    int v36;  // ymm1
    int v37;  // ymm1
    int v38;  // xmm1
    int v39;  // xmm0
    int v40;  // ymm0
    int v41;  // ymm1
    unsigned long long v42;  // rdx
    unsigned long long v44;  // r13
    unsigned long long v47;  // rax

    v5 = a2;
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(a1, "numeric-suffixes", 16))
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b47e11c99165f29(&v7, a1, "numeric-suffixes", 16);
        v15 = clap_builder::parser::error::MatchesError::unwrap::h5fb9f4927eec1aba("numeric-suffixes", 16, &v7);
        v16 = -127;
        if (!v15)
        {
            v0 = 0;
            goto LABEL_4d9722;
        }
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v2, v15[1], v15[2]);
        if (!v2)
            goto LABEL_4d96ec;
    }
    else if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(a1, "hex-suffixes", 12))
    {
        if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "-d", 2))
            v16 = 1;
        else
            v16 = (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "-x", 2) * 2;
LABEL_4d970c:
        v0 = 0;
LABEL_4d9722:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b47e11c99165f29(&v7, a1, "suffix-length", 13);
        v15 = clap_builder::parser::error::MatchesError::unwrap::h5fb9f4927eec1aba("suffix-length", 13, &v7);
        if (!v15)
        {
            v1 = v16;
            v18 = 2;
            goto LABEL_4d97bb;
        }
        else
        {
            core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v2, v15[1], v15[2]);
            if (!v2)
            {
                v1 = v16;
                v18 = *((long long *)&v3);
LABEL_4d97bb:
                v21 = ((v20 & v15) ? 1 : 0);
                v22 = v5;
                v23 = *(v22);
                if (v23 < 6)
                {
                    v6 = (unsigned int)v21;
                    v5 = *((long long *)((char *)v22 + g_4224c8[v23]));
                    v24 = v0 + v5;
                    v25 = InterleaveLOV(0x4530000043300000, v24);
                    v26 = v25 - 0x45300000000000004330000000000000;
                    v27 = g_4224f8[(char)v1];
                    v10 = v27;
                    6292240(v19);
                    v9 = (unsigned long long)(v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((unsigned long long)(v26 >> 64) CONCAT (unsigned long long)(v26 >> 64)) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(AddV((unsigned long long)(v26 >> 64) CONCAT (unsigned long long)(v26 >> 64), v26)));
                    v29 = v9 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v10;
                    6292240(v30, v31, v32, v33, v34, v35);
                    v37 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v9;
                    v38 = DivV((uint128_t)v37, (uint128_t)v29);
                    v39 = v38;
                    v40 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39;
                    ceil(v40);
                    v41 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(SubV(v39, 0x43e0000000000000));
                    v42 = (unsigned long long)v41 & (unsigned long long)v40 >> 63 | (unsigned long long)v40;
                    if (!((char)amd64g_calculate_condition(3, 0, (unsigned long long)(unsigned int)(CmpF((unsigned long long)v40, (unsigned long long)(v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000)) & 69), 0, v17)))
                        v42 = 0;
                    if ((((char)(CmpF((unsigned long long)v40, 4895412794951729151) & 69) | (char)((CmpF((unsigned long long)v40, 4895412794951729151) & 69) >> 6)) & 1) != 1)
                        v42 = -1;
                    if (v0 >= v5)
                    {
                        v21 = v6;
                        if (v20 < v42)
                        {
                            *((long long *)&a0->padding_8[0]) = 2;
                            a0->field_10 = v42;
                            a0->field_0 = 0x8000000000000000;
                            return a0;
                        }
                    }
                    else
                    {
                        if (!(v20 & v15))
                        {
                            v21 = 0;
                            goto LABEL_4d98ea;
                        }
                        else if (v20 >= v42)
                        {
                            v21 = 0;
                        }
                        else
                        {
                            *((long long *)&a0->padding_8[0]) = 2;
                            a0->field_10 = v42;
                            a0->field_0 = 0x8000000000000000;
                            return a0;
                        }
LABEL_4d98fd:
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b47e11c99165f29(&v7, a1, "additional-suffix", 17);
                        v47 = clap_builder::parser::error::MatchesError::unwrap::h5fb9f4927eec1aba("additional-suffix", 17, &v7);
                        if (!v47)
                            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v2, v47);
                        v7 = *((long long *)&v3);
                        v8 = *((long long *)&v4) + v7;
                        if (::0x4d9460::_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::ha5fb3b5979973e2a((unsigned int)core::iter::traits::iterator::Iterator::try_fold::heae82aa079024b40(&v7, v31, v32)))
                        {
                            *((long long *)&a0->padding_20[0]) = *((long long *)&v4);
                            *((int128_t *)&a0->field_10) = *((int128_t *)&v2);
                            *((long long *)&a0->padding_8[0]) = 1;
                            a0->field_0 = 0x8000000000000000;
                            return a0;
                        }
                        a0->field_10 = *((long long *)&v4);
                        *((int128_t *)&a0->field_0) = *((int128_t *)&v2);
                        a0->field_18 = v20;
                        *((unsigned long long *)&a0->padding_20[0]) = v0;
                        a0->field_28 = (char)v21;
                        a0->field_29 = v1;
                        return a0;
                    }
                }
LABEL_4d98ea:
                if (!v18)
                    v44 = 2;
                if (!v15)
                    goto LABEL_4d98fd;
                else
                    goto LABEL_4d98fd;
            }
        }
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b47e11c99165f29(&v7, a1, "hex-suffixes", 12);
        v15 = clap_builder::parser::error::MatchesError::unwrap::h5fb9f4927eec1aba("hex-suffixes", 12, &v7);
        v16 = -126;
        if (!v15)
            goto LABEL_4d970c;
        core::num::_$LT$impl$u20$usize$GT$::from_str_radix::h79418e6c334030c0(&v2, v15[1], v15[2], 16);
        if (!v2)
        {
LABEL_4d96ec:
            v0 = *((long long *)&v3);
            goto LABEL_4d9722;
        }
    }
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v7, v15);
    *((int128_t *)&a0->field_18) = *((int128_t *)&v8);
    *((long long *)&a0->padding_8[0]) = 0;
    a0->field_10 = v7;
    a0->field_0 = 0x8000000000000000;
    return a0;
}
