long long fish::wutil::fileid::file_id_for_path_narrow(void* a0, unsigned long long a1, unsigned long a2)
{
    char v0;  // [bp-0xb8]
    char v1;  // [bp-0x98]
    char v2;  // [bp-0x68]
    int v3;  // [bp-0x40]
    char v4;  // [bp-0x30]
    unsigned long long v6;  // rax

    std::fs::metadata(&v0, a1, a2 - 1);
    if (*((int *)&v0) == 2)
    {
        *((uint128_t *)&a0[32]) = 0x80000000000000008000000000000000;
        *((uint128_t *)&a0[16]) = 170141183460469231750134047789593657343;
        *((uint128_t *)a0) = 340282366920938463463374607431768211455;
        *((unsigned long long *)&a0[48]) = 0x8000000000000000;
    }
    else
    {
        v6 = *((long long *)&v2);
        *((int128_t *)a0) = *((int128_t *)&v1);
        *((unsigned long long *)&a0[16]) = v6;
        *((int128_t *)&a0[24]) = *((int128_t *)&v4);
        a0[40] = v3;
    }
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v0);
    return a0;
}
