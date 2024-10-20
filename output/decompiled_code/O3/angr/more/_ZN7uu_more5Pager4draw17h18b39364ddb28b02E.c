long long uu_more::Pager::draw::h18b39364ddb28b02(struct_1 *a0, unsigned long long a1, unsigned int a2, unsigned long long a3)
{
    void* v0;  // [bp-0x158], Other Possible Types: unsigned short, unsigned long
    unsigned long long *v1;  // [sp-0x150], Other Possible Types: unsigned long long
    unsigned long long *v2;  // [sp-0x148]
    unsigned long v3;  // [sp-0x140], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x138]
    unsigned long long v5;  // [sp-0x130]
    unsigned long long v6;  // [sp-0x128]
    void* v7;  // [sp-0x120], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x118]
    void* v9;  // [sp-0x110], Other Possible Types: unsigned long long
    int v10;  // [sp-0x108], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v11;  // [sp-0x100]
    unsigned long long *v12;  // [sp-0xf8], Other Possible Types: unsigned long long
    char v13;  // [bp-0xe8], Other Possible Types: unsigned long, unsigned long long
    unsigned long v14;  // [sp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0xd8]
    unsigned long long v16;  // [sp-0xd0]
    void* v17;  // [sp-0xc8]
    unsigned long long v18;  // [sp-0xb8]
    unsigned int v19;  // [sp-0x9c]
    int v20;  // [sp-0x98]
    unsigned long long v21;  // [sp-0x88]
    int v23;  // [sp-0x78]
    unsigned long long v24;  // [sp-0x68]
    unsigned long v25;  // [sp-0x60], Other Possible Types: unsigned long long
    char v26;  // [bp-0x50]
    char v27;  // [bp-0x48]
    char v28;  // [bp-0x38]
    unsigned long long v30;  // rax
    unsigned long long v31;  // rsi
    unsigned long long v32;  // rdx
    unsigned long long v33;  // rcx
    unsigned long long *v34;  // r14
    struct_0 *v35;  // r12
    unsigned long long v36;  // rax
    unsigned long long v37;  // rcx
    unsigned long long v38;  // r15
    unsigned long long *v39;  // rbp
    struct_1 *v40;  // 4096
    unsigned long long v41;  // rbx
    char v42;  // r13b
    struct_1 *v43;  // r13
    struct_0 *v44;  // r12
    unsigned long long *v45;  // r15
    unsigned long long *v46;  // r14
    struct_0 *v47;  // r12
    unsigned long long *v48;  // rbp
    unsigned long long v49;  // cc_ndep
    unsigned long long v50;  // cc_dep2
    unsigned long long v51;  // cc_dep2
    unsigned long long *v52;  // rbp
    unsigned long long v53;  // cc_dep2
    unsigned long long *v55;  // rbp
    unsigned long long v57;  // rbp
    unsigned long long v58;  // rax
    unsigned long long v59;  // cc_ndep
    unsigned long long v60;  // rax
    unsigned long long v61;  // r14
    unsigned long v62;  // xmm0lq
    unsigned long long v63;  // rax
    unsigned long long v65;  // rcx
    unsigned long long v66;  // rax
    int v67;  // ymm0
    unsigned long long v68;  // rax
    unsigned long long v70;  // rax
    unsigned long long v72;  // rdx
    unsigned long long v73;  // rax

    v30 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a1, &anon.d58bd02a723bd021606085005bc52729.42.llvm.16558445346262642515, 4, a3);
    if (v30)
    {
        v3 = v30;
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    }
    v30 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(a1, v31, v32, v33);
    if (!v30)
    {
        a0->field_38 = 0;
        v0 = 0;
        v1 = &g_8;
        v2 = 0;
        v34 = a0->field_40;
        if (v34)
        {
            v35 = *((long long *)(a0 + &g_8));
            v36 = a0->field_10;
            v37 = &v35[v36];
            v38 = a0->field_18;
            if ((char)vvar_824)
            {
                if (v38)
                {
                    if (v36 <= v38)
                        goto LABEL_4a3918;
                    v35 = &v35[v38];
                }
                else if (!v36)
                {
                    goto LABEL_4a3918;
                }
                v18 = v37;
                v41 = v35->field_10;
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h407132db1b25e86e(&v0);
                *(v1) = v35;
                v2 = 1;
                if ((unsigned int)v34 == 1)
                    goto LABEL_4a38f9;
                v42 = !v41;
                v43 = a0 | -0x100 | v42;
                v44 = v35 + 1;
                v39 = 1;
                v9 = 0;
                while (v44 != v18)
                {
                    if (v44->field_10)
                    {
                        v43 = ((v42 & 1) ? 0 : v42);
                        v50 = v0;
                        if (v39 == v0)
                            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h407132db1b25e86e(&v0);
                        *((struct_0 **)((char *)v1 + v39 * &g_8)) = v44;
                        v49 = v39 < v50;
                        v39 = (char *)v39 + 1;
                        v2 = v39;
                    }
                    else if ((v42 & 1))
                    {
                        v9 += 1;
                        a0->field_38 = v9;
                        v49 = amd64g_calculate_rflags_c(17, (unsigned long long)(v42 & 1), 0, v49);
                        v38 += 1;
                        a0->field_18 = v38;
                    }
                    else
                    {
                        v51 = v0;
                        if (v39 == v0)
                            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h407132db1b25e86e(&v0);
                        *((struct_0 **)((char *)v1 + v39 * &g_8)) = v44;
                        v49 = v39 < v51;
                        v39 = (char *)v39 + 1;
                        v2 = v39;
                        v43 = v43 | -0x100 | 1;
                    }
                    v44 += 1;
                    if (v39 >= v34)
                        goto LABEL_4a3f09;
                }
            }
            if (!v38)
            {
                if (!v36)
                    goto LABEL_4a3918;
                goto LABEL_4a38d7;
            }
            if (v36 <= v38)
            {
LABEL_4a3918:
                v39 = 0;
                goto LABEL_4a396b;
            }
            v35 = &v35[v38];
LABEL_4a38d7:
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h407132db1b25e86e(&v0);
            *(v1) = v35;
            v2 = 1;
            if ((unsigned int)v34 != 1)
            {
                v47 = v35 + 1;
                v48 = 1;
            }
            else
            {
LABEL_4a38f9:
                v34 = v34;
                v9 = v0;
                v45 = v1;
                v46 = v45 + &g_8;
                goto LABEL_4a3996;
            }
            while (true)
            {
                if (v47 == v37)
                {
LABEL_4a396b:
                    v40->field_18 = v40->field_30;
                    goto LABEL_4a3f09;
                }
                else
                {
                    v53 = v0;
                    if (v39 == v0)
                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h407132db1b25e86e(&v0);
                    *((struct_0 **)((char *)v1 + v39 * &g_8)) = v47;
                    v49 = v39 < v53;
                    v48 = (char *)v39 + 1;
                    v2 = v48;
                    v47 += 1;
                    if (v34 == v2)
                    {
LABEL_4a3f09:
                        v55 = v52;
                        v45 = v1;
                        if (!v55)
                            break;
                        v9 = v0;
                        v34 = v34;
                        v46 = (char *)v45 + v55 * &g_8;
LABEL_4a3996:
                        v45 = v45;
                        do
                        {
                            v25 = *(v45);
                            v10 = &v25;
                            v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h74ad84ad43bb93ca;
                            v3 = &g_517f10;
                            v4 = 2;
                            v7 = 0;
                            v5 = &v10;
                            v6 = 1;
                            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v13, &v3);
                            v57 = v14;
                            v58 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(a1, v57, v15, v33);
                            if (v58)
                            {
                                v3 = v58;
                                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                            }
                            if (v13)
                                __rust_dealloc(v57);
                            v45 += &g_8;
                        } while (v45 != v46);
                        break;
                    }
                }
            }
            if (v9)
                __rust_dealloc(v45);
        }
        v60 = a0->field_30;
        v61 = (char *)v34 + a0->field_18;
        if (!((char)amd64g_calculate_condition(3, 4, v34, a0->field_18, v59)))
            v61 = -1;
        if (v60 > v61)
        {
            round(v62);
            v0 = (unsigned short)(...);
            v13 = &v0;
            v14 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hc16e9a303f8fca40;
            v3 = &g_517f48;
            v4 = 2;
            v7 = 0;
            v68 = &v13;
        }
        else
        {
            v63 = a0->field_20;
            v13 = v65;
            v14 = v66;
            v0 = &v13;
            v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3137f0bf4e40f87e;
            v3 = &g_517f68;
            v4 = 1;
            v7 = 0;
            v68 = &v0;
        }
        v5 = v68;
        v6 = 1;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v27, &v3);
        v24 = *((long long *)&v28);
        *((int128_t *)&v23) = *((int128_t *)&v27);
        v13 = &v23;
        v14 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v3 = &g_517f78;
        v4 = 2;
        v7 = 0;
        v5 = &v13;
        v6 = 1;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v25, &v3);
        *((int128_t *)&v20) = *((int128_t *)&v25);
        v21 = *((long long *)&v26);
        if (a0->field_42)
        {
            if (a2 == 0x110000)
            {
                v13 = &v20;
                v14 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v3 = &g_517fa8;
                v4 = 2;
                v7 = 0;
                v5 = &v13;
                v6 = 1;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v0, &v3);
            }
            else
            {
                v19 = a2;
                v13 = &v20;
                v14 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v15 = &v19;
                v16 = _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
                v3 = &g_517fc8;
                v4 = 3;
                v7 = 0;
                v5 = &v13;
                v6 = 2;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v0, &v3);
            }
LABEL_4a3de3:
            *((int128_t *)&v10) = *((int128_t *)&v0);
            v12 = v2;
        }
        else if (a2 == 0x110000)
        {
            v12 = *((long long *)&v26);
            *((int128_t *)&v10) = *((int128_t *)&v25);
        }
        else
        {
            v13 = &v20;
            v14 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v15 = &g_517f98;
            v16 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3137f0bf4e40f87e;
            v3 = &g_419990;
            v4 = 2;
            v7 = 0;
            v5 = &v13;
            v6 = 2;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v0, &v3);
            goto LABEL_4a3de3;
        }
        v3 = &g_41f1e9;
        v4 = _$LT$crossterm..style..types..attribute..Attribute$u20$as$u20$core..fmt..Display$GT$::fmt::h5cc750ef92418b98;
        v5 = &v10;
        v6 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v7 = &g_41f1ea;
        v8 = _$LT$crossterm..style..types..attribute..Attribute$u20$as$u20$core..fmt..Display$GT$::fmt::h5cc750ef92418b98;
        v13 = &g_517ff8;
        v14 = 3;
        v17 = 0;
        v15 = &v3;
        v16 = 3;
        v70 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_fmt::h0f6acf0ef7a6b873(a1, &v13, v32);
        if (v70)
        {
            v13 = v70;
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        }
        if (v10)
            __rust_dealloc(v11);
        if ((long long)v23)
            __rust_dealloc((long long)(&v23)[8]);
        v73 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(a1, (long long)v23, v72, v33);
        if (v73)
        {
            v3 = v73;
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        }
        return v73;
    }
}
