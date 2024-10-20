int uu_ls::display_item_name::h5b737ef9f62cb1c0()
{
    char v0;  // [bp-0x300]
    char v1;  // [sp-0x2e9]
    int v2;  // [bp-0x2e8], Other Possible Types: char
    char v3;  // [bp-0x2e0]
    unsigned int *v4;  // [sp-0x2d8], Other Possible Types: unsigned long long
    unsigned int v5;  // [sp-0x2c4]
    unsigned long long v8;  // [sp-0x2a8]
    int v20;  // [bp-0x248]
    unsigned int *v22;  // [sp-0x238]
    int v26;  // [bp-0x178], Other Possible Types: char
    unsigned long v27;  // [sp-0x170]
    unsigned int *v28;  // [sp-0x168]
    unsigned long long v36;  // [bp+0x8]
    char v37;  // [bp+0x10]
    char v38[249];  // rdx
    struct_0 *v39;  // rsi
    unsigned long long v41;  // rcx
    struct_3 *v44;  // r9
    struct_1 *v45;  // rcx
    struct_1 *v46;  // rcx
    char v47;  // r12b
    struct_1 *v48;  // rax
    unsigned int *v50;  // r15
    unsigned int *v51;  // rbx

    v8 = &v38[245];
    if (v38[239])
    {
        v5 = _ZN6uucore8features13quoting_style17escape_name_inner17hc1e207419e5ca31cE.llvm.12893112445454193587(&v2, v39->field_8, v39->field_10, &v38[245], 0) | -0x100 | 1;
        uu_ls::create_hyperlink::h748af3500b65b09d(&v26, *((long long *)&v3), v4, v39);
        if (*((long long *)&v2))
            __rust_dealloc(*((long long *)&v3));
        v4 = v28;
        *((int128_t *)&v2) = *((int128_t *)&v26);
    }
    if (*((char *)(*((long long *)&v37) + 29)) != 2)
    {
        v5 = v41 | -0x100 | 1;
        uu_ls::colors::color_name::ha1958c939bfc2826(&v26, (long long)(&v2)[8], v4, v39, *((long long *)&v37), v36, 0, v0);
        if (*((long long *)&v2))
            __rust_dealloc((long long)(&v2)[8]);
        v4 = v28;
        *((int128_t *)&v2) = *((int128_t *)&v26);
    }
    v1 = v38[248];
    v45 = v44;
    v46 = v45 | -0x100 | 1;
    v47 = v45->field_10 & v1 != 1;
    if ((v45->field_10 & v1 != 1))
    {
        v48 = v44;
        *((int128_t *)&v26) = *((int128_t *)&v48->field_0);
        v28 = &v48->field_10->field_0;
        v50 = v4;
        v28 = v28;
        if (v26 - (char *)v28 < v50)
        {
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::hb10d2e3b114b7e19(&v26, v28, v50);
            v28 = v28;
        }
        v51 = v28;
        memcpy(v27 + (char *)v51, (long long)(&v2)[8], v50);
        v22 = v51 + v50;
        *((int128_t *)&v20) = (int128_t)v26;
        if (*((long long *)&v2))
            __rust_dealloc((long long)(&v2)[8]);
        v4 = v22;
        *((int128_t *)&v2) = (int128_t)v20;
        v46 = 0;
    }
    v5 = (unsigned int)v46;
    if (!v38[244])
        goto LABEL_0x4d7e72;
    else
        goto LABEL_0x4d7d79;
}
