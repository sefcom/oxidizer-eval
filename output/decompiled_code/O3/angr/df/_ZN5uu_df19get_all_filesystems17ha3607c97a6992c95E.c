long long uu_df::get_all_filesystems::ha3607c97a6992c95(unsigned long long a0[3], struct_0 *a1)
{
    char v0;  // [bp-0x90]
    char v1;  // [bp-0x88]
    char v2;  // [bp-0x80]
    unsigned long v3;  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x70]
    unsigned long long v5;  // [sp-0x68]
    char v6;  // [bp-0x60]
    struct_0 *v7;  // [sp-0x40]
    char v8;  // [bp-0x38]

    if (a1->field_52)
        sync();
    uucore::features::fsext::read_fs_list::hbd8e140a99bf9681(&v0);
    if (v3 == 0x8000000000000000)
    {
        a0[1] = v4;
        a0[2] = v5;
        a0[0] = 0x8000000000000000;
        return a0;
    }
    v3 = *((long long *)&v0);
    v4 = *((long long *)&v1);
    v5 = *((long long *)&v2);
    uu_df::filter_mount_list::h4f92206f75ccb754(&v8, &v3, a1);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he885c78202ffb2a8(&v6, &v8);
    v7 = a1;
    alloc::vec::in_place_collect::_$LT$impl$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$u20$for$u20$alloc..vec..Vec$LT$T$GT$$GT$::from_iter::h39804b8ea31b8600(a0, &v6);
    return a0;
}
