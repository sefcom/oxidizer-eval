long long uu_split::number::FixedWidthNumber::new::he6f7e0494f2522ba(struct_0 *a0, unsigned int a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x38]
    char v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    unsigned long long v4;  // rbp
    char *v5;  // rdi
    unsigned long long v6;  // r15
    unsigned long long v7;  // rsi
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax
    char v10;  // dl
    unsigned int v11;  // eax

    v4 = a1;
    _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h6057a164085cb6e9(&v0, a2);
    v5 = *((long long *)&v2);
    if (!(char)v4 && v5)
        core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd(&g_549468); /* do not return */
    v6 = v4 & 4294967295;
    while (true)
    {
        a3 = a3;
        if (!v5)
            break;
        v5 = ::0x4db3e0::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::backward_unchecked::hafc0b4d583767e83(v5);
        v7 = *((long long *)&v2);
        if (v5 >= v7)
            core::panicking::panic_bounds_check::h25a5330941572dd1(v5, v7, &g_549480); /* do not return */
        if (!a3 >> 32)
        {
            v11 = a3;
            v9 = ((unsigned int)((0 CONCAT v11) % (v6 & 4294967295)) CONCAT (unsigned int)((0 CONCAT v11) / (v6 & 4294967295))) & 4294967295;
            v10 = ((unsigned int)((0 CONCAT v11) % (v6 & 4294967295)) CONCAT (unsigned int)((0 CONCAT v11) / (v6 & 4294967295))) >> 32 & 4294967295;
        }
        else
        {
            v8 = a3;
            v9 = (unsigned long long)((0 CONCAT v8) % v6) CONCAT (unsigned long long)((0 CONCAT v8) / v6);
            v10 = ((unsigned long long)((0 CONCAT v8) % v6) CONCAT (unsigned long long)((0 CONCAT v8) / v6)) >> 64;
        }
        v5[*((long long *)&v1)] = v10;
        a3 = v9;
    }
}
