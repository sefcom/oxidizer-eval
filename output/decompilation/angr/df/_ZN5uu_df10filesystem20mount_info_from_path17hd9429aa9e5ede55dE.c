void uu_df::filesystem::mount_info_from_path(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char *v0;  // [bp-0x90], Other Possible Types: char, unsigned long long
    char *v1;  // [bp-0x88], Other Possible Types: char, unsigned long, unsigned long long
    char v2;  // [bp-0x87]
    char *v3;  // [bp-0x80], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x70]
    char v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x67]
    unsigned long long v7;  // [bp-0x60]
    unsigned long long v8;  // [bp-0x58]
    unsigned long long v9;  // [bp-0x50]
    void* v10;  // [bp-0x48], Other Possible Types: char
    unsigned long v11;  // [bp-0x40]
    char v12;  // [bp-0x38]
    char v15;  // cl
    void* v16;  // r12
    unsigned long long v17;  // rax
    char v18;  // al

    std::fs::canonicalize(&v0, a3.as_ref(), a2);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        ::0x4a57b0::core::ptr::drop_in_place<std::io::error::Error>(*((long long *)&v1));
        *((unsigned short *)&a0->field_0) = 257;
        return;
    }
    v15 = v1;
    v6 = *((long long *)&v2);
    v7 = v3;
    v4 = v0;
    v5 = v15;
    v8 = a1;
    v9 = a2 * 152 + a1;
    v0 = &v10;
    v1 = &v4;
    v3 = &v10;
    v10.try_fold(&v8, &v0);
    if (v11 == 0x8000000000000000)
    {
        core::ptr::drop_in_place<core::ops::control_flow::ControlFlow<(&uucore::features::fsext::MountInfo,std::path::PathBuf)>>(&v10);
        v16 = 0;
    }
    else
    {
        v16 = v10;
        memcpy(&v3, &v12, 16);
        v0 = v16;
        v1 = v11;
        ::0x4a5910::core::ptr::drop_in_place<(&uucore::features::fsext::MountInfo,std::path::PathBuf)>(&v0);
    }
    v0 = a1;
    v1 = a2;
    v3 = &v4;
    v17 = v16.or_else(&v0);
    if (v17)
    {
        a0->field_8 = v17;
    }
    else
    {
        a0->padding_1[0] = 2;
        v18 = 1;
    }
    a0->field_0 = v18;
    ::0x4a5790::core::ptr::drop_in_place<std::path::PathBuf>(&v4);
    return;
}
