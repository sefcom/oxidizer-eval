int uu_truncate::truncate::h8d7d4c2b9f78c4f5()
{
    unsigned long long v0;  // [sp-0x170]
    unsigned long long v1;  // [sp-0x168]
    unsigned long long v2;  // [sp-0x160]
    int v3;  // [bp-0x158], Other Possible Types: void*
    unsigned long v4;  // [sp-0x150], Other Possible Types: unsigned long long
    int v5;  // [bp-0x148], Other Possible Types: unsigned long, unsigned long long
    unsigned int v6;  // [bp-0x140], Other Possible Types: char
    void* v7;  // [bp-0x130], Other Possible Types: char, unsigned long
    unsigned long long v8;  // [sp-0x128], Other Possible Types: unsigned long
    unsigned long long v9;  // [sp-0x120], Other Possible Types: unsigned long
    char v10;  // [sp-0x118]
    unsigned long long v11;  // [bp-0x110]
    char v12;  // [bp-0x108], Other Possible Types: unsigned long, unsigned long long
    unsigned long v13;  // [sp-0x100], Other Possible Types: unsigned long long
    char v14;  // [bp-0xf8]
    unsigned long v15;  // [sp-0xf0], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0xe8]
    void* v17;  // [bp-0xe0], Other Possible Types: unsigned long, unsigned long long
    unsigned long v18;  // [sp-0xd8], Other Possible Types: unsigned long long
    void* v19;  // [sp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v20;  // [sp-0xc8]
    void* v21;  // [sp-0xc0]
    char v22;  // [bp-0xa8]
    char v23;  // [bp-0x90]
    unsigned long long v26;  // [bp+0x100010]
    unsigned long long v27;  // [bp+0x100018]
    unsigned long long v34[3];  // rdx
    unsigned long long v35;  // r14
    unsigned long long v36[3];  // rcx
    unsigned long long v37;  // r15
    unsigned long long v38;  // rax
    unsigned long long v39;  // r13
    int v40;  // xmm0
    unsigned long long v41;  // rbx
    unsigned long long v42;  // rbx
    unsigned long v43;  // r9
    unsigned long long v44;  // r13
    unsigned long long v45;  // rbx
    int v46;  // xmm0
    unsigned long long v47;  // r15
    struct_0 *v48;  // rax
    unsigned long long v50;  // rbp
    unsigned long long v51;  // rbp
    char v52;  // dil
    uint128_t v53[3];  // rax
    unsigned long long v54;  // r12
    struct_0 *v55;  // rax
    uint128_t v56[2];  // rax
    uint128_t *v57;  // rax
    struct_0 *v58;  // rax
    uint128_t v59[3];  // rbx
    struct_0 *v60;  // rax
    unsigned long v61;  // r9
    int v62;  // xmm0
    uint128_t *v63;  // rax
    struct_0 *v65;  // rax
    unsigned long long v66;  // r15
    unsigned long long v67;  // r12
    unsigned long long v68;  // rbx
    struct_0 *v69;  // rax
    uint128_t v70[2];  // rax
    int v71;  // xmm0

    v35 = v34[0];
    v1 = v36[0];
    if (v35 != 0x8000000000000000)
    {
        v37 = v34[2];
        v0 = v34[1];
        if (v1 != 0x8000000000000000)
        {
            v11 = v36[1];
            uu_truncate::parse_mode_and_size::h0434b61b34b4cc55(&v7, v36[1], v36[2]);
            if (*((int *)&v7) != 3)
            {
                v46 = *((int128_t *)&v7);
                *((int128_t *)&v5) = *((int128_t *)&v9);
                v3 = v46;
                v15 = &v3;
                v16 = _$LT$uucore..parser..parse_size..ParseSizeError$u20$as$u20$core..fmt..Display$GT$::fmt::he20d89d0c7d20ec1;
                v17 = &g_4e0890;
                v18 = 1;
                v21 = 0;
                v19 = &v15;
                v20 = 1;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v12, &v17);
                v54 = *((long long *)&v14);
                v55 = __rust_alloc(32, 8);
                if (!v55)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v55->field_0 = v12;
                v55->field_8 = v13;
                v55->field_10 = v54;
                v55->field_18 = 1;
                if (v4)
                    __rust_dealloc(v5);
LABEL_4819b9:
                goto LABEL_4819c0;
            }
            v45 = v8;
            if (!v45)
            {
                v53 = __rust_alloc(55, 1);
                if (!v53)
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                v59 = v53;
                v53[2] = 136107993326709692650496122859777522281;
                v53[1] = 153095788682256076015303257309155713312;
                v53[0] = 161368339297535774731619911560691281785;
                *((long long *)((char *)&v59[2] + 15)) = 2838784465926514022;
                v60 = __rust_alloc(32, 8);
                if (!v60)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v60->field_0 = 55;
                v60->field_8 = v59;
                v60->field_10 = 55;
LABEL_4819b2:
                v60->field_18 = 1;
                goto LABEL_4819b9;
            }
            else
            {
                v2 = v9;
                if (!((unsigned int)v45 == 5) && !((unsigned int)v45 == 6) || !(!v2))
                {
                    std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v17, v0, v37);
                    if ((int)v17 != 2)
                        goto *((int *)(4296240 + (vvar_314{reg 40} - 1) * 4)) + 4296240;
                    v68 = v18;
                    if ((char)std::io::error::Error::kind::hb2ff5fa058639b3d(v68))
                    {
                        _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hfb4de9e0b4e9ba99(v68);
LABEL_4819c0:
                        if (v1)
                            __rust_dealloc(v11);
                        if (v35)
                            goto LABEL_4819f2;
                    }
                    else
                    {
                        v3 = 0;
                        v4 = v0;
                        v5 = v37;
                        v6 = 1;
                        v12 = &v3;
                        v13 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                        v17 = &g_4e08a0;
                        v18 = 2;
                        v21 = 0;
                        v19 = &v12;
                        v20 = 1;
                        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v7, &v17);
                        v69 = __rust_alloc(32, 8);
                        if (!v69)
                            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                        v69->field_0 = v7;
                        v69->field_8 = v8;
                        v69->field_10 = v9;
                        v69->field_18 = 1;
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h73a364c4334582c2(v68);
                        goto LABEL_4819b9;
                        goto LABEL_4819b9;
                    }
                }
                else
                {
                    v63 = __rust_alloc(16, 1);
                    if (!v63)
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    *(v63) = 148138287573254691529562304281658681700;
                    v60 = __rust_alloc(32, 8);
                    if (!v60)
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                    v60->field_0 = 16;
                    v60->field_8 = v63;
                    v60->field_10 = 16;
                    goto LABEL_4819b2;
                    goto LABEL_4819b2;
                }
            }
        }
        else
        {
            std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v17, v0, v37);
            if ((int)v17 != 2)
            {
                v42 = *((long long *)&v23);
                v44 = v43 * 24;
                do
                {
                    if (!v44)
                    {
                        if (!v35)
                            return;
                        goto LABEL_481309;
                    }
                } while ((v51 = v50 + 24, v44 -= 24, !uu_truncate::file_truncate::h2176164238a3ede6(v26, v27, (unsigned long long)(v52 ^ 1), v42)));
LABEL_481309:
                goto LABEL_4819f2;
            }
            else
            {
                v41 = v18;
                if ((char)std::io::error::Error::kind::hb2ff5fa058639b3d(v41))
                {
                    v17 = 0;
                    v18 = 1;
                    v19 = 0;
                    v20 = v41;
                    v56 = __rust_alloc(32, 8);
                    if (!v56)
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                    v62 = *((int128_t *)&v17);
                    v56[1] = *((int128_t *)&v19);
                    *((void*)&v56[0]) = v62;
                    goto LABEL_481309;
                }
                else
                {
                    v3 = 0;
                    v4 = v0;
                    v5 = v37;
                    v6 = 1;
                    v12 = &v3;
                    v13 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                    v17 = &g_4e08a0;
                    v18 = 2;
                    v21 = 0;
                    v19 = &v12;
                    v20 = 1;
                    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v7, &v17);
                    v58 = __rust_alloc(32, 8);
                    if (!v58)
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                    v58->field_0 = v7;
                    v58->field_8 = v8;
                    v58->field_10 = v9;
                    v58->field_18 = 1;
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h73a364c4334582c2(v41);
                    if (!v35)
                        return;
                    goto LABEL_481309;
                }
                if (!v35)
                    return;
                goto LABEL_481309;
            }
        }
    }
    else
    {
        if (v1 == 0x8000000000000000)
            core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
        v0 = v36[1];
        uu_truncate::parse_mode_and_size::h0434b61b34b4cc55(&v7, v36[1], v36[2]);
        if (*((int *)&v7) != 3)
        {
            v40 = *((int128_t *)&v7);
            *((int128_t *)&v5) = *((int128_t *)&v9);
            v3 = v40;
            v15 = &v3;
            v16 = _$LT$uucore..parser..parse_size..ParseSizeError$u20$as$u20$core..fmt..Display$GT$::fmt::he20d89d0c7d20ec1;
            v17 = &g_4e0890;
            v18 = 1;
            v21 = 0;
            v19 = &v15;
            v20 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v12, &v17);
            v47 = *((long long *)&v14);
            v48 = __rust_alloc(32, 8);
            if (!v48)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v48->field_0 = v12;
            v48->field_8 = v13;
            v48->field_10 = v47;
            v48->field_18 = 1;
            if (v4)
            {
                __rust_dealloc(v5);
                goto LABEL_4815e2;
            }
            goto LABEL_4815e2;
        }
        else
        {
            v38 = v8;
            v39 = v9;
            if (v38 != 5 && (unsigned int)v38 != 6)
            {
                v0 = v38;
                if (!v39)
                {
                    if (!(v61 << 3) + (v61 << 3 << 1))
                        goto LABEL_481841;
                    v66 = *((long long *)(vvar_1046{reg 80} + 8));
                    v67 = *((long long *)(vvar_1046{reg 80} + 16));
                    std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v17, v66, v67);
                    if ((int)v17 == 2)
                    {
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h73a364c4334582c2(v18);
                        goto LABEL_481805;
                    }
                    else if (((short)*((int *)&v22) & 0xf000) == 0x1000)
                    {
LABEL_48184d:
                        v7 = 0;
                        v8 = v66;
                        v9 = v67;
                        v10 = 1;
                        v12 = &v7;
                        v13 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                        v17 = &g_4e07c8;
                        v18 = 2;
                        v21 = 0;
                        v19 = &v12;
                        v20 = 1;
                        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v3, &v17);
                        v6 = 1;
                        v70 = __rust_alloc(32, 8);
                        if (!v70)
                            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                        v71 = *((int128_t *)&v3);
                        v70[1] = *((int128_t *)&v5);
                        *((void*)&v70[0]) = v71;
                    }
                    else
                    {
LABEL_481805:
                        goto *((int *)(4296292 + (long long)(stack_base)[368] * 4)) + 4296292;
                    }
LABEL_4815ee:
                    if (v1)
                    {
LABEL_4819f2:
                        __rust_dealloc(v0);
                    }
                }
                else
                {
LABEL_481420:
                    if (v50 != (v61 + (v61 << 1) << 3) + v50)
                    {
                        v66 = *((long long *)(vvar_1046{reg 80} + 8));
                        v67 = *((long long *)(vvar_1046{reg 80} + 16));
                        std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v17, v66, v67);
                        if ((int)v17 == 2)
                        {
                            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h73a364c4334582c2(v18);
                        }
                        else if ((*((int *)&v22) & 0xf000) == 0x1000)
                        {
                            goto LABEL_48184d;
                        }
                        goto *((int *)(4296264 + (long long)(stack_base)[368] * 4)) + 4296264;
                    }
LABEL_481841:
                    goto LABEL_4815ee;
                }
            }
            else
            {
                if (v39)
                {
                    v0 = v38;
                    goto LABEL_481420;
                }
                else
                {
                    v57 = __rust_alloc(16, 1);
                    if (!v57)
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    *(v57) = 148138287573254691529562304281658681700;
                    v65 = __rust_alloc(32, 8);
                    if (!v65)
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                    v65->field_0 = 16;
                    v65->field_8 = v57;
                    v65->field_10 = 16;
                    v65->field_18 = 1;
                }
LABEL_4815e2:
                goto LABEL_4815ee;
            }
        }
    }
    return;
}
