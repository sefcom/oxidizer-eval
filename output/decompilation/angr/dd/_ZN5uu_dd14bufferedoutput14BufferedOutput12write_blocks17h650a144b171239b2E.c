long long uu_dd::bufferedoutput::BufferedOutput::write_blocks::h650a144b171239b2(struct_2 *a0, struct_1 *a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x98]
    char v1;  // [bp-0x90]
    char v2;  // [bp-0x88]
    char v3;  // [bp-0x80]
    int v4;  // [sp-0x78]
    int v5;  // [sp-0x68]
    unsigned long long v6[6];  // [bp-0x58]
    char v7;  // [bp-0x50]
    char v8;  // [bp-0x48]
    char v9;  // [bp-0x38]
    unsigned long long v11;  // rsi
    unsigned long long v12;  // rax
    unsigned long long v13;  // rdx
    unsigned long long v14;  // rax
    unsigned long long v15;  // r12
    unsigned long long v16;  // r13
    unsigned long long v17;  // rax

    v11 = a1->field_28->field_78;
    if (!v11)
        core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd(&g_562200); /* do not return */
    v12 = *((long long *)&a1->field_10) + a3;
    if ((v12 | v11) >> 32)
        v13 = ((unsigned long long)((0 CONCAT v12) % v11) CONCAT (unsigned long long)((0 CONCAT v12) / v11)) >> 64;
    else
        v13 = ((unsigned int)((0 CONCAT (unsigned int)v12) % (v11 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v12) / (v11 & 4294967295))) >> 32 & 4294967295;
    v14 = (v13 <= a3 ? a3 - v13 : 0);
    ::0x4edba0::core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::h4762251c5e3d149b(&v0, a2, a3, v14);
    v15 = *((long long *)&v2);
    v16 = *((long long *)&v3);
    ::0x4ede70::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h65897d0b259dad50(a1, ::0x4edbc0::core::slice::iter::Iter$LT$T$GT$::make_slice::hfbdbc0a6d6290581(*((long long *)&v0), *((long long *)&v1) + *((long long *)&v0)), a2);
    uu_dd::Output::write_blocks::h78b56ae9a3f355f3(v6, &a1->padding_14[4], *((long long *)&a1->field_8), *((long long *)&a1->field_10));
    if (v6[0])
    {
        a0->field_8 = *((long long *)&v7);
        v17 = 1;
    }
    else
    {
        *((int128_t *)&v5) = *((int128_t *)&v9);
        *((int128_t *)&v4) = *((int128_t *)&v8);
        *((unsigned long long *)&a1->field_10) = 0;
        ::0x4ede70::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h65897d0b259dad50(a1, ::0x4edbc0::core::slice::iter::Iter$LT$T$GT$::make_slice::hfbdbc0a6d6290581(v15, v16 + v15), a2);
        *((void*)&a0->field_20) = v5;
        *((void*)&a0->field_10) = v4;
        v17 = 0;
    }
    a0->field_0 = v17;
    return a0;
}
