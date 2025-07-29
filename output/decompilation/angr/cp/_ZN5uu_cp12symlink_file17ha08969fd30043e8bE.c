long long uu_cp::symlink_file(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v0;  // [bp-0x178]
    unsigned long long v1;  // [bp-0x170]
    unsigned long long v2;  // [bp-0x168]
    unsigned long long v3;  // [bp-0x160]
    char v4;  // [bp-0x158], Other Possible Types: unsigned long long
    int v5;  // [bp-0x150]
    int v6;  // [bp-0x140]
    char v7;  // [bp-0x130]
    char v8;  // [bp-0xc0]
    unsigned long long v10;  // rax
    char *v11;  // rdi
    unsigned long long v12;  // rax

    v10 = std::os::unix::fs::symlink(a1, a2, a3, a4);
    v0 = a3;
    v1 = a4;
    v2 = a1;
    v3 = a2;
    v11 = &v4;
    if (v10)
    {
        uu_cp::symlink_file::{{closure}}(v11, &v0, v10);
        v12 = v4;
        *((int128_t *)((char *)&a0->field_18 + 8)) = *((int128_t *)&v7);
        *((void*)((char *)&a0->field_8 + 8)) = v6;
        *((void*)&(&a0->field_0)[1]) = v5;
    }
    else
    {
        v11.from_path(a3, a4, 0);
        if (!(v4 & 1))
        {
            memcpy(&v8, &(char)v5, 144);
            a5.insert(&v8);
        }
        ::0x4d3590::core::ptr::drop_in_place<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error>>(&v4);
        v12 = 9223372036854775820;
    }
    a0->field_0 = v12;
    return v12;
}
