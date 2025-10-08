long long uu_cp::calculate_dest_permissions(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3, char a4, unsigned int a5, unsigned long long a6, unsigned long long a7)
{
    unsigned int v0;  // [bp-0xe8]
    char v1;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0xd8]
    unsigned long long v3;  // [bp-0xd8]
    unsigned long long v4;  // [bp-0xd0]
    char v5;  // [bp-0xa8]
    unsigned int v6;  // eax
    unsigned int v7;  // eax

    v0 = a5;
    std::fs::metadata(&v1, a1, a2);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v1);
    if (*((int *)&v1) == 2)
    {
        v6 = uu_cp::handle_no_preserve_mode(a4, v0, a3);
        v7 = ~((int)uucore::features::mode::get_umask()) & v6;
    }
    else
    {
        std::fs::symlink_metadata(&v1, a1, a2);
        if (*((int *)&v1) == 2)
        {
            v1 = a6;
            v2 = a7;
            v4 = v3;
            return a0.from(&v1);
        }
        v7 = *((int *)&v5);
    }
    a0->field_8 = v7;
    a0->field_0 = 9223372036854775820;
    return 9223372036854775820;
}
