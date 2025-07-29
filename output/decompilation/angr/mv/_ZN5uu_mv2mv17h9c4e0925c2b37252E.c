long long uu_mv::mv(unsigned long long a0, unsigned int a1, struct_0 *a2)
{
    char v0;  // [bp-0x60]
    unsigned long long v1[6];  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x50]
    char v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    unsigned long long v5;  // [bp-0x38]
    char v6;  // [bp-0x30]
    char v7;  // [bp-0x20]
    unsigned long v9;  // rax
    unsigned long long v10;  // rcx
    unsigned long long v11;  // rax

    uu_mv::parse_paths(&v0, a0, a1, a2->field_32);
    if (!((char)(((0 ^ a2->field_18) & (0 ^ -(a2->field_18))) >> 63)))
    {
        v6.to_owned(a2->field_20, a2->field_28);
        v5 = *((long long *)&v7);
        memcpy(&v3, &v6, 16);
        v11 = uu_mv::move_files_into_dir(v1, v2, v4, v10, a2);
        ::0x4c7450::core::ptr::drop_in_place<std::path::PathBuf>(&v3);
        ::0x4c7e10::core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v0);
        return v11;
    }
    v9 = (v2 == 2 ? uu_mv::handle_two_paths(v1[1], v1[2], v1[4], v1[5], a2) : uu_mv::handle_multiple_paths(v1, v2, a2));
    ::0x4c7e10::core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v0);
    return v9;
}
