long long uu_split::number::FixedWidthNumber::increment::h00b6e667aed53161(struct_0 *a0)
{
    char v0;  // [bp-0x30]
    char v1;  // [bp-0x28]
    char v2;  // [bp-0x20]
    char *v4;  // r14
    unsigned long v6;  // rax
    char *v9;  // rax
    char *v10;  // rax

    v4 = a0->field_8;
    if (v6)
    {
        v6 = a0->field_10;
        v9 = v6;
        do
        {
            v10 = ::0x4db3e0::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::backward_unchecked::hafc0b4d583767e83(v9);
            if (v10 >= v6)
                core::panicking::panic_bounds_check::h25a5330941572dd1(v10, v6, &g_549498); /* do not return */
        } while ((*((char *)(v4 + v10)) = *((char *)(v4 + v10)) + 1, *((char *)(v4 + v10)) + 1 == a0->field_18 && (*((char *)(v4 + v10)) = 0, v9 = v10, v10)));
    }
    _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h6057a164085cb6e9(&v0, v6);
    ::0x4db430::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&v0);
    return (unsigned int)::0x4db550::alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h24144f0ec5aeede0(v4, v6, *((long long *)&v1), *((long long *)&v2));
}
