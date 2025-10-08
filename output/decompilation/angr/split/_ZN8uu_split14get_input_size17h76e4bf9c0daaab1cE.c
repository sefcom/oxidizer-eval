long long uu_split::get_input_size(unsigned long long a0[3], unsigned long a1, unsigned long long a2, char a3, unsigned long long a4)
{
    unsigned long long v0[3];  // [bp-0x118]
    char *v1;  // [bp-0x110], Other Possible Types: unsigned int
    unsigned long long v2;  // [bp-0x108]
    char *v3;  // [bp-0x100], Other Possible Types: char
    unsigned long long v4;  // [bp-0xf8]
    unsigned long v5;  // [bp-0xe8]
    unsigned int v6;  // [bp-0xe4]
    unsigned long long v7;  // [bp-0xe0]
    char *v8;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0xd0]
    void* v10;  // [bp-0xc8]
    char v11;  // [bp-0x98]
    char v12;  // [bp-0x38]
    unsigned long v14;  // rdx

    v0[0] = a0;
    if (!(a3 & 1))
        a4 = uucore::features::fs::sane_blksize::sane_blksize_from_path(a0[1], a0[2]);
    v5 = a1;
    v7 = a4;
    v8 = a4;
    if (((char)std::io::default_read_to_end(&(char)v5, a2) & 1))
        return 1;
    if (a4 > v14)
        return 0;
    if ((char)a0[1].equal(a0[2], "-rlsrc/uu/split/src/strategy.rs", 1))
    {
        v1 = &v0;
        v2 = <&T as core::fmt::Display>::fmt;
        v5 = &g_50aec8;
        v7 = 2;
        v10 = 0;
        v8 = &v1;
        v9 = 1;
        v3.map_or_else(0, &(char)v5);
        40._new(v3.new(), &g_50ad88);
    }
    else
    {
        std::fs::metadata(&(char)v5, a0);
        if ((int)v5 == 2)
        {
LABEL_46f273:
        }
        else
        {
            if (*((long long *)&v11) >= v14)
                return 0;
            (char)v5.open(v0[1], v0[2]);
            if (((char)v5 & 1))
                goto LABEL_46f273;
            v1 = v6;
            if (!((char)v1.seek(1, 0) & 1))
            {
                if (v14)
                {
                    core::ptr::drop_in_place<std::fs::File>(&v1);
                    return 0;
                }
                v3 = &v0;
                v4 = <&T as core::fmt::Display>::fmt;
                v5 = &g_50aee8;
                v7 = 2;
                v10 = 0;
                v8 = &v3;
                v9 = 1;
                v12.map_or_else(0, &(char)v5);
                40._new(v12.new(), &g_50ad88);
            }
            core::ptr::drop_in_place<std::fs::File>(&v1);
        }
    }
    return 1;
}
