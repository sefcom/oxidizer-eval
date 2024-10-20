long long uu_mktemp::Options::from::h70b375f09e130fbc(struct_3 *a0, struct_1 *a1)
{
    unsigned long long v0;  // [sp-0x138]
    unsigned int v1;  // [sp-0x130]
    char v2;  // [sp-0x129]
    unsigned long long v3;  // [sp-0x128]
    unsigned long long v4;  // [sp-0x120], Other Possible Types: unsigned long
    unsigned long long *v5;  // [sp-0x118], Other Possible Types: unsigned long long, unsigned long
    unsigned long v6;  // [sp-0x110], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x108]
    void* v8;  // [sp-0x100]
    unsigned long long v9;  // [sp-0xf0]
    unsigned long v10;  // [sp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0xe0]
    void* v12;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0xd0]
    unsigned long long v14;  // [sp-0xc8]
    unsigned long v15;  // [sp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0xb8]
    unsigned long long v17;  // [sp-0xb0]
    unsigned long long v18;  // [sp-0xa8]
    char v19;  // [bp-0xa0]
    char v20;  // [bp-0x98]
    char v21;  // [bp-0x90]
    char v22;  // [bp-0x80]
    unsigned long long v23;  // [sp-0x78]
    unsigned long long *v24;  // [sp-0x70]
    int v25;  // [sp-0x68]
    int v26;  // [sp-0x58]
    unsigned long long v27;  // [sp-0x48]
    unsigned long long v28;  // [sp-0x38]
    unsigned long long v30[3];  // rax
    void* v31;  // rbx
    unsigned long long v32;  // rdi
    unsigned long long v34;  // r14
    unsigned long long v35;  // rsi
    unsigned long long v36;  // rbp
    unsigned long long *v37;  // rax
    unsigned long long v39;  // rax
    unsigned long long v40;  // rax
    unsigned long v41;  // rcx
    struct struct_0 **v42;  // rcx
    struct struct_0 **v43;  // rdx
    struct_0 *v44;  // rdi
    unsigned long long v50;  // r14

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::ha98dac0a1dd4d472(&v19, a1, "tmpdirptcould not persist file with --suffix, template  must end in Xtoo few X's in template invalid template, , contains directory separatorinvalid suffix ; with --tmpdir, it may not be absolute", 6);
    v10 = "tmpdirptcould not persist file with --suffix, template  must end in Xtoo few X's in template invalid template, , contains directory separatorinvalid suffix ; with --tmpdir, it may not be absolute";
    v11 = 6;
    if (*((int *)&v19) != 2)
    {
        v27 = *((long long *)&v22);
        *((int128_t *)&v26) = *((int128_t *)&v21);
        *((int128_t *)&v25) = *((int128_t *)&v19);
        v15 = &v10;
        v16 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha50f48721d06c012;
        v17 = &v25;
        v18 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
        v4 = &anon.08ab9350983c8f7cbc8ec591dd15aaf2.4.llvm.3973582617909744789;
        v5 = 2;
        v8 = 0;
        v6 = &v15;
        v7 = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v4); /* do not return */
    }
    v14 = 0x8000000000000000;
    v30 = *((long long *)&v20);
    if (!v30)
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::ha98dac0a1dd4d472(&v19, a1, "ptcould not persist file with --suffix, template  must end in Xtoo few X's in template invalid template, , contains directory separatorinvalid suffix ; with --tmpdir, it may not be absolute", 1);
        v10 = "ptcould not persist file with --suffix, template  must end in Xtoo few X's in template invalid template, , contains directory separatorinvalid suffix ; with --tmpdir, it may not be absolute";
        v11 = 1;
        if (*((int *)&v19) != 2)
        {
            vvar_681{stack -72} = *((long long *)&v22);
            vvar_682{stack -88} = *((int128_t *)&v21);
            vvar_683{stack -104} = *((int128_t *)&v19);
            vvar_684{stack -192} = &v10;
            vvar_685{stack -184} = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha50f48721d06c012;
            vvar_686{stack -176} = &v25;
            vvar_687{stack -168} = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
            vvar_688{stack -288} = &anon.08ab9350983c8f7cbc8ec591dd15aaf2.4.llvm.3973582617909744789;
            vvar_689{stack -280} = 2;
            vvar_690{stack -256} = 0;
            vvar_691{stack -272} = &v15;
            vvar_692{stack -264} = 2;
            core::panicking::panic_fmt::he12d0d7468628bb4(&v4); /* do not return */
        }
        v30 = *((long long *)&v20);
        if (!v30)
        {
            v3 = 0x8000000000000000;
            goto LABEL_487608;
        }
    }
    v31 = v30[1];
    v3 = v30[2];
    if (!v3)
    {
        v32 = 1;
        goto LABEL_4875eb;
    }
    else
    {
        if (v3 < 0)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v32 = __rust_alloc(v3, 1);
        if (v32)
        {
LABEL_4875eb:
            v12 = v32;
            memcpy(v12, v31, v3);
LABEL_487608:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc681b659026cc63e(&v19, a1, "templateDeadlock", 8);
            v10 = "templateDeadlock";
            v11 = 8;
            if (*((int *)&v19) != 2)
            {
                v27 = *((long long *)&v22);
                *((int128_t *)&v26) = *((int128_t *)&v21);
                *((int128_t *)&v25) = *((int128_t *)&v19);
                v15 = &v10;
                v16 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha50f48721d06c012;
                v17 = &v25;
                v18 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
                v4 = &anon.08ab9350983c8f7cbc8ec591dd15aaf2.4.llvm.3973582617909744789;
                v5 = 2;
                v8 = 0;
                v6 = &v15;
                v7 = 2;
                core::panicking::panic_fmt::he12d0d7468628bb4(&v4); /* do not return */
            }
            v34 = *((long long *)&v20);
            if (v34)
            {
                std::env::_var::h2f29fdf15fefb03a(&v4, "TMPDIRXXXsrc/uu/mktemp/src/mktemp.rs", 6);
                if (v4)
                {
                    v35 = v5;
                    if (v35 != 0x8000000000000000 && v35)
                        __rust_dealloc(v6);
                }
                else
                {
                    if (v5)
                        __rust_dealloc(v6);
                    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "tcould not persist file with --suffix, template  must end in Xtoo few X's in template invalid template, , contains directory separatorinvalid suffix ; with --tmpdir, it may not be absolute", 1))
                    {
                        std::env::_var_os::h952923dbab063a4b(&v4, "TMPDIRXXXsrc/uu/mktemp/src/mktemp.rs", 6);
                        goto LABEL_4877dc;
                    }
                }
                v39 = v3;
                if (v9 != 0x8000000000000000)
                {
                    v1 = 0;
                    v9 = v39;
                    v12 = v12;
                    goto LABEL_487889;
                }
                if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "tcould not persist file with --suffix, template  must end in Xtoo few X's in template invalid template, , contains directory separatorinvalid suffix ; with --tmpdir, it may not be absolute", 1))
                {
                    std::env::temp_dir::h5c298e5697888810(&v4);
LABEL_4877dc:
                    v0 = v4;
                    v9 = v6;
                    v1 = v9 | -0x100 | 1;
                }
                else
                {
                    v40 = a1->field_10;
                    v1 = v41 | -0x100 | 1;
                    if (v40)
                    {
                        v42 = a1->field_8;
                        v43 = 0;
                        while (!(*((long long *)(v42 + v43 + 8)) == 6) || !(!(v44->field_4 ^ 29289)) || !(!(v44->field_0 ^ 1685089652)))
                        {
                            v43 += 2;
                            if (v40 << 4 == v43)
                                goto LABEL_48787f;
                        }
                    }
                    else
                    {
LABEL_48787f:
                        v39 = 0x8000000000000000;
LABEL_487889:
                        v0 = v39;
                    }
                }
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v4, v34);
                v13 = v4;
                v24 = v5;
            }
            else
            {
                v9 = v3;
                v0 = v9;
                v12 = v12;
                if (v9 == 0x8000000000000000)
                {
                    std::env::temp_dir::h5c298e5697888810(&v4);
                    v0 = v4;
                    v9 = v6;
                    v12 = v5;
                }
                v13 = 14;
                v37 = __rust_alloc(14, 1);
                if (!v37)
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                *((long long *)((char *)v37 + 6)) = 6365935209750747224;
                v24 = v37;
                *(v37) = 6365935209047682420;
                v1 = 0;
            }
            v28 = 14;
            v23 = v36;
            v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "directorydry-runquietsuffixtmpdirptcould not persist file with --suffix, template  must end in Xtoo few X's in template invalid template, , contains directory separatorinvalid suffix ; with --tmpdir, it may not be absolute", 9);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc681b659026cc63e(&v19, a1, "suffixtmpdirptcould not persist file with --suffix, template  must end in Xtoo few X's in template invalid template, , contains directory separatorinvalid suffix ; with --tmpdir, it may not be absolute", 6);
            v10 = "suffixtmpdirptcould not persist file with --suffix, template  must end in Xtoo few X's in template invalid template, , contains directory separatorinvalid suffix ; with --tmpdir, it may not be absolute";
            v11 = 6;
            if (*((int *)&v19) != 2)
            {
                v27 = *((long long *)&v22);
                *((int128_t *)&v26) = *((int128_t *)&v21);
                *((int128_t *)&v25) = *((int128_t *)&v19);
                v15 = &v10;
                v16 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha50f48721d06c012;
                v17 = &v25;
                v18 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
                v4 = &anon.08ab9350983c8f7cbc8ec591dd15aaf2.4.llvm.3973582617909744789;
                v5 = 2;
                v8 = 0;
                v6 = &v15;
                v7 = 2;
                core::panicking::panic_fmt::he12d0d7468628bb4(&v4); /* do not return */
            }
            v23 = v23;
            if (*((long long *)&v20))
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v4, *((long long *)&v20));
                v14 = v4;
                v23 = v6;
                v50 = v5;
            }
            a0->field_0 = v13;
            a0->field_8 = v24;
            a0->field_10 = v28;
            a0->field_48 = v2;
            a0->field_49 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "dry-runquietsuffixtmpdirptcould not persist file with --suffix, template  must end in Xtoo few X's in template invalid template, , contains directory separatorinvalid suffix ; with --tmpdir, it may not be absolute", 7);
            a0->field_4a = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "quietsuffixtmpdirptcould not persist file with --suffix, template  must end in Xtoo few X's in template invalid template, , contains directory separatorinvalid suffix ; with --tmpdir, it may not be absolute", 5);
            a0->field_18 = v0;
            a0->field_20 = v23;
            a0->field_28 = v9;
            a0->field_30 = v14;
            a0->field_38 = v50;
            a0->field_40 = v23;
            a0->field_4b = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "tcould not persist file with --suffix, template  must end in Xtoo few X's in template invalid template, , contains directory separatorinvalid suffix ; with --tmpdir, it may not be absolute", 1);
            if (!(char)v1)
            {
                return a0;
            }
            else if (!v3 << 1)
            {
                return a0;
            }
            else
            {
                __rust_dealloc(v12);
                return a0;
            }
        }
    }
}
