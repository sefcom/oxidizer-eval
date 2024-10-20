long long uu_df::columns::Column::from_matches::hf48d35fe8816fad6(unsigned long long a0[4], struct_5 *a1)
{
    struct_1 *v0;  // [sp-0xe0]
    void* v1;  // [sp-0xd8]
    unsigned long long *v2;  // [sp-0xd0], Other Possible Types: unsigned long long
    unsigned long long *v3;  // [sp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0xc0]
    unsigned long long v5;  // [sp-0xb8]
    unsigned long long *v6;  // [sp-0xb0]
    void* v7;  // [sp-0xa8], Other Possible Types: unsigned long, unsigned long long
    char *v8;  // [sp-0xa0], Other Possible Types: unsigned long long
    char *v9;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x90]
    void* v11;  // [sp-0x88]
    unsigned long long v12;  // [sp-0x78]
    unsigned long long v13;  // [sp-0x70]
    unsigned long v15;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x58]
    unsigned long v17;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x48]
    unsigned long long v19;  // [sp-0x40]
    unsigned long long v20;  // [sp-0x38]
    char v22;  // bpl
    char v23;  // al
    unsigned long long v24;  // rcx
    struct struct_0 **v25;  // rdx
    unsigned long long v26;  // rcx
    struct_3 *v27;  // r8
    struct struct_0 **v28;  // rsi
    void* v29;  // rdi
    struct_0 *v30;  // r9
    unsigned long long v31;  // rsi
    struct_3 *v32;  // r15
    char v33;  // dil
    struct_4 *v34;  // rax
    struct_0 *v35;  // rax
    struct struct_0 **v36;  // rax
    void* v37;  // rdi
    struct_0 *v38;  // r8
    unsigned long long v39;  // r14
    unsigned long long v40;  // rax
    unsigned long v41;  // rdx
    struct_2 *v42;  // r12
    char *v43;  // r13
    void* v44;  // rdi
    unsigned long long v46;  // r14
    struct_7 *v47;  // rax
    unsigned long v48;  // r15
    void* *v49;  // rbp
    void* *v50;  // r14
    struct_1 *v51;  // r13
    unsigned long long *v52;  // rbp
    unsigned long long *v53;  // rcx
    unsigned long long *v54;  // rax
    unsigned int v55;  // eax
    unsigned int v56;  // ecx
    char *v57;  // r13
    unsigned long long v58;  // r14

    v22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "print-typeexclude-typesourcefstypeitotaliusediavailipcentavailpcenttarget--block-size argument  too largeinvalid --block-size argument invalid suffix in --block-size argument option --output: field  used more than once: file system type  both selected and ", 10);
    v23 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "inodeslocalno-syncoutp", 6);
    v24 = a1->field_10;
    if (!v24)
    {
LABEL_49ad18:
        if (v22)
        {
            if (!(!v23))
                goto LABEL_49ad25;
            goto LABEL_49adc2;
        }
        else
        {
            if (!v23)
                goto LABEL_49aee7;
LABEL_49ad61:
            v35 = __rust_alloc(6, 1);
            if (!v35)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v35->field_0 = 0x8070600;
            v35->field_4 = 1289;
        }
    }
    else
    {
        v25 = a1->field_8;
        v26 = v24 * 16;
        v27 = 97;
        v28 = 0;
        v29 = 0;
        while (!(*((long long *)(v25 + v28 + 8)) == 6) || !(!(v30->field_4 ^ 29813)) || !(!(v30->field_0 ^ 1886680431)))
        {
            v28 += 2;
            v27 = &v27[1].padding_1[31];
            v29 += 1;
            if (v26 == v28)
                goto LABEL_49ad18;
        }
        v31 = a1->field_28;
        if (v29 >= v31)
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        v32 = a1->field_20;
        v33 = *((char *)(v32 + v27));
        if (v33 == 3)
            goto LABEL_49ad18;
        if (v22)
        {
            if (!v23)
            {
                if (v33 == 2)
                    core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
            }
            else
            {
                if (v33 == 2)
                    core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
LABEL_49ad25:
                v34 = __rust_alloc(7, 1);
                if (v34)
                {
                    v34->field_0 = 0x7060b00;
                    v34->field_4 = 2312;
                    v34->field_6 = 5;
                    a0[1] = 7;
                    a0[2] = v34;
                    a0[3] = 7;
                    a0[0] = 0;
                    return a0;
                }
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            }
LABEL_49adc2:
            v34 = __rust_alloc(7, 1);
            if (v34)
            {
                v34->field_0 = 0x2010b00;
                v34->field_4 = 1027;
                v34->field_6 = 5;
                a0[1] = 7;
                a0[2] = v34;
                a0[3] = 7;
                a0[0] = 0;
                return a0;
            }
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        }
        else if (v23)
        {
            if (v33 == 2)
                core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
            goto LABEL_49ad61;
        }
        else
        {
            if (v33 == 2)
            {
                v36 = 0;
                v37 = 0;
                while (*((long long *)(v25 + v36 + 8)) != 6 || (v38 = *((long long *)(v25 + v36)), !(!(v38->field_4 ^ 29813)) || !(!(v38->field_0 ^ 1886680431))))
                {
                    v36 += 2;
                    v32 = &v32[1].padding_1[31];
                    v37 += 1;
                    if (v26 == v36)
                        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                }
                if (v37 >= v31)
                    core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                v39 = 15398537441398644645;
                v40 = clap_builder::parser::matches::matched_arg::MatchedArg::infer_type_id::h5ad55dcf3b057a0f(v32, 9479156756246622757);
                if (!(v40 == 9479156756246622757 && v41 == 15398537441398644645))
                {
                    v15 = "outp";
                    v16 = 6;
                    v1 = 0;
                    v2 = v40;
                    v3 = v41;
                    v4 = 9479156756246622757;
                    v5 = 15398537441398644645;
                    v17 = &v15;
                    v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h426ccf1a1651f065;
                    v19 = &v1;
                    v20 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
                    v7 = &anon.37e8404f29ea422d3c165b81a7597284.5.llvm.3498370989897006048;
                    v8 = 2;
                    v11 = 0;
                    v9 = &v17;
                    v10 = 2;
                    core::panicking::panic_fmt::he12d0d7468628bb4(&v7); /* do not return */
                }
                v42 = v32->field_38;
                v1 = 0;
                v2 = 8;
                v3 = 0;
                v7 = 0;
                v8 = 1;
                v43 = 0;
                v44 = 0;
                v12 = &(&v42->field_-10)[3 * v32->field_40];
                v12 = v12;
                while (true)
                {
                    v9 = v43;
                    if (!(v44) || !(v44 != v39))
                    {
                        if (!v42 || v42 == v12)
                        {
                            a0[3] = v9;
                            *((int128_t *)&a0[1]) = *((int128_t *)&v7);
                            a0[0] = 0;
                            break;
                        }
                        else
                        {
                            v46 = *((long long *)&v42->padding_-8[8]);
                            v42 = &v42->padding_-8[16];
                            if (!v46)
                                continue;
                            v44 = *((long long *)&v42->padding_-8[8]);
                            v39 = v46 * 32 + v44;
                        }
                    }
                    v13 = v44;
                    v47 = clap_builder::parser::matches::arg_matches::unwrap_downcast_ref$u7b$$u7b$reify.shim$u7d$$u7d$::h61ac1bce0ace6fa4(v13);
                    v39 = v39;
                    v0 = v47->field_8;
                    v48 = v47->field_10;
                    v49 = v2;
                    v6 = v3;
                    if (v6)
                    {
                        v50 = 0;
                        do
                        {
                            if (v48 == *((long long *)(v49 + v50 + 8)) && !bcmp(*((long long *)(v49 + v50)), v0, v48))
                            {
                                if (!v48)
                                {
                                    v58 = 1;
LABEL_49b243:
                                    memcpy(v58, v0, v48);
                                    a0[1] = v48;
                                    a0[2] = v58;
                                    a0[3] = v48;
                                    a0[0] = 1;
                                    if (v7)
                                    {
                                        __rust_dealloc(v8);
                                        goto LABEL_49b27c;
                                    }
                                }
                                else
                                {
                                    if (v48 < 0)
                                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                                    v58 = __rust_alloc(v48, 1);
                                    if (v58)
                                        goto LABEL_49b243;
                                }
                            }
                        } while ((v50 += 16, v6 << 4 != v50));
                    }
                    v51 = v0;
                    if (v6 == v1)
                    {
                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h96a3f2950530466d(&v1);
                        v52 = v2;
                    }
                    v53 = v6;
                    v54 = v53 * 16;
                    *((struct_1 **)(v52 + v54)) = v51;
                    *((unsigned long *)(v52 + v54 + 8)) = v48;
                    v3 = (char *)v53 + 1;
                    if (v48 == 4)
                    {
                        switch (v51->field_0)
                        {
                        case 1684370293:
                            break;
                        case 1701603686:
LABEL_49b1bf:
                            v57 = v9;
                            if (v57 == v7)
                                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h70312c3bec333552(&v7);
                            v44 = v13 + 32;
                            *((char *)(v8 + v57)) = 1;
                            v43 = v57 + 1;
                            v12 = v12;
                            continue;
                        default:
LABEL_49b3bc:
                            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                        }
                    }
                    else
                    {
                        if (v48 != 5)
                        {
                            if (v48 != 6)
                                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                            if (!(*((short *)&v51->field_4) ^ 25955) && !(v51->field_0 ^ 1920298867))
                            {
                                goto LABEL_49b1bf;
                            }
                            else
                            {
                                if (!(*((short *)&v51->field_4) ^ 25968) && !(v51->field_0 ^ 2037674854))
                                {
                                    goto LABEL_49b1bf;
                                }
                                else
                                {
                                    if (!(*((short *)&v51->field_4) ^ 27745) && !(v51->field_0 ^ 1953461353))
                                    {
                                        goto LABEL_49b1bf;
                                    }
                                    else
                                    {
                                        if (!(*((short *)&v51->field_4) ^ 27753) && !(v51->field_0 ^ 1635148137))
                                        {
                                            goto LABEL_49b1bf;
                                        }
                                        else
                                        {
                                            if (!(*((short *)&v51->field_4) ^ 29806) && !(v51->field_0 ^ 1701015657))
                                            {
                                                goto LABEL_49b1bf;
                                            }
                                            else
                                            {
                                                v55 = v51->field_0 ^ 1735549300;
                                                v56 = *((short *)&v51->field_4) ^ 29797;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else if (!(v51->field_4 ^ 100) && !(v51->field_0 ^ 1702065513))
                        {
                            goto LABEL_49b1bf;
                        }
                        else if (!(v51->field_4 ^ 108) && !(v51->field_0 ^ 1767994977))
                        {
                            goto LABEL_49b1bf;
                        }
                        else
                        {
                            v55 = v51->field_0 ^ 1852138352;
                            v56 = v51->field_4 ^ 116;
                        }
                        if (!v56 && !v55)
                            goto LABEL_49b1bf;
                        else
                            goto LABEL_49b3bc;
                    }
                }
LABEL_49b27c:
                if (v1)
                {
                    __rust_dealloc(v2);
                    return a0;
                }
                return a0;
            }
LABEL_49aee7:
            v35 = __rust_alloc(6, 1);
            if (!v35)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v35->field_0 = 0x3020100;
            v35->field_4 = 1284;
        }
    }
    a0[1] = 6;
    a0[2] = v35;
    a0[3] = 6;
    a0[0] = 0;
    return a0;
}
