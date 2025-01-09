long long uu_sync::platform::do_syncfs::h830654e47a49af82(unsigned long long a0)
{
    char v0;  // [bp-0x90]
    char v1;  // [bp-0x80]
    int v2;  // [sp-0x78]
    unsigned long long v3;  // [sp-0x68]
    char v4;  // [bp-0x60]
    char v5;  // [bp-0x40]
    int v7;  // ymm0
    int v8;  // xmm0

    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he9a1852c79297885(&v4, a0);
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8a7ea6899d56cacd(&v0, &v4);
    if (*((long long *)&v0) == 0x8000000000000000)
        return core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h6657d3c6baf80487(&v4);
    do
    {
        v3 = *((long long *)&v1);
        v8 = *((int128_t *)&v0);
        v7 = v7 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v8;
        v2 = v8;
        std::fs::File::open::hb61d83fd15029ce8(&v5, &v2);
        core::result::Result$LT$T$C$E$GT$::unwrap::h6821ae79beea1012(&v5, &g_50f060);
        syscall(306);
        core::ptr::drop_in_place$LT$std..fs..File$GT$::hbb199f37a0f14444();
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8a7ea6899d56cacd(&v0, &v4);
    } while (*((long long *)&v0) != 0x8000000000000000);
}
