long long uu_split::number::FixedWidthNumber::new::he6f7e0494f2522ba(struct_0 *a0, unsigned int a1, unsigned long long a2, unsigned long a3)
{
    char v0;  // [bp-0x38]
    char v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    unsigned long long v4;  // r14
    unsigned long long v5;  // rbp
    char *v6;  // rdi
    unsigned long long v7;  // r15
    unsigned long long v8;  // rsi
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    char v11;  // dl
    unsigned int v12;  // eax

    v4 = a3;
    v5 = a1;
    _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h6057a164085cb6e9(&v0, a2);
    v6 = *((long long *)&v2);
    if (!(char)v5 && v6)
        core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd(&g_549468); /* do not return */
    v7 = v5 & 4294967295;
    while (true)
    {
        v4 = v4;
        if (!v6)
            break;
        v6 = ::0x4db3e0::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::backward_unchecked::hafc0b4d583767e83(v6);
        v8 = *((long long *)&v2);
        if (v6 >= v8)
            core::panicking::panic_bounds_check::h25a5330941572dd1(v6, v8, &g_549480); /* do not return */
        if (!v4 >> 32)
        {
            v12 = v4;
            v10 = ((unsigned int)((0 CONCAT v12) % (v7 & 4294967295)) CONCAT (unsigned int)((0 CONCAT v12) / (v7 & 4294967295))) & 4294967295;
            v11 = ((unsigned int)((0 CONCAT v12) % (v7 & 4294967295)) CONCAT (unsigned int)((0 CONCAT v12) / (v7 & 4294967295))) >> 32 & 4294967295;
        }
        else
        {
            v9 = v4;
            v10 = (unsigned long long)((0 CONCAT v9) % v7) CONCAT (unsigned long long)((0 CONCAT v9) / v7);
            v11 = ((unsigned long long)((0 CONCAT v9) % v7) CONCAT (unsigned long long)((0 CONCAT v9) / v7)) >> 64;
        }
        v6[*((long long *)&v1)] = v11;
        v4 = v10;
    }
}
