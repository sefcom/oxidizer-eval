int uu_ls::display_date::h5db6390c2e0df8d3()
{
    int v0;  // [sp-0xa8]
    int v1;  // [sp-0x88]
    unsigned int v2;  // [bp-0x78]
    char v3;  // [bp-0x68]
    unsigned int v5;  // esi
    unsigned int v6;  // edx
    unsigned long long v7;  // rdi
    unsigned long long v8;  // rsi
    struct_0 *v9;  // rdx
    unsigned long long v10;  // rcx

    uu_ls::get_time::h8b131fbbcfeb99cc(&v2, v5, v6);
    if (!v2)
    {
        ::0x51d030::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(v7, "???`DateTime + TimeDelta` overflowed%Y-%m-%d %H:%M:%S.%f %z%Y-%m-%d %H:%M/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/chrono-0.4.38/src/datetime/mod.rs", 3);
        return;
    }
    *((int128_t *)&v1) = *((int128_t *)&v2);
    chrono::datetime::DateTime$LT$Tz$GT$::checked_add_signed::h05dd0e1cc9a47e1a(&v3, &v2);
    if (!*((int *)&v3))
        core::option::expect_failed::h9e03a1f6ff88dbcf(); /* do not return */
    *((int128_t *)&v0) = *((int128_t *)&v3);
    chrono::offset::local::Local::now::ha82adb6e05d16f38(&v3, v8, v9);
    _$LT$chrono..naive..datetime..NaiveDateTime$u20$as$u20$core..cmp..PartialOrd$GT$::partial_cmp::hd709d884e1631950(&v0, &v3);
    v10 = 0x8000000000000000 ^ v9->field_b8;
    if (v10 >= 4)
        v10 = 4;
    goto *((int *)(4409104 + vvar_1{reg 32} * 4)) + 4409104;
}
