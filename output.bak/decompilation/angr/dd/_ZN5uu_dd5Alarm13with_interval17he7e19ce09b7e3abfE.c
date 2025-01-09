long long uu_dd::Alarm::with_interval::he7e19ce09b7e3abf(struct_0 *a0)
{
    unsigned long v0;  // [sp-0x68], Other Possible Types: unsigned long long
    void* v1;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x58]
    char v3;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long v4;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x30]
    unsigned int v6;  // [sp-0x28]
    char v7;  // [bp-0x20]

    v1 = 1;
    v2 = 1;
    v3 = 0;
    *((double *)&v0) = alloc::boxed::Box$LT$T$GT$::new::hff327b290596ae78(&v1);
    v4 = alloc::sync::Arc$LT$T$C$A$GT$::downgrade::h3187bea099a37cc6(&v0);
    v5 = 1;
    v6 = 0;
    v3 = 0x8000000000000000;
    v1 = 0;
    std::thread::Builder::spawn_unchecked::h548e90d968e6b112(&v7, &v1, &v4);
    ::0x4d6160::core::result::Result$LT$T$C$E$GT$::expect::hae1648ffdc1cd49b(&v1, &v7);
    core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::h34f9f794f4847285(&v1);
    a0->field_8 = 1;
    a0->field_10 = 0;
    a0->field_0 = v0;
    return a0;
}
