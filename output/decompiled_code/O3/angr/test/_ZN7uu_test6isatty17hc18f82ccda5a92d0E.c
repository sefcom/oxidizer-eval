long long uu_test::isatty::hc18f82ccda5a92d0(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    void* v0;  // [sp-0x88]
    unsigned long long v1;  // [sp-0x80]
    void* v2;  // [sp-0x78]
    char v3;  // [bp-0x70]
    char v4;  // [bp-0x68]
    char v5;  // [bp-0x60]
    void* v6;  // [bp-0x58], Other Possible Types: char, unsigned long
    char v7;  // [bp-0x50]
    void* v8;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x38]
    unsigned long long v10;  // [sp-0x30]
    unsigned long long v11;  // [sp-0x28]
    char v12;  // [sp-0x20]
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax

    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v6, a1, a2);
    if (!v6)
    {
        v14 = core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$i32$GT$::from_str::h5b8351ce1d7a5cac(*((long long *)&v7), v8);
        if (!((char)v14 & 1))
        {
            v15 = isatty(v14 >> 32 & 4294967295 & 4294967295);
            a0->field_8 = (unsigned int)v15 == 1;
            a0->field_0 = 7;
            return v15;
        }
    }
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v11 = 32;
    v12 = 3;
    v6 = 0;
    v8 = 0;
    v9 = &v0;
    v10 = &g_4e1cb0;
    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v3, a1, a2);
    if (!(!*((long long *)&v3) ? (char)_ZN10os_display4unix5write17hdefd8f6d04dd5fe6E.llvm.2548367946977071697(&v6, *((long long *)&v4), *((long long *)&v5), 1) : (char)_ZN10os_display4unix13write_escaped17hb8cc7986a1b70e05E.llvm.2548367946977071697(&v6, a1, a2)))
    {
        v15 = (int)v0;
        *((int *)((char *)&a0->field_c + 12)) = *((int *)((char *)&v2 + 4));
        *((int128_t *)&(&a0->padding_9)[1]) = *((int128_t *)((char *)&v0 + 4));
        a0->field_0 = 5;
        *((unsigned int *)&a0->field_8) = v15;
        return v15;
    }
    core::result::unwrap_failed::h39784290e544308e(); /* do not return */
}
