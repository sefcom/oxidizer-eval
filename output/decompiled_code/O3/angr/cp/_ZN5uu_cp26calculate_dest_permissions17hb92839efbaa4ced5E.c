long long uu_cp::calculate_dest_permissions::hb92839efbaa4ced5(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned int a4, unsigned int a5)
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
    std::fs::metadata::hb89aa4d693159f5b(&v1, a1, a2);
    ::0x4fc840::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf5a3bed3556a31f4(&v1);
    if (*((int *)&v1) == 2)
    {
        v8 = ~((int)uucore::features::mode::get_umask::h70b753b6c54797b8()) & (int)uu_cp::handle_no_preserve_mode::h3d3e0c438b57b89b(a4, (char)v0, a3);
    }
    else
    {
        std::fs::symlink_metadata::ha8b9885f9a62ee23(&v1, a1, a2);
        if (*((int *)&v1) == 2)
        {
            v1 = v5;
            v2 = *((long long *)&v6);
            v3 = v2;
            v8 = _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::hd4dc71d2843d8bd1(a0, &v1);
            return v8;
        }
        v8 = *((int *)&v4);
    }
    a0->field_8 = v8;
    a0->field_0 = 13;
    return v8;
}
