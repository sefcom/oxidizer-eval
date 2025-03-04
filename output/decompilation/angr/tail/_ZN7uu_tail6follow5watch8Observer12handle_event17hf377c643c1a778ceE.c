long long uu_tail::follow::watch::Observer::handle_event::hf377c643c1a778ce(unsigned long long a0[3], struct_6 *a1, struct_1 *a2, struct_4 *a3)
{
    unsigned long long v0;  // [sp-0x310]
    unsigned long long v1;  // [sp-0x308]
    unsigned long long *v2;  // [sp-0x300]
    struct struct_0 **v3;  // [sp-0x2f8]
    struct struct_0 **v4;  // [sp-0x2f0], Other Possible Types: unsigned long long
    struct struct_0 **v5;  // [sp-0x2e8]
    struct struct_0 **v6;  // [bp-0x2e0], Other Possible Types: unsigned long long
    struct struct_0 **v7;  // [sp-0x2d8], Other Possible Types: unsigned long
    char v8;  // [sp-0x2d0]
    struct struct_0 **v9;  // [sp-0x2c8], Other Possible Types: unsigned long
    struct struct_0 **v10;  // [sp-0x2c8], Other Possible Types: unsigned long
    char v11;  // [sp-0x2c0], Other Possible Types: unsigned long, unsigned long long
    struct struct_0 **v12;  // [sp-0x2b8], Other Possible Types: unsigned long, unsigned long long
    struct struct_0 **v13;  // [bp-0x2b0], Other Possible Types: unsigned int, unsigned long long
    void* v14;  // [sp-0x2a8], Other Possible Types: unsigned long long
    struct struct_0 **v15;  // [sp-0x2a0]
    char v16;  // [bp-0x1e8]
    char v17;  // [bp-0x1e0]
    void* v18;  // [sp-0x1d0]
    unsigned long long v19;  // [sp-0x1c8]
    void* v20;  // [sp-0x1c0]
    struct struct_0 **v21;  // [sp-0x1b8]
    struct struct_0 **v22;  // [sp-0x1b0], Other Possible Types: unsigned long long
    struct struct_0 **v23;  // [sp-0x1a8], Other Possible Types: unsigned long long
    struct struct_0 **v24;  // [sp-0x1a0], Other Possible Types: unsigned long long
    void* v25;  // [sp-0x198]
    char v26;  // [bp-0xe0]
    char v27;  // [bp-0xb8]
    char v28;  // [bp-0xa8]
    unsigned long long v30;  // r15
    unsigned long long v31[3];  // r13
    unsigned int v32;  // eax
    unsigned int v33;  // eax
    unsigned int v34;  // eax
    char v35;  // al
    unsigned long long v36[3];  // r14
    unsigned int v37;  // r15d
    struct_3 *v38;  // rax
    unsigned long v39;  // rdx
    unsigned long long v40;  // rbx
    unsigned long long v41;  // r14
    struct_7 *v42;  // rax
    unsigned int v45;  // ecx
    unsigned int v46;  // ecx
    struct struct_0 **v47;  // rdx
    unsigned long long v49[3];  // rcx
    unsigned long long v50;  // rax
    unsigned long v51;  // rdx
    struct struct_0 **v52;  // rdx
    struct struct_0 **v53;  // rdx
    struct_7 *v54;  // r15
    struct struct_0 **v55;  // rdx
    struct struct_0 **v56;  // rdx
    struct struct_0 **v57;  // rdx
    unsigned long long v58;  // rax
    unsigned long long v59[3];  // rcx
    unsigned long v60;  // rdx
    struct struct_0 **v61;  // rdx
    unsigned long long v62;  // rdx
    unsigned long v63;  // rdx
    unsigned long long v64[3];  // rcx
    unsigned long long v65;  // rax
    unsigned long long v66[3];  // rcx

    v30 = a2->field_10;
    if (!v30)
        core::option::unwrap_failed::h0e11329e76906eaa(&g_5bc098); /* do not return */
    v31 = a2->field_8;
    v18 = 0;
    v19 = 8;
    v20 = 0;
    v2 = &a1->padding_38[0];
    v0 = v31[1];
    v1 = v31[2];
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v16, uu_tail::follow::files::FileHandling::get::ha1f26ea8b12ea1ff(&a1->padding_38, v0, v1) + 176);
    v32 = a2->field_20;
    if (v32 == 2)
    {
        if (a2->field_21 == 3)
        {
            vvar_1465{reg 24} = a0;
            v66[2] = v20;
            *((int128_t *)&v66[0]) = *((int128_t *)&v18);
            ::0x503b90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&v16);
            return v65;
        }
        goto LABEL_506113;
    }
    else
    {
        if (v32 == 3)
        {
            v33 = a2->field_21;
            if (v33 == 1)
            {
                if (a2->field_22)
                {
                    vvar_1470{reg 24} = a0;
                    v66[2] = v20;
                    *((int128_t *)&v66[0]) = *((int128_t *)&v18);
                    ::0x503b90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&v16);
                    return v65;
                }
                goto LABEL_506113;
            }
            if (v33 == 2)
            {
                if ((a2->field_22 & 5))
                {
                    vvar_1475{reg 24} = a0;
                    v66[2] = v20;
                    *((int128_t *)&v66[0]) = *((int128_t *)&v18);
                    ::0x503b90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&v16);
                    return v65;
                }
                goto LABEL_506113;
            }
            if (v33 != 3)
            {
                vvar_1460{reg 24} = a0;
                v66[2] = v20;
                *((int128_t *)&v66[0]) = *((int128_t *)&v18);
                ::0x503b90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&v16);
                return v65;
            }
            v34 = a2->field_22;
            if (v34 == 1)
            {
LABEL_506113:
                std::fs::metadata::h5a76b0b01e9dc15d(&v21, v0, v1);
                if ((int)v21 == 2)
                {
                    ::0x5040c0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he6af43ab7f514533(&v21);
                    vvar_1485{reg 24} = a0;
                    v66[2] = v20;
                    *((int128_t *)&v66[0]) = *((int128_t *)&v18);
                    ::0x503b90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&v16);
                    return v65;
                }
                memcpy(&v26, &v21, 176);
                v37 = 0xf000 & *((int *)&v28);
                if (v37 != 0x2000 && v37 != 0x8000)
                {
                    v42 = uu_tail::follow::files::FileHandling::get::ha1f26ea8b12ea1ff(v2, v0, v1);
                    if (v42->field_0 != 2)
                    {
                        if (v37 == 0x1000)
                            goto LABEL_506574;
                        v46 = 0xf000 & v42->field_38;
                        if (v46 == 0x1000 || v46 == 0x8000 || v46 == 0x2000)
                        {
                            if (v42->field_c8)
                            {
                                uu_tail::follow::files::FileHandling::reset_reader::h2b8bfb99f1a2f6b2(v2, v0, v1);
                            }
                            else
                            {
                                v5 = uucore::util_name::h60d842bf27b05e82();
                                v6 = v57;
                                v3 = &v5;
                                v4 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                                v9 = &g_5bbe20;
                                v11 = 2;
                                v14 = 0;
                                v12 = &v3;
                                v13 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&v9);
                                v5 = 0;
                                *((int128_t *)&v6) = *((int128_t *)&v17);
                                v8 = 1;
                                v3 = &v5;
                                v4 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                                v10 = &g_5bbfb8;
                                v11 = 2;
                                v14 = 0;
                                v12 = &v3;
                                v13 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&v9);
                            }
                        }
                    }
                    else
                    {
                        if (v37 == 0x1000)
                        {
LABEL_506194:
                            v5 = uucore::util_name::h60d842bf27b05e82();
                            v6 = v47;
                            v3 = &v5;
                            v4 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                            v9 = &g_5bbe20;
                            v11 = 2;
                            v14 = 0;
                            v12 = &v3;
                            v13 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v9);
                            v5 = 0;
                            *((int128_t *)&v6) = *((int128_t *)&v17);
                            v8 = 1;
                            v3 = &v5;
                            v4 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                            v10 = &g_5bbf58;
                            v11 = 2;
                            v14 = 0;
                            v12 = &v3;
                            v13 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v9);
                            v50 = uu_tail::follow::files::FileHandling::update_reader::haeff66f6ffe85304(v2, v0, v1);
                            if (!(!v50))
                                goto LABEL_506a60;
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0bc823050694df3d(&v9, v31);
                            v7 = v12;
                            *((int128_t *)&v5) = *((int128_t *)&v10);
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h1444e8e90e3da7b6(&v18, &v5);
                        }
                        else
                        {
                            if (!a3->field_48)
                                goto LABEL_506cbf;
                            if (a1->field_8e == 2 || (a1->field_8e & 1))
                            {
                                v5 = uucore::util_name::h60d842bf27b05e82();
                                v6 = v53;
                                v3 = &v5;
                                v4 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                                v9 = &g_5bbe20;
                                v11 = 2;
                                v14 = 0;
                                v12 = &v3;
                                v13 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&v9);
                                v5 = 0;
                                *((int128_t *)&v6) = *((int128_t *)&v17);
                                v8 = 1;
                                v3 = &v5;
                                v4 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                                v10 = &g_5bbfb8;
                                v11 = 2;
                                v14 = 0;
                                v12 = &v3;
                                v13 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&v9);
                                goto LABEL_506cbf;
                            }
                            v5 = uucore::util_name::h60d842bf27b05e82();
                            v6 = v52;
                            v3 = &v5;
                            v4 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                            v9 = &g_5bbe20;
                            v11 = 2;
                            v14 = 0;
                            v12 = &v3;
                            v13 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v9);
                            v5 = 0;
                            *((int128_t *)&v6) = *((int128_t *)&v17);
                            v8 = 1;
                            v3 = &v5;
                            v4 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                            v10 = &g_5bbfd8;
                            v11 = 2;
                            v14 = 0;
                            v12 = &v3;
                            v13 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v9);
                            if (a1->field_0 == 3)
                                core::option::unwrap_failed::h0e11329e76906eaa(&g_5bc0b0); /* do not return */
                            a1->field_18->field_20(&v9, a1->field_10, v0, v1);
                            ::0x504030::core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$notify..error..Error$GT$$GT$::h1955e5315261984f(&v9);
                            uu_tail::follow::files::FileHandling::remove::h9a608e9706c93353(&v9, v2, v0, v1);
                            ::0x503d30::core::ptr::drop_in_place$LT$uu_tail..follow..files..PathData$GT$::h0bd94260f77f0a2b(&v9);
                            if ((char)uu_tail::follow::files::FileHandling::no_files_remaining::hf3496cc0e002c3dd(v2, a3))
                            {
                                ::0x504300::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8732f121b58e7ba0(&v5);
                                v12 = v7;
                                *((int128_t *)&v9) = *((int128_t *)&v5);
                                v13 = 1;
                                v50 = ::0x5045f0::alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&v9);
                                v62 = &g_5bbdb0;
                                goto LABEL_506a60;
                            }
                        }
                    }
LABEL_506cbf:
                    memcpy(&v9, &v26, 176);
                    uu_tail::follow::files::FileHandling::update_metadata::h4aaaeb16ccacaf37(v2, v0, v1, &v9);
                    ::0x5040c0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he6af43ab7f514533(&v21);
                    vvar_1506{reg 24} = a0;
                    v66[2] = v20;
                    *((int128_t *)&v66[0]) = *((int128_t *)&v18);
                    ::0x503b90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&v16);
                    return v65;
                }
                else
                {
                    v42 = uu_tail::follow::files::FileHandling::get::ha1f26ea8b12ea1ff(v2, v0, v1);
                    if (v42->field_0 == 2)
                        goto LABEL_506194;
LABEL_506574:
                    v45 = 0xf000 & v42->field_38;
                    if (v45 != 0x1000 && v45 != 0x2000 && v45 != 0x8000)
                    {
                        v5 = uucore::util_name::h60d842bf27b05e82();
                        v6 = v55;
                        v3 = &v5;
                        v4 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                        v9 = &g_5bbe20;
                        v11 = 2;
                        v14 = 0;
                        v12 = &v3;
                        v13 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v9);
                        v5 = 0;
                        *((int128_t *)&v6) = *((int128_t *)&v17);
                        v8 = 1;
                        v3 = &v5;
                        v4 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        v10 = &g_5bbf38;
                        v11 = 2;
                        v14 = 0;
                        v12 = &v3;
                        v13 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v9);
                        v50 = uu_tail::follow::files::FileHandling::update_reader::haeff66f6ffe85304(v2, v0, v1);
                        goto LABEL_506a57;
                    }
                    if (!v42->field_c8)
                    {
                        v5 = uucore::util_name::h60d842bf27b05e82();
                        v6 = v56;
                        v3 = &v5;
                        v4 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                        v9 = &g_5bbe20;
                        v11 = 2;
                        v14 = 0;
                        v12 = &v3;
                        v13 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v9);
                        v5 = 0;
                        *((int128_t *)&v6) = *((int128_t *)&v17);
                        v8 = 1;
                        v3 = &v5;
                        v4 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        v10 = &g_5bbf58;
                        v11 = 2;
                        v14 = 0;
                        v12 = &v3;
                        v13 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v9);
                        v50 = uu_tail::follow::files::FileHandling::update_reader::haeff66f6ffe85304(v2, v0, v1);
                        goto LABEL_506a57;
                    }
                    v54 = v42;
                    if ((char)_$LT$notify..event..EventKind$u20$as$u20$core..cmp..PartialEq$GT$::eq::hdefd9549194a1b6f(&a2->field_20) || a1->field_8d && v54->field_28 != *((long long *)&v27))
                    {
                        v5 = uucore::util_name::h60d842bf27b05e82();
                        v6 = v61;
                        v3 = &v5;
                        v4 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                        v9 = &g_5bbe20;
                        v11 = 2;
                        v14 = 0;
                        v12 = &v3;
                        v13 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v9);
                        v5 = 0;
                        *((int128_t *)&v6) = *((int128_t *)&v17);
                        v8 = 1;
                        v3 = &v5;
                        v4 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        v10 = &g_5bbf78;
                        v11 = 2;
                        v14 = 0;
                        v12 = &v3;
                        v13 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v9);
                        v50 = uu_tail::follow::files::FileHandling::update_reader::haeff66f6ffe85304(v2, v0, v1);
                        goto LABEL_506a57;
                    }
                    else
                    {
                        _$LT$std..fs..Metadata$u20$as$u20$uu_tail..paths..MetadataExtTail$GT$::got_truncated::ha28743506d7e92e5(&v9, v54, &v26);
                        v50 = v9;
                        if (v50)
                        {
                            v62 = v11;
                        }
                        else
                        {
                            if (v11)
                            {
                                v5 = uucore::util_name::h60d842bf27b05e82();
                                v6 = v63;
                                v3 = &v5;
                                v4 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                                v9 = &g_5bbe20;
                                v11 = 2;
                                v14 = 0;
                                v12 = &v3;
                                v13 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&v9);
                                v5 = &v16;
                                v6 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                v10 = &g_5bbf98;
                                v11 = 2;
                                v14 = 0;
                                v12 = &v5;
                                v13 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&v9);
                                v50 = uu_tail::follow::files::FileHandling::update_reader::haeff66f6ffe85304(v2, v0, v1);
                            }
                            else
                            {
LABEL_506c8c:
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0bc823050694df3d(&v9, v31);
                                v7 = v12;
                                *((int128_t *)&v5) = *((int128_t *)&v10);
                                alloc::vec::Vec$LT$T$C$A$GT$::push::h1444e8e90e3da7b6(&v18, &v5);
                                goto LABEL_506cbf;
                            }
LABEL_506a57:
                            if (!v50)
                                goto LABEL_506c8c;
                        }
                    }
LABEL_506a60:
                    v64 = a0;
                    v64[1] = v50;
                    v64[2] = v62;
                    v64[0] = 0x8000000000000000;
                    ::0x5040c0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he6af43ab7f514533(&v21);
                    ::0x503b90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&v16);
                    ::0x503ed0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h4ace78a7ba310efc(&v18);
                    return v65;
                }
            }
            else
            {
                if (v34 != 3)
                {
                    if (v34 != 2)
                    {
                        vvar_1500{reg 24} = a0;
                        v66[2] = v20;
                        *((int128_t *)&v66[0]) = *((int128_t *)&v18);
                        ::0x503b90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&v16);
                        return v65;
                    }
                }
                else
                {
                    if (a1->field_8e - 1 < 2)
                    {
                        vvar_1480{reg 24} = a0;
                        v66[2] = v20;
                        *((int128_t *)&v66[0]) = *((int128_t *)&v18);
                        ::0x503b90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&v16);
                        return v65;
                    }
                    v36 = &v31[1 + v30];
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0bc823050694df3d(&v9, v36);
                    v23 = v12;
                    *((int128_t *)&v21) = *((int128_t *)&v9);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h1444e8e90e3da7b6(&v18, &v21);
                    uu_tail::follow::files::FileHandling::remove::h9a608e9706c93353(&v9, v2, v0, v1);
                    v40 = v36[1];
                    v41 = v36[2];
                    uu_tail::follow::files::PathData::from_other_with_path::h3c415c2bfeedf353(&v21, &v9, v40, v41);
                    memcpy(&v9, &v21, 216);
                    if (*(v2) == 0x8000000000000000)
                        core::option::unwrap_failed::h0e11329e76906eaa(&g_5bc0c8); /* do not return */
                    uu_tail::follow::files::FileHandling::insert::h8755548d7239df23(v2, v40, v41, &v9, (unsigned int)::0x504410::_$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h1d8861b9e1bd0bd7(a1->field_40, a1->field_48, v31[1], v31[2]));
                    if (a1->field_0 == 3)
                        core::option::unwrap_failed::h0e11329e76906eaa(&g_5bc0e0); /* do not return */
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdf4e067f61f46c2b(uu_tail::follow::watch::WatcherRx::unwatch::hae2d0446936d6361(a1->field_10, a1->field_18));
                    if (a1->field_0 == 3)
                        core::option::unwrap_failed::h0e11329e76906eaa(&g_5bc0f8); /* do not return */
                    v58 = uu_tail::follow::watch::WatcherRx::watch_with_parent::h1fadf41504d6de8e(a1->field_10, a1->field_18, v40, v41);
                    if (v58)
                    {
                        v59 = a0;
                        v59[1] = v58;
                        v59[2] = v60;
                        v59[0] = 0x8000000000000000;
                        ::0x503b90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&v16);
                        ::0x503ed0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h4ace78a7ba310efc(&v18);
                        return v65;
                    }
                    goto LABEL_506cfe;
                }
            }
        }
        else if (!(v32 == 4) || !(a2->field_21 < 2))
        {
LABEL_506cfe:
            v66 = a0;
            v66[2] = v20;
            *((int128_t *)&v66[0]) = *((int128_t *)&v18);
            v65 = ::0x503b90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&v16);
            return v65;
        }
        v35 = a1->field_8e;
        if ((v35 & 1))
        {
            if (!a3->field_48)
            {
                v21 = uucore::util_name::h60d842bf27b05e82();
                v22 = v39;
                v5 = &v21;
                v6 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                v9 = &g_5bbe20;
                v11 = 2;
                v14 = 0;
                v12 = &v5;
                v13 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v9);
                v21 = &v16;
                v22 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v23 = &g_5bc128;
                v24 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                v9 = &g_5bc068;
                v11 = 3;
                v14 = 0;
                v12 = &v21;
                v13 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v9);
                if (!uu_tail::follow::files::FileHandling::files_remaining::h86d5a5f2d15f0cfd(v2) && !!a1->field_8d)
                {
                    ::0x504300::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8732f121b58e7ba0(&v21);
                    v12 = v23;
                    *((int128_t *)&v9) = *((int128_t *)&v21);
                    v13 = 1;
                    v49 = a0;
                    *((double *)&v49[1]) = ::0x5045f0::alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&v9);
                    v49[2] = &g_5bbdb0;
                    v49[0] = 0x8000000000000000;
                    ::0x503b90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&v16);
                    v65 = ::0x503ed0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h4ace78a7ba310efc(&v18);
                    return v65;
                }
            }
            else
            {
                v38 = uu_tail::follow::files::FileHandling::get_mut_metadata::h602fa25e5b671479(v2, v0, v1);
                if (v38 && ((0xf000 & v38->field_38) == 0x1000 || (0xf000 & v38->field_38) == 0x2000 || (0xf000 & v38->field_38) == 0x8000) && *((long long *)(uu_tail::follow::files::FileHandling::get::ha1f26ea8b12ea1ff(v2, v0, v1) + 200)))
                {
                    v21 = uucore::util_name::h60d842bf27b05e82();
                    v22 = v51;
                    v5 = &v21;
                    v6 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                    v9 = &g_5bbe20;
                    v11 = 2;
                    v14 = 0;
                    v12 = &v5;
                    v13 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v9);
                    v5 = 0;
                    *((int128_t *)&v6) = *((int128_t *)&v17);
                    v8 = 1;
                    v9 = &v5;
                    v11 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v12 = &g_5bc138;
                    v13 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                    v14 = &g_5bc128;
                    v15 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                    v21 = &g_5bbff8;
                    v22 = 4;
                    v25 = 0;
                    v23 = &v9;
                    v24 = 3;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v21);
                }
                if (_$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_orphan::h65c9528458cf452d(v0, v1) && !(char)_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h7a9332afdb48cbde(v31, a1->field_28, a1->field_30))
                {
                    v21 = uucore::util_name::h60d842bf27b05e82();
                    v22 = v51;
                    v5 = &v21;
                    v6 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                    v9 = &g_5bbe20;
                    v11 = 2;
                    v14 = 0;
                    v12 = &v5;
                    v13 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v9);
                    v9 = &g_5bc038;
                    v11 = 1;
                    v12 = 8;
                    *((uint128_t *)&v13) = 0;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v9);
                    v21 = uucore::util_name::h60d842bf27b05e82();
                    v22 = v51;
                    v5 = &v21;
                    v6 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                    v9 = &g_5bbe20;
                    v11 = 2;
                    v14 = 0;
                    v12 = &v5;
                    v13 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v9);
                    v21 = &g_5bbeb0;
                    v22 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                    v9 = &g_5bc048;
                    v11 = 2;
                    v14 = 0;
                    v12 = &v21;
                    v13 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v9);
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0bc823050694df3d(&v9, v31);
                    v23 = v12;
                    *((int128_t *)&v21) = *((int128_t *)&v9);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h1444e8e90e3da7b6(&a1->padding_20, &v21);
                    if (a1->field_0 == 3)
                        core::option::unwrap_failed::h0e11329e76906eaa(&g_5bc148); /* do not return */
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdf4e067f61f46c2b(uu_tail::follow::watch::WatcherRx::unwatch::hae2d0446936d6361(a1->field_10, a1->field_18));
                }
            }
            uu_tail::follow::files::FileHandling::reset_reader::h2b8bfb99f1a2f6b2(v2, v0, v1);
            vvar_1490{reg 24} = a0;
            v66[2] = v20;
            *((int128_t *)&v66[0]) = *((int128_t *)&v18);
            ::0x503b90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&v16);
            return v65;
        }
        else if (v35 != 2 && a1->field_8c)
        {
            if (a1->field_0 != 3)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdf4e067f61f46c2b(uu_tail::follow::watch::WatcherRx::unwatch::hae2d0446936d6361(a1->field_10, a1->field_18));
                uu_tail::follow::files::FileHandling::remove::h9a608e9706c93353(&v9, v2, v0, v1);
                ::0x503d30::core::ptr::drop_in_place$LT$uu_tail..follow..files..PathData$GT$::h0bd94260f77f0a2b(&v9);
                vvar_1495{reg 24} = a0;
                v66[2] = v20;
                *((int128_t *)&v66[0]) = *((int128_t *)&v18);
                ::0x503b90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&v16);
                return v65;
            }
            core::option::unwrap_failed::h0e11329e76906eaa(&g_5bc110); /* do not return */
        }
        goto LABEL_506cfe;
    }
}
