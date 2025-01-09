long long uu_shuf::find_seps::h99b31571ceae9626(struct_0 *a0, unsigned int a1)
{
    char v0;  // [bp-0x68]
    unsigned int v1;  // [sp-0x64]
    unsigned long long v2;  // [sp-0x58]
    unsigned long v3;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x48]
    unsigned long long v5;  // [sp-0x40]
    char v6;  // [bp-0x38]
    unsigned long long v8;  // r14
    struct_2 *v9;  // rax
    unsigned long long v10;  // r13
    struct_0 *v11;  // 4096
    struct_0 *v12;  // rbx
    unsigned long long v13;  // r14
    unsigned long long v14;  // rsi
    unsigned long long *v15;  // rax
    unsigned long long v16;  // r14
    unsigned long long v17;  // r13
    unsigned long long v18;  // rbp
    unsigned long long v19;  // rdx
    unsigned long long v20;  // r14
    void* v21;  // r15
    unsigned long long v22;  // rdx
    struct_0 *v23;  // 4096
    unsigned long long v24;  // r13

    v8 = a0->field_10;
    if (!v8)
        return v9;
    if (v8 == 1)
    {
        v9 = a0->field_8;
        if (!v9->field_8)
        {
            a0->field_10 = 0;
            return v9;
        }
    }
    v10 = &v6;
    v1 = v0;
    v11 = a0;
    while (true)
    {
        v12 = v11;
        v13 = ::0x4bf500::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::backward_unchecked::hafc0b4d583767e83(v8);
        v14 = v12->field_10;
        if (v13 >= v12->field_10)
            core::panicking::panic_bounds_check::h25a5330941572dd1(v13, v14, &g_537cd8); /* do not return */
        v15 = v12->field_8;
        v9 = ::0x4c0320::core::slice::memchr::memchr::hd9bdb72df61b073b(v1, v15[2 * v13], v15[1 + 2 * v13]);
        v16 = v13;
        v17 = v10;
        if (v9 == 1)
        {
            v2 = v13;
            v18 = alloc::vec::Vec$LT$T$C$A$GT$::swap_remove::hd8884eae080ccab8(v12, v13);
            v3 = v18;
            v4 = v18;
            v5 = v18 + v19;
            v6 = a1;
            v20 = v10;
            v9 = memchr::arch::generic::memchr::Iter::next::h49b397ad764296c0(&v3, v10);
            if (!v9)
            {
                v21 = 0;
                v23 = a0;
            }
            else
            {
                v21 = 0;
                v22 = v19;
                do
                {
                    v24 = v22;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h77e0d20633c95084(a0, _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hc642f9dd373424d2(v21, v24, v18, v19, &g_537cf0), v19);
                    v21 = v24 + 1;
                    v9 = memchr::arch::generic::memchr::Iter::next::h49b397ad764296c0(&v3, v20);
                    v22 = v19;
                } while (v9);
            }
            v12 = v23;
            v16 = v2;
            v17 = v20;
            if (v19 > v21)
            {
                v9 = alloc::vec::Vec$LT$T$C$A$GT$::push::h77e0d20633c95084(v12, v18 + v21, v19 - v21);
                v2 = v2;
            }
        }
        v11 = v12;
        if (!v16)
            return v9;
    }
}
