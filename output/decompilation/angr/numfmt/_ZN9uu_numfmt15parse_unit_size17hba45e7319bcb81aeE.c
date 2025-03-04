long long uu_numfmt::parse_unit_size::hba45e7319bcb81ae(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    unsigned long v0;  // [sp-0xc0]
    unsigned long long v1;  // [sp-0xb8]
    struct struct_0 **v2;  // [bp-0xb0], Other Possible Types: char
    unsigned long long v3;  // [sp-0xa8]
    void* v4;  // [sp-0xa0]
    char v5;  // [bp-0x90]
    char v6;  // [bp-0x88]
    char v7;  // [bp-0x80]
    char *v8;  // [sp-0x78]
    unsigned long long v9;  // [sp-0x70]
    void* v10;  // [sp-0x68]
    unsigned long long v11;  // [sp-0x60]
    unsigned long long v12;  // [sp-0x58]
    char v13;  // [sp-0x50]
    char v14;  // [bp-0x48]
    char v15;  // [bp-0x38]
    unsigned long long v17;  // rbp
    unsigned long long v18;  // rax
    unsigned long long v19;  // rdx
    unsigned long long v20;  // rax

    v0 = a1;
    v1 = a1 + a2;
    v2 = 0;
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::h1d245a97348b10d3(&v5, &v0);
    v17 = *((long long *)&v7);
    v18 = ::0x4bf6e0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v17, a1, a2);
    if (!v18)
        core::str::slice_error_fail::h5dbb61534404fe7e(a1, a2, v17, a2, &g_535890); /* do not return */
    if (v17)
    {
        alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v0, "0", 1, v17);
        if ((char)alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::hf0c8d218e68d96bc(v1, *((long long *)&v2), *((long long *)&v6), *((long long *)&v7)))
        {
            ::0x4beb60::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb0bde7aa45c92349(&v0);
            goto LABEL_4c01f3;
        }
        else
        {
            ::0x4beb60::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb0bde7aa45c92349(&v0);
            goto LABEL_4c01b0;
        }
    }
    else
    {
LABEL_4c01b0:
        if (!(uu_numfmt::parse_unit_size_suffix::h0d4904f7b87ea86b(v18, v19) == 1))
            goto LABEL_4c01f3;
        v20 = *((long long *)&v7);
        if (!v20)
        {
            a0[1] = v19;
            goto LABEL_4c028d;
        }
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v0, *((long long *)&v6), v20);
        if ((char)v0)
        {
LABEL_4c01f3:
            v10 = 0;
            v11 = a1;
            v12 = a2;
            v13 = 1;
            v8 = &v10;
            v9 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v0 = &g_535880;
            v1 = 1;
            v4 = 0;
            v2 = &v8;
            v3 = 1;
            ::0x4bf830::core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(&v14, &v0);
            a0[2] = *((long long *)&v15);
            *((int128_t *)&a0[0]) = *((int128_t *)&v14);
        }
        else
        {
            a0[1] = v1 * v19;
LABEL_4c028d:
            a0[0] = 0x8000000000000000;
        }
    }
    return ::0x4beb60::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb0bde7aa45c92349(&v5);
}
