long long uu_rm::is_dir_empty(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x18], Other Possible Types: unsigned long long
    char v1;  // [bp-0x10]
    unsigned int v3;  // ebx
    unsigned int v4;  // ebx

    std::fs::read_dir(&v0, a0, a1);
    if (v1 == 2)
    {
        v3 = 0;
    }
    else
    {
        v3 = v4 & 0xffffff00 | !v0.fold(v1);
        if (v1 != 2)
            return v3;
    }
    core::ptr::drop_in_place<core::result::Result<std::fs::ReadDir,std::io::error::Error>>(&v0);
    return v3;
}
