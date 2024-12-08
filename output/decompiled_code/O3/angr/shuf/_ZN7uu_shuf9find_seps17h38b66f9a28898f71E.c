long long uu_shuf::find_seps::h38b66f9a28898f71(struct_0 *a0, unsigned int a1)
{
    char v0;  // [bp-0x68]
    unsigned int v1;  // [sp-0x64]
    unsigned long long *v2;  // [sp-0x58]
    unsigned long v3;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x48]
    unsigned long long v5;  // [sp-0x40]
    char v6;  // [bp-0x38]
    unsigned long long *v8;  // r14
    struct_3 *v9;  // rax
    unsigned long long v10;  // r13
    struct_0 *v11;  // 4096
    struct_0 *v12;  // rbx
    unsigned long long *v13;  // r14
    unsigned long long *v14;  // rax
    unsigned long long *v15;  // r14
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
    while (true)
    {
        v12 = v11;
        v13 = ::0x4bf080::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::backward_unchecked::hafc0b4d583767e83(v8);
        if (v13 >= v12->field_10)
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        v14 = v12->field_8;
        v9 = ::0x4bfea0::core::slice::memchr::memchr::hd9bdb72df61b073b(v1, *((long long *)((char *)v14 + 0x10 * v13)), *((long long *)(8 + (char *)v14 + 0x10 * v13)));
        if (v9 == 1)
        {
            v2 = v13;
            v17 = alloc::vec::Vec$LT$T$C$A$GT$::swap_remove::hcfe412db06c46560(v12, v13);
            v3 = v17;
            v4 = v17;
            v5 = v17 + v18;
            v6 = a1;
            v19 = v10;
            v9 = memchr::arch::generic::memchr::Iter::next::hf4389c58168bc605(&v3, v10);
            if (!v9)
            {
                v20 = 0;
            }
            else
            {
                v20 = 0;
                do
                {
                    v23 = v21;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::he5d1bea0ac6ae77f(a0, _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h83d18219c2dfa396(v20, v23, v17, v18, &g_537d90), v18);
                    v20 = v23 + 1;
                    v9 = memchr::arch::generic::memchr::Iter::next::hf4389c58168bc605(&v3, v19);
                } while (v9);
            }
            v12 = v22;
            v15 = v2;
            if (v18 > v20)
            {
                v9 = alloc::vec::Vec$LT$T$C$A$GT$::push::he5d1bea0ac6ae77f(v12, v17 + v20, v18 - v20);
                v2 = v2;
            }
        }
        if (!v15)
            return v9;
    }
}
