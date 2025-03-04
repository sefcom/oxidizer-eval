long long uu_split::filenames::Suffix::from::h650e53160424c56f(struct_0 *a0, unsigned long long a1, unsigned long long *a2)
{
    unsigned long long v0;  // [sp-0xa0]
    unsigned int v1;  // [sp-0x94]
    char v2;  // [bp-0x90]
    char v3;  // [bp-0x88]
    char v4;  // [bp-0x80]
    unsigned long long *v5;  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned int v6;  // [sp-0x6c]
    char v7;  // [sp-0x68]
    unsigned long v8;  // [sp-0x68], Other Possible Types: unsigned long long
    char v9;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long v10;  // [sp-0x40]
    unsigned long long v11;  // [sp-0x38]
    unsigned long long v16[3];  // rax
    unsigned int v17;  // r15d
    unsigned long long v18[3];  // rax
    unsigned long long v19[3];  // r12
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
    int v30;  // ymm1
    int v31;  // ymm1
    int v32;  // xmm1
    int v33;  // xmm0
    int v34;  // ymm0
    int v35;  // ymm1
    unsigned long long v36;  // rcx
    unsigned long long v37;  // rax
    unsigned long long v38;  // rax
    unsigned long long v39;  // rax
    unsigned long long v41;  // cc_ndep

    v5 = a2;
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(a1, "numeric-suffixes", 16))
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b47e11c99165f29(&v7, a1, "numeric-suffixes", 16);
        v16 = clap_builder::parser::error::MatchesError::unwrap::h5fb9f4927eec1aba("numeric-suffixes", 16, &v7);
        v17 = &g_512f01;
        if (!v16)
        {
            v0 = 0;
            goto LABEL_4d9722;
        }
        v19 = v16;
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v2, v16[1], v16[2]);
        if (!v2)
            goto LABEL_4d96ec;
    }
    else if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(a1, "hex-suffixes", 12))
    {
        if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "-d", 2))
            v17 = 1;
        else
            v17 = (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "-x", 2) * 2;
LABEL_4d970c:
        v0 = 0;
LABEL_4d9722:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b47e11c99165f29(&v7, a1, "suffix-length", 13);
        v19 = clap_builder::parser::error::MatchesError::unwrap::h5fb9f4927eec1aba("suffix-length", 13, &v7);
        if (!v19)
        {
            v1 = v17;
            v20 = 2;
            goto LABEL_4d97bb;
        }
        else
        {
            core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v2, v19[1], v19[2]);
            if (!v2)
            {
                v1 = v17;
                v20 = *((long long *)&v3);
LABEL_4d97bb:
                v21 = ((v20 & v19) ? 1 : 0);
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
                    v11 = v27;
                    log(v10);
                    v10 = (unsigned long long)(((v28 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v26) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((unsigned long long)(v26 >> 64) CONCAT (unsigned long long)(v26 >> 64))) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(AddV((unsigned long long)(v26 >> 64) CONCAT (unsigned long long)(v26 >> 64), v26)));
                    v29 = v10 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v11;
                    log(v29);
                    v31 = ((((v30 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v24) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v25) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v26) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v27) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v10;
                    v32 = DivV((uint128_t)v31, (uint128_t)v29);
                    v33 = v32;
                    v34 = v29 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v33;
                    ceil(v34);
                    v35 = ((v31 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v32) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v33) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(SubV(v33, 0x43e0000000000000));
                    if (!((char)amd64g_calculate_condition(3, 0, (unsigned long long)(CmpF((unsigned long long)v34, (unsigned long long)(v35 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000)) & 69), 0, v41)))
                        v36 = 0;
                    else
                        v36 = (unsigned long long)v35 & (unsigned long long)v34 >> 63 | (unsigned long long)v34;
                    v37 = (((CmpF((unsigned long long)v34, 4895412794951729151) & 69 | (CmpF((unsigned long long)v34, 4895412794951729151) & 69) >> 6) & 1) == 1 ? v36 : 18446744073709551615);
                    if (v0 >= v5)
                    {
                        v21 = v6;
                        if (v20 < v37)
                        {
                            *((unsigned long long *)&a0->padding_8[0]) = 2;
                            a0->field_10 = v37;
                            a0->field_0 = 0x8000000000000000;
                            return a0;
                        }
                    }
                    else
                    {
                        if (!(v20 & v19))
                        {
                            if (v20 <= v37)
                                v20 = v37;
                            v21 = 0;
                            goto LABEL_4d98ea;
                        }
                        else if (v20 >= v37)
                        {
                            v21 = 0;
                        }
                        else
                        {
                            *((unsigned long long *)&a0->padding_8[0]) = 2;
                            a0->field_10 = v37;
                            a0->field_0 = 0x8000000000000000;
                            return a0;
                        }
LABEL_4d98fd:
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b47e11c99165f29(&v7, a1, "additional-suffix", 17);
                        v39 = clap_builder::parser::error::MatchesError::unwrap::h5fb9f4927eec1aba("additional-suffix", 17, &v7);
                        if (!v39)
                            core::option::unwrap_failed::h0e11329e76906eaa(&g_549110); /* do not return */
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v2, v39);
                        v8 = *((long long *)&v3);
                        v9 = *((long long *)&v4) + v8;
                        if (::0x4d9460::_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::ha5fb3b5979973e2a(core::iter::traits::iterator::Iterator::try_fold::heae82aa079024b40(&v7)))
                        {
                            *((long long *)&a0->padding_20[0]) = *((long long *)&v4);
                            *((int128_t *)&a0->field_10) = *((int128_t *)&v2);
                            *((unsigned long long *)&a0->padding_8[0]) = 1;
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
                v38 = (v20 ? 2 : v20);
                if (v19)
                {
                    v20 = v38;
                    goto LABEL_4d98fd;
                }
                else
                {
                    goto LABEL_4d98fd;
                }
            }
        }
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b47e11c99165f29(&v7, a1, "hex-suffixes", 12);
        v18 = clap_builder::parser::error::MatchesError::unwrap::h5fb9f4927eec1aba("hex-suffixes", 12, &v7);
        v17 = &g_512f02;
        if (!v18)
            goto LABEL_4d970c;
        v19 = v18;
        core::num::_$LT$impl$u20$usize$GT$::from_str_radix::h79418e6c334030c0(&v2, v18[1], v18[2], 16);
        if (!v2)
        {
LABEL_4d96ec:
            v0 = *((long long *)&v3);
            goto LABEL_4d9722;
        }
    }
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v7, v19);
    *((int128_t *)&a0->field_18) = *((int128_t *)&v9);
    *((unsigned long long *)&a0->padding_8[0]) = 0;
    a0->field_10 = v8;
    a0->field_0 = 0x8000000000000000;
    return a0;
}
