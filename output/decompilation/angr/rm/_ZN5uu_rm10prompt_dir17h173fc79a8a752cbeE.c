long long uu_rm::prompt_dir(unsigned long long a0, unsigned long long a1, char a2, unsigned int a3)
{
    char v0;  // [bp-0xe0], Other Possible Types: unsigned long long
    char v1;  // [bp-0xd8]
    char v2;  // [bp-0xa8]
    unsigned long v4;  // rbp
    unsigned int v5;  // ebx
    unsigned int v6;  // ebx
    unsigned long long v7;  // rsi

    v4 = a3;
    v6 = v5 & 0xffffff00 | 1;
    if (!(char)v4)
        return v5 & 0xffffff00 | 1;
    std::fs::metadata(&v0, a0, a1);
    if (v0 == 2)
    {
        v7 = *((long long *)&v1);
        v0 = 2;
    }
    else
    {
        v6 = uu_rm::handle_writable_directory(a0, a1, a2, v4 & 4294967295, *((int *)&v2));
        v7 = *((long long *)&v1);
    }
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v0, v7);
    return v6;
}
