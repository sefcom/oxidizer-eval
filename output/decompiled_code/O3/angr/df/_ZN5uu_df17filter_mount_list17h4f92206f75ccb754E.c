double uu_df::filter_mount_list::h4f92206f75ccb754(long long a0, long long a1, long long a2)
{
    void* v0;  // [sp-0x238]
    unsigned long long v1;  // [sp-0x230]
    void* v2;  // [sp-0x228]
    char v3;  // [bp-0x218]
    char v4;  // [bp-0x1f8]
    unsigned long long v5[3];  // [bp-0x160]
    char v6;  // [bp-0xc8]
    void* v9;  // r12
    unsigned long long v11;  // rdx
    int v12;  // xmm0
    int v13;  // ymm0

    v0 = 0;
    v1 = 8;
    v2 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he885c78202ffb2a8(&v3, a1);
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6058ef892d1c715e(&v4, &v3);
    if (*((long long *)&v4) != 0x8000000000000000)
    {
        v9 = &v4;
        do
        {
            memcpy(v5, v9, 152);
            if (!(char)uu_df::is_included::h1d13b655c48422d7(v5, a2) || !(char)uu_df::is_best::he6af500183df179c(v1, v2, v5))
            {
                ::0x4c5640::core::ptr::drop_in_place$LT$uucore..features..fsext..MountInfo$GT$::h754913bf5d836606(v5);
            }
            else
            {
                memcpy(&v6, v5, 152);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hedaf5c4e62f933f6(&v0, &v6, v11);
                v9 = &v4;
            }
        } while ((_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6058ef892d1c715e(v9, &v3), *((long long *)&v4) != 0x8000000000000000));
    }
    ::0x4c5e20::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$uucore..features..fsext..MountInfo$GT$$GT$::h6325b9a5558b4353(&v3);
    a0->field_10 = v2;
    v12 = *((int128_t *)&v0);
    *((void*)&a0->field_0) = v12;
    return (unsigned long long)(v13 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v12);
}
