long long uu_more::search_pattern_in_file::h111b84dc79481799(unsigned long a0, unsigned long a1, unsigned long long *a2)
{
    void* v0;  // [sp-0x50], Other Possible Types: char
    unsigned long long v1;  // [sp-0x48]
    void* v2;  // [sp-0x40], Other Possible Types: unsigned long, unsigned long long
    unsigned long v3;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x30]
    void* v5;  // [sp-0x28]
    unsigned long long v7;  // r14
    unsigned long long v8[3];  // rdx

    if (*(a2) == 0x8000000000000000)
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v7 = 0;
    }
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v0, a2);
        v7 = 0;
        if (a1 && v2)
        {
            v3 = a0;
            v4 = a0 + a1 * 24;
            v5 = 0;
            do
            {
                _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hda22a8f6f62da06f(&v3);
                if (!v8)
                {
                    ::0x4d9c80::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h16e21476e7fcb4fa(&v0);
                    return 0;
                }
            } while (!(char)::0x4db970::_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hce6c1a51027c4ec5(v1, v2, v8[1], v8[2]));
            v7 = 1;
        }
    }
    ::0x4d9c80::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h16e21476e7fcb4fa(&v0);
    return v7;
}
