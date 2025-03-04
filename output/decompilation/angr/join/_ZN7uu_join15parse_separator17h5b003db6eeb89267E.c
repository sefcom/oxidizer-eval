long long uu_join::parse_separator::h5b003db6eeb89267(struct_0 *a0, char *a1, unsigned long long a2)
{
    unsigned long v0;  // [sp-0xa0]
    unsigned long long v1;  // [sp-0x98]
    char v2;  // [bp-0x90], Other Possible Types: unsigned long
    unsigned long v3;  // [sp-0x88], Other Possible Types: unsigned long long
    struct struct_1 **v4;  // [sp-0x80], Other Possible Types: unsigned long
    unsigned int v5;  // [bp-0x78], Other Possible Types: unsigned long long
    void* v6;  // [sp-0x70]
    unsigned long v7;  // [sp-0x60]
    unsigned long long v8;  // [sp-0x58]
    char *v9;  // [sp-0x50]
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
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h2c5bde50ee02e8d6(&v2, "non-UTF-8 multi-byte tab", 24);
            v5 = 1;
            *((double *)&a0->field_8) = alloc::boxed::Box$LT$T$GT$::new::h7aaaeb17d3fe937d(&v2);
            a0->field_10 = &g_5352b8;
            a0->field_0 = 9223372036854775812;
            return 9223372036854775812;
        }
        v15 = v3;
        v16 = v4;
        v7 = v15;
        v8 = v16;
        v0 = v15;
        v1 = v15 + v16;
        if (!((int)core::str::validations::next_code_point::hd261ae405076a208(&v0) && v17 != 0x110000))
            core::option::expect_failed::h9e03a1f6ff88dbcf("valid string with at least one bytemulti-character tab ", 35, &g_535478); /* do not return */
        v14 = core::str::validations::next_code_point::hd261ae405076a208(&v0);
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
        v10 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h096fdbe421567f22;
        v2 = &g_535468;
        v3 = 1;
        v6 = 0;
        v4 = &v9;
        v5 = 1;
        ::0x4c2990::core::option::Option$LT$T$GT$::map_or_else::h84da32fb4d9c85b4(&v11, &v2);
        v12 = 1;
        *((double *)&a0->field_8) = alloc::boxed::Box$LT$T$GT$::new::h7aaaeb17d3fe937d(&v11);
        a0->field_10 = &g_5352b8;
        a0->field_0 = 9223372036854775812;
        return &g_5352b8;
    }
    else
    {
        a0->field_0 = 9223372036854775810;
        return 9223372036854775810;
    }
}
