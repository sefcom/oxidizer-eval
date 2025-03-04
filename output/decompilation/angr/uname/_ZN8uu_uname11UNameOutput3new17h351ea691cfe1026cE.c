long long uu_uname::UNameOutput::new::h351ea691cfe1026c(struct_0 *a0, char a1[9])
{
    unsigned long long v0;  // [bp-0x558]
    unsigned long long v2;  // [sp-0x548]
    unsigned long long v4;  // [bp-0x538]
    unsigned long long v5;  // [sp-0x528]
    unsigned long long v7;  // [bp-0x518]
    unsigned long long v8;  // [sp-0x508]
    unsigned long long v10;  // [bp-0x4f8]
    unsigned long long v11;  // [sp-0x4e8]
    int v13;  // [bp-0x4d8], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x4c8]
    int v16;  // [bp-0x4b8], Other Possible Types: unsigned long long
    unsigned long long v17;  // [sp-0x4a8]
    unsigned long long v19;  // [bp-0x498]
    unsigned long long v20;  // [sp-0x488]
    int v21;  // [sp-0x478]
    int v22;  // [bp-0x468], Other Possible Types: char
    char v23;  // [bp-0x460]
    unsigned long long v24;  // [sp-0x458], Other Possible Types: unsigned long
    int v25;  // [bp-0x450], Other Possible Types: char
    unsigned long long v26;  // [sp-0x440]
    int v27;  // [sp-0x438]
    unsigned long long v28;  // [sp-0x428]
    int v29;  // [sp-0x420]
    unsigned long long v30;  // [sp-0x410]
    int v31;  // [sp-0x408]
    unsigned long long v32;  // [sp-0x3f8]
    int v33;  // [sp-0x3f0]
    unsigned long long v34;  // [sp-0x3e0]
    int v35;  // [sp-0x3d8]
    unsigned long long v36;  // [sp-0x3c8]
    unsigned long v37;  // [sp-0x248]
    unsigned long long v38;  // [sp-0x240]
    unsigned long long v39;  // [sp-0x238]
    char v40;  // [bp-0x230]
    char v41;  // [bp-0x228]
    char v42;  // [bp-0x220]
    char v43;  // [bp-0x210]
    char v44;  // [bp-0x208]
    char v45;  // [bp-0x1f8]
    char v46;  // [bp-0x1f0]
    char v47;  // [bp-0x1e0]
    char v48;  // [bp-0x1d8]
    char v49;  // [bp-0x1c8]
    char v50;  // [bp-0x1c0]
    unsigned long long v52;  // r13
    unsigned long long v53;  // rbp
    unsigned long long v54;  // r15
    unsigned long long v55;  // r12
    char v56;  // bpl
    char v57;  // al
    char v59;  // cl

    v52 = 0x8000000000000000;
    _$LT$platform_info..lib_impl..target..PlatformInfo$u20$as$u20$platform_info..PlatformInfoAPI$GT$::new::ha4b962048a517d48(&v22);
    v53 = *((long long *)&v22);
    v54 = *((long long *)&v23);
    v55 = v24;
    if (v53 == 0x8000000000000000)
    {
        a0->field_8 = uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::h60c72fb2e39c2b3f(v54, v55);
        a0->field_10 = &g_50b170;
        a0->field_0 = 9223372036854775809;
        return a0;
    }
    memcpy(&v40, &v25, 0x200);
    v37 = v53;
    v38 = v54;
    v39 = v55;
    v56 = a1[0];
    v57 = a1[1];
    if (!(!v56) || !(!v57) || !((v59 & 1)) || !((char)((v59 & 4) >> 2)) || !((char)((v59 & 2) >> 1)) || !((char)(v59 >> 3)) || !(!a1[8]) || !(!a1[6]))
    {
        if (!v57 && !v56)
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
    uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::h5f1544a0fffce066(&v22, v54, v55);
    v2 = v24;
    *((void*)&v0) = v22;
LABEL_4a866a:
    if (!a1[2] && !v56)
    {
        v4 = 0x8000000000000000;
    }
    else
    {
        uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::h3687ac6272136274(&v22, *((long long *)&v41), *((long long *)&v42));
        v5 = v24;
        *((void*)&v4) = v22;
    }
    if (!a1[4] && !v56)
    {
        v7 = 0x8000000000000000;
    }
    else
    {
        uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::hb194b474012d03c3(&v22, *((long long *)&v43), *((long long *)&v44));
        v8 = v24;
        *((void*)&v7) = v22;
    }
    if (!a1[3] && !v56)
    {
        v10 = 0x8000000000000000;
    }
    else
    {
        uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::hd8014734772d6d9e(&v22, *((long long *)&v45), *((long long *)&v46));
        v11 = v24;
        *((void*)&v10) = v22;
    }
    if (!a1[5] && !v56)
    {
        v13 = 0x8000000000000000;
        if (!v56 && !a1[8])
            goto LABEL_4a883b;
LABEL_4a879f:
        uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::hab4e1388d167a7da(&v22, *((long long *)&v49), *((long long *)&v50));
        v17 = v24;
        v16 = v22;
        if (!a1[6])
            goto LABEL_4a884a;
LABEL_4a87e5:
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h427e8d00d5b06fd3(&v22, "unknown", 7);
        v20 = v24;
        *((void*)&v19) = v22;
        if (a1[7])
        {
LABEL_4a8859:
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h427e8d00d5b06fd3(&v22, "unknown", 7);
            v52 = *((long long *)&v22);
            *((int128_t *)&v21) = *((int128_t *)&v23);
        }
    }
    else
    {
        uu_uname::UNameOutput::new::_$u7b$$u7b$closure$u7d$$u7d$::h7b3a0060148809c8(&v22, *((long long *)&v47), *((long long *)&v48));
        v14 = v24;
        v13 = v22;
        if (!(!v56 && !a1[8]))
            goto LABEL_4a879f;
LABEL_4a883b:
        v16 = 0x8000000000000000;
        if (!(!a1[6]))
            goto LABEL_4a87e5;
LABEL_4a884a:
        v19 = 0x8000000000000000;
        if (!(!a1[7]))
            goto LABEL_4a8859;
    }
    v24 = v2;
    *((int128_t *)&v22) = *((int128_t *)&v0);
    *((int128_t *)&v25) = *((int128_t *)&v4);
    v26 = v5;
    *((int128_t *)&v27) = *((int128_t *)&v7);
    v28 = v8;
    *((int128_t *)&v29) = *((int128_t *)&v10);
    v30 = v11;
    v32 = v14;
    *((int128_t *)&v31) = (int128_t)v13;
    v34 = v17;
    *((int128_t *)&v33) = (int128_t)v16;
    v36 = v20;
    *((int128_t *)&v35) = *((int128_t *)&v19);
    memcpy(a0, &v22, 168);
    a0->field_a8 = v52;
    *((void*)&a0->field_b0) = v21;
    core::ptr::drop_in_place$LT$platform_info..lib_impl..target..PlatformInfo$GT$::h4c5e76bb01c8ee30(&v37);
    return a0;
}
