long long uu_shuf::find_seps::h99b31571ceae9626(struct_0 *a0, char a1)
{
    char v0;  // [bp-0x68]
    unsigned int v1;  // [sp-0x64]
    struct_0 *v2;  // [sp-0x60]
    unsigned long long v3;  // [sp-0x58]
    unsigned long v4;  // [sp-0x50]
    unsigned long long v5;  // [sp-0x48]
    unsigned long long v6;  // [sp-0x40]
    char v7;  // [bp-0x38]
    unsigned long long v9;  // r14
    struct_0 *v10;  // rbx
    struct_2 *v11;  // rax
    unsigned long long v12;  // r14
    unsigned long long v13;  // rsi
    unsigned long long *v14;  // rax
    unsigned long long v15;  // r13
    unsigned long long v16;  // rbp
    unsigned long long v17;  // rdx
    unsigned long long v18;  // r14
    unsigned long long v19;  // r13
    void* v20;  // r15

    v9 = a0->field_10;
    if (!v9)
        return v11;
    v10 = a0;
    if (v9 == 1)
    {
        v11 = a0->field_8;
        if (!v11->field_8)
        {
            a0->field_10 = 0;
            return v11;
        }
    }
    v15 = &v7;
    v1 = v0;
    v2 = a0;
    while (true)
    {
        v12 = ::0x4bf500::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::backward_unchecked::hafc0b4d583767e83(v9);
        v13 = v10->field_10;
        if (v12 >= v10->field_10)
            core::panicking::panic_bounds_check::h25a5330941572dd1(v12, v13, &g_537cd8); /* do not return */
        v14 = v10->field_8;
        v11 = ::0x4c0320::core::slice::memchr::memchr::hd9bdb72df61b073b(v1, v14[2 * v12], v14[1 + 2 * v12]);
        v9 = v12;
        if (v11 == 1)
        {
            v3 = v12;
            v16 = alloc::vec::Vec$LT$T$C$A$GT$::swap_remove::hd8884eae080ccab8(v10, v12);
            v4 = v16;
            v5 = v16;
            v6 = v16 + v17;
            v7 = a1;
            v18 = v15;
            v11 = memchr::arch::generic::memchr::Iter::next::h49b397ad764296c0(&v4, v15);
            if (!v11)
            {
                v20 = 0;
                v10 = v2;
            }
            else
            {
                v19 = v17;
                v20 = 0;
                v10 = v2;
                do
                {
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h77e0d20633c95084(v10, _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hc642f9dd373424d2(v20, v19, v16, v17, &g_537cf0), v17);
                    v20 = v19 + 1;
                    v11 = memchr::arch::generic::memchr::Iter::next::h49b397ad764296c0(&v4, v18);
                    v19 = v17;
                } while (v11);
            }
            v9 = v3;
            v15 = v18;
            if (v17 > v20)
            {
                v11 = alloc::vec::Vec$LT$T$C$A$GT$::push::h77e0d20633c95084(v10, v16 + v20, v17 - v20);
                v3 = v3;
            }
        }
        if (!v9)
            return v11;
    }
}
