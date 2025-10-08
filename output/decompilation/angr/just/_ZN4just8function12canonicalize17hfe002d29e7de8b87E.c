long long just::function::canonicalize(void* a0, struct_0 **a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0xa0], Other Possible Types: unsigned long
    unsigned long long v1;  // [bp-0x98]
    unsigned long long v2;  // [bp-0x90]
    int v3;  // [bp-0x88], Other Possible Types: char
    unsigned long long v4;  // [bp-0x80]
    unsigned long long v5;  // [bp-0x78]
    char v6;  // [bp-0x70]
    unsigned long long v7;  // [bp-0x68]
    unsigned long long v8;  // [bp-0x60]
    int v9;  // [bp-0x58], Other Possible Types: char
    unsigned long long v10;  // [bp-0x48]
    char *v12;  // rdi

    v6.working_directory(*(a1)->field_10, *((long long *)&*(a1)->field_18));
    v0.join(v7, v8, a2, a3);
    std::fs::canonicalize(&v3, &v0);
    if ((char)(((0 ^ *((long long *)&v3)) & (0 ^ -(*((long long *)&v3)))) >> 63))
    {
        just::function::canonicalize::{{closure}}(&v0, v4, a2);
        memcpy(&v9, &v0, 16);
        v10 = v2;
        *((unsigned long long *)&a0[24]) = v2;
        a0[8] = v9;
        *((unsigned long long *)a0) = 1;
        v12 = &v6;
    }
    else
    {
        memcpy(&v9, &v3, 16);
        v10 = v5;
        *((int128_t *)&v3) = *((int128_t *)&v3);
        v5 = v10;
        core::ptr::drop_in_place<std::path::PathBuf>(&v6);
        core::str::converts::from_utf8(&v0, v4, v5);
        if (*((int *)&v0) == 1)
        {
            just::function::canonicalize::{{closure}}(&v0, v4, v5);
            *((unsigned long long *)&a0[24]) = v2;
            *((int128_t *)&a0[8]) = *((int128_t *)&v0);
            *((unsigned long long *)a0) = 1;
        }
        else
        {
            v0.to_vec(v1, v2);
            *((int128_t *)&a0[16]) = *((int128_t *)&v1);
            *((unsigned long *)&a0[8]) = v0;
            *((unsigned long long *)a0) = 0;
        }
        v12 = &v3;
    }
    core::ptr::drop_in_place<std::path::PathBuf>(v12);
    return a0;
}
