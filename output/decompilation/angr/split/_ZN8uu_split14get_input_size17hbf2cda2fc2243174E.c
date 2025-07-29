long long uu_split::get_input_size(unsigned long long a0[3], unsigned long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned int v0;  // [bp-0x15c]
    int v1;  // [bp-0x158], Other Possible Types: char
    unsigned long long v2;  // [bp-0x148]
    int v3;  // [bp-0x138], Other Possible Types: unsigned long
    unsigned int v4;  // [bp-0x134]
    unsigned long long v5;  // [bp-0x130]
    unsigned long long v6;  // [bp-0x128]
    char v7;  // [bp-0xe8]
    int v8;  // [bp-0x88]
    unsigned long long v9;  // [bp-0x78]
    char v10;  // [bp-0x70]
    unsigned long long v11;  // [bp-0x60]
    int v12;  // [bp-0x58]
    unsigned long long v13;  // [bp-0x48]
    char v14;  // [bp-0x40]
    unsigned long long v15;  // [bp-0x30]
    unsigned long v17;  // rdx

    if (!(a3 & 1))
        a4 = uucore::features::fs::sane_blksize::sane_blksize_from_path(a0[1], a0[2]);
    v3 = a1;
    v5 = a4;
    if (std::io::default_read_to_end(&(char)v3, a2, 0, a3))
        return 1;
    if (a4 > v17)
        return 0;
    if ((char)a0[1].equal(a0[2], "-x\\0split-error-would-overwrite-inputsplit-error-cannot-determine-file-sizesplit-error-cannot-determine-input-sizecreating file \n", 1))
    {
        v1.to_vec("inputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 5);
        (char)v3.clone(a0);
        v9 = v2;
        v8 = v1;
        memcpy(&v10, &(char)v3, 16);
        v11 = v6;
        (char)v3.from_iter(&v8);
        uucore::mods::locale::get_message_with_args(&v1, "split-error-cannot-determine-input-sizecreating file \n", 39, &(char)v3);
        40._new(v1.new(), &g_5a6e60);
    }
    else
    {
        std::fs::metadata(&(char)v3, a0);
        if ((int)v3 == 2)
        {
LABEL_4b1318:
        }
        else
        {
            if (*((long long *)&v7) >= v17)
                return 0;
            (char)v3.open(a0[1], a0[2]);
            if (!(!((char)v3 & 1)))
                goto LABEL_4b1318;
            v0 = v4;
            if (!v0.seek(1, 0))
            {
                if (v17)
                {
                    ::0x4ad830::core::ptr::drop_in_place<std::fs::File>(&v0);
                    return 0;
                }
                (char)v3.to_vec("inputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 5);
                v2 = v6;
                memcpy(&v1, &v3, 16);
                (char)v3.clone(a0);
                v13 = v2;
                v12 = v1;
                memcpy(&v14, &v3, 16);
                v15 = v6;
                (char)v3.from_iter(&v12);
                uucore::mods::locale::get_message_with_args(&v1, "split-error-cannot-determine-file-sizesplit-error-cannot-determine-input-sizecreating file \n", 38, &(char)v3);
                v6 = v2;
                v3 = v1;
                40._new((char)v3.new(), &g_5a6e60);
            }
            ::0x4ad830::core::ptr::drop_in_place<std::fs::File>(&v0);
        }
    }
    return 1;
}
