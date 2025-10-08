long long uu_rm::prompt_dir(unsigned long long a0, unsigned long long a1, char a2, unsigned int a3)
{
    char v0;  // [bp-0xd8], Other Possible Types: unsigned long long
    char v1;  // [bp-0xd0]
    char v2;  // [bp-0xa0]
    unsigned long v4;  // rbp
    unsigned int v5;  // ebp

    v4 = a3;
    if (!(char)v4)
        return (unsigned int)v4 & 0xffffff00 | 1;
    std::fs::metadata(&v0, a0, a1);
    if (v0 == 2)
    {
        v5 = (unsigned int)v4 & 0xffffff00 | 1;
        v0 = 2;
    }
    else
    {
        v5 = uu_rm::handle_writable_directory(a0, a1, a2, v4 & 4294967295, *((int *)&v2));
    }
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v0, *((long long *)&v1));
    return v5;
}
