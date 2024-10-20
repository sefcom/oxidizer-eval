long long uu_tac::tac::h98a0276331bd63ce(struct_0 *a0, unsigned long a1, unsigned int a2, unsigned int a3, unsigned long long a4, unsigned long long a5)
{
    struct_0 *v15;  // [bp-0x238]
    char v16;  // [bp-0x230]
    char v17;  // [bp-0x228]
    char v18;  // [bp-0x220]
    unsigned int v23;  // [sp-0x1ec]
    unsigned long long v28;  // [bp-0x1c8]
    struct struct_0 **v29;  // [bp-0x1c0]
    unsigned long long v32;  // [bp-0x1b0]
    unsigned long long v40;  // [sp-0x110]
    unsigned long long v41;  // [sp-0x108]
    unsigned long long v46;  // [sp-0xe0]
    unsigned long long v52;  // [sp-0xa8]
    int v54;  // [bp-0x98], Other Possible Types: void*, struct struct_1 **
    struct struct_1 **v55;  // [sp-0x88]
    unsigned long long v58;  // [sp-0x60]
    struct struct_1 **v64;  // xmm0
    int v65;  // ymm0
    int v66;  // ymm0
    struct struct_1 **v67;  // xmm1
    int v68;  // ymm1
    int v69;  // ymm1
    uint128_t v70[2];  // rax
    struct struct_1 **v213;  // xmm0

    v23 = a2;
    if (!a3)
    {
        v52 = a4;
        v46 = a5;
        v54 = 0;
        if (!(!a1))
            goto LABEL_52b66a;
LABEL_52cbf7:
        core::ptr::drop_in_place$LT$core..option..Option$LT$regex..regex..bytes..Regex$GT$$GT$::h6e3653b9927df066(&v54);
        return 0;
    }
    regex::regex::bytes::Regex::new::h26c3487fa7afdc34(&v15, a4, a5);
    if (!v15)
    {
        v32 = *((long long *)&v18);
        *((int128_t *)&v29) = *((int128_t *)&v16);
        v28 = 0x8000000000000000;
        v70 = __rust_alloc(32, 8);
        if (v70)
        {
            v213 = *((int128_t *)&v28);
            v70[1] = *((int128_t *)&(&v29)[1]);
            *((struct struct_1 ***)&v70[0]) = v213;
            return v70;
        }
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    }
    v52 = a4;
    v46 = a5;
    v64 = *((int128_t *)&v15);
    v66 = v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64;
    v67 = *((int128_t *)&v17);
    v69 = v68 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67;
    v55 = v67;
    v54 = v64;
    if (!a1)
        goto LABEL_52cbf7;
LABEL_52b66a:
    v58 = &(&a0->field_0)[2 * a1];
    v41 = &g_65fc80;
    v40 = &g_65fc20;
}
