long long uu_touch::update_times(unsigned long long a0, unsigned long long a1, char a2, char a3, char a4, unsigned long long a5, unsigned int a6, unsigned long long a7, unsigned int a8)
{
    char v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80], Other Possible Types: unsigned long
    unsigned long v2;  // [bp-0x78]
    unsigned long long v3;  // [bp-0x70]
    char v4;  // [bp-0x68]
    char v5;  // [bp-0x58]
    char v6;  // r12b
    unsigned long long v7;  // 4096
    unsigned long long v8;  // 4096
    unsigned long long v9;  // rax

    if (a4)
    {
        v6 = a3 ^ 1;
        v7 = a7;
        v8 = a5;
        if (a4 == 1)
        {
            uu_touch::stat(&v5, a0, a1, v6 & 1);
            v0.map_err_context(&v5, a0, a1);
            a6 = v2;
            if ((v0 & 1))
                return v1;
            v7 = a7;
            v8 = v1;
        }
    }
    else
    {
        v6 = a3 ^ 1;
        uu_touch::stat(&v5, a0, a1, (a3 ^ 1) & 1);
        v0.map_err_context(&v5, a0, a1);
        if ((v0 & 1))
            return v1;
        a8 = *((int *)&v4);
        v7 = v3;
        v8 = a5;
    }
    v9 = (!((a2 | v6) & 1) ? filetime::set_symlink_file_times(a0, a1, v8, a6, v7, a8) : filetime::set_file_times(a0, a1, v8, a6, v7, a8));
    return v9.map_err_context(a0, a1);
}
