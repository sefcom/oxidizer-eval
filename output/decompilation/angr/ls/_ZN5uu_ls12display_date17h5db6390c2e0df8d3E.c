long long uu_ls::display_date::h5db6390c2e0df8d3(unsigned long long a0, unsigned int a1, struct_0 *a2)
{
    int v0;  // [sp-0xa8]
    int v1;  // [sp-0x88]
    unsigned int v2;  // [bp-0x78]
    char v3;  // [bp-0x68]
    unsigned long v5;  // rdx
    unsigned long long v6;  // rdx

    uu_ls::get_time::h8b131fbbcfeb99cc(&v2, a1, a2);
    if (!v2)
        return ::0x51d030::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(a0, "???`DateTime + TimeDelta` overflowed%Y-%m-%d %H:%M:%S.%f %z%Y-%m-%d %H:%M/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/chrono-0.4.38/src/datetime/mod.rs", 3);
    *((int128_t *)&v1) = *((int128_t *)&v2);
    chrono::datetime::DateTime$LT$Tz$GT$::checked_add_signed::h05dd0e1cc9a47e1a(&v3, &v2);
    if (!*((int *)&v3))
        core::option::expect_failed::h9e03a1f6ff88dbcf("`DateTime + TimeDelta` overflowed%Y-%m-%d %H:%M:%S.%f %z%Y-%m-%d %H:%M/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/chrono-0.4.38/src/datetime/mod.rs", 33, &g_612988); /* do not return */
    *((int128_t *)&v0) = *((int128_t *)&v3);
    chrono::offset::local::Local::now::ha82adb6e05d16f38(&v3);
    _$LT$chrono..naive..datetime..NaiveDateTime$u20$as$u20$core..cmp..PartialOrd$GT$::partial_cmp::hd709d884e1631950(&v0, &v3);
    v6 = (v5 < 4 ? 0x8000000000000000 ^ a2->field_b8 : 4);
    goto *((int *)(4409104 + vvar_4{reg 32} * 4)) + 4409104;
}
