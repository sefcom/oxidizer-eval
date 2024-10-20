long long uu_ptx::get_config::hdaa3e2ad3a6d91a2(struct_3 *a0, struct_1 *a1)
{
    unsigned long v0;  // [sp-0x150], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x148]
    unsigned long v2;  // [sp-0x140], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x138]
    unsigned long long v4;  // [sp-0x130]
    unsigned long long v5;  // [sp-0x128]
    char v6;  // [bp-0x120]
    char v7;  // [bp-0x118]
    char v8;  // [bp-0x110]
    char v9;  // [bp-0x100]
    int v10;  // [sp-0xf8], Other Possible Types: unsigned long, unsigned long long
    unsigned short *v11;  // [sp-0xf0]
    unsigned long v12;  // [sp-0xe8], Other Possible Types: unsigned long long
    int v13;  // [sp-0xe0], Other Possible Types: unsigned long long
    char *v14;  // [sp-0xd8], Other Possible Types: unsigned long
    unsigned long long v15;  // [sp-0xd0]
    unsigned long long v16;  // [sp-0xc8]
    unsigned short *v17;  // [sp-0xc0]
    void* v18;  // [sp-0xb8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v19;  // [sp-0xb0]
    unsigned long long v20;  // [sp-0xa8]
    char v21;  // [sp-0xa0]
    char v22;  // [bp-0x9f], Other Possible Types: unsigned int
    char v23;  // [sp-0x9e]
    char v24;  // [sp-0x9d]
    char v25;  // [sp-0x9c]
    char v26;  // [sp-0x9b]
    char v27;  // [bp-0x9a]
    char v28;  // [bp-0x98]
    char v29;  // [bp-0x97]
    char v30;  // [bp-0x90]
    int v31;  // [sp-0x88]
    int v32;  // [sp-0x78]
    unsigned long long v33;  // [sp-0x68]
    char v34;  // [bp-0x60], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v35;  // [sp-0x58]
    unsigned long long v36;  // [sp-0x50], Other Possible Types: unsigned long
    unsigned long long v37;  // [sp-0x48]
    void* v38;  // [sp-0x40]
    unsigned short *v40;  // rax
    char *v41;  // rax
    unsigned short *v42;  // rax
    struct_4 *v43;  // rax
    unsigned long long v44;  // rax
    struct struct_0 **v45;  // r13
    unsigned long long v46;  // r12
    struct struct_0 **v47;  // rcx
    struct_0 *v48;  // rdx
    unsigned long long v49;  // r12
    struct struct_0 **v50;  // rax
    struct_0 *v51;  // rcx
    struct struct_0 **v53;  // rax
    struct_0 *v54;  // rcx
    struct struct_0 **v56;  // rax
    struct_0 *v57;  // rcx
    unsigned long long v58[3];  // rax
    struct struct_0 **v59;  // rax
    unsigned long long v60[3];  // rax
    char v61;  // r15b
    int v62;  // xmm0
    int v63;  // xmm1
    int v64;  // xmm2

    v40 = __rust_alloc(2, 1);
    if (!v40)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    *(v40) = 30840;
    v41 = __rust_alloc(1, 1);
    if (!v41)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    *(v41) = 47;
    v42 = __rust_alloc(3, 1);
    if (!v42)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    *((char *)&v42[1]) = 43;
    *(v42) = 30556;
    v26 = 0;
    v21 = 1;
    v22 = 0;
    v10 = 2;
    v11 = v40;
    v12 = 2;
    v13 = 1;
    v14 = v41;
    v15 = 1;
    v16 = 3;
    v17 = v42;
    v18 = 3;
    v19 = 72;
    v20 = 3;
    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "traditionalflag-truncationmacro-na", 11))
    {
        v43 = __rust_alloc(24, 8);
        if (!v43)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v43->field_0 = 1;
        v43->field_8 = "GNU extensions";
        v43->field_10 = 14;
        goto LABEL_53852c;
    }
    v21 = 0;
    v26 = 1;
    v18 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::ha3d3a3f12cc96e65(&v16, 0, 7);
    v42 = v17;
    v44 = v18;
    *((int *)(3 + (char *)v42 + v44)) = 727517705;
    *((int *)((char *)v42 + v44)) = 153116251;
    v18 = v44 + 7;
    v45 = a1->field_8;
    v46 = a1->field_10;
    if (v46)
    {
        v47 = 0;
        while (!(*((long long *)(v45 + v47 + 8)) == 15) || !(!(*((long long *)&(&v48->padding_4)[1]) ^ 8104339024211225957)) || !(!(*((long long *)&v48->field_0) ^ 7305804402549220723)))
        {
            v47 += 2;
            if (v46 << 4 == v47)
                goto LABEL_5385a3;
        }
        v43 = __rust_alloc(24, 8);
        if (v43)
        {
            v43->field_0 = 1;
            v43->field_8 = "-S-:assertion failed: beg <= endassertion failed: max_before_size >= before.len()assertion failed: max_after_size >= after.len()\\$\\$ {}{}. \"\" \"\"";
            v43->field_10 = 2;
            goto LABEL_53852c;
        }
    }
    else
    {
LABEL_5385a3:
        v22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "auto-referencetraditionalflag-truncationmacro-na", 14);
        v23 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "referenceswidt", 10);
        v24 = (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "right-side-refssentence-regexpformat=texword-regexpbreak-fi", 15) & v24;
        v25 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "ignore-caseignore-fileonly-fil", 11);
        if (!v46)
        {
LABEL_53896b:
            if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "format=roffright-side-refssentence-regexpformat=texword-regexpbreak-fi", 11))
                v26 = 1;
            if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "format=texword-regexpbreak-fi", 10))
                v26 = 2;
            a0->field_50 = v20;
            a0->field_58 = *((int *)&v21);
            a0->field_5c = v25;
            a0->field_5d = v26;
            a0->field_5e = *((short *)&v27);
            a0->field_40 = *((int128_t *)&v18);
            v62 = *((int128_t *)&v10);
            v63 = *((int128_t *)&v12);
            v64 = *((int128_t *)&v14);
            a0->field_30 = *((int128_t *)&v16);
            *((void*)&a0->field_20) = v64;
            *((void*)&a0->field_10) = v63;
            *((void*)&a0->field_0) = v62;
            return a0;
        }
        else
        {
            v49 = v46 * 16;
            v50 = 0;
            while (!(*((long long *)(v45 + v50 + 8)) == 10) || !(!((short)v51->field_7 ^ 25965)) || !(!(*((long long *)&v51->field_0) ^ 7020598825800917357)))
            {
                v50 += 2;
                if (v49 == v50)
                    goto LABEL_538700;
            }
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h504e7d68495df5f5(&v6, a1, "macro-na", 10);
            v0 = "macro-na";
            v1 = 10;
            if (*((int *)&v6) != 2)
            {
                vvar_850{stack -104} = *((long long *)&v9);
                vvar_851{stack -120} = *((int128_t *)&v8);
                vvar_852{stack -136} = *((int128_t *)&v6);
                vvar_853{stack -320} = &v0;
                vvar_854{stack -312} = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4a938260ea6c0532;
                vvar_855{stack -304} = &v31;
                vvar_856{stack -296} = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
                vvar_857{stack -96} = &anon.982ebfe6603d1d7445e24895863ba0e8.2.llvm.17676394313059082282;
                vvar_858{stack -88} = 2;
                vvar_859{stack -64} = 0;
                vvar_860{stack -80} = &v2;
                vvar_861{stack -72} = 2;
                core::panicking::panic_fmt::he12d0d7468628bb4(&v34); /* do not return */
            }
            if (!*((long long *)&v7))
            {
                goto LABEL_538b25;
            }
            else
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v34, *((long long *)&v7));
                if (v10)
                    __rust_dealloc(v11);
                v12 = v36;
                *((int128_t *)&v10) = *((int128_t *)&v34);
            }
LABEL_538700:
            v53 = 0;
            while (!(*((long long *)(v45 + v53 + 8)) == 15) || !(!(*((long long *)&(&v54->padding_4)[1]) ^ 7957695015157984885)) || !(!(*((long long *)&v54->field_0) ^ 8462954388139371622)))
            {
                v53 += 2;
                if (v49 == v53)
                    goto LABEL_5387d2;
            }
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h504e7d68495df5f5(&v6, a1, "flag-truncationmacro-na", 15);
            v0 = "flag-truncationmacro-na";
            v1 = 15;
            if (*((int *)&v6) != 2)
            {
                vvar_863{stack -104} = *((long long *)&v9);
                vvar_864{stack -120} = *((int128_t *)&v8);
                vvar_865{stack -136} = *((int128_t *)&v6);
                vvar_866{stack -320} = &v0;
                vvar_867{stack -312} = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4a938260ea6c0532;
                vvar_868{stack -304} = &v31;
                vvar_869{stack -296} = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
                vvar_870{stack -96} = &anon.982ebfe6603d1d7445e24895863ba0e8.2.llvm.17676394313059082282;
                vvar_871{stack -88} = 2;
                vvar_872{stack -64} = 0;
                vvar_873{stack -80} = &v2;
                vvar_874{stack -72} = 2;
                core::panicking::panic_fmt::he12d0d7468628bb4(&v34); /* do not return */
            }
            if (!*((long long *)&v7))
            {
                goto LABEL_538b25;
            }
            else
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v34, *((long long *)&v7));
                if (v13)
                    __rust_dealloc(v14);
                v15 = v36;
                *((int128_t *)&v13) = *((int128_t *)&v34);
            }
LABEL_5387d2:
            v56 = 0;
            while (!(*((long long *)(v45 + v56 + 8)) == 5) || !(!(v57->padding_4[0] ^ 104)) || !(!(v57->field_0 ^ 1952737655)))
            {
                v56 += 2;
                if (v49 == v56)
                    goto LABEL_53888e;
            }
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h504e7d68495df5f5(&v6, a1, "widt", 5);
            v0 = "widt";
            v1 = 5;
            if (*((int *)&v6) != 2)
            {
                vvar_876{stack -104} = *((long long *)&v9);
                vvar_877{stack -120} = *((int128_t *)&v8);
                vvar_878{stack -136} = *((int128_t *)&v6);
                vvar_879{stack -320} = &v0;
                vvar_880{stack -312} = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4a938260ea6c0532;
                vvar_881{stack -304} = &v31;
                vvar_882{stack -296} = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
                vvar_883{stack -96} = &anon.982ebfe6603d1d7445e24895863ba0e8.2.llvm.17676394313059082282;
                vvar_884{stack -88} = 2;
                vvar_885{stack -64} = 0;
                vvar_886{stack -80} = &v2;
                vvar_887{stack -72} = 2;
                core::panicking::panic_fmt::he12d0d7468628bb4(&v34); /* do not return */
            }
            v58 = *((long long *)&v7);
            if (!v58)
                goto LABEL_538b25;
            core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v28, v58[1], v58[2]);
            if (!(!v28))
                goto LABEL_538929;
            v19 = *((long long *)&v30);
LABEL_53888e:
            v59 = 0;
            while (!(*((long long *)(v45 + v59 + 8)) == 8) || !(*((long long *)*((long long *)(v45 + v59))) == 7312272888393916775))
            {
                v59 += 2;
                if (v49 == v59)
                    goto LABEL_53896b;
            }
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h504e7d68495df5f5(&v6, a1, &anon.e23289579c9441ef21ddb87efb4b8a29.20.llvm.16528050568364581840, 8);
            v0 = &anon.e23289579c9441ef21ddb87efb4b8a29.20.llvm.16528050568364581840;
            v1 = 8;
            if (*((int *)&v6) != 2)
            {
                v33 = *((long long *)&v9);
                *((int128_t *)&v32) = *((int128_t *)&v8);
                *((int128_t *)&v31) = *((int128_t *)&v6);
                v2 = &v0;
                v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4a938260ea6c0532;
                v4 = &v31;
                v5 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
                v34 = &anon.982ebfe6603d1d7445e24895863ba0e8.2.llvm.17676394313059082282;
                v35 = 2;
                v38 = 0;
                v36 = &v2;
                v37 = 2;
                core::panicking::panic_fmt::he12d0d7468628bb4(&v34); /* do not return */
            }
            v60 = *((long long *)&v7);
            if (!v60)
            {
LABEL_538b25:
                core::option::expect_failed::h9e03a1f6ff88dbcf(); /* do not return */
            }
            core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v28, v60[1], v60[2]);
            if (!v28)
            {
                v20 = *((long long *)&v30);
                goto LABEL_53896b;
            }
            else
            {
LABEL_538929:
                v61 = v29;
                v43 = __rust_alloc(24, 8);
                if (v43)
                {
                    v43->field_0 = 2;
                    v43->field_1 = v61;
LABEL_53852c:
                    *((struct_4 **)&a0->padding_8[0]) = v43;
                    a0->field_10 = &g_67b3c0;
                    a0->field_0 = 0x8000000000000000;
                    if (v10)
                        __rust_dealloc(v11);
                    if (v13)
                        __rust_dealloc(v14);
                    if (v16)
                    {
                        __rust_dealloc(v42);
                        return a0;
                    }
                    return a0;
                }
            }
        }
    }
    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
}
