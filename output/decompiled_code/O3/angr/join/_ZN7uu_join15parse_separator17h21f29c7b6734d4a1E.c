long long uu_join::parse_separator::h21f29c7b6734d4a1(struct_0 *a0, char *a1, unsigned long long a2)
{
    unsigned long v0;  // [sp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x98]
    char v2;  // [bp-0x90], Other Possible Types: unsigned long, unsigned long long
    unsigned long v3;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long v4;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned int v5;  // [bp-0x78], Other Possible Types: unsigned long long
    void* v6;  // [sp-0x70]
    unsigned long v7;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x58]
    unsigned long v9;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x48]
    char v11;  // [bp-0x40]
    unsigned int v12;  // [sp-0x28]
    unsigned long long v14;  // rax
    unsigned long long v15;  // r14
    unsigned long long v16;  // r15
    unsigned int v17;  // edx

    if (a2 == 1)
    {
        v14 = *(a1);
        a0->field_0 = 0x8000000000000000;
        a0->field_8 = v14;
        return v14;
    }
    else if (a2)
    {
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v2, a1, a2);
        if (v2)
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8d41f9f90a8440d9(&v2, "non-UTF-8 multi-byte tab", 24);
            v5 = 1;
            *((double *)&a0->field_8) = alloc::boxed::Box$LT$T$GT$::new::h30919857a4b52c57(&v2);
            a0->field_10 = &g_535e48;
            a0->field_0 = 9223372036854775812;
            return 9223372036854775812;
        }
        v15 = v3;
        v16 = v4;
        v7 = v15;
        v8 = v16;
        v0 = v15;
        v1 = v15 + v16;
        if (!(int)core::str::validations::next_code_point::h7bdf62f530dba612(&v0))
            core::option::expect_failed::h9e03a1f6ff88dbcf(); /* do not return */
        v14 = core::str::validations::next_code_point::h7bdf62f530dba612(&v0);
        if (!(unsigned int)v14)
        {
            v14 = _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h4f184cf760c10fc8(a0, v15, v16);
            return v14;
        }
        if (v17 == 92 && v17 == 48)
        {
            a0->field_0 = 0x8000000000000000;
            a0->field_8 = 0;
            return v14;
        }
        v9 = &v7;
        v10 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h333a5246101397f2;
        v2 = &g_536020;
        v3 = 1;
        v6 = 0;
        v4 = &v9;
        v5 = 1;
        ::0x4c29f0::core::option::Option$LT$T$GT$::map_or_else::h194c0e6a97f2c7f4(&v11, &v2);
        v12 = 1;
        *((double *)&a0->field_8) = alloc::boxed::Box$LT$T$GT$::new::h30919857a4b52c57(&v11);
        a0->field_10 = &g_535e48;
        a0->field_0 = 9223372036854775812;
        return &g_535e48;
    }
    else
    {
        a0->field_0 = 9223372036854775810;
        return 9223372036854775810;
    }
}
