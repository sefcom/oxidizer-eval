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
    unsigned long long *v14;  // rax
    unsigned long long v15;  // r14
    unsigned long long v16;  // r13
    unsigned long long v17;  // rbp
    unsigned long long v18;  // rdx
    unsigned long long v19;  // r14
    void* v20;  // r15
    unsigned long long v21;  // rdx
    struct_0 *v22;  // 4096
    unsigned long long v23;  // r13

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
        if (v13 >= v12->field_10)
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        v14 = v12->field_8;
        v9 = ::0x4c0320::core::slice::memchr::memchr::hd9bdb72df61b073b(v1, v14[2 * v13], v14[1 + 2 * v13]);
        v15 = v13;
        v16 = v10;
        if (v9 == 1)
        {
            v2 = v13;
            v17 = alloc::vec::Vec$LT$T$C$A$GT$::swap_remove::hd8884eae080ccab8(v12, v13);
            v3 = v17;
            v4 = v17;
            v5 = v17 + v18;
            v6 = a1;
            v19 = v10;
            v9 = memchr::arch::generic::memchr::Iter::next::h49b397ad764296c0(&v3, v10);
            if (!v9)
            {
                v20 = 0;
                v22 = a0;
            }
            else
            {
                v20 = 0;
                v21 = v18;
                do
                {
                    v23 = v21;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h77e0d20633c95084(a0, _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hc642f9dd373424d2(v20, v23, v17, v18, &g_537cf0), v18);
                    v20 = v23 + 1;
                    v9 = memchr::arch::generic::memchr::Iter::next::h49b397ad764296c0(&v3, v19);
                    v21 = v18;
                } while (v9);
            }
            v12 = v22;
            v15 = v2;
            v16 = v19;
            if (v18 > v20)
            {
                v9 = alloc::vec::Vec$LT$T$C$A$GT$::push::h77e0d20633c95084(v12, v17 + v20, v18 - v20);
                v2 = v2;
            }
        }
        v11 = v12;
        if (!v15)
            return v9;
    }
}
