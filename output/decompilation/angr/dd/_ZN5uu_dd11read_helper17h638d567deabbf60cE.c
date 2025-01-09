long long uu_dd::read_helper::h638d567deabbf60c(struct_2 *a0, struct_0 *a1, unsigned long long a2[3], unsigned long long a3)
{
    unsigned long v0;  // [sp-0x80], Other Possible Types: unsigned long long
    int v1;  // [sp-0x78]
    unsigned long long v2;  // [sp-0x68]
    char v3;  // [bp-0x60]
    char v4;  // [bp-0x58]
    char v5;  // [bp-0x50]
    char v6;  // [bp-0x40]
    char v7;  // [bp-0x38]
    char v8;  // [bp-0x28]
    char v10[107];  // rax
    unsigned long long v11;  // rax
    int v12;  // xmm0
    char v13[107];  // r12
    int v14;  // xmm0

    alloc::vec::Vec$LT$T$C$A$GT$::resize::h7ed7dd5e8601bb1e(a2, a3, 221);
    v10 = a1->field_8;
    if (!v10[104])
        uu_dd::Input::fill_consecutive::h7d4bc8ab92dd656e(&v3, a1, a2);
    else
        uu_dd::Input::fill_blocks::h45cc08a13ee607a5(&v3, a1, a2, v10[105]);
    v11 = *((long long *)&v4);
    if (*((long long *)&v3))
    {
        a0->field_8 = v0;
        a0->field_0 = 1;
        return 1;
    }
    v2 = *((long long *)&v6);
    *((int128_t *)&v1) = *((int128_t *)&v5);
    v0 = v11;
    if (!v0 && !(long long)v1)
    {
        v12 = *((int128_t *)&v0);
        *((int128_t *)&(&a0->padding_10)[1]) = (int128_t)(&v1)[8];
        *((void*)&a0->field_8) = v12;
        a0->field_0 = 0;
        return 0;
    }
    v13 = a1->field_8;
    if (v13[106])
    {
        v11 = uu_dd::read_helper::perform_swab::h674fb7c29172040e(a2[1], a2[2]);
        v13 = a1->field_8;
    }
    if (v13[80] != 7)
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0fe0d79b2ed079cc(&v3, a2);
        uu_dd::blocks::conv_block_unblock_helper::he5e21bd733c5515f(&v7, &v3, &v13[80], &v0);
        ::0x4d5240::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hcaeb013c8c4216fe(a2);
        v11 = *((long long *)&v8);
        a2[2] = v11;
        *((int128_t *)&a2[0]) = *((int128_t *)&v7);
    }
    v14 = *((int128_t *)&v0);
    *((int128_t *)&(&a0->padding_10)[1]) = (int128_t)(&v1)[8];
    *((void*)&a0->field_8) = v14;
    a0->field_0 = 0;
    return v11;
}
