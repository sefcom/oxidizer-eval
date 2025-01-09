long long uu_cp::calculate_dest_permissions::he28553ee8e44ce96(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    unsigned int v0;  // [sp-0xe8]
    char v1;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long v2;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0xd0]
    char v4;  // [bp-0xa8]
    unsigned long v5;  // [bp+0x8]
    char v6;  // [bp+0x10]
    unsigned long long v8;  // rax

    v0 = a5;
    std::fs::metadata::h003d8cdbffde7c56(&v1, a1, a2);
    ::0x4fd170::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&v1);
    if (*((int *)&v1) == 2)
    {
        v8 = ~((int)uucore::features::mode::get_umask::hd2aa58752ad993fa()) & (int)uu_cp::handle_no_preserve_mode::h5c03b58fbdc698a0(a4, (char)v0, a3);
    }
    else
    {
        std::fs::symlink_metadata::h8589e79b0a107dee(&v1, a1, a2);
        if (*((int *)&v1) == 2)
        {
            v1 = v5;
            v2 = *((long long *)&v6);
            v3 = v2;
            v8 = _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::h54c083f413b93682(a0, &v1);
            return v8;
        }
        v8 = *((int *)&v4);
    }
    a0->field_8 = v8;
    a0->field_0 = 13;
    return v8;
}
