long long uu_join::parse_settings(struct_0 *a0, unsigned long long a1)
{
    int v0;  // [bp-0x168], Other Possible Types: void*, char, unsigned long
    char v1;  // [bp-0x160], Other Possible Types: unsigned long long
    int v2;  // [bp-0x158]
    unsigned long long v3;  // [bp-0x158]
    int v4;  // [bp-0x150]
    unsigned long long v5;  // [bp-0x148]
    void* v6;  // [bp-0x140], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x138]
    unsigned long long v8;  // [bp-0x130]
    unsigned long long v9;  // [bp-0x128]
    int v10;  // [bp-0x120], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x118]
    char v12;  // [bp-0x110]
    char v13;  // [bp-0x10f]
    char v14;  // [bp-0x10e]
    char v15;  // [bp-0x10d], Other Possible Types: unsigned int
    char v16;  // [bp-0x10c]
    char v17;  // [bp-0x10b]
    char v18;  // [bp-0x10a]
    char v19;  // [bp-0x109]
    char v20;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned long long v21;  // [bp-0x108]
    void* v22;  // [bp-0x108]
    unsigned int v23;  // [bp-0x100], Other Possible Types: unsigned long, unsigned long long
    int v24;  // [bp-0xf8], Other Possible Types: void*, unsigned long long
    unsigned long long v25;  // [bp-0xf8]
    unsigned long long v26;  // [bp-0xf8]
    int v27;  // [bp-0xe8]
    int v28;  // [bp-0xd8]
    unsigned long long v29;  // [bp-0xc8]
    unsigned short v30;  // [bp-0xc0]
    void* v31;  // [bp-0xb8]
    unsigned long long v32;  // [bp-0xb0]
    void* v33;  // [bp-0xa8]
    unsigned long long v34;  // [bp-0xa0]
    unsigned long long v35;  // [bp-0x98]
    unsigned long long v36;  // [bp-0x90]
    unsigned long long v37;  // [bp-0x88]
    unsigned long long v38;  // [bp-0x80]
    unsigned long long v39;  // [bp-0x78]
    unsigned long long v40;  // [bp-0x70]
    int v41;  // [bp-0x68], Other Possible Types: char
    int v42;  // [bp-0x58]
    int v43;  // [bp-0x48]
    char v44;  // [bp-0x38]
    char v46;  // r15b
    unsigned long long v47;  // rbp
    unsigned long long v48;  // rcx
    unsigned int v49;  // ecx
    unsigned long long v50;  // rax
    struct_1 *v51;  // rax
    unsigned long long v52[3];  // r15
    unsigned long long v53;  // rax
    unsigned long long v54;  // rdx
    unsigned long long v55[3];  // rax
    int v57;  // xmm0
    int v58;  // xmm1
    int v59;  // xmm2

    uu_join::get_and_parse_field_number(&v0, a1, "j12itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-or");
    if (!(v0 & 1))
    {
        v46 = *((long long *)&v1);
        uu_join::get_and_parse_field_number(&v0, a1, "12itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-ord");
        if (!(v0 & 1))
        {
            v35 = *((long long *)&v1);
            v34 = v3;
            uu_join::get_and_parse_field_number(&v0, a1, "2itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orde");
            v47 = *((long long *)&v1);
            if ((v0 & 1))
            {
                *((unsigned long long *)&a0->field_8) = v47;
                *((unsigned long long *)&a0->padding_9[7]) = v3;
            }
            else
            {
                uu_join::parse_print_settings(&v0, a1);
                if (v0)
                {
                    v48 = *((long long *)&v1);
                    *((unsigned long *)&a0->field_8) = v0;
                    *((unsigned long long *)&a0->padding_9[7]) = v48;
                }
                else
                {
                    v49 = *((short *)&v1) | (&v1)[2] * 0x10000;
                    *((uint128_t *)&v10) = 0;
                    v15 = 0;
                    v19 = 10;
                    v7 = 9223372036854775811;
                    v0 = 0;
                    v1 = 8;
                    *((uint128_t *)&v2) = 0;
                    v5 = 1;
                    v6 = 0;
                    v14 = (char)v49 & 1;
                    v12 = (char)(v49 >> 8) & 1;
                    v13 = (char)(v49 >> 16) & 1;
                    v15 = a1.get_flag("itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-order", 1);
                    uu_join::get_field_number(&v20, v46, v3, v35, v34);
                    v50 = v23;
                    if (!v20)
                    {
                        v10 = v50;
                        uu_join::get_field_number(&v20, v46, v3, v47, v3);
                        v50 = v23;
                        if (!v20)
                        {
                            v11 = v50;
                            v20.try_get_one(a1, "toenocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderz", 1);
                            v51 = "toenocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderz".unwrap(1, &v20);
                            if (v51)
                            {
                                uu_join::parse_separator(&v20, v51->field_8, v51->field_10);
                                if (v20 == 9223372036854775812)
                                {
                                    *((unsigned long long *)&a0->field_8) = v23;
                                    *((unsigned long long *)&a0->padding_9[7]) = v24;
                                    *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
                                    core::ptr::drop_in_place<uu_join::Settings>(&v0);
                                    return a0;
                                }
                                core::ptr::drop_in_place<uu_join::SepSetting>(&v7);
                                v7 = v20;
                                v8 = v23;
                                v9 = v24;
                            }
                            v20.try_get_one(a1, "oenocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderze", 1);
                            v52 = "oenocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderze".unwrap(1, &v20);
                            v25 = v24;
                            if (v52)
                            {
                                if ((char)v52[1].equal(v52[2], "autoBool", 4))
                                {
                                    v16 = 1;
                                    v25 = v24;
                                }
                                else
                                {
                                    v31 = 0;
                                    v32 = 8;
                                    v33 = 0;
                                    v21 = 188978561056;
                                    v23 = 9;
                                    v41.into_searcher(&v21, v52[1], v52[2]);
                                    v22 = 0;
                                    v23 = v52[2];
                                    v24 = v41;
                                    v27 = v42;
                                    v28 = v43;
                                    v29 = *((long long *)&v44);
                                    v30 = 1;
                                    while (true)
                                    {
                                        v53 = v22.next();
                                        if (!v53)
                                            break;
                                        v38.parse(v53, v54);
                                        if (((char)v38 & 1))
                                        {
                                            *((unsigned long long *)&a0->field_8) = v39;
                                            *((unsigned long long *)&a0->padding_9[7]) = v40;
                                            *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
                                            v31.drop_in_place<alloc::vec::Vec<uu_join::Spec>>();
                                            core::ptr::drop_in_place<uu_join::Settings>(&v0);
                                            return a0;
                                        }
                                        v36 = v39;
                                        v37 = v40;
                                        v31.push(&v36);
                                    }
                                    v24 = 0;
                                    memcpy(&v22, &v31, 16);
                                    v0.drop_in_place<alloc::vec::Vec<uu_join::Spec>>();
                                    v3 = v26;
                                    *((int128_t *)&v0) = *((int128_t *)&v22);
                                    v25 = v26;
                                }
                            }
                            v20.try_get_one(a1, "enocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderzer", 1);
                            v55 = "enocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderzer".unwrap(1, &v20);
                            if (v55)
                            {
                                v20.to_vec(v55[1], v55[2]);
                                ::0x4b1ce0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&(char)v2);
                                v6 = v25;
                                *((int128_t *)&v4) = *((int128_t *)&v22);
                            }
                            if ((char)a1.get_flag("nocheck-ordercheck-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderzero", 13))
                                v18 = 1;
                            if ((char)a1.get_flag("check-orderheaderz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderzero-terminatedjo", 11))
                                v18 = 2;
                            if ((char)a1.get_flag("headerz(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderzero-terminatedjoin-help-zfi", 6))
                                v17 = 1;
                            *((int *)&v19) = ((char)a1.get_flag("z(uutils coreutils) 0.1.0join-aboutjoin-usageFILENUMjoin-help-ajoin-help-vEMPTYjoin-help-eignore-casejoin-help-iFIELDjoin-help-jFORMATjoin-help-ojoin-help-tjoin-help-1join-help-2join-help-check-orderjoin-help-nocheck-orderzero-terminatedjoin-help-zfile1FIL", 1) ? 0 : 10);
                            a0->field_40 = *((int128_t *)&v9);
                            v57 = (int128_t)v0;
                            v58 = (int128_t)v2;
                            v59 = *((int128_t *)&v5);
                            a0->field_30 = *((int128_t *)&v7);
                            *((void*)&a0->field_20) = v59;
                            *((void*)&a0->padding_9[7]) = v58;
                            *((void*)&a0->field_0) = v57;
                            a0->field_50 = v11;
                            a0->field_58 = *((int *)&v12);
                            a0->field_5c = *((short *)((char *)&v15 + 1));
                            a0->field_5e = v18;
                            a0->field_5f = v19;
                            return a0;
                        }
                    }
                    *((unsigned long long *)&a0->field_8) = v20;
                    *((unsigned long long *)&a0->padding_9[7]) = v50;
                    *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
                    core::ptr::drop_in_place<uu_join::Settings>(&v0);
                    return a0;
                }
            }
            *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
            return a0;
        }
    }
    *((int128_t *)&a0->field_8) = *((int128_t *)&v1);
    *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
    return a0;
}
