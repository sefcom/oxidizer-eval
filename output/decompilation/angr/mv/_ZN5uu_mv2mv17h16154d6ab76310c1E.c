long long uu_mv::mv(unsigned long long a0, unsigned int a1, struct_0 *a2)
{
    char v0;  // [bp-0x58]
    unsigned long long v1[6];  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x48]
    char v3;  // [bp-0x40], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x38]
    char v5;  // [bp-0x30]
    unsigned long long v7;  // rax

    uu_mv::parse_paths(&v0, a0, a1, a2->field_32);
    if ((char)(((0 ^ a2->field_18) & (0 ^ -(a2->field_18))) >> 63))
    {
        v7 = (v2 == 2 ? uu_mv::handle_two_paths(v1[1], v1[2], v1[4], v1[5], a2) : uu_mv::handle_multiple_paths(v1, v2, a2));
    }
    else
    {
        v3.to_vec(a2->field_20, a2->field_28);
        v7 = uu_mv::move_files_into_dir(v1, v2, v4, *((long long *)&v5), a2);
        core::ptr::drop_in_place<std::path::PathBuf>(v3, v4);
    }
    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v0);
    return v7;
}
