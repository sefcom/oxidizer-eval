void uu_df::filesystem::mount_info_from_path(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    void* v0;  // [bp-0x88], Other Possible Types: char, unsigned long long
    char v1;  // [bp-0x80], Other Possible Types: unsigned long long
    char v2;  // [bp-0x7f]
    char *v3;  // [bp-0x78], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x68]
    char v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x5f]
    unsigned long long v7;  // [bp-0x58]
    unsigned long long v8;  // [bp-0x50]
    unsigned long long v9;  // [bp-0x48]
    char *v10;  // [bp-0x40], Other Possible Types: char
    char *v11;  // [bp-0x38]
    char *v12;  // [bp-0x30]
    char v15;  // cl
    void* v16;  // r12
    unsigned long long v17;  // rax
    char v18;  // al

    std::fs::canonicalize(&v0, a3.as_ref(), a2);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        core::ptr::drop_in_place<std::io::error::Error>(*((long long *)&v1));
        *((unsigned short *)a0) = 257;
        return;
    }
    v15 = v1;
    v6 = *((long long *)&v2);
    v7 = v3;
    v4 = v0;
    v5 = v15;
    v8 = a1;
    v9 = a2 * 152 + a1;
    v10 = &v10;
    v11 = &v4;
    v12 = &v10;
    v0.try_fold(&v8, &v10);
    if (*((long long *)&v1) == 0x8000000000000000)
    {
        core::ptr::drop_in_place<core::ops::control_flow::ControlFlow<(&uucore::features::fsext::MountInfo,std::path::PathBuf)>>(0x8000000000000000, v3);
        v16 = 0;
    }
    else
    {
        v16 = v0;
        core::ptr::drop_in_place<(&uucore::features::fsext::MountInfo,std::path::PathBuf)>(*((long long *)&v1), v3);
    }
    v0 = a1;
    v1 = a2;
    v3 = &v4;
    v17 = v16.or_else(&v0);
    if (v17)
    {
        *((unsigned long long *)&a0[8]) = v17;
    }
    else
    {
        *((char *)&a0[1]) = 2;
        v18 = 1;
    }
    *((char *)a0) = v18;
    core::mem::drop(v4, *((long long *)&v5));
    return;
}
