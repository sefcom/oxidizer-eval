long long uu_ls::cached_uid2usr::h76fab7c17593e796(unsigned long long a0, unsigned int a1, unsigned long a2)
{
    char v0;  // [bp-0x64]
    char v1;  // [bp-0x60]
    char v2;  // [bp-0x58]
    char v3;  // [bp-0x48]
    unsigned long long v4;  // [sp-0x40]
    int v5;  // [sp-0x38]
    unsigned long long v6;  // [sp-0x28]
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rax

    std::sync::mutex::Mutex$LT$T$GT$::lock::hc5675fa6ea575c95(&v1, once_cell::sync::OnceCell$LT$T$GT$::get_or_try_init::hdd886683d1374514(&_ZN5uu_ls14cached_uid2usr9UID_CACHE17hd444170ce52cfeaeE, &_ZN5uu_ls14cached_uid2usr9UID_CACHE17hd444170ce52cfeaeE), v8);
    v9 = core::result::Result$LT$T$C$E$GT$::unwrap::h9fc356d0f7eceb39(&v1, &g_612b20);
    hashbrown::rustc_entry::_$LT$impl$u20$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$GT$::rustc_entry::h3b7f45b90a92ecbe(&v1, v9 + 8, a1);
    *((int128_t *)&v5) = *((int128_t *)&v2);
    v6 = *((long long *)&v3);
    v4 = *((long long *)&v1);
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(a0, std::collections::hash::map::Entry$LT$K$C$V$GT$::or_insert_with::hb73170af0231c998(&v4, &v0, v8));
    return core::ptr::drop_in_place$LT$std..sync..mutex..MutexGuard$LT$std..collections..hash..map..HashMap$LT$u32$C$alloc..string..String$GT$$GT$$GT$::hac768127d364753d(v9, (char)v8 & 1);
}
