long long uu_uname::UNameOutput::new::h40859a61b39bf5fb(unsigned long long a0[24], char a1[9])
{
    unsigned long long v0;  // [sp-0x4c0]
    unsigned long long v1;  // [sp-0x4b8]
    unsigned long long v2;  // [sp-0x4b0]
    unsigned long long v3;  // [sp-0x4a8]
    unsigned long long v4;  // [sp-0x4a0]
    void* v5;  // [sp-0x498]
    void* v6;  // [sp-0x490]
    void* v7;  // [sp-0x488]
    void* v8;  // [sp-0x480]
    void* v9;  // [sp-0x478]
    void* v10;  // [sp-0x470]
    unsigned long long v11;  // [sp-0x468]
    char v12;  // [bp-0x460]
    char v13;  // [bp-0x458]
    char v14;  // [bp-0x450]
    char v15;  // [bp-0x448]
    unsigned long v16;  // [sp-0x248], Other Possible Types: unsigned long long
    unsigned int *v17;  // [sp-0x240]
    struct_1 *v18;  // [sp-0x238]
    char v19;  // [bp-0x230]
    char v20;  // [bp-0x228]
    char v21;  // [bp-0x220]
    char v22;  // [bp-0x210]
    char v23;  // [bp-0x208]
    char v24;  // [bp-0x1f8]
    char v25;  // [bp-0x1f0]
    char v26;  // [bp-0x1e0]
    char v27;  // [bp-0x1d8]
    char v28;  // [bp-0x1c8]
    char v29;  // [bp-0x1c0]
    unsigned long long v31;  // r13
    unsigned int *v32;  // rbx
    struct_1 *v33;  // r15
    uint128_t *v34;  // rax
    char v35;  // bpl
    char v36;  // al
    uint128_t *v37;  // r13
    struct_2 *v38;  // rax
    char v40;  // cl
    struct struct_0 **v41;  // rax
    unsigned long long v42;  // r13
    unsigned long long v43;  // rdi
    unsigned long long v44;  // r13
    unsigned long long v45;  // rdi
    unsigned long long v46;  // r13
    unsigned long long v47;  // rdi
    unsigned long long v48;  // r13
    unsigned long long v49;  // rdi
    unsigned int *v50;  // rax
    unsigned int *v51;  // rax
    unsigned long long v52;  // r13
    unsigned long long v53;  // rdi
    unsigned long long v54;  // rbp
    unsigned long long v55;  // rdi
    unsigned long long v56;  // r13
    unsigned long long v57;  // rcx
    unsigned long long v58;  // rcx
    unsigned long long v59;  // rcx
    unsigned long long v60;  // rcx
    unsigned long long v61;  // rcx

    _$LT$platform_info..lib_impl..target..PlatformInfo$u20$as$u20$platform_info..PlatformInfoAPI$GT$::new::hbb87dcec4b462a55(&v12);
    v31 = *((long long *)&v12);
    v32 = *((long long *)&v13);
    v33 = *((long long *)&v14);
    v11 = 0x8000000000000000;
    if (v31 != 0x8000000000000000)
    {
        memcpy(&v19, &v15, 0x200);
        v16 = v31;
        v17 = v32;
        v18 = v33;
        v35 = a1[0];
        v36 = a1[1];
        if (!(!v35) || !(!v36) || !((v40 & 1)) || !((char)((v40 & 4) >> 2)) || !((char)((v40 & 2) >> 1)) || !((char)(v40 >> 3)) || !(!a1[8]) || !(!a1[6]))
        {
            if (!v36 && !v35)
                goto LABEL_47cda9;
        }
        else
        {
            if (a1[7])
            {
LABEL_47cda9:
                v42 = 0x8000000000000000;
                goto LABEL_47cdeb;
            }
        }
        std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v12, v32, v33);
        v32 = *((long long *)&v13);
        v42 = *((long long *)&v14);
        if (!v42)
        {
            v43 = 1;
            goto LABEL_47cdba;
        }
        else
        {
            if (v42 < 0)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            v43 = __rust_alloc(v42, 1);
            if (v43)
            {
LABEL_47cdba:
                v5 = v43;
                memcpy(v5, v32, v42);
                if (*((long long *)&v12) << 1)
                    __rust_dealloc(v32);
LABEL_47cdeb:
                v4 = v42;
                if (!a1[2] && !v35)
                {
                    v44 = 0x8000000000000000;
                    goto LABEL_47ce98;
                }
                std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v12, *((long long *)&v20), *((long long *)&v21));
                v32 = *((long long *)&v13);
                v44 = *((long long *)&v14);
                if (!v44)
                {
                    v45 = 1;
                    goto LABEL_47ce67;
                }
                else
                {
                    if (v44 < 0)
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    v45 = __rust_alloc(v44, 1);
                    if (v45)
                    {
LABEL_47ce67:
                        v10 = v45;
                        memcpy(v10, v32, v44);
                        if (*((long long *)&v12) << 1)
                            __rust_dealloc(v32);
LABEL_47ce98:
                        v3 = v44;
                        if (!a1[4] && !v35)
                        {
                            v46 = 0x8000000000000000;
                            goto LABEL_47cf45;
                        }
                        std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v12, *((long long *)&v22), *((long long *)&v23));
                        v32 = *((long long *)&v13);
                        v46 = *((long long *)&v14);
                        if (!v46)
                        {
                            v47 = 1;
                            goto LABEL_47cf14;
                        }
                        else
                        {
                            if (v46 < 0)
                                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                            v47 = __rust_alloc(v46, 1);
                            if (v47)
                            {
LABEL_47cf14:
                                v9 = v47;
                                memcpy(v9, v32, v46);
                                if (*((long long *)&v12) << 1)
                                    __rust_dealloc(v32);
LABEL_47cf45:
                                v2 = v46;
                                if (!a1[3] && !v35)
                                {
                                    v48 = 0x8000000000000000;
                                    goto LABEL_47cff2;
                                }
                                std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v12, *((long long *)&v24), *((long long *)&v25));
                                v32 = *((long long *)&v13);
                                v48 = *((long long *)&v14);
                                if (!v48)
                                {
                                    v49 = 1;
                                    goto LABEL_47cfc1;
                                }
                                else
                                {
                                    if (v48 < 0)
                                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                                    v49 = __rust_alloc(v48, 1);
                                    if (v49)
                                    {
LABEL_47cfc1:
                                        v8 = v49;
                                        memcpy(v8, v32, v48);
                                        if (*((long long *)&v12) << 1)
                                            __rust_dealloc(v32);
LABEL_47cff2:
                                        v1 = v48;
                                        v50 = a1[5];
                                        v51 = v50 | -0x100 | (char)v50 | v35;
                                        if (!(char)v50 && !v35)
                                        {
                                            v52 = 0x8000000000000000;
                                            goto LABEL_47d09f;
                                        }
                                        std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v12, *((long long *)&v26), *((long long *)&v27));
                                        v32 = *((long long *)&v13);
                                        v52 = *((long long *)&v14);
                                        if (!v52)
                                        {
                                            v53 = 1;
                                            goto LABEL_47d06e;
                                        }
                                        else
                                        {
                                            if (v52 < 0)
                                                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                                            v53 = __rust_alloc(v52, 1);
                                            if (v53)
                                            {
LABEL_47d06e:
                                                v7 = v53;
                                                memcpy(v7, v32, v52);
                                                v51 = *((long long *)&v12) * 2;
                                                if (v51)
                                                    v51 = __rust_dealloc(v32);
LABEL_47d09f:
                                                v0 = v52;
                                                if (!v35 && !a1[8])
                                                {
                                                    v54 = 0x8000000000000000;
                                                    goto LABEL_47d148;
                                                }
                                                std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v12, *((long long *)&v28), *((long long *)&v29));
                                                v32 = *((long long *)&v13);
                                                v54 = *((long long *)&v14);
                                                if (!v54)
                                                {
                                                    v55 = 1;
                                                    goto LABEL_47d117;
                                                }
                                                else
                                                {
                                                    if (v54 < 0)
                                                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                                                    v55 = __rust_alloc(v54, 1);
                                                    if (v55)
                                                    {
LABEL_47d117:
                                                        v6 = v55;
                                                        memcpy(v6, v32, v54);
                                                        v51 = *((long long *)&v12) * 2;
                                                        if (v51)
                                                            v51 = __rust_dealloc(v32);
LABEL_47d148:
                                                        if (!a1[6])
                                                        {
                                                            v56 = 0x8000000000000000;
                                                            if (!a1[7])
                                                            {
                                                                vvar_885{reg 24} = v4;
                                                                a0[0] = v57;
                                                                a0[1] = v5;
                                                                a0[2] = v57;
                                                                vvar_886{reg 24} = v3;
                                                                a0[3] = v58;
                                                                a0[4] = v10;
                                                                a0[5] = v58;
                                                                vvar_887{reg 24} = v2;
                                                                a0[6] = v59;
                                                                a0[7] = v9;
                                                                a0[8] = v59;
                                                                vvar_888{reg 24} = v1;
                                                                a0[9] = v60;
                                                                a0[10] = v8;
                                                                a0[11] = v60;
                                                                vvar_889{reg 24} = v0;
                                                                a0[12] = v61;
                                                                a0[13] = v7;
                                                                a0[14] = v61;
                                                                a0[15] = v54;
                                                                a0[16] = v6;
                                                                a0[17] = v54;
                                                                a0[18] = 0x8000000000000000;
                                                                a0[19] = v32;
                                                                a0[20] = 7;
                                                                a0[21] = v11;
                                                                a0[22] = v51;
                                                                a0[23] = 7;
                                                                core::ptr::drop_in_place$LT$platform_info..lib_impl..target..PlatformInfo$GT$::h3b40c764d20e53d1(&v16);
                                                                return a0;
                                                            }
                                                        }
                                                        else
                                                        {
                                                            v56 = 7;
                                                            v51 = __rust_alloc(7, 1);
                                                            if (!v51)
                                                                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                                                            v32 = v51;
                                                            *((int *)((char *)v51 + 3)) = 1853321070;
                                                            *(v51) = 1852534389;
                                                            if (!a1[7])
                                                            {
                                                                v57 = v4;
                                                                a0[0] = v57;
                                                                a0[1] = v5;
                                                                a0[2] = v57;
                                                                v58 = v3;
                                                                a0[3] = v58;
                                                                a0[4] = v10;
                                                                a0[5] = v58;
                                                                v59 = v2;
                                                                a0[6] = v59;
                                                                a0[7] = v9;
                                                                a0[8] = v59;
                                                                v60 = v1;
                                                                a0[9] = v60;
                                                                a0[10] = v8;
                                                                a0[11] = v60;
                                                                v61 = v0;
                                                                a0[12] = v61;
                                                                a0[13] = v7;
                                                                a0[14] = v61;
                                                                a0[15] = v54;
                                                                a0[16] = v6;
                                                                a0[17] = v54;
                                                                a0[18] = 7;
                                                                a0[19] = v32;
                                                                a0[20] = 7;
                                                                a0[21] = v11;
                                                                a0[22] = v51;
                                                                a0[23] = 7;
                                                                core::ptr::drop_in_place$LT$platform_info..lib_impl..target..PlatformInfo$GT$::h3b40c764d20e53d1(&v16);
                                                                return a0;
                                                            }
                                                        }
                                                        v11 = 7;
                                                        v51 = __rust_alloc(7, 1);
                                                        if (v51)
                                                        {
                                                            *((int *)((char *)v51 + 3)) = 1853321070;
                                                            *(v51) = 1852534389;
                                                            vvar_874{reg 24} = v4;
                                                            a0[0] = v57;
                                                            a0[1] = v5;
                                                            a0[2] = v57;
                                                            vvar_875{reg 24} = v3;
                                                            a0[3] = v58;
                                                            a0[4] = v10;
                                                            a0[5] = v58;
                                                            vvar_876{reg 24} = v2;
                                                            a0[6] = v59;
                                                            a0[7] = v9;
                                                            a0[8] = v59;
                                                            vvar_877{reg 24} = v1;
                                                            a0[9] = v60;
                                                            a0[10] = v8;
                                                            a0[11] = v60;
                                                            vvar_878{reg 24} = v0;
                                                            a0[12] = v61;
                                                            a0[13] = v7;
                                                            a0[14] = v61;
                                                            a0[15] = v54;
                                                            a0[16] = v6;
                                                            a0[17] = v54;
                                                            a0[18] = v56;
                                                            a0[19] = v32;
                                                            a0[20] = 7;
                                                            a0[21] = v11;
                                                            a0[22] = v51;
                                                            a0[23] = 7;
                                                            core::ptr::drop_in_place$LT$platform_info..lib_impl..target..PlatformInfo$GT$::h3b40c764d20e53d1(&v16);
                                                            return a0;
                                                        }
                                                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
        v34 = __rust_alloc(22, 1);
        if (!v34)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v37 = v34;
        *(v34) = 134856676109208638757024236182774374755;
        *((long long *)((char *)v37 + 14)) = 7308604895910520180;
        v38 = __rust_alloc(32, 8);
        if (!v38)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v38->field_0 = 22;
        v38->field_8 = v37;
        v38->field_10 = 22;
        v38->field_18 = 1;
        if (v33->field_0)
            v41(v32);
        if (v33->field_8)
            __rust_dealloc(v32);
        a0[1] = v38;
        a0[2] = &g_4d9d50;
        a0[0] = 9223372036854775809;
        return a0;
    }
}
