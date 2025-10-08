long long zoxide::config::data_dir(void* a0)
{
    int v0;  // [bp-0x88], Other Possible Types: char
    unsigned long v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x78]
    int v3;  // [bp-0x68], Other Possible Types: char
    unsigned long long v4;  // [bp-0x58]
    char v5;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x48]
    unsigned long long v7;  // [bp-0x40]
    uint128_t v8;  // [bp-0x38]
    unsigned long long v10;  // rax

    std::env::var_os(&v3, "_ZO_DATA_DIRcould not find data directory, please set _ZO_DATA_DIR manuallyzoxide1invalid unicode in _ZO_EXCLUDE_DIRSinvalid glob in _ZO_EXCLUDE_DIRS: ", 12);
    if ((char)(((0 ^ *((long long *)&v3)) & (0 ^ -(*((long long *)&v3)))) >> 63))
    {
        dirs::data_local_dir(&v5);
        v10 = v0.context(&v5);
        if (*((long long *)&v0) == 0x8000000000000000)
        {
            *((unsigned long *)&a0[8]) = v1;
            *((unsigned long long *)a0) = 0x8000000000000000;
            return v10;
        }
        v0.join(v1, v2, "zoxide1invalid unicode in _ZO_EXCLUDE_DIRSinvalid glob in _ZO_EXCLUDE_DIRS: ", 6);
        core::mem::drop(*((long long *)&v0), v1);
    }
    else
    {
        v2 = v4;
        v0 = v3;
    }
    if (!(char)v1.is_absolute(v2))
    {
        v5 = &g_534980;
        v6 = 1;
        v7 = 8;
        v8 = 0;
        *((long long *)&a0[8]) = anyhow::__private::format_err(&v5);
        *((unsigned long long *)a0) = 0x8000000000000000;
        return (unsigned long long)core::mem::drop((long long)v0, v1);
    }
    *((unsigned long long *)&a0[16]) = v2;
    *((int128_t *)a0) = (int128_t)v0;
    return v2;
}
