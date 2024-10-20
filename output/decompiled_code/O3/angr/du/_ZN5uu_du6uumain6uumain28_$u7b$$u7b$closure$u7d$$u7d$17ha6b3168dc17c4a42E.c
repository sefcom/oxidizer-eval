long long uu_du::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::ha6b3168dc17c4a42(unsigned long long a0, struct_1 *a1)
{
    char v0;  // [bp-0x38], Other Possible Types: unsigned long long, unsigned long
    uint128_t *v1;  // [sp-0x30], Other Possible Types: unsigned long
    uint128_t *v2;  // [sp-0x28], Other Possible Types: unsigned long long
    unsigned int v3;  // [sp-0x20]
    uint128_t *v5;  // rax
    uint128_t v6[2];  // rax
    int v7;  // xmm0
    struct struct_0 **v8;  // rax

    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::he50249db736d774d(&v0, 25, 0);
    if (v0)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v5 = v2;
    *((int128_t *)((char *)v5 + 9)) = 61665774523509445202524672366277191796;
    *(v5) = 43056500982154326645638188281685963344;
    v3 = 1;
    v0 = v1;
    v1 = v5;
    v2 = 25;
    v6 = __rust_alloc(32, 8);
    if (!v6)
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    v7 = *((int128_t *)&v0);
    v6[1] = *((int128_t *)&v2);
    *((void*)&v6[0]) = v7;
    if (a1->field_0)
        v8(a0);
    if (!a1->field_8)
        return v6;
    __rust_dealloc(a0);
}
