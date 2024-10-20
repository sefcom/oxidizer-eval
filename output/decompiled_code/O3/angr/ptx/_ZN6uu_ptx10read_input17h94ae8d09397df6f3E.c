long long uu_ptx::read_input::h94ae8d09397df6f3(struct_3 *a0, unsigned long long a1[3], unsigned long a2, struct_4 *a3)
{
    unsigned long long v0;  // [sp-0x1a8]
    void* v1;  // [sp-0x1a0]
    struct_1 *v2;  // [sp-0x198]
    void* v3;  // [sp-0x190], Other Possible Types: unsigned long long
    struct_1 *v4;  // [sp-0x188]
    void* v5;  // [sp-0x180], Other Possible Types: unsigned long long
    void* v6;  // [sp-0x170], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x168]
    unsigned long v8;  // [sp-0x160], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x158]
    unsigned long long v10;  // [sp-0x150]
    int v11;  // [sp-0x148], Other Possible Types: unsigned long long
    char v12;  // [bp-0x140], Other Possible Types: unsigned int
    unsigned short v13;  // [sp-0x13c]
    unsigned long long v14;  // [sp-0x138]
    int v15;  // [sp-0x130]
    unsigned long long v16;  // [sp-0x120]
    unsigned long long v17;  // [sp-0x118]
    int v18;  // [sp-0x108]
    int v19;  // [sp-0xf8]
    unsigned long v20;  // [sp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v21;  // [sp-0xe0]
    char v22;  // [bp-0xd0]
    char v23;  // [bp-0xcc]
    char v24;  // [bp-0xc8]
    char v25;  // [bp-0xc0]
    char v26;  // [bp-0xb8]
    char v27;  // [bp-0xb0]
    char v28;  // [bp-0xa8]
    char v29;  // [bp-0x98]
    char v30;  // [bp-0x88]
    unsigned long v31;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v32;  // [sp-0x78]
    unsigned long long v33;  // [sp-0x70]
    unsigned long v34;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long long v35;  // [sp-0x60]
    int v36;  // [sp-0x58]
    void* v37;  // [sp-0x48]
    unsigned int *v38;  // [sp-0x40]
    unsigned long long v39;  // [sp-0x38]
    unsigned long long v40;  // [sp-0x28]
    unsigned long v42;  // r12
    struct struct_5 **v43;  // fs
    unsigned long long v44[3];  // rax
    unsigned long long v45;  // r12
    unsigned long long v46;  // r13
    unsigned long long v47[3];  // rax
    int v48;  // xmm0
    int v49;  // xmm0
    int v50;  // ymm0
    int v51;  // ymm0
    unsigned long long v52;  // r13
    void* v53;  // rbp
    struct_1 *v54;  // r12
    unsigned long long v56;  // rbx
    struct_1 *v57;  // rax
    unsigned long long v58;  // r14
    unsigned long long v59;  // r15
    struct_1 *v60;  // rax
    struct_1 *v61;  // rbx
    struct_1 *v62;  // r12
    char *v63;  // rdx
    unsigned long v64;  // rbp
    unsigned int *v66;  // rax
    unsigned long long v68;  // r14
    unsigned long long v69;  // rax
    unsigned long long v70;  // rdx
    unsigned long long v71;  // rsi
    unsigned long long v72;  // rax
    int v73;  // xmm0
    int v74;  // xmm0
    unsigned long long v75;  // rbp
    unsigned long long v76;  // r14
    struct_0 *v77;  // r15
    unsigned long long v78;  // r14
    unsigned long long v80;  // r15
    unsigned long long v81;  // rbp
    struct_0 *v82;  // r14
    unsigned long long v83;  // rbp
    struct_3 *v85;  // rbx

    v40 = v42;
    if (vvar_665)
    {
        v44 = &*(v43)->padding_0[64];
        v45 = *((long long *)(v44 + &g_8));
        v46 = v44[2];
    }
    else
    {
        v45 = std::sys::pal::unix::rand::hashmap_random_keys::h37536acea0ea3646();
        v47 = &*(v43)->padding_0[64];
        v47[0] = 1;
        *((unsigned long long *)(v47 + &g_8)) = v45;
        v47[2] = v46;
    }
    *((unsigned long long *)&*(v43)->padding_0[56]) = v45 + 1;
    v48 = g_67b1d0;
    v18 = v48;
    v49 = g_67b1e0;
    v51 = v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49;
    v19 = v49;
    v20 = v45;
    v21 = v46;
    v1 = 0;
    v2 = &g_8;
    v3 = 0;
    if (!a2)
    {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hb8e940ccc192684c(&v1);
        v57 = v2;
        v57->field_0 = &"-:assertion failed: beg <= endassertion failed: max_before_size >= before.len()assertion failed: max_after_size >= after.len()\\$\\$ {}{}. \"\" \"\"";
        v56 = 1;
        goto LABEL_538d2a;
    }
    else if (a3->field_58)
    {
        v5 = a2 * 24;
        v52 = 1;
        v53 = 0;
        v54 = 0;
        do
        {
            v58 = *((long long *)(&a1[0] + v53 + (char *)&g_8));
            v59 = *((long long *)(a1 + v53 + 16));
            if (v3 - 1 == v1)
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hb8e940ccc192684c(&v1);
        } while ((v60 = v2, *((unsigned long long *)(v60 + v54)) = v58, *((unsigned long long *)((char *)v60 + (char *)v54 + (char *)&g_8)) = v59, v3 = v52, v54 += 16, v52 = v3 + 1, v53 += 24, v5 != v53));
        v61 = v2;
        v62 = v54 + v61;
    }
    else
    {
        v56 = a1[2];
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hb8e940ccc192684c(&v1);
        v57 = v2;
        v57->field_0 = *((long long *)(a1 + &g_8));
LABEL_538d2a:
        *((unsigned long long *)(v57 + &g_8)) = v56;
        v3 = 1;
        v61 = v2;
        v62 = v61 + 1;
    }
    v0 = v1;
    v4 = v61;
    v5 = 0;
    do
    {
        v63 = v61->field_0;
        v64 = *((long long *)(v61 + &g_8));
        if (v64 == 1 && *(v63) == 45)
        {
            v66 = __rust_alloc(8, 8);
            if (!v66)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            *((long long *)&v66) = std::io::stdio::stdin::h7215cc131abb55d8();
            v68 = &g_67b4e8;
        }
        else
        {
            v11 = 0x1b600000000;
            v13 = 0;
            v12 = 0;
            v12 = 1;
            std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v22, &v11, v63, v64);
            if (!*((int *)&v22))
            {
                v66 = __rust_alloc(4, 4);
                if (!v66)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                *(v66) = *((int *)&v23);
                v68 = &g_67b490;
            }
            else
            {
                v85 = a0;
                *((long long *)(v85 + &g_8)) = *((long long *)&v24);
LABEL_53915f:
                v85->field_0 = 0;
                if (v0)
                    __rust_dealloc(v4);
                _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd649edcb1d0cab74(&v18);
                return v85;
            }
        }
        v69 = __rust_alloc(0x2000, 1);
        if (!v69)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        *((int128_t *)&v36) = 0;
        v37 = 0;
        v34 = v69;
        v35 = 0x2000;
        v38 = v66;
        v39 = v68;
        core::iter::adapters::try_process::h2455e878c07c724e(&v11, &v34, v70);
        v71 = (long long)(&v11)[8];
        if (v8 == 0x8000000000000000)
        {
            v85 = a0;
            *((unsigned long long *)(v85 + &g_8)) = v9;
            goto LABEL_53915f;
        }
        else
        {
            v8 = v11;
            v9 = v71;
            v10 = v14;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::ha9860904691921b7(&v29, v9, v9 + v10 * 24);
            if (!v64)
            {
                v72 = 1;
                continue;
            }
            if (v64 < 0)
            {
LABEL_5391cc:
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            }
            v72 = __rust_alloc(v64, 1);
            if (!v72)
            {
                v6 = v64;
                goto LABEL_5391cc;
            }
        }
        memcpy(v6, v63, v64);
        v31 = v64;
        v6 = v72;
        v32 = v6;
        v33 = v64;
        v14 = v10;
        v73 = *((int128_t *)&v8);
        v11 = v73;
        v16 = *((long long *)&v30);
        v74 = *((int128_t *)&v29);
        v51 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74;
        v15 = v74;
        v17 = v5;
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h55df290faa15acbc(&v22, &v18, &v31, &v11);
        v75 = *((long long *)&v22);
        if (v75 != 0x8000000000000000)
        {
            v7 = *((long long *)&v24);
            v76 = *((long long *)&v25);
            if (v76)
            {
                v77 = v7 + (char *)&g_8;
                do
                {
                    v78 = v76;
                    if (*((long long *)(v77 - &g_8)))
                        __rust_dealloc(v77->field_-8);
                } while ((v60 = v2, *((unsigned long long *)(v60 + v54)) = v58, *((unsigned long long *)((char *)v60 + (char *)v54 + (char *)&g_8)) = v59, v3 = v52, v54 += 16, v52 = v3 + 1, v53 += 24, v5 != v53));
            }
            if (v75)
                __rust_dealloc(v7);
            v80 = *((long long *)&v27);
            v81 = *((long long *)&v28);
            if (v81)
            {
                v82 = v80 + (char *)&g_8;
                do
                {
                    v83 = v81;
                    if (*((long long *)(v82 - &g_8)))
                        __rust_dealloc(v82->field_-8);
                } while ((v60 = v2, *((unsigned long long *)(v60 + v54)) = v58, *((unsigned long long *)((char *)v60 + (char *)v54 + (char *)&g_8)) = v59, v3 = v52, v54 += 16, v52 = v3 + 1, v53 += 24, v5 != v53));
            }
            if (*((long long *)&v26))
                __rust_dealloc(v80);
        }
        v61 += 1;
        v5 += v10;
    } while (v61 != v62);
    if (v0)
        __rust_dealloc(v4);
    v85 = a0;
    v85->field_20 = *((int128_t *)&v20);
    *((void*)&v85->field_10) = v19;
    *((void*)&v85->field_0) = v18;
    return v85;
}
