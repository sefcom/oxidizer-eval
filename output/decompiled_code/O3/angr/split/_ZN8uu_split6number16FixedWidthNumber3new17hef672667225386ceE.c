long long uu_split::number::FixedWidthNumber::new::hef672667225386ce(struct_0 *a0, unsigned int a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x38]
    char v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    unsigned long long v4;  // rbp
    char *v5;  // rdi
    unsigned long long v6;  // r15
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    char v9;  // dl
    unsigned int v10;  // eax

    v4 = a1;
    _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::hf7144a954525862a(&v0, a2);
    v5 = *((long long *)&v2);
    if (!(char)v4 && v5)
        core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd(); /* do not return */
    v6 = v4 & 4294967295;
    while (true)
    {
        a3 = a3;
        if (!v5)
            break;
        v5 = ::0x4db080::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::backward_unchecked::hafc0b4d583767e83(v5);
        if (v5 >= *((long long *)&v2))
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        if (!a3 >> 32)
        {
            v10 = a3;
            v8 = (0 CONCAT v10) /m (unsigned int)v6 & 4294967295;
            v9 = (0 CONCAT v10) /m (unsigned int)v6 >> 32 & 4294967295;
        }
        else
        {
            v7 = a3;
            v8 = (0 CONCAT v7) /m v6;
            v9 = (0 CONCAT v7) /m v6 >> 64;
        }
        v5[*((long long *)&v1)] = v9;
    }
}
