long long uu_wc::count_fast::count_bytes_using_splice()
{
    unsigned int v0;  // [bp-0xe0]
    unsigned int v1;  // [bp-0xdc]
    char v2;  // [bp-0xd8], Other Possible Types: unsigned int
    unsigned long long v3;  // [bp-0xd0]
    unsigned long long v4;  // [bp-0xc8]
    unsigned int v5;  // [bp-0xc0]
    char v6;  // [bp-0xbf]
    unsigned short v7;  // [bp-0xbc]
    char v8;  // [bp-0x98]
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax

    v4 = 0x1b600000000;
    v5 = 0;
    v7 = 0;
    v6 = 1;
    v2.open(&v4);
    if (v2 == 1)
    {
        core::ptr::drop_in_place<std::io::error::Error>(v3);
        return 1;
    }
    nix::sys::stat::fstat(&v4, v0);
    if (!((char)v4 & 1))
    {
        v10 = *((long long *)&v8);
        if (((unsigned int)(v10 >> 32) & 0xfffff000 | (unsigned int)v10 >> 8 & 4095) == 1 && ((unsigned int)(v10 >> 12) & 0xffffff00 | (unsigned int)v10) == 3)
        {
            v11 = uucore::features::pipes::pipe();
            if ((unsigned int)v11 != -1)
            {
                v1 = v11;
                v2 = v11 >> 32;
                while (true)
                {
                    nix::fcntl::splice(&v4, &v2);
                    if (((char)v4 & 1))
                        break;
                    if (!*((long long *)&v5))
                    {
                        core::ptr::drop_in_place<std::fs::File>(v2);
                        core::ptr::drop_in_place<std::fs::File>(v1);
                        core::ptr::drop_in_place<std::fs::File>(v0);
                        return 0;
                    }
                    if ((int)uucore::features::pipes::splice_exact(&v1, &v0, *((long long *)&v5)) != 134)
                        break;
                }
                core::ptr::drop_in_place<std::fs::File>(v2);
                core::ptr::drop_in_place<std::fs::File>(v1);
            }
        }
    }
    core::ptr::drop_in_place<std::fs::File>(v0);
    return 1;
}
