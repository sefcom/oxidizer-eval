long long uu_du::birth_u64(unsigned long long a0)
{
    char v0;  // [bp-0x28], Other Possible Types: unsigned long long
    char v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x10]
    unsigned int v3;  // [bp-0x8]

    v0.created(a0);
    if (*((int *)&v1) == 0x3b9aca00)
    {
        core::ptr::drop_in_place<core::result::Result<std::time::SystemTime,std::io::error::Error>>(&v0);
        return 0;
    }
    v2 = v0;
    v3 = *((int *)&v1);
    v0.duration_since(&v2, 0, 0);
    if (!(v0 & 1))
        return 1;
    return 0;
}
