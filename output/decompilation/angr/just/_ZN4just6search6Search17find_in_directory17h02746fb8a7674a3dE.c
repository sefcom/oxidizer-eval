double just::search::Search::find_in_directory(long long a0, long long a1, long long a2, long long a3, long long a4)
{
    int v0;  // [bp-0x78], Other Possible Types: char
    unsigned long long v1;  // [bp-0x68]
    int v2;  // [bp-0x58], Other Possible Types: char
    char v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x40]
    unsigned long long v6;  // [bp-0x38]
    unsigned long long v7;  // [bp-0x30]
    int v8;  // [bp-0x28]
    unsigned long long v9;  // [bp-0x20]
    unsigned long long v10;  // [bp-0x18]
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    int v14;  // xmm0

    v2.justfile(a1, a2, a3, a4);
    v12 = *((long long *)&v2);
    memcpy(&v0, &v3, 16);
    v1 = v5;
    if (v12 != 9223372036854775814)
    {
        *((unsigned long long *)&a0[32]) = v1;
        a0[16] = v0;
        *((unsigned long long *)&a0[8]) = v12;
        *((unsigned long long *)a0) = 0x8000000000000000;
        return (unsigned long long)v0;
    }
    v10 = v1;
    v8 = v0;
    v2.working_directory_from_justfile(v9, v1);
    v13 = *((long long *)&v2);
    memcpy(&v0, &v3, 16);
    v1 = v5;
    if (v13 != 9223372036854775814)
    {
        *((unsigned long long *)&a0[32]) = v1;
        a0[16] = v0;
        *((unsigned long long *)&a0[8]) = v13;
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<std::path::PathBuf>(&(char)v8);
        return (unsigned long long)v0;
    }
    v7 = v1;
    memcpy(&v5, &v0, 16);
    v4 = v10;
    v14 = (int128_t)v8;
    v2 = v14;
    *((unsigned long long *)&a0[32]) = v6;
    *((unsigned long long *)&a0[40]) = v7;
    *((unsigned long long *)&a0[16]) = v4;
    *((unsigned long long *)&a0[24]) = v5;
    *(a0) = v14;
    return (unsigned long long)v14;
}
