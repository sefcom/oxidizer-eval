long long uu_df::Options::get_intersected_types::haafdf2c96660658e(unsigned long long a0[3], unsigned long a1, unsigned long a2, unsigned long long a3, unsigned long long a4)
{
    void* v0;  // [sp-0x80]
    unsigned long long v1;  // [sp-0x78]
    void* v2;  // [sp-0x70]
    int v3;  // [sp-0x68]
    char v4;  // [bp-0x68]
    unsigned long long v5;  // [sp-0x58]
    unsigned long long v6[3];  // [sp-0x48]
    unsigned long v7;  // [sp-0x40]
    unsigned long long v8;  // [sp-0x38]
    unsigned long long v10[3];  // r12
    unsigned long long v11;  // rax
    unsigned long long v12;  // rbx
    unsigned long long v13;  // rax

    v10 = a0;
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v7 = a1;
    v8 = a1 + a2 * 24;
    v11 = ::0x4c5c30::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f096fbf873cbadc(&v7);
    if (!v11)
    {
        v5 = v2;
        *((int128_t *)&v3) = *((int128_t *)&v0);
    }
    else
    {
        v12 = v11;
        v6[0] = a0;
        do
        {
            if ((char)_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h5ec19a7369aaf82d(v12, a3, a4))
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v4, v12);
                ::0x4c5b60::alloc::vec::Vec$LT$T$C$A$GT$::push::h8aaba3f21f3b2415(&v0, &v4);
            }
        } while ((v12 = ::0x4c5c30::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f096fbf873cbadc(&v7), v12));
        v5 = v2;
        *((int128_t *)&v3) = *((int128_t *)&v0);
        v10 = v6;
        if (v5)
        {
            v13 = v2;
            v10[2] = v13;
            *((int128_t *)&v10[0]) = *((int128_t *)&v0);
            return v13;
        }
    }
    v10[0] = 0x8000000000000000;
    v13 = ::0x4c5500::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h25b333f73b84419d(&v4);
    return v13;
}
