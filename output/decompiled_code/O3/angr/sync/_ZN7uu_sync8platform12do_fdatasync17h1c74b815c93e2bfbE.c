long long uu_sync::platform::do_fdatasync::h1c74b815c93e2bfb(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0x90]
    char v1;  // [bp-0x80]
    int v2;  // [sp-0x78]
    unsigned long long v3;  // [sp-0x68]
    char v4;  // [bp-0x60]
    char v5;  // [bp-0x40]
    int v7;  // ymm0
    int v8;  // xmm0
    unsigned long long v9;  // rdx

    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hb1177fba78eb6d5a(&v4, a0);
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h08f4356e577432c6(&v0, &v4);
    if (*((long long *)&v0) != 0x8000000000000000)
    {
        do
        {
            v3 = *((long long *)&v1);
            v8 = *((int128_t *)&v0);
            v7 = v7 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v8;
            v2 = v8;
            std::fs::File::open::hf51651e1bc6ee2bc(&v5, &v2, v9);
            syscall(75);
            core::ptr::drop_in_place$LT$std..fs..File$GT$::h112f517f59bd6ef4((unsigned int)core::result::Result$LT$T$C$E$GT$::unwrap::h7863e2c7f8336512(&v5, &g_510328));
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h08f4356e577432c6(&v0, &v4);
        } while (*((long long *)&v0) != 0x8000000000000000);
    }
    return core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::hde8133286bb83446(&v4);
}
