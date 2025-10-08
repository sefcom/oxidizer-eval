void uu_stat::Stater::find_mount_point(void* a0, unsigned long long a1[12], unsigned long long a2)
{
    char v0;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    unsigned long long v5;  // r12
    unsigned long long v6;  // rbp
    unsigned long long v7;  // r12
    unsigned long v8;  // r12

    std::fs::canonicalize(&v0, a2.as_ref(), a2);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v0);
        *((unsigned long long *)a0) = 0x8000000000000000;
        return;
    }
    if (a1[9] != 0x8000000000000000)
    {
        v5 = a1[10];
        v6 = a1[11] * 24;
        do
        {
            v7 = v5;
            if (!v6)
                goto LABEL_47669b;
            v8 = v7 + 24;
            v6 -= 24;
            v5 = v8;
        } while (!v1.starts_with(*((long long *)&v2), v7));
        v0.clone(v8 - 24);
        *((long long *)&a0[16]) = *((long long *)&v2);
        *((int128_t *)a0) = *((int128_t *)&v0);
    }
    else
    {
LABEL_47669b:
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    core::ptr::drop_in_place<std::path::PathBuf>(v0, v1);
    return;
}
