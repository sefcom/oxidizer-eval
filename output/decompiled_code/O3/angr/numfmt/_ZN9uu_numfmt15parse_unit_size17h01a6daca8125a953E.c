long long uu_numfmt::parse_unit_size::h01a6daca8125a953(unsigned long long a0[3], unsigned long a1, unsigned long long a2)
{
    unsigned long v0;  // [sp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xb8]
    char v2;  // [bp-0xb0], Other Possible Types: unsigned long
    unsigned long long v3;  // [sp-0xa8]
    void* v4;  // [sp-0xa0]
    char v5;  // [bp-0x90]
    char v6;  // [bp-0x88]
    char v7;  // [bp-0x80]
    unsigned long v8;  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x70]
    void* v10;  // [sp-0x68]
    unsigned long long v11;  // [sp-0x60]
    unsigned long long v12;  // [sp-0x58]
    char v13;  // [sp-0x50]
    char v14;  // [bp-0x48]
    char v15;  // [bp-0x38]
    unsigned long long v17;  // r15
    unsigned long long v18;  // rbp
    unsigned long long v19;  // rax
    unsigned long long v20;  // rdx
    unsigned long long v21;  // rdx
    unsigned long long v23;  // rax

    v17 = a1;
    v0 = a1;
    v1 = a1 + a2;
    v2 = 0;
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::h1ff5fa5a57e94041(&v5, &v0);
    v18 = *((long long *)&v7);
    v19 = ::0x4bfb30::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v18, v17, a2);
    if (!v19)
        core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
    if (v18)
    {
        alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&v0, "0invalid unit size: ", 1, v18);
        if ((char)alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::hf8383ebb347f0183(v1, *((long long *)&v2), *((long long *)&v6), *((long long *)&v7)))
        {
            ::0x4befb0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf446c3e764178b4(&v0);
            goto LABEL_4c0643;
        }
        else
        {
            ::0x4befb0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf446c3e764178b4(&v0);
            goto LABEL_4c0600;
        }
    }
    else
    {
LABEL_4c0600:
        if (!(uu_numfmt::parse_unit_size_suffix::ha4a293ed7abcc09d(v19, v20, v21) == 1))
            goto LABEL_4c0643;
        v23 = *((long long *)&v7);
        if (!v23)
        {
            a0[1] = v20;
            goto LABEL_4c06dd;
        }
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v0, *((long long *)&v6), v23);
        if ((char)v0)
        {
LABEL_4c0643:
            v10 = 0;
            v11 = v17;
            v12 = a2;
            v13 = 1;
            v8 = &v10;
            v9 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v0 = &g_536358;
            v1 = 1;
            v4 = 0;
            v2 = &v8;
            v3 = 1;
            ::0x4bfc80::core::option::Option$LT$T$GT$::map_or_else::hca653ed3c714ac3f(&v14, &v0);
            a0[2] = *((long long *)&v15);
            *((int128_t *)&a0[0]) = *((int128_t *)&v14);
        }
        else
        {
            a0[1] = v1 * v20;
LABEL_4c06dd:
            a0[0] = 0x8000000000000000;
        }
    }
    return ::0x4befb0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf446c3e764178b4(&v5);
}
