long long fuel_core_version::main()
{
    int v0;  // [bp-0xa8], Other Possible Types: char
    void* v1;  // [bp-0xa0]
    int v2;  // [bp-0x98], Other Possible Types: char
    char v3;  // [bp-0x90]
    unsigned long long v4;  // [bp-0x88]
    int v5;  // [bp-0x78]
    unsigned long long v6;  // [bp-0x70]
    unsigned long long v7;  // [bp-0x68]
    unsigned long long v8;  // [bp-0x60]
    void* v9;  // [bp-0x58]
    int v10;  // [bp-0x50], Other Possible Types: char
    unsigned long long v11;  // [bp-0x40]
    unsigned long long v12;  // [bp-0x38]
    void* v13;  // [bp-0x30]
    unsigned long long v14;  // [bp-0x28]
    char v16;  // bpl
    void* v17;  // rbx
    unsigned long long v18;  // r14
    int v19;  // xmm0
    void* v20;  // r15
    unsigned long long v21;  // rax
    int v22;  // xmm0

    v0.parse();
    v16 = v3;
    v7 = *((long long *)&v2);
    *((int128_t *)&v5) = *((int128_t *)&v0);
    fuel_core_version::read_fuel_core_version(&v0, &(char)v5);
    v17 = v1;
    if (*((long long *)&v0))
    {
        v11 = v4;
        memcpy(&v10, &v2, 16);
        v8 = *((long long *)&v0);
        v9 = v17;
        fuel_core_version::get_version_file_path(&v0, &(char)v5);
        v18 = *((long long *)&v0);
        v17 = v1;
        if ((char)(((0 ^ v18) & (0 ^ -(v18))) >> 63))
        {
            core::ptr::drop_in_place<semver::Version>(&v8);
        }
        else if (v16)
        {
            v4 = v11;
            v19 = *((int128_t *)&v8);
            v2 = v10;
            v0 = v19;
            v20 = fuel_core_version::verify_version_from_file(&v0);
            core::mem::drop(v18, v17);
            if (!v20)
                goto LABEL_471282;
            v17 = v20;
        }
        else
        {
            v21 = *((long long *)&v2);
            v4 = v11;
            v22 = *((int128_t *)&v8);
            v2 = v10;
            v0 = v22;
            v12 = v18;
            v13 = v17;
            v14 = v21;
            v17 = fuel_core_version::write_version_to_file(&v0, &v12);
            if (!v17)
            {
LABEL_471282:
                v17 = 0;
            }
        }
    }
    core::mem::drop((long long)v5, v6);
    return v17;
}
