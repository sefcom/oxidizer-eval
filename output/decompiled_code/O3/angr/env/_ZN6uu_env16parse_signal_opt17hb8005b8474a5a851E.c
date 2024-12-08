long long uu_env::parse_signal_opt::hb8005b8474a5a851(unsigned long long a0[15], unsigned long a1, unsigned long long a2)
{
    int v0;  // [bp-0x118], Other Possible Types: unsigned long long (64 bits)[2], unsigned long long, unsigned long
    unsigned long v1;  // [sp-0x110], Other Possible Types: unsigned long long
    unsigned long v2;  // [sp-0x108], Other Possible Types: unsigned long long
    unsigned int v3;  // [bp-0x100], Other Possible Types: unsigned long long
    void* v4;  // [sp-0xf8]
    unsigned long v5;  // [sp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0xd8]
    void* v7;  // [sp-0xd0]
    unsigned long long v8;  // [sp-0xc8]
    unsigned long long v9;  // [sp-0xc0]
    unsigned long long v10;  // [sp-0xb8]
    char v11;  // [sp-0xb0]
    unsigned long v12;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0xa0]
    char v14;  // [bp-0x98]
    char v15;  // [bp-0x88]
    unsigned long v16;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v17;  // [sp-0x78]
    char v18;  // [sp-0x70]
    char v19;  // [bp-0x68]
    char v20;  // [bp-0x48]
    char v21;  // [bp-0x38]
    unsigned long long v23;  // rax
    unsigned long long v25;  // r14
    unsigned long long v26;  // rdx
    unsigned long long v27;  // r14
    void* v28;  // r14

    if (!a2)
        return 0;
    v16 = a1;
    v17 = a2;
    v18 = 0;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h98a87fa5d5cf9ee3(&v14, &v16, a2);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h4f333577d8ff06d1(v0, *((long long *)&v15), 0);
    if (v0)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v5 = v1;
    v6 = v2;
    v7 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h1b26451b292f7945(v0, &v14);
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h23fdc6ff42b4fffb(v0, &v5);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h1b26451b292f7945(&v19, &v5);
    v23 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hea10af37ff26fc26(&v19);
    if (v23)
    {
        do
        {
            v25 = v27;
            std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(v0, v23, v25);
            if (v0)
            {
                v8 = 1;
                v9 = v23;
                v10 = v25;
                v11 = 1;
                v12 = &v8;
                v13 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v0 = &g_549070;
                v1 = 2;
                v4 = 0;
                v2 = &v12;
                v3 = 1;
                ::0x4cb2e0::core::option::Option$LT$T$GT$::map_or_else::hc0527ddab4d2c9e4(&v20, v0);
                v3 = 1;
                *((int128_t *)&v0) = *((int128_t *)&v20);
                v2 = *((long long *)&v21);
                v28 = alloc::boxed::Box$LT$T$GT$::new::h5d579e58798cc40b(v0);
                ::0x4cb160::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::h0999878e1fda48fd(&v19);
                return v28;
            }
            uu_env::parse_signal_value::h27c37e990d5684a6(v0, v1, v2);
            v28 = v0;
            if (v28)
            {
                ::0x4cb160::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::h0999878e1fda48fd(&v19);
                return v28;
            }
            v8 = v1;
            if (!(char)_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::hae4f3348b904af2f(&v8, a0[13], a0[14]))
                alloc::vec::Vec$LT$T$C$A$GT$::push::he395a01cd76bd8e7(&a0[12], v8, v26);
            v23 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hea10af37ff26fc26(&v19);
        } while (v23);
    }
    ::0x4cb160::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::h0999878e1fda48fd(&v19);
}
