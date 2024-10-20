long long uu_csplit::split_name::SplitName::new::h3e641f7b6f8ed00f(struct_4 *a0, struct_3 *a1, struct_0 *a2, struct_2 *a3)
{
    unsigned int v0;  // [sp-0x13c]
    struct_0 *v1;  // [sp-0x138]
    unsigned short *v2;  // [sp-0x130]
    unsigned long long v3;  // [sp-0x128]
    char v4;  // [bp-0x120], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x118], Other Possible Types: unsigned long
    unsigned long v6;  // [sp-0x110], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x108]
    void* v8;  // [sp-0x100]
    char v9;  // [bp-0xf0]
    char v10;  // [bp-0xe0]
    unsigned long v11;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long v12;  // [sp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0xc8]
    int v14;  // [sp-0xc0]
    int v15;  // [sp-0xb0]
    int v16;  // [sp-0xa0]
    unsigned long long v17;  // [sp-0x90]
    int v18;  // [sp-0x88]
    unsigned long long v19;  // [sp-0x78]
    int v20;  // [sp-0x68]
    unsigned long long v21;  // [sp-0x58]
    char v22;  // [bp-0x48]
    unsigned long long v25;  // r13
    unsigned short *v26;  // rax
    unsigned long long v27;  // rbx
    unsigned long long v29;  // r15
    unsigned long long v30;  // r14
    char v31;  // bpl
    struct_0 *v32;  // r14
    unsigned int v34;  // eax
    unsigned long long v36;  // rbx
    unsigned long long v37;  // rsi

    if (v3 != 0x8000000000000000)
    {
        v3 = a1->field_0;
        v2 = &a1->field_8->field_0;
        v25 = a1->field_10;
    }
    else
    {
        v25 = 2;
        v26 = __rust_alloc(2, 1);
        if (!v26)
        {
            v1 = a2;
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
        v2 = v26;
        *(v26) = 30840;
        v3 = 2;
    }
    v27 = a3->field_0;
    if (v27 != 0x8000000000000000)
    {
        a2 = a2;
        v30 = a3->field_8;
        a3 = a3->field_10;
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v4, v30, a3);
        if (v4)
        {
            a0->field_8 = 8;
            a0->field_10 = v27;
            a0->field_18 = v30;
            *((struct_2 **)&a0->padding_20[0]) = a3;
            a0->field_0 = 0x8000000000000000;
            v31 = 0;
            goto LABEL_541da9;
        }
        else
        {
            if (v27)
                __rust_dealloc(v30);
            v29 = v5;
        }
    }
    v11 = v29;
    v31 = a3 | -0x100 | a2->field_0 != 0x8000000000000000;
    if (a2->field_0 != 0x8000000000000000)
    {
        v0 = 0;
    }
    else
    {
        v12 = &v11;
        v13 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
        v4 = &g_675ae0;
        v5 = 2;
        v8 = 0;
        v6 = &v12;
        v7 = 1;
        v0 = &v12 | -0x100 | 1;
        v0 = alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v22, &v4) | -0x100 | 1;
    }
    v21 = v32->field_10;
    *((int128_t *)&v20) = *((int128_t *)&v32->field_0);
    v19 = v21;
    v18 = v20;
    uucore::features::format::Format$LT$F$GT$::parse::hee96aec278886605(&v4, &v18);
    if (v12 != 0x8000000000000000)
    {
        *((int128_t *)&v16) = *((int128_t *)&v9);
        v17 = *((long long *)&v10);
        *((int128_t *)&v14) = *((int128_t *)&v6);
        *((int128_t *)&v15) = *((int128_t *)&v8);
        v12 = v4;
        v13 = v5;
        if (!v25)
        {
            v36 = 1;
        }
        else
        {
            v1 = a2;
            if (v25 < 0)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            v36 = __rust_alloc(v25, 1);
            if (!v36)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
        memcpy(v36, v2, v25);
        *((int128_t *)&a0->field_18) = *((int128_t *)&v12);
        *((void*)&(&a0->padding_20)[1]) = v14;
        *((void*)((char *)&a0->field_28 + 8)) = v15;
        *((void*)((char *)&a0->field_38 + 8)) = v16;
        *((unsigned long long *)((char *)&a0->field_48 + 8)) = v17;
        a0->field_0 = v25;
        a0->field_8 = v36;
        a0->field_10 = v25;
        if (!v3)
            return a0;
    }
    else
    {
        v34 = v5;
        a0->field_8 = (-0x100 | v34 == 10) + 9;
        a0->field_0 = 0x8000000000000000;
        if ((v34 - 6 < 8 ? v34 - 6 : 3) <= 6)
        {
            goto *((int *)(4618916 + vvar_92{reg 24} * 4)) + 4618916;
        }
        else if (v6)
        {
            __rust_dealloc(v7);
        }
LABEL_541da9:
        if (v3)
            __rust_dealloc(v2);
        v37 = a2->field_0;
        if (!(!v31) || !(v37 != 0x8000000000000000))
            return a0;
        if (!v37)
            return a0;
        v2 = a2->padding_8;
    }
    __rust_dealloc(v2);
    return a0;
}
