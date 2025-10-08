void fish::history::file::append_history_item_to_buffer(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    char *v2;  // [bp-0x80], Other Possible Types: unsigned long long
    int v3;  // [bp-0x78], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x70]
    char v5;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x58]
    unsigned long v7;  // [bp-0x50]
    unsigned long long v8;  // [bp-0x48]
    char *v9;  // [bp-0x40]
    unsigned long long v10;  // [bp-0x38]
    unsigned long long v13;  // r15
    unsigned long long v14;  // rbp
    void* v16;  // r12

    if (a0->field_48)
    {
        v0 = &g_14d9970;
        v1 = 1;
        v2 = 8;
        *((uint128_t *)&v3) = 0;
        core::panicking::panic_fmt(&v0, &g_14d9a10); /* do not return */
    }
    fish::common::wcs2osstring(&v5, a0->field_8, a0->field_10);
    fish::history::file::escape_yaml_fish_2_0(&v5);
    a1.spec_extend("- cmd:   paths:\n    - \\\\\\- cmd- when:%---...- cmd: - cmd: - cmd:    when:ignoring corrupted history entry around offset%s: %d.%06d ms%s: ??? mssrc/history.rswrealpath failed to produce a canonical version of ''.", "  paths:\n    - \\\\\\- cmd- when:%---...- cmd: - cmd: - cmd:    when:ignoring corrupted history entry around offset%s: %d.%06d ms%s: ??? mssrc/history.rswrealpath failed to produce a canonical version of ''.");
    a1.spec_extend(v6, v7 + v6);
    a1.push(10, &g_14d99b0);
    v8 = fish::history::file::time_to_seconds(a0->field_30, a0->field_38);
    v9 = &v8;
    v10 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
    v0 = &g_14d9980;
    v1 = 2;
    v4 = 0;
    v2 = &v9;
    v3 = 1;
    a1.write_fmt(&v0).unwrap(&g_14d99c8);
    v13 = a0->field_28;
    if (v13)
    {
        v14 = a0->field_20;
        v0 = &g_14d99a0;
        v1 = 1;
        v2 = 8;
        *((uint128_t *)&v3) = 0;
        a1.write_fmt(&v0).unwrap(&g_14d99e0);
        v16 = 0;
        do
        {
            fish::common::wcs2osstring(&v0, *((long long *)(8 + v14 + (char *)v16)), *((long long *)(16 + v14 + (char *)v16)));
            fish::history::file::escape_yaml_fish_2_0(&v0);
            a1.spec_extend("    - \\\\\\- cmd- when:%---...- cmd: - cmd: - cmd:    when:ignoring corrupted history entry around offset%s: %d.%06d ms%s: ??? mssrc/history.rswrealpath failed to produce a canonical version of ''.", "\\\\\\- cmd- when:%---...- cmd: - cmd: - cmd:    when:ignoring corrupted history entry around offset%s: %d.%06d ms%s: ??? mssrc/history.rswrealpath failed to produce a canonical version of ''.");
            a1.spec_extend(v1, 8 + v1);
            a1.push(10, &g_14d99f8);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
            v16 += 24;
        } while (v13 * 24 != v16);
    }
    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v5, v6);
    return;
}
