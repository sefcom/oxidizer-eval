long long uu_wc::count_fast::count_bytes_using_splice(unsigned long long a0)
{
    unsigned int v0;  // [bp-0xe0]
    unsigned int v1;  // [bp-0xdc]
    char v2;  // [bp-0xd8], Other Possible Types: unsigned int
    unsigned int v3;  // [bp-0xd4]
    unsigned long long v4;  // [bp-0xd0]
    unsigned long long v5;  // [bp-0xc8]
    unsigned int v6;  // [bp-0xc0]
    char v7;  // [bp-0xbf]
    unsigned short v8;  // [bp-0xbc]
    char v9;  // [bp-0x98]
    unsigned long long v12;  // rdi
    unsigned long long v13;  // rax

    v5 = 0x1b600000000;
    v6 = 0;
    v8 = 0;
    v7 = 1;
    v2.open(&v5, "/dev/nullsrc/uu/wc/src/count_fast.rs", 9);
    if ((v2 & 1))
    {
        ::0x4acbb0::core::ptr::drop_in_place<std::io::error::Error>(v4);
    }
    else
    {
        v0 = v3;
        nix::sys::stat::fstat(&v5, (unsigned int)v0.as_fd());
        if (!((char)v5 & 1))
        {
            v12 = *((long long *)&v9);
            if (((unsigned int)(v12 >> 32) & 0xfffff000 | (unsigned int)v12 >> 8 & 4095) == 1 && !(unsigned int)(v12 >> 12) & 0xffffff00 | (unsigned int)v12.ne())
            {
                v13 = uucore::features::pipes::pipe();
                if ((unsigned int)v13 != -1)
                {
                    v1 = v13;
                    v2 = v13 >> 32;
                    while (true)
                    {
                        nix::fcntl::splice(&v5, a0, 0, &v2, 0, 0x20000, 0);
                        if (((char)v5 & 1))
                            break;
                        if (!*((long long *)&v6))
                        {
                            ::0x4acb30::core::ptr::drop_in_place<std::fs::File>(v2);
                            ::0x4acb30::core::ptr::drop_in_place<std::fs::File>(v1);
                            ::0x4acb30::core::ptr::drop_in_place<std::fs::File>(v0);
                            return 0;
                        }
                        if ((int)uucore::features::pipes::splice_exact(&v1, &v0, *((long long *)&v6)) != 134)
                            break;
                    }
                    ::0x4acb30::core::ptr::drop_in_place<std::fs::File>(v2);
                    ::0x4acb30::core::ptr::drop_in_place<std::fs::File>(v1);
                }
            }
        }
        ::0x4acb30::core::ptr::drop_in_place<std::fs::File>(v0);
    }
    return 1;
}
