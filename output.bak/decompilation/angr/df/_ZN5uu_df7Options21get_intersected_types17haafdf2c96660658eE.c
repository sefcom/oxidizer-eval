long long uu_df::Options::get_intersected_types::haafdf2c96660658e(unsigned long long a0[3], unsigned long a1, unsigned long a2, unsigned long long a3, unsigned long long a4)
{
    void* v0;  // [sp-0x80]
    unsigned long long v1;  // [sp-0x78]
    void* v2;  // [sp-0x70]
    int v3;  // [sp-0x68], Other Possible Types: char
    unsigned long long v4;  // [sp-0x58]
    unsigned long v5;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x38]
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax

    v0 = 0;
    v1 = 8;
    v2 = 0;
    v5 = a1;
    v6 = a1 + a2 * 24;
    v8 = ::0x4c5c30::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f096fbf873cbadc(&v5);
    if (!v8)
    {
        v4 = v2;
        *((int128_t *)&v3) = *((int128_t *)&v0);
    }
    else
    {
        do
        {
            if ((char)_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h5ec19a7369aaf82d(v8, a3, a4))
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v3, v8);
                ::0x4c5b60::alloc::vec::Vec$LT$T$C$A$GT$::push::h8aaba3f21f3b2415(&v0, &v3);
            }
        } while ((v8 = ::0x4c5c30::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f096fbf873cbadc(&v5), v8));
        v4 = v2;
        *((int128_t *)&v3) = *((int128_t *)&v0);
        if (v4)
        {
            v9 = v2;
            a0[2] = v9;
            *((int128_t *)&a0[0]) = *((int128_t *)&v0);
            return v9;
        }
    }
    a0[0] = 0x8000000000000000;
    v9 = ::0x4c5500::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h25b333f73b84419d(&v3);
    return v9;
}
