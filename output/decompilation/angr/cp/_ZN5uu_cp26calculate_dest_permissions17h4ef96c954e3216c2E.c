long long uu_cp::calculate_dest_permissions(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3, char a4, unsigned int a5, unsigned long long a6, unsigned long long a7)
{
    unsigned int v0;  // [bp-0x188]
    int v1;  // [bp-0x180], Other Possible Types: char
    int v2;  // [bp-0x170]
    int v3;  // [bp-0x160]
    unsigned long v4;  // [bp-0x150]
    int v5;  // [bp-0x148]
    int v6;  // [bp-0x138]
    int v7;  // [bp-0x128]
    int v8;  // [bp-0x118]
    int v9;  // [bp-0x108]
    int v10;  // [bp-0xf8]
    char v11;  // [bp-0xe0]
    char v12;  // [bp-0xd8]
    char v13;  // [bp-0xa8]
    unsigned int v14;  // eax
    unsigned int v15;  // eax

    v0 = a5;
    std::fs::metadata(&v11, a1, a2);
    ::0x4d4630::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v11);
    if (*((int *)&v11) == 2)
    {
        v14 = uu_cp::handle_no_preserve_mode(a4, v0, a3);
        v15 = ~((int)uucore::features::mode::get_umask()) & v14;
    }
    else
    {
        std::fs::symlink_metadata(&v11, a1, a2);
        if (*((int *)&v11) == 2)
        {
            uu_cp::copy_attributes::{{closure}}(&v1, a6, a7, *((long long *)&v12));
            v10 = v3;
            v9 = v2;
            v8 = v1;
            v7 = v10;
            v6 = v9;
            v5 = v8;
            *((void*)&a0->field_20) = v10;
            *((void*)&a0->field_10) = v9;
            *((void*)&a0->field_0) = v8;
            a0->field_30 = v4;
            return v4;
        }
        v15 = *((int *)&v13);
    }
    *((unsigned int *)&a0->padding_1[7]) = v15;
    *((unsigned long long *)&a0->field_0) = 9223372036854775820;
    return 9223372036854775820;
}
