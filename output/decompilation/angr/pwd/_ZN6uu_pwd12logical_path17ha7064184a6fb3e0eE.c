long long uu_pwd::logical_path(unsigned long long a0[3])
{
    char v0;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    unsigned long long v4;  // r12

    std::env::var_os(&v0);
    if (!((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63)))
    {
        v4 = *((long long *)&v2);
        if ((char)uu_pwd::logical_path::looks_reasonable(v1, v4))
        {
            a0[0] = v0;
            a0[1] = v1;
            a0[2] = v4;
            return a0;
        }
    }
    std::env::current_dir(a0);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        return a0;
    core::ptr::drop_in_place<std::path::PathBuf>(v0, v1);
    return a0;
}
