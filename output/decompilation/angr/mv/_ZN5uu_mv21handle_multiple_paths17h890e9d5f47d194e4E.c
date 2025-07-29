long long uu_mv::handle_multiple_paths(struct_1 *a0, unsigned long long a1, struct_0 *a2)
{
    int v0;  // [bp-0xc8], Other Possible Types: char
    unsigned long long v1;  // [bp-0xb8]
    unsigned int v2;  // [bp-0xb0]
    unsigned long long v3;  // [bp-0xa8]
    int v4;  // [bp-0xa0]
    char v5;  // [bp-0x90]
    int v6;  // [bp-0x88]
    unsigned long long v7;  // [bp-0x78]
    char v8;  // [bp-0x70]
    unsigned long long v9;  // [bp-0x60]
    char v10;  // [bp-0x50]
    char v11;  // [bp-0x40]
    unsigned long long v13;  // rax
    unsigned long long v14;  // rdx

    if (a2->field_30)
    {
        v0.to_vec("operandsrc/uu/mv/src/mv.rs", 7);
        if (a1 <= 2)
            core::panicking::panic_bounds_check(2, a1, &g_5d9bd0); /* do not return */
        v3 = 1;
        *((int128_t *)&v4) = *((int128_t *)&(&a0->padding_0)[1]);
        v5 = 1;
        v10.spec_to_string(&v3);
        v7 = v1;
        v6 = v0;
        memcpy(&v8, &v10, 16);
        v9 = *((long long *)&v11);
        v10.from_iter(&v6);
        uucore::mods::locale::get_message_with_args(&v0, "mv-error-extra-operandmv: warning: failed to scan files for hardlinks: mv: continuing without hardlink preservation\nmv: warning: hardlink scanning failed, continuing without hardlink preservation\n {msg} {wide_bar} {pos}/{len} (scanning hardlinks)", 22, &v10);
        v2 = 1;
        return v0.new();
    }
    else if (a1)
    {
        v13 = a1 - 1.index(a0, a1);
        return uu_mv::move_files_into_dir(v13, v14, *((long long *)&a0->padding_0[16 + 24 * a1]), *((long long *)&a0->padding_0[8 + 24 * a1]), a2);
    }
    else
    {
        core::option::unwrap_failed(&g_5d9ba0); /* do not return */
    }
}
