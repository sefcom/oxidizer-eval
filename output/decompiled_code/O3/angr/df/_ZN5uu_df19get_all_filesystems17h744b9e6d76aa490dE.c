long long uu_df::get_all_filesystems::h744b9e6d76aa490d(unsigned long long a0[3], struct_0 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x88]
    char v1;  // [bp-0x80]
    char v2;  // [bp-0x78]
    char v3;  // [bp-0x70]
    char v4;  // [bp-0x68]
    char v5;  // [bp-0x60]
    unsigned long v6;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x50]
    unsigned long long v8;  // [sp-0x48]
    unsigned long v9;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x38]
    unsigned long long v11;  // [sp-0x30]
    unsigned long long v12;  // [sp-0x28]
    struct_0 *v13;  // [sp-0x20]
    unsigned long long v18;  // rcx

    if (a1->field_52)
        sync();
    uucore::features::fsext::read_fs_list::h6642db6ee3822342(&v3, a1, a2, a3, a4, a5);
    if (v6 == 0x8000000000000000)
    {
        a0[1] = v7;
        a0[2] = v8;
        a0[0] = 0x8000000000000000;
        return a0;
    }
    v6 = *((long long *)&v3);
    v7 = *((long long *)&v4);
    v8 = *((long long *)&v5);
    uu_df::filter_mount_list::h6ad03ac805d366b9(&v0, &v6, a1);
    v18 = *((long long *)&v1);
    v9 = v18;
    v10 = v18;
    v11 = *((long long *)&v0);
    v12 = *((long long *)&v2) * 152 + v18;
    v13 = a1;
    alloc::vec::in_place_collect::_$LT$impl$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$u20$for$u20$alloc..vec..Vec$LT$T$GT$$GT$::from_iter::h4e88849eaf0833dc(a0, &v9);
    return a0;
}
