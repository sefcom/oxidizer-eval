long long uu_env::parse_signal_opt::h51ec0e44148ee3e7(unsigned long long a0[15], unsigned long a1, unsigned long a2)
{
    unsigned long long v0[2];  // [bp-0x118], Other Possible Types: unsigned long long, unsigned long
    unsigned long v1;  // [sp-0x110], Other Possible Types: unsigned long long
    struct struct_0 **v2;  // [sp-0x108], Other Possible Types: unsigned long, unsigned long long
    unsigned int v3;  // [bp-0x100], Other Possible Types: unsigned long long
    void* v4;  // [sp-0xf8]
    unsigned long v5;  // [sp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0xd8]
    void* v7;  // [sp-0xd0]
    unsigned long long v8;  // [sp-0xc8]
    unsigned long long v9;  // [sp-0xc0]
    unsigned long long v10;  // [sp-0xb8]
    char v11;  // [sp-0xb0]
    char *v12;  // [sp-0xa8]
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
    unsigned long long v27;  // r14
    void* v28;  // r14

    if (!a2)
        return 0;
    v16 = a1;
    v17 = a2;
    v18 = 0;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hdbc1dc456658658e(&v14, &v16);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h38052905bffb397a(v0, *((long long *)&v15), 0);
    if (v0)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v5, v2); /* do not return */
    v5 = v1;
    v6 = v2;
    v7 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h19448f981cde5e53(v0, &v14);
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h3d344e0b0e9083cd(v0, &v5);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h19448f981cde5e53(&v19, &v5);
    v23 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8b5092016aec3a93(&v19);
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
                v13 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                v0 = &g_5488b0;
                v1 = 2;
                v4 = 0;
                v2 = &v12;
                v3 = 1;
                ::0x4cb1b0::core::option::Option$LT$T$GT$::map_or_else::ha7b9eb55e1cbc84d();
                v3 = 1;
                *((int128_t *)v0) = *((int128_t *)&v20);
                v2 = *((long long *)&v21);
                v28 = alloc::boxed::Box$LT$T$GT$::new::h48315bbd00cc7109(v0);
                ::0x4cb030::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::h97b2a0834aefedf7(&v19);
                return v28;
            }
            uu_env::parse_signal_value::hd39e24cc594f23d4(v0, v1, v2);
            v28 = v0;
            if (v28)
            {
                ::0x4cb030::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::h97b2a0834aefedf7(&v19);
                return v28;
            }
            v8 = v1;
            if (!(char)_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h4b9b47ba52f5f211(&v8, a0[13], a0[14]))
                alloc::vec::Vec$LT$T$C$A$GT$::push::h7268e86c4e26498f(&a0[12], v8);
            v23 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8b5092016aec3a93(&v19);
        } while (v23);
    }
    ::0x4cb030::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::h97b2a0834aefedf7(&v19);
}
