int uu_ls::display_date::hadbe9776faed1691()
{
    int v0;  // [sp-0x98]
    unsigned int v1;  // [bp-0x88]
    char v2;  // [bp-0x78]
    char v3;  // [bp-0x74]
    char v4;  // [bp-0x70]
    unsigned int v6;  // esi
    unsigned int v7;  // edx
    unsigned long long v8;  // rdi
    unsigned int v9;  // r12d
    unsigned int v11;  // ebp
    unsigned long long v12;  // rsi
    struct_0 *v13;  // rdx
    char v15;  // al
    unsigned long long v16;  // rcx

    uu_ls::get_time::hfa4a7509689664bc(&v1, v6, v7);
    if (!v1)
    {
        ::0x51d010::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h2d1b440b8b51b75c(v8, "???`DateTime + TimeDelta` overflowed/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/chrono-0.4.38/src/datetime/mod.rs", 3);
        return;
    }
    *((int128_t *)&v0) = *((int128_t *)&v1);
    chrono::datetime::DateTime$LT$Tz$GT$::checked_add_signed::hf5afce05b6cd754b(&v2, &v1);
    v9 = *((int *)&v2);
    if (!v9)
        core::option::expect_failed::h9e03a1f6ff88dbcf(); /* do not return */
    v11 = *((int *)&v4);
    chrono::offset::local::Local::now::h9676919418f603da(&v2, v12, v13);
    if (!(v9 < *((int *)&v2) ? 255 : (char)((-0x100 | v9 != *((int *)&v2)) & 4294967295 & 4294967295)))
    {
        v15 = (*((int *)&v3) < *((int *)&v3) ? 255 : (char)((-0x100 | *((int *)&v3) != *((int *)&v3)) & 4294967295 & 4294967295));
    }
    v16 = 0x8000000000000000 ^ v13->field_b8;
    if (v16 >= 4)
        v16 = 4;
    goto *((int *)(4409360 + vvar_10{reg 32} * 4)) + 4409360;
}
