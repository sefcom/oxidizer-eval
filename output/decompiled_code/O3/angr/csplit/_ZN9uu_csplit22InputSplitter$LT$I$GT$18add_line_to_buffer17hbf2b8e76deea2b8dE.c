long long uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::hbf2b8e76deea2b8d(unsigned long long *a0, struct_1 *a1, unsigned long long a2, struct_0 *a3)
{
    int v0;  // [sp-0x58], Other Possible Types: unsigned long, unsigned long long
    int v1;  // [bp-0x50]
    unsigned long long v2;  // [sp-0x48]
    unsigned long v3;  // [sp-0x40], Other Possible Types: unsigned long long
    int v4;  // [sp-0x38]
    unsigned long long v5;  // [sp-0x28]
    unsigned long long v8;  // rdx

    if (a1->field_38)
    {
        v3 = a3->field_10;
        *((uint128_t *)&v1) = a3->field_0;
        v0 = a2;
        alloc::vec::Vec$LT$T$C$A$GT$::insert::he9c4e0effa63e6fe(a1, 0, &v0);
    }
    else if (a1->field_10 < a1->field_30)
    {
        v3 = a3->field_10;
        *((uint128_t *)&v1) = a3->field_0;
        v0 = a2;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h82feaa1b9c007673(a1, &v0, a2);
    }
    else
    {
        alloc::vec::Vec$LT$T$C$A$GT$::remove::h3d327cd97a1edebd(&v0, a1, 0, &g_6df828);
        v5 = v3;
        *((int128_t *)&v4) = (int128_t)v1;
        v3 = a3->field_10;
        *((uint128_t *)&v1) = a3->field_0;
        v0 = a2;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h82feaa1b9c007673(a1, &v0, v8);
        v2 = v5;
        v0 = v4;
        return core::result::Result$LT$T$C$E$GT$::unwrap::he3b6a25432fe754d(a0, &v0, &g_6df840);
    }
    *(a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
