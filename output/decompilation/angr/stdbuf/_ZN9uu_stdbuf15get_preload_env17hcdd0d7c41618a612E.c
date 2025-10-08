long long uu_stdbuf::get_preload_env(void* a0, unsigned long long a1[2])
{
    unsigned int v0;  // [bp-0x7c]
    int v1;  // [bp-0x78], Other Possible Types: char
    unsigned int v2;  // [bp-0x74]
    unsigned long long v3;  // [bp-0x70]
    unsigned long long v4;  // [bp-0x68]
    char v5;  // [bp-0x60], Other Possible Types: unsigned long
    unsigned long v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    char v8;  // [bp-0x40], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x38]
    unsigned long long v10;  // [bp-0x30]
    int v11;  // [bp-0x28], Other Possible Types: char
    char v12;  // [bp-0x18]
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rax
    unsigned long long v16;  // rdx

    v1.join(a1[0], a1[1]);
    v8.with_extension(v3, v4);
    core::ptr::drop_in_place<std::path::PathBuf>(*((long long *)&v1), v3);
    v1.create(&v8);
    if (*((int *)&v1) == 1)
    {
        *((long long *)&a0[8]) = v3.from();
        *((unsigned long long *)&a0[16]) = v14;
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        v0 = v2;
        v15 = v0.write_all();
        if (!v15)
        {
            v11.to_vec("LD_PRELOADsolibstdbuf", 10);
            v4 = *((long long *)&v12);
            v1 = v11;
            v7 = v10;
            memcpy(&v5, &v8, 16);
            *((unsigned long *)&a0[32]) = v6;
            *((unsigned long long *)&a0[40]) = v7;
            *((unsigned long long *)&a0[16]) = v4;
            *((unsigned long *)&a0[24]) = v5;
            *(a0) = v11;
            core::ptr::drop_in_place<std::fs::File>(v0);
            return a0;
        }
        *((long long *)&a0[8]) = v15.from();
        *((unsigned long long *)&a0[16]) = v16;
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<std::fs::File>(v0);
    }
    core::ptr::drop_in_place<std::path::PathBuf>(v8, v9);
    return a0;
}
