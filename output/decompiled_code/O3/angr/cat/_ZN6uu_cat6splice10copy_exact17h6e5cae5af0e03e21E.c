long long uu_cat::splice::copy_exact::h6e5cae5af0e03e21(unsigned int a0, unsigned long a1, unsigned long long a2)
{
    unsigned long long v0;  // [sp-0x4068]
    char v1;  // [bp-0x4060], Other Possible Types: unsigned long long
    char v2;  // [bp-0x405c]
    unsigned long long v3;  // [sp-0x4058], Other Possible Types: unsigned long
    unsigned long long v4;  // [sp-0x4050]
    int v5;  // [sp-0x4048]
    void* v6;  // [sp-0x4030]
    unsigned int v11;  // 4096
    unsigned long long v12;  // rbx
    void* v13;  // r13
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rax

    do
    {
        v12 = a2;
        nix::unistd::read::h6008c643a77def6f(&v1, v11, &v6, 0x4000);
        if (*((int *)&v1))
        {
LABEL_4b5033:
            return *((int *)&v2);
        }
        v0 = v3;
        if (!v0)
        {
            v1 = &g_5193a8;
            v3 = 1;
            v4 = 8;
            *((int128_t *)&v5) = 0;
            core::panicking::assert_failed::h152962c79945eae7(); /* do not return */
        }
        v13 = 0;
        nix::unistd::write::hdf06986b6e87e10c(&v1, ::0x4b35a0::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h63b1aa296660cfa4(v13, v0), v14);
        if (!(!*((int *)&v1)))
            goto LABEL_4b5033;
        v15 = v3;
        if (!v15)
            uu_cat::splice::copy_exact::panic_cold_explicit::hbd5500cbf3ef36ba(); /* do not return */
        v13 += v15;
        if (v13 < v0)
            continue;
    } while (v12 != v0);
    return 134;
}
