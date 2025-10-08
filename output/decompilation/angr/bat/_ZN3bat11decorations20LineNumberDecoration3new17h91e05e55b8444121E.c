void bat::decorations::LineNumberDecoration::new(struct_1 *a0, struct_0 *a1)
{
    int v0;  // [bp-0x78], Other Possible Types: char
    unsigned long v1;  // [bp-0x68]
    char v2;  // [bp-0x60]
    unsigned long long v3;  // [bp-0x48]
    int v4;  // [bp-0x30]
    char v5;  // [bp-0x20]
    unsigned long v7;  // r14

    alloc::slice::<impl [T]>::repeat(&v2, " \\s +Failed to load one or more themes from '' (reason: '')\nNo themes were found in '', using the default set\n", 1, 4);
    v5 = *((char *)&a1->field_66 + 6);
    *((int128_t *)&v4) = *((int128_t *)&(&a1->padding_0)[1]);
    v3 = 9223372036854775810;
    v0.spec_to_string(&v2);
    v7 = &(&a1->padding_0)[1];
    a0->field_10 = v1;
    *((void*)&a0->field_0) = v0;
    *((char *)&a0->field_28 + 8) = *((char *)(v7 + 16));
    *((int128_t *)&(&a0->field_20)[1]) = *((int128_t *)v7);
    a0->field_18 = 4;
    a0->field_20 = 10000;
    core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v2);
    return;
}
