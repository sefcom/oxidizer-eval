long long uu_pwd::logical_path(unsigned long long a0[3])
{
    char v0;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    char v3;  // [bp-0x40]
    unsigned long long v6;  // r15

    std::env::var_os(&v3);
    v6 = 0x8000000000000000;
    if (!((char)(((0 ^ *((long long *)&v3)) & (0 ^ -(*((long long *)&v3)))) >> 63)))
    {
        v0.call_once(&v3);
        if (v0 == 0x8000000000000000)
        {
            v6 = 0x8000000000000000;
        }
        else
        {
            v6 = v0;
            if ((char)uu_pwd::logical_path::looks_reasonable(v1, v2))
            {
                a0[0] = v0;
                a0[1] = v1;
                a0[2] = v2;
                return a0;
            }
        }
    }
    std::env::current_dir(a0);
    if (v6 == 0x8000000000000000)
        return a0;
    core::ptr::drop_in_place<std::path::PathBuf>(v6, v1);
    return a0;
}
