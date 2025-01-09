double uu_df::filter_mount_list::h552d57bf732d9983(long long a0, long long a1, long long a2)
{
    void* v0;  // [sp-0x238]
    unsigned long long v1;  // [sp-0x230]
    void* v2;  // [sp-0x228]
    char v3;  // [bp-0x218]
    char v4;  // [bp-0x1f8]
    char v5[146];  // [bp-0x160]
    char v6;  // [bp-0xc8]
    char *v9;  // r12
    int v11;  // xmm0
    int v12;  // ymm0

    v0 = 0;
    v1 = 8;
    v2 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h16be972b538517f1(&v3, a1);
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h14b8b80e40a53bcb(&v4, &v3);
    if (*((long long *)&v4) != 0x8000000000000000)
    {
        v9 = &v4;
        do
        {
            memcpy(v5, v9, 152);
            if (!(char)uu_df::is_included::h21d348ae8506351c(v5, a2) || !(char)uu_df::is_best::h69ca5df66aadf4f9(v1, v2, v5))
            {
                ::0x4c51a0::core::ptr::drop_in_place$LT$uucore..features..fsext..MountInfo$GT$::h9090e8568995f329(v5);
            }
            else
            {
                memcpy(&v6, v5, 152);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h46faf1ede3681934(&v0, &v6);
                v9 = &v4;
            }
        } while ((_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h14b8b80e40a53bcb(v9, &v3), *((long long *)&v4) != 0x8000000000000000));
    }
    ::0x4c5980::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$uucore..features..fsext..MountInfo$GT$$GT$::he45d9cf3c868e21d(&v3);
    a0->field_10 = v2;
    v11 = *((int128_t *)&v0);
    *((void*)&a0->field_0) = v11;
    return (unsigned long long)(v12 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v11);
}
