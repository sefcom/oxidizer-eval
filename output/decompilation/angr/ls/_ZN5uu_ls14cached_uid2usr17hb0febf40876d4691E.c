long long uu_ls::cached_uid2usr::hb0febf40876d4691(unsigned long long a0, unsigned int a1)
{
    unsigned int v0;  // [sp-0x64]
    char v1;  // [bp-0x60]
    char v2;  // [bp-0x58]
    char v3;  // [bp-0x48]
    unsigned long long v4;  // [sp-0x40]
    int v5;  // [sp-0x38]
    unsigned long long v6;  // [sp-0x28]
    unsigned long long v8;  // rax
    char v9;  // dl

    v0 = a1;
    std::sync::mutex::Mutex$LT$T$GT$::lock::h3ee9ddaa26b95c7d(&v1, once_cell::sync::OnceCell$LT$T$GT$::get_or_try_init::h1af99f8cda9de5cb(&_ZN5uu_ls14cached_uid2usr9UID_CACHE17h8e092248b51c5bcaE, &_ZN5uu_ls14cached_uid2usr9UID_CACHE17h8e092248b51c5bcaE));
    v8 = core::result::Result$LT$T$C$E$GT$::unwrap::h8c461f759fd4cb4a(&v1, &g_612920);
    hashbrown::rustc_entry::_$LT$impl$u20$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$GT$::rustc_entry::hcc68de885ffbc6fa(&v1, v8 + 8, a1);
    *((int128_t *)&v5) = *((int128_t *)&v2);
    v6 = *((long long *)&v3);
    v4 = *((long long *)&v1);
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(a0, std::collections::hash::map::Entry$LT$K$C$V$GT$::or_insert_with::hbeacd1093d2ecb2c(&v4, &v0));
    return core::ptr::drop_in_place$LT$std..sync..mutex..MutexGuard$LT$std..collections..hash..map..HashMap$LT$u32$C$alloc..string..String$GT$$GT$$GT$::h81b279b482634f7e(v8, v9 & 1);
}
