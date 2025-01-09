long long uu_test::parser::Parser::boolop::h3c27ebf1f812d540(struct_0 *a0, void* a1, struct_1 *a2)
{
    int v0;  // [sp-0x58], Other Possible Types: unsigned long long
    int v1;  // [bp-0x50]
    int v2;  // [bp-0x48]
    unsigned long long v3;  // [sp-0x40]
    unsigned long long v4;  // [sp-0x38]
    char v5;  // [bp-0x30]
    char v6;  // [bp-0x20]
    int v8;  // xmm0
    unsigned long long v9;  // rax
    int v10;  // xmm0

    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v5, "-a", 2);
    v3 = *((long long *)&v6);
    *((int128_t *)&v1) = *((int128_t *)&v5);
    v0 = 2;
    if (!(char)::0x4afe40::_$LT$uu_test..parser..Symbol$u20$as$u20$core..cmp..PartialEq$GT$::eq::h838c2774cc7a2a63(a2, &v0))
    {
        ::0x4ade70::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&v0);
        uu_test::parser::Parser::expr::h14b244d6254724ab(&v0, a1);
    }
    else
    {
        ::0x4ade70::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&v0);
        uu_test::parser::Parser::term::h385cc0ae73b5bef0(&v0, a1);
    }
    if ((int)v0 != 7)
    {
        v10 = *((int128_t *)&v0);
        a0->field_10 = (int128_t)(&v1)[8];
        *((void*)&a0->field_0) = v10;
        v9 = ::0x4ade70::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(a2);
        return v9;
    }
    v4 = a2->field_20;
    v8 = a2->field_0;
    *((uint128_t *)&v2) = a2->field_10;
    v0 = v8;
    v9 = alloc::vec::Vec$LT$T$C$A$GT$::push::h254fc79c897546ac(a1, &v0);
    a0->field_0 = 7;
    return v9;
}
