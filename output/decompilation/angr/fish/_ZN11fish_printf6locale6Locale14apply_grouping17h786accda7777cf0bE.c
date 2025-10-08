long long fish_printf::locale::Locale::apply_grouping(unsigned long a0, struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x70]
    void* v1;  // [bp-0x60]
    struct_1 *v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    char v5;  // [bp-0x38]
    unsigned long long v7;  // rax
    unsigned long long v8;  // 4096
    unsigned long long v9;  // rax
    unsigned long v10;  // rdx

    if (a1->field_4 == 0x110000)
        core::option::expect_failed("no thousands separatorcrates/printf/src/locale.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/unicode-width-0.2.0/src/tables.rs", 22, &g_15182d8); /* do not return */
    v7 = a1.separator_count(a3);
    if ((char)__CFADD__(v7, a3))
        core::panicking::panic_const::panic_const_add_overflow(&g_15182f0); /* do not return */
    v0 = v7 + a3.with_capacity_in();
    v1 = 0;
    if (a3)
    {
        v8 = a2;
        while (true)
        {
            v9 = a1.next_group_size(a3);
            core::str::<impl str>::split_at_checked(&v3, v8, a3, v9);
            if (!v3)
                core::str::slice_error_fail(v8, a3, 0, v9, &g_1518200); /* do not return */
            a3 = *((long long *)&v5);
            v0.spec_extend(v3, v4 + v3);
            if (!*((long long *)&v5))
                break;
            v0.push(a1->field_4);
        }
    }
    v2->field_10 = 0;
    v2->field_0 = v0;
    v2->field_8 = v10;
    return v2;
}
