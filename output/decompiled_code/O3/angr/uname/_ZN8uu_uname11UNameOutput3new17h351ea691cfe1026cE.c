long long uu_uname::UNameOutput::new::h351ea691cfe1026c(struct_0 *a0, char a1[9])
{
    unsigned long long v0;  // [bp-0x558]
    unsigned long long v1;  // [sp-0x548]
    unsigned long long v2;  // [bp-0x538]
    unsigned long long v3;  // [sp-0x528]
    unsigned long long v4;  // [bp-0x518]
    unsigned long long v5;  // [sp-0x508]
    unsigned long long v6;  // [bp-0x4f8]
    unsigned long long v7;  // [sp-0x4e8]
    int v8;  // [bp-0x4d8], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x4c8]
    int v10;  // [bp-0x4b8], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x4a8]
    unsigned long long v12;  // [bp-0x498]
    unsigned long long v13;  // [sp-0x488]
    int v14;  // [sp-0x478]
    int v15;  // [bp-0x468], Other Possible Types: char
    char v16;  // [bp-0x460]
    unsigned long long v17;  // [sp-0x458], Other Possible Types: unsigned long
    int v18;  // [bp-0x450], Other Possible Types: char
    unsigned long long v19;  // [sp-0x440]
    int v20;  // [sp-0x438]
    unsigned long long v21;  // [sp-0x428]
    int v22;  // [sp-0x420]
    unsigned long long v23;  // [sp-0x410]
    int v24;  // [sp-0x408]
    unsigned long long v25;  // [sp-0x3f8]
    int v26;  // [sp-0x3f0]
    unsigned long long v27;  // [sp-0x3e0]
    int v28;  // [sp-0x3d8]
    unsigned long long v29;  // [sp-0x3c8]
    unsigned long v30;  // [sp-0x248], Other Possible Types: unsigned long long
    unsigned long long v31;  // [sp-0x240]
    unsigned long long v32;  // [sp-0x238]
    char v33;  // [bp-0x230]
    char v34;  // [bp-0x228]
    char v35;  // [bp-0x220]
    char v36;  // [bp-0x210]
    char v37;  // [bp-0x208]
    char v38;  // [bp-0x1f8]
    char v39;  // [bp-0x1f0]
    char v40;  // [bp-0x1e0]
    char v41;  // [bp-0x1d8]
    char v42;  // [bp-0x1c8]
    char v43;  // [bp-0x1c0]
    unsigned long long v45;  // r13
    unsigned long long v46;  // rbp
    unsigned long long v47;  // r15
    unsigned long long v48;  // r12
    char v49;  // bpl
    char v50;  // al
    char v52;  // cl

    v45 = 0x8000000000000000;
    _$LT$platform_info..lib_impl..target..PlatformInfo$u20$as$u20$platform_info..PlatformInfoAPI$GT$::new::ha4b962048a517d48(&v15);
    v46 = *((long long *)&v15);
    v47 = *((long long *)&v16);
    v48 = v17;
    if (v46 == 0x8000000000000000)
    {
        a0->field_8 = uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::h60c72fb2e39c2b3f(v47, v48);
        a0->field_10 = &g_50b170;
        a0->field_0 = 9223372036854775809;
        return a0;
    }
    memcpy(&v33, &v18, 0x200);
    v30 = v46;
    v31 = v47;
    v32 = v48;
    v49 = a1[0];
    v50 = a1[1];
    if (!(!v49) || !(!v50) || !((v52 & 1)) || !((char)((v52 & 4) >> 2)) || !((char)((v52 & 2) >> 1)) || !((char)(v52 >> 3)) || !(!a1[8]) || !(!a1[6]))
    {
        if (!v50 && !v49)
            goto LABEL_4a8666;
    }
    else
    {
        if (a1[7])
        {
LABEL_4a8666:
            v0 = 0x8000000000000000;
            goto LABEL_4a866a;
        }
    }
    uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::h5f1544a0fffce066(&v15, v47, v48);
    v1 = v17;
    *((void*)&v0) = v15;
LABEL_4a866a:
    if (!a1[2] && !v49)
    {
        v2 = 0x8000000000000000;
    }
    else
    {
        uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::h3687ac6272136274(&v15, *((long long *)&v34), *((long long *)&v35));
        v3 = v17;
        *((void*)&v2) = v15;
    }
    if (!a1[4] && !v49)
    {
        v4 = 0x8000000000000000;
    }
    else
    {
        uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::hb194b474012d03c3(&v15, *((long long *)&v36), *((long long *)&v37));
        v5 = v17;
        *((void*)&v4) = v15;
    }
    if (!a1[3] && !v49)
    {
        v6 = 0x8000000000000000;
    }
    else
    {
        uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::hd8014734772d6d9e(&v15, *((long long *)&v38), *((long long *)&v39));
        v7 = v17;
        *((void*)&v6) = v15;
    }
    if (!a1[5] && !v49)
    {
        v8 = 0x8000000000000000;
        if (!v49 && !a1[8])
            goto LABEL_4a883b;
LABEL_4a879f:
        uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::hab4e1388d167a7da(&v15, *((long long *)&v42), *((long long *)&v43));
        v11 = v17;
        v10 = v15;
        if (!a1[6])
            goto LABEL_4a884a;
LABEL_4a87e5:
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h427e8d00d5b06fd3(&v15, "unknown", 7);
        v13 = v17;
        *((void*)&v12) = v15;
        if (a1[7])
        {
LABEL_4a8859:
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h427e8d00d5b06fd3(&v15, "unknown", 7);
            v45 = *((long long *)&v15);
            *((int128_t *)&v14) = *((int128_t *)&v16);
        }
    }
    else
    {
        uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::h7b3a0060148809c8(&v15, *((long long *)&v40), *((long long *)&v41));
        v9 = v17;
        v8 = v15;
        if (!(!v49) || !(!a1[8]))
            goto LABEL_4a879f;
LABEL_4a883b:
        v10 = 0x8000000000000000;
        if (!(!v49) || !(!a1[8]))
            goto LABEL_4a87e5;
LABEL_4a884a:
        v12 = 0x8000000000000000;
        if (!(!v49) || !(!a1[8]))
            goto LABEL_4a8859;
    }
    v17 = v1;
    *((int128_t *)&v15) = *((int128_t *)&v0);
    *((int128_t *)&v18) = *((int128_t *)&v2);
    v19 = v3;
    *((int128_t *)&v20) = *((int128_t *)&v4);
    v21 = v5;
    *((int128_t *)&v22) = *((int128_t *)&v6);
    v23 = v7;
    v25 = v9;
    *((int128_t *)&v24) = (int128_t)v8;
    v27 = v11;
    *((int128_t *)&v26) = (int128_t)v10;
    v29 = v13;
    *((int128_t *)&v28) = *((int128_t *)&v12);
    memcpy(a0, &v15, 168);
    a0->field_a8 = v45;
    *((void*)&a0->field_b0) = v14;
    core::ptr::drop_in_place$LT$platform_info..lib_impl..target..PlatformInfo$GT$::h4c5e76bb01c8ee30(&v30);
    return a0;
}
