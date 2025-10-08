char just::unresolved_recipe::<impl just::recipe::Recipe<just::unresolved_dependency::UnresolvedDependency>>::resolve(unsigned long a0, struct_0 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4[3])
{
    unsigned long v0;  // [bp-0x208]
    struct_1 *v1;  // [bp-0x200]
    int v2;  // [bp-0x1f8], Other Possible Types: char *
    unsigned long long v3;  // [bp-0x1f0]
    char *v4;  // [bp-0x1e8], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x1e0]
    int v6;  // [bp-0x1d8]
    int v7;  // [bp-0x1c8]
    char v8;  // [bp-0x1b8]
    unsigned long v9;  // [bp-0x190]
    unsigned long v10;  // [bp-0x188]
    unsigned long v11;  // [bp-0x180]
    unsigned long long v12;  // [bp-0x178]
    void* *v13;  // [bp-0x170]
    unsigned long long v14;  // [bp-0x168]
    void* *v15;  // [bp-0x160]
    int v16;  // [bp-0x158], Other Possible Types: void*, unsigned long long
    unsigned long long v17;  // [bp-0x158]
    unsigned long long v18;  // [bp-0x150]
    char *v19;  // [bp-0x148], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v20;  // [bp-0x140]
    void* v21;  // [bp-0x138], Other Possible Types: unsigned long
    unsigned long long v22;  // [bp-0x130]
    int v23;  // [bp-0x128], Other Possible Types: unsigned long long
    unsigned long v24;  // [bp-0x118]
    int v25;  // [bp-0x110]
    unsigned long v26;  // [bp-0x100]
    int v27;  // [bp-0xf8]
    unsigned long v28;  // [bp-0xe8]
    char v29;  // [bp-0xe0]
    unsigned long long v30;  // [bp-0xd0]
    int v31;  // [bp-0xc8]
    int v32;  // [bp-0xb8]
    int v33;  // [bp-0xa8]
    int v34;  // [bp-0x98]
    unsigned long v35;  // [bp-0x88]
    int v36;  // [bp-0x80]
    unsigned long v37;  // [bp-0x70]
    char v38;  // [bp-0x68], Other Possible Types: unsigned long
    char v39;  // [bp-0x58]
    void* v41;  // rax
    void* *v42;  // rdx
    void* *v43;  // r13
    void* *v44;  // r13
    unsigned long long v45;  // rax
    unsigned long long v46;  // rax
    void* v47;  // rax
    unsigned long v48;  // rbx
    unsigned long long v49;  // rax
    unsigned long long v50;  // rax
    int v51;  // xmm0
    int v52;  // xmm1
    unsigned long v53;  // r14
    unsigned long long v54;  // rax
    unsigned int v55;  // ebx
    unsigned long long v56;  // r14
    unsigned short v57;  // _bp
    char v58;  // r15b

    v0 = &a1->padding_18;
    v9 = a1->field_28;
    v10 = a4[2];
    if (v9 != v10)
    {
        v11 = v9;
        v38 = v10;
        v2 = &v11;
        v3 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v4 = &v38;
        v5 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v16 = &g_831928;
        v18 = 2;
        v19 = &v2;
        v20 = 2;
        v21 = 0;
        core::panicking::assert_failed(0, &v9, &v10, &v16, &g_831948); /* do not return */
    }
    v38.zip(a1->field_20, v9 * 48 + a1->field_20, a4[1], v9);
    if (v38.next())
    {
        do
        {
            v44 = v43;
            v45 = (long long)v41[32].last((long long)v41[40]).lexeme();
            v12 = v45;
            v13 = v42;
            v46 = *(v44) + 160.lexeme();
            v14 = v46;
            v15 = v42;
            if (!(char)v45.equal(v42, v46, v42))
            {
                v16 = 0;
                core::panicking::assert_failed(0, &v12, &v14, &v16, &g_831960); /* do not return */
            }
            v17.argument_range((long long)(*(v44))[96], (long long)(*(v44))[104]);
            if (!(char)v17.contains((long long)v41[16]))
            {
                v47 = (long long)v41[32].last((long long)v41[40]);
                v17.clone((long long)v41[32], (long long)v41[40]);
                v4 = v19;
                *((int128_t *)&v2) = *((int128_t *)&v17);
                v48 = (long long)(*(v44))[96];
                v49 = v48.fold((long long)(*(v44))[104] * 208 + v48);
                v50 = v48.max_arguments((long long)(*(v44))[104]);
                memcpy(&(char)v17, &(char)v2, 16);
                v20 = v4;
                v21 = (long long)v41[16];
                v22 = v49;
                v23 = v50;
                v16 = 9223372036854775833;
                (char)v2.error(v47, &v16);
                *((int128_t *)((char *)&v1->field_38 + 8)) = *((int128_t *)&v8);
                v51 = (int128_t)v2;
                v52 = *((int128_t *)&v4);
                *((void*)((char *)&v1->field_28 + 8)) = v7;
                *((void*)((char *)&v1->field_18 + 8)) = v6;
                *((void*)((char *)&v1->field_8 + 8)) = v52;
                *((void*)&(&v1->field_0)[1]) = v51;
                v1->field_0 = 0x8000000000000000;
                core::ptr::drop_in_place<alloc::vec::Vec<alloc::sync::Arc<just::recipe::Recipe>>>(a4);
                return core::ptr::drop_in_place<just::recipe::Recipe<just::unresolved_dependency::UnresolvedDependency>>(a1);
            }
            v41 = v38.next();
            v42 = v42;
        } while (v41);
    }
    (char)v2.into_iter(v0);
    v17.zip(&(char)v2, a4);
    v38.collect(&v17);
    v17.to_vec(a2, a3);
    v4 = v19;
    memcpy(&(char)v2, &v17, 16);
    if (v19)
        (char)v2.spec_extend(":: [private]\nexport ", " [private]\nexport ");
    v53 = &a1->padding_78[8];
    v54 = v53.lexeme();
    (char)v2.spec_extend(v54, (char *)v42 + v54);
    v37 = (&a1->field_d0)[1];
    *((int128_t *)&v36) = *((int128_t *)((char *)&a1->field_c0 + 8));
    v22 = *((long long *)&v39);
    memcpy(&(char)v20, &v38, 16);
    *((int128_t *)&v27) = *((int128_t *)&a1->field_58);
    v28 = a1->field_60;
    v55 = *((int *)((char *)&a1->field_d8 + 8));
    v24 = a1->field_40;
    *((uint128_t *)&v23) = a1->field_30;
    *((int128_t *)&v31) = *((int128_t *)v53);
    *((int128_t *)&v32) = *((int128_t *)(v53 + 16));
    *((int128_t *)&v33) = *((int128_t *)(v53 + 32));
    *((int128_t *)&v34) = *((int128_t *)(v53 + 48));
    v35 = *((long long *)(v53 + 64));
    memcpy(&v29, &(char)v2, 16);
    v30 = v4;
    *((int128_t *)&v25) = *((int128_t *)&(&a1->field_40)[1]);
    v26 = *((long long *)((char *)&a1->field_48 + 8));
    v56 = a1->field_d8;
    v57 = *((short *)((char *)&a1->field_d8 + 12));
    v58 = *((char *)&a1->field_d8 + 14);
    *((uint128_t *)&v16) = a1->field_0;
    v19 = a1->field_10;
    memcpy(v1, &v17, 240);
    *((unsigned long long *)&v1->padding_58[144]) = v56;
    *((unsigned int *)&v1->field_f0) = v55;
    *((unsigned short *)((char *)&v1->field_f0 + 4)) = v57;
    *((char *)&v1->field_f0 + 6) = v58;
    return core::ptr::drop_in_place<regex::error::Error>((char *)&a1->field_60 + 8);
}
