long long uu_sort::KeyPosition::new::h2335ce3d5d49b62e(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned int a4)
{
    char v0;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xa0]
    char v2;  // [bp-0x98]
    char v3;  // [bp-0x90]
    char v4;  // [bp-0x8f]
    char v5;  // [bp-0x88]
    char v6;  // [bp-0x80]
    void* v7;  // [sp-0x78]
    unsigned long long v8;  // [sp-0x70]
    char v9;  // [bp-0x68]
    unsigned short v10;  // [sp-0x38]
    unsigned long long v12;  // rax
    unsigned long long v13;  // r15
    unsigned long long v15;  // rdx
    int v16;  // xmm0
    unsigned long long v17;  // rax
    unsigned long long v18;  // r15
    unsigned long long v19;  // rcx
    unsigned long long v20;  // rdx

    ::0x51cbc0::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&v9, 46, a1, a2);
    v7 = 0;
    v8 = a2;
    v10 = 1;
    v12 = ::0x51bc10::core::str::iter::SplitInternal$LT$P$GT$::next::h1ca17ad8b676764c(&v7);
    if (!v12)
    {
        uu_sort::KeyPosition::new::_$u7b$$u7b$closure$u7d$$u7d$::h1dd1921a886552ee(&v0, a1, a2);
        v16 = *((int128_t *)&v0);
        v17 = *((long long *)&v2);
        goto LABEL_520e57;
    }
    else
    {
        v13 = v12;
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v3, v13, v15);
        if (!v3)
        {
            v18 = *((long long *)&v5);
            if (!v18)
            {
                v17 = ::0x51cb50::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1d4334c76f34ab0e(&a0->field_8, "field index can not be 0invalid key failed to parse field index /rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/mod.rsinvalid option: ''", 24);
            }
            else
            {
                v1 = a3;
                v0 = 0x8000000000000000;
                core::option::Option$LT$T$GT$::map_or::h5a5be3661124d534(&v3, ::0x51bc10::core::str::iter::SplitInternal$LT$P$GT$::next::h1ca17ad8b676764c(&v7), v15, &v0);
                v19 = *((long long *)&v3);
                v17 = *((long long *)&v5);
                if (v19 == 0x8000000000000000)
                {
                    a0->field_8 = v18;
                    *((unsigned long long *)&a0->padding_10[0]) = v17;
                    v17 = a4;
                    a0->field_18 = v17;
                    a0->field_0 = 0;
                    return v17;
                }
                v20 = *((long long *)&v6);
                a0->field_8 = v19;
                *((unsigned long long *)&a0->padding_10[0]) = v17;
                *((unsigned long long *)&a0->field_18) = v20;
            }
        }
        else
        {
            uu_sort::KeyPosition::new::_$u7b$$u7b$closure$u7d$$u7d$::h01ea5a1ee9d844f2(&v0, v13, v15, v4);
            v17 = *((long long *)&v2);
LABEL_520e57:
            *((void*)&a0->field_8) = v16;
            *((unsigned long long *)&a0->field_18) = v17;
        }
        a0->field_0 = 1;
        return v17;
    }
}
