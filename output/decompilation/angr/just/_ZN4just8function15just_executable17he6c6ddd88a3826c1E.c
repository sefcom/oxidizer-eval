long long just::function::just_executable(void* a0)
{
    char v0;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x68]
    unsigned long long v2;  // [bp-0x60]
    char v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x50]
    unsigned long long v5;  // [bp-0x48]
    int v6;  // [bp-0x38], Other Possible Types: char
    unsigned long long v7;  // [bp-0x28]
    unsigned long long v9;  // rdx

    std::env::current_exe(&v0);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        just::function::just_executable::{{closure}}(&v3, v1, v9);
        v7 = v5;
        memcpy(&v6, &v3, 16);
        *((unsigned long long *)&a0[24]) = v5;
        a0[8] = v6;
        *((unsigned long long *)a0) = 1;
        return a0;
    }
    memcpy(&v3, &v0, 16);
    v5 = v2;
    core::str::converts::from_utf8(&v0, v4, v2);
    if ((int)v0 == 1)
    {
        just::which::which::{{closure}}(&v0, v4, v2);
        *((unsigned long long *)&a0[24]) = v2;
        *((int128_t *)&a0[8]) = *((int128_t *)&v0);
        *((unsigned long long *)a0) = 1;
    }
    else
    {
        v0.to_vec(v1, v2);
        *((int128_t *)&a0[16]) = *((int128_t *)&v1);
        *((unsigned long long *)&a0[8]) = v0;
        *((unsigned long long *)a0) = 0;
    }
    core::ptr::drop_in_place<std::path::PathBuf>(&v3);
    return a0;
}
