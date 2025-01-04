long long uu_tail::follow::watch::Observer::handle_event::hf377c643c1a778ce(unsigned long long a0[3], struct_6 *a1, struct_2 *a2, struct_7 *a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v0;  // [sp-0x310]
    unsigned long long v1;  // [sp-0x308]
    unsigned long long *v2;  // [sp-0x300]
    struct struct_0 **v3;  // [sp-0x2f8]
    struct struct_0 **v4;  // [sp-0x2f0], Other Possible Types: unsigned long long
    void* v5;  // [sp-0x2e8], Other Possible Types: struct struct_0 **
    struct struct_0 **v6;  // [sp-0x2e0], Other Possible Types: unsigned long long
    struct struct_0 **v7;  // [sp-0x2d8], Other Possible Types: unsigned long
    char v8;  // [sp-0x2d0]
    struct struct_0 **v9;  // [bp-0x2c8], Other Possible Types: unsigned long
    char v10;  // [sp-0x2c0], Other Possible Types: unsigned long long
    struct struct_0 **v11;  // [sp-0x2b8], Other Possible Types: unsigned long, unsigned long long
    struct struct_0 **v12;  // [bp-0x2b0], Other Possible Types: unsigned int, unsigned long long
    void* v13;  // [sp-0x2a8], Other Possible Types: unsigned long long
    struct struct_0 **v14;  // [sp-0x2a0]
    char v15;  // [bp-0x1e8]
    char v16;  // [bp-0x1e0]
    void* v17;  // [sp-0x1d0]
    unsigned long long v18;  // [sp-0x1c8]
    void* v19;  // [sp-0x1c0]
    struct struct_0 **v20;  // [bp-0x1b8]
    struct struct_0 **v21;  // [sp-0x1b0], Other Possible Types: unsigned long long
    struct struct_0 **v22;  // [sp-0x1a8], Other Possible Types: unsigned long long
    struct struct_0 **v23;  // [sp-0x1a0], Other Possible Types: unsigned long long
    void* v24;  // [sp-0x198]
    char v25;  // [bp-0xe0]
    char v26;  // [bp-0xb8]
    char v27;  // [bp-0xa8]
    unsigned long long v29;  // r15
    unsigned long long v30[3];  // r13
    unsigned int v31;  // eax
    unsigned int v32;  // eax
    unsigned int v33;  // eax
    char v34;  // al
    unsigned long long v35[3];  // r14
    unsigned int v36;  // r15d
    unsigned long long v37;  // rcx
    unsigned long long v38;  // r9
    struct_4 *v39;  // rax
    unsigned long long v40;  // r8
    unsigned long long v41;  // r9
    unsigned long long v42;  // rdx
    unsigned long long v43;  // rsi
    unsigned long long v44;  // rbx
    unsigned long long v45;  // r14
    unsigned long long v46;  // rcx
    unsigned long long v47;  // r8
    unsigned long long v48;  // r9
    struct_1 *v49;  // rax
    unsigned long long v50;  // rcx
    unsigned long long v51;  // r8
    unsigned long long v52;  // r9
    unsigned long long v53;  // rcx
    unsigned long long v54;  // rcx
    unsigned long long v55;  // r8
    unsigned int v56;  // ecx
    unsigned long long v57;  // rcx
    struct struct_0 **v58;  // rdx
    unsigned long long v59;  // rsi
    unsigned long long v61[3];  // rcx
    unsigned long long v62;  // rax
    unsigned long long v63;  // rdx
    unsigned long long v64;  // rsi
    struct struct_0 **v65;  // rdx
    unsigned long long v66;  // rsi
    struct struct_0 **v67;  // rdx
    unsigned long long v68;  // rsi
    struct_1 *v69;  // r15
    struct struct_0 **v70;  // rdx
    unsigned long long v71;  // rsi
    struct struct_0 **v72;  // rdx
    unsigned long long v73;  // rsi
    struct struct_0 **v74;  // rdx
    unsigned long long v75;  // rsi
    unsigned long long v76;  // rdx
    unsigned long long v77;  // rax
    unsigned long long v78[3];  // rcx
    unsigned long v79;  // rdx
    struct struct_0 **v80;  // rdx
    unsigned long long v81;  // rsi
    unsigned long long v82;  // rdx
    unsigned long long v83;  // rsi
    unsigned long long v85[3];  // rcx
    unsigned long long v86;  // rax
    unsigned long long v87[3];  // rcx

    v29 = a2->field_10;
    if (!v29)
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    v30 = a2->field_8;
    v17 = 0;
    v18 = 8;
    v19 = 0;
    v2 = &a1->padding_38[0];
    v0 = v30[1];
    v1 = v30[2];
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v15, uu_tail::follow::files::FileHandling::get::ha1f26ea8b12ea1ff(&a1->padding_38, v0, v1, a3, a4, a5) + 176);
    v31 = a2->field_20;
    if (v31 == 2)
    {
        if (a2->field_21 == 3)
        {
            vvar_1472{reg 24} = a0;
            v87[2] = v19;
            *((int128_t *)&v87[0]) = *((int128_t *)&v17);
            vvar_1473{reg 16} = ::0x503b90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&v15);
            return v86;
        }
        goto LABEL_506113;
    }
    else
    {
        if (v31 == 3)
        {
            v32 = a2->field_21;
            if (v32 == 1)
            {
                if (a2->field_22)
                {
                    vvar_1477{reg 24} = a0;
                    v87[2] = v19;
                    *((int128_t *)&v87[0]) = *((int128_t *)&v17);
                    vvar_1478{reg 16} = ::0x503b90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&v15);
                    return v86;
                }
                goto LABEL_506113;
            }
            if (v32 == 2)
            {
                if ((a2->field_22 & 5))
                {
                    vvar_1482{reg 24} = a0;
                    v87[2] = v19;
                    *((int128_t *)&v87[0]) = *((int128_t *)&v17);
                    vvar_1483{reg 16} = ::0x503b90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&v15);
                    return v86;
                }
                goto LABEL_506113;
            }
            if (v32 != 3)
            {
                vvar_1462{reg 24} = a0;
                v87[2] = v19;
                *((int128_t *)&v87[0]) = *((int128_t *)&v17);
                vvar_1463{reg 16} = ::0x503b90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&v15);
                return v86;
            }
            v33 = a2->field_22;
            if (v33 == 1)
            {
LABEL_506113:
                std::fs::metadata::h5a76b0b01e9dc15d(&v20, v0, v1);
                if ((int)v20 == 2)
                {
                    ::0x5040c0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he6af43ab7f514533(&v20);
                    vvar_1467{reg 24} = a0;
                    v87[2] = v19;
                    *((int128_t *)&v87[0]) = *((int128_t *)&v17);
                    vvar_1468{reg 16} = ::0x503b90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&v15);
                    return v86;
                }
                memcpy(&v25, &v20, 176);
                v36 = 0xf000 & *((int *)&v27);
                if (v36 != 0x2000 && v36 != 0x8000)
                {
                    v49 = uu_tail::follow::files::FileHandling::get::ha1f26ea8b12ea1ff(v2, v0, v1, v46, v47, v48);
                    if (v49->field_0 != 2)
                    {
                        if (v36 == 0x1000)
                            goto LABEL_506574;
                        v57 = 0xf000 & v49->field_38;
                        if ((unsigned int)v57 == 0x1000 || (unsigned int)v57 == 0x8000 || (unsigned int)v57 == 0x2000)
                        {
                            if (v49->field_c8)
                            {
                                uu_tail::follow::files::FileHandling::reset_reader::h2b8bfb99f1a2f6b2(v2, v0, v1, v57, v47, v48);
                            }
                            else
                            {
                                v5 = uucore::util_name::h60d842bf27b05e82();
                                v6 = v74;
                                v3 = &v5;
                                v4 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                                v9 = &g_5bbe20;
                                v10 = 2;
                                v13 = 0;
                                v11 = &v3;
                                v12 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v75, v74);
                                v5 = 0;
                                *((int128_t *)&v6) = *((int128_t *)&v16);
                                v8 = 1;
                                v3 = &v5;
                                v4 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                                v9 = &g_5bbfb8;
                                v10 = 2;
                                v13 = 0;
                                v11 = &v3;
                                v12 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v75, v74);
                            }
                        }
                    }
                    else
                    {
                        if (v36 == 0x1000)
                        {
LABEL_506194:
                            v5 = uucore::util_name::h60d842bf27b05e82();
                            v6 = v58;
                            v3 = &v5;
                            v4 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                            v9 = &g_5bbe20;
                            v10 = 2;
                            v13 = 0;
                            v11 = &v3;
                            v12 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v59, v58);
                            v5 = 0;
                            *((int128_t *)&v6) = *((int128_t *)&v16);
                            v8 = 1;
                            v3 = &v5;
                            v4 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                            v9 = &g_5bbf58;
                            v10 = 2;
                            v13 = 0;
                            v11 = &v3;
                            v12 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v59, v58);
                            v62 = uu_tail::follow::files::FileHandling::update_reader::haeff66f6ffe85304(v2, v0, v1, v46, v47, v48);
                            if (!(!v62))
                                goto LABEL_506a60;
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0bc823050694df3d(&v9, v30);
                            v7 = v11;
                            *((int128_t *)&v5) = *((int128_t *)&v9);
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h1444e8e90e3da7b6(&v17, &v5);
                        }
                        else
                        {
                            if (!a3->field_48)
                                goto LABEL_506cbf;
                            if (a1->field_8e == 2 || (a1->field_8e & 1))
                            {
                                v5 = uucore::util_name::h60d842bf27b05e82();
                                v6 = v67;
                                v3 = &v5;
                                v4 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                                v9 = &g_5bbe20;
                                v10 = 2;
                                v13 = 0;
                                v11 = &v3;
                                v12 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v68, v67);
                                v5 = 0;
                                *((int128_t *)&v6) = *((int128_t *)&v16);
                                v8 = 1;
                                v3 = &v5;
                                v4 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                                v9 = &g_5bbfb8;
                                v10 = 2;
                                v13 = 0;
                                v11 = &v3;
                                v12 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v68, v67);
                                goto LABEL_506cbf;
                            }
                            v5 = uucore::util_name::h60d842bf27b05e82();
                            v6 = v65;
                            v3 = &v5;
                            v4 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                            v9 = &g_5bbe20;
                            v10 = 2;
                            v13 = 0;
                            v11 = &v3;
                            v12 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v66, v65);
                            v5 = 0;
                            *((int128_t *)&v6) = *((int128_t *)&v16);
                            v8 = 1;
                            v3 = &v5;
                            v4 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                            v9 = &g_5bbfd8;
                            v10 = 2;
                            v13 = 0;
                            v11 = &v3;
                            v12 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v66, v65);
                            if (a1->field_0 == 3)
                                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                            a1->field_18->field_20(&v9, a1->field_10, v0, v1);
                            ::0x504030::core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$notify..error..Error$GT$$GT$::h1955e5315261984f(&v9);
                            uu_tail::follow::files::FileHandling::remove::h9a608e9706c93353(&v9, v2, v0, v1, v47, v48);
                            ::0x503d30::core::ptr::drop_in_place$LT$uu_tail..follow..files..PathData$GT$::h0bd94260f77f0a2b(&v9);
                            if ((char)uu_tail::follow::files::FileHandling::no_files_remaining::hf3496cc0e002c3dd(v2, a3, v65, v46, v47, v48))
                            {
                                ::0x504300::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8732f121b58e7ba0(&v5);
                                v11 = v7;
                                *((int128_t *)&v9) = *((int128_t *)&v5);
                                v12 = 1;
                                v62 = ::0x5045f0::alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&v9);
                                goto LABEL_506a60;
                            }
                        }
                    }
LABEL_506cbf:
                    memcpy(&v9, &v25, 176);
                    uu_tail::follow::files::FileHandling::update_metadata::h4aaaeb16ccacaf37(v2, v0, v1, &v9, v47, v48);
                    ::0x5040c0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he6af43ab7f514533(&v20);
                    vvar_1493{reg 24} = a0;
                    v87[2] = v19;
                    *((int128_t *)&v87[0]) = *((int128_t *)&v17);
                    vvar_1494{reg 16} = ::0x503b90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&v15);
                    return v86;
                }
                else
                {
                    v49 = uu_tail::follow::files::FileHandling::get::ha1f26ea8b12ea1ff(v2, v0, v1, v46, v47, v48);
                    if (v49->field_0 == 2)
                        goto LABEL_506194;
LABEL_506574:
                    v56 = 0xf000 & v49->field_38;
                    if (v56 != 0x1000 && v56 != 0x2000 && v56 != 0x8000)
                    {
                        v5 = uucore::util_name::h60d842bf27b05e82();
                        v6 = v70;
                        v3 = &v5;
                        v4 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                        v9 = &g_5bbe20;
                        v10 = 2;
                        v13 = 0;
                        v11 = &v3;
                        v12 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v71, v70);
                        v5 = 0;
                        *((int128_t *)&v6) = *((int128_t *)&v16);
                        v8 = 1;
                        v3 = &v5;
                        v4 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        v9 = &g_5bbf38;
                        v10 = 2;
                        v13 = 0;
                        v11 = &v3;
                        v12 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v71, v70);
                        v62 = uu_tail::follow::files::FileHandling::update_reader::haeff66f6ffe85304(v2, v0, v1, v46, v47, v48);
                        goto LABEL_506a57;
                    }
                    if (!v49->field_c8)
                    {
                        v5 = uucore::util_name::h60d842bf27b05e82();
                        v6 = v72;
                        v3 = &v5;
                        v4 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                        v9 = &g_5bbe20;
                        v10 = 2;
                        v13 = 0;
                        v11 = &v3;
                        v12 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v73, v72);
                        v5 = 0;
                        *((int128_t *)&v6) = *((int128_t *)&v16);
                        v8 = 1;
                        v3 = &v5;
                        v4 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        v9 = &g_5bbf58;
                        v10 = 2;
                        v13 = 0;
                        v11 = &v3;
                        v12 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v73, v72);
                        v62 = uu_tail::follow::files::FileHandling::update_reader::haeff66f6ffe85304(v2, v0, v1, v46, v47, v48);
                        goto LABEL_506a57;
                    }
                    v69 = v49;
                    if ((char)_$LT$notify..event..EventKind$u20$as$u20$core..cmp..PartialEq$GT$::eq::hdefd9549194a1b6f(&a2->field_20) || a1->field_8d && v69->field_28 != *((long long *)&v26))
                    {
                        v5 = uucore::util_name::h60d842bf27b05e82();
                        v6 = v80;
                        v3 = &v5;
                        v4 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                        v9 = &g_5bbe20;
                        v10 = 2;
                        v13 = 0;
                        v11 = &v3;
                        v12 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v81, v80);
                        v5 = 0;
                        *((int128_t *)&v6) = *((int128_t *)&v16);
                        v8 = 1;
                        v3 = &v5;
                        v4 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        v9 = &g_5bbf78;
                        v10 = 2;
                        v13 = 0;
                        v11 = &v3;
                        v12 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v81, v80);
                        v62 = uu_tail::follow::files::FileHandling::update_reader::haeff66f6ffe85304(v2, v0, v1, v46, v47, v48);
                        goto LABEL_506a57;
                    }
                    else
                    {
                        _$LT$std..fs..Metadata$u20$as$u20$uu_tail..paths..MetadataExtTail$GT$::got_truncated::ha28743506d7e92e5(&v9, v69, &v25);
                        v62 = v9;
                        if (!v62)
                        {
                            if (v10)
                            {
                                v5 = uucore::util_name::h60d842bf27b05e82();
                                v6 = v82;
                                v3 = &v5;
                                v4 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                                v9 = &g_5bbe20;
                                v10 = 2;
                                v13 = 0;
                                v11 = &v3;
                                v12 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v83, v82);
                                v5 = &v15;
                                v6 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                v9 = &g_5bbf98;
                                v10 = 2;
                                v13 = 0;
                                v11 = &v5;
                                v12 = 1;
                                std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v83, v82);
                                v62 = uu_tail::follow::files::FileHandling::update_reader::haeff66f6ffe85304(v2, v0, v1, v46, v47, v48);
                            }
                            else
                            {
LABEL_506c8c:
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0bc823050694df3d(&v9, v30);
                                v7 = v11;
                                *((int128_t *)&v5) = *((int128_t *)&v9);
                                alloc::vec::Vec$LT$T$C$A$GT$::push::h1444e8e90e3da7b6(&v17, &v5);
                                goto LABEL_506cbf;
                            }
LABEL_506a57:
                            if (!v62)
                                goto LABEL_506c8c;
                        }
                    }
LABEL_506a60:
                    v85 = a0;
                    v85[1] = v62;
                    v85[2] = &g_5bbdb0;
                    v85[0] = 0x8000000000000000;
                    ::0x5040c0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he6af43ab7f514533(&v20);
                    ::0x503b90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&v15);
                    vvar_1457{reg 16} = ::0x503ed0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h4ace78a7ba310efc(&v17);
                    return v86;
                }
            }
            else
            {
                if (v33 != 3)
                {
                    if (v33 == 2)
                        goto LABEL_505cec;
                }
                else
                {
                    if (a1->field_8e - 1 < 2)
                    {
                        vvar_1487{reg 24} = a0;
                        v87[2] = v19;
                        *((int128_t *)&v87[0]) = *((int128_t *)&v17);
                        vvar_1488{reg 16} = ::0x503b90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&v15);
                        return v86;
                    }
                    v35 = &v30[1 + v29];
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0bc823050694df3d(&v9, v35);
                    v22 = v11;
                    *((int128_t *)&v20) = *((int128_t *)&v9);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h1444e8e90e3da7b6(&v17, &v20);
                    uu_tail::follow::files::FileHandling::remove::h9a608e9706c93353(&v9, v2, v0, v1, v40, v41);
                    v44 = v35[1];
                    v45 = v35[2];
                    uu_tail::follow::files::PathData::from_other_with_path::h3c415c2bfeedf353(&v20, &v9, v44, v45);
                    memcpy(&v9, &v20, 216);
                    if (*(v2) == 0x8000000000000000)
                        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                    uu_tail::follow::files::FileHandling::insert::h8755548d7239df23(v2, v44, v45, &v9, (unsigned int)::0x504410::_$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h1d8861b9e1bd0bd7(a1->field_40, a1->field_48, v30[1], v30[2], v40, v41), v41);
                    if (a1->field_0 == 3)
                        goto LABEL_506e13;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdf4e067f61f46c2b(uu_tail::follow::watch::WatcherRx::unwatch::hae2d0446936d6361(a1->field_10, a1->field_18));
                    if (a1->field_0 == 3)
                    {
                        goto LABEL_506e13;
                    }
                    else
                    {
                        v77 = uu_tail::follow::watch::WatcherRx::watch_with_parent::h1fadf41504d6de8e(a1->field_10, a1->field_18, v44, v45);
                        if (v77)
                        {
                            v78 = a0;
                            v78[1] = v77;
                            v78[2] = v79;
                            v78[0] = 0x8000000000000000;
                            ::0x503b90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&v15);
                            vvar_1451{reg 16} = ::0x503ed0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h4ace78a7ba310efc(&v17);
                            return v86;
                        }
                    }
                }
            }
        }
        else if (v31 == 4 && a2->field_21 < 2)
        {
LABEL_505cec:
            v34 = a1->field_8e;
            if ((v34 & 1))
            {
                if (!a3->field_48)
                {
                    v20 = uucore::util_name::h60d842bf27b05e82();
                    v21 = v42;
                    v5 = &v20;
                    v6 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                    v9 = &g_5bbe20;
                    v10 = 2;
                    v13 = 0;
                    v11 = &v5;
                    v12 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v43, v42);
                    v20 = &v15;
                    v21 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v22 = &g_5bc128;
                    v23 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                    v9 = &g_5bc068;
                    v10 = 3;
                    v13 = 0;
                    v11 = &v20;
                    v12 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v43, v42);
                    v54 = v53 | -0x100 | !a1->field_8d;
                    if (!(char)uu_tail::follow::files::FileHandling::files_remaining::h86d5a5f2d15f0cfd(v2, v43, v42, v53, v55, v38) && !!a1->field_8d)
                    {
                        ::0x504300::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8732f121b58e7ba0(&v20);
                        v11 = v22;
                        *((int128_t *)&v9) = *((int128_t *)&v20);
                        v12 = 1;
                        v61 = a0;
                        *((double *)&v61[1]) = ::0x5045f0::alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&v9);
                        v61[2] = &g_5bbdb0;
                        v61[0] = 0x8000000000000000;
                        ::0x503b90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&v15);
                        v86 = ::0x503ed0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h4ace78a7ba310efc(&v17);
                        return v86;
                    }
                }
                else
                {
                    v39 = uu_tail::follow::files::FileHandling::get_mut_metadata::h602fa25e5b671479(v2, v0, v1, v37, v55, v38);
                    if (v39)
                    {
                        v50 = 0xf000 & v39->field_38;
                        if (((unsigned int)v50 == 0x1000 || (unsigned int)v50 == 0x2000 || (unsigned int)v50 == 0x8000) && *((long long *)(uu_tail::follow::files::FileHandling::get::ha1f26ea8b12ea1ff(v2, v0, v1, v50, v55, v38) + 200)))
                        {
                            v20 = uucore::util_name::h60d842bf27b05e82();
                            v21 = v63;
                            v5 = &v20;
                            v6 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                            v9 = &g_5bbe20;
                            v10 = 2;
                            v13 = 0;
                            v11 = &v5;
                            v12 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v64, v63);
                            v5 = 0;
                            *((int128_t *)&v6) = *((int128_t *)&v16);
                            v8 = 1;
                            v9 = &v5;
                            v10 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                            v11 = &g_5bc138;
                            v12 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                            v13 = &g_5bc128;
                            v14 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                            v20 = &g_5bbff8;
                            v21 = 4;
                            v24 = 0;
                            v22 = &v9;
                            v23 = 3;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v20, v64, v63);
                        }
                    }
                    if ((char)_$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_orphan::h65c9528458cf452d(v0, v1, v76) && !(char)_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h7a9332afdb48cbde(v30, a1->field_28, a1->field_30, v37, v55, v38))
                    {
                        v20 = uucore::util_name::h60d842bf27b05e82();
                        v21 = v63;
                        v5 = &v20;
                        v6 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                        v9 = &g_5bbe20;
                        v10 = 2;
                        v13 = 0;
                        v11 = &v5;
                        v12 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v64, v63);
                        v9 = &g_5bc038;
                        v10 = 1;
                        v11 = 8;
                        *((int128_t *)&v12) = 0;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v64, v63);
                        v20 = uucore::util_name::h60d842bf27b05e82();
                        v21 = v63;
                        v5 = &v20;
                        v6 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                        v9 = &g_5bbe20;
                        v10 = 2;
                        v13 = 0;
                        v11 = &v5;
                        v12 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v64, v63);
                        v20 = &g_5bbeb0;
                        v21 = &_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                        v9 = &g_5bc048;
                        v10 = 2;
                        v13 = 0;
                        v11 = &v20;
                        v12 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v64, v63);
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0bc823050694df3d(&v9, v30);
                        v22 = v11;
                        *((int128_t *)&v20) = *((int128_t *)&v9);
                        alloc::vec::Vec$LT$T$C$A$GT$::push::h1444e8e90e3da7b6(&a1->padding_20, &v20);
                        if (a1->field_0 == 3)
                            goto LABEL_506e13;
                        else
                            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdf4e067f61f46c2b(uu_tail::follow::watch::WatcherRx::unwatch::hae2d0446936d6361(a1->field_10, a1->field_18));
                    }
                }
                uu_tail::follow::files::FileHandling::reset_reader::h2b8bfb99f1a2f6b2(v2, v0, v1, v54, v55, v38);
            }
            else if (v34 != 2 && a1->field_8c)
            {
                if (a1->field_0 != 3)
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdf4e067f61f46c2b(uu_tail::follow::watch::WatcherRx::unwatch::hae2d0446936d6361(a1->field_10, a1->field_18));
                    uu_tail::follow::files::FileHandling::remove::h9a608e9706c93353(&v9, v2, v0, v1, v51, v52);
                    ::0x503d30::core::ptr::drop_in_place$LT$uu_tail..follow..files..PathData$GT$::h0bd94260f77f0a2b(&v9);
                }
                else
                {
LABEL_506e13:
                    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                }
            }
        }
        v87 = a0;
        v87[2] = v19;
        *((int128_t *)&v87[0]) = *((int128_t *)&v17);
        v86 = ::0x503b90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&v15);
        return v86;
    }
}
