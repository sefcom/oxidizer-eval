long long uu_more::search_pattern_in_file::hc37280eeed50663d(unsigned long a0, unsigned long a1, unsigned long long *a2)
{
    unsigned long v0;  // [sp-0x40], Other Possible Types: unsigned long long
    int v1;  // [sp-0x38], Other Possible Types: unsigned long long
    void* v2;  // [sp-0x30]
    char v3;  // [bp-0x28], Other Possible Types: unsigned long long
    char v4;  // [bp-0x20], Other Possible Types: unsigned long long
    void* v5;  // [sp-0x18]
    unsigned long long v8;  // r14
    unsigned long long v9[3];  // rdx

    if (*(a2) == 0x8000000000000000)
    {
        v1 = 1;
        v2 = 0;
    }
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v3, a2);
        *((int128_t *)&v1) = *((int128_t *)&v4);
    }
    v0 = 0;
    if (!a1 || !v2)
    {
        v8 = 0;
    }
    else
    {
        v3 = a0;
        v4 = a0 + a1 * 24;
        v5 = 0;
        do
        {
            _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h718377d33ac374ce(&v3);
            if (!v9)
            {
                ::0x4d98b0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f03875085d5f083(&v0);
                return 0;
            }
        } while (!::0x4db5a0::_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hce6c1a51027c4ec5(v1, v2, v9[1], v9[2]));
        v8 = 1;
    }
    ::0x4d98b0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f03875085d5f083(&v0);
    return v8;
}
