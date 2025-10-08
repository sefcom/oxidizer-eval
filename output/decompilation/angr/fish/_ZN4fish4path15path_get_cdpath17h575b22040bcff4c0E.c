long long fish::path::path_get_cdpath(unsigned long long *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6)
{
    void* v0;  // [bp-0x140]
    char v1;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x130]
    unsigned long long v3;  // [bp-0x128]
    char v4;  // [bp-0x118]
    char v5;  // [bp-0xf8]
    unsigned long long v6;  // [bp-0xe0]
    unsigned long long v7;  // [bp-0xd8]
    int v8;  // [bp-0xa8]
    unsigned int v9;  // eax
    unsigned int v10;  // edx
    unsigned int v11;  // ebp

    if (!a2)
    {
        *(a0) = 0x8000000000000000;
        return a0;
    }
    v6 = a3;
    v7 = a3 + a4 * 4;
    v9 = v6.next_back();
    if (v9 != 2)
    {
        v9.unwrap(v10, &g_14bd3d0);
        if (v10 == 47)
        {
            fish::path::path_apply_cdpath(&v5, a1, a2, a3, a4, a5, a6);
            v4.into_iter(&v5);
            v1.next(&v4);
            v11 = 2;
            if (!((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63)))
            {
                do
                {
                    fish::wutil::wstat(&v6, v2, v3);
                    if ((int)v6 != 2)
                    {
                        v11 = 20;
                        if (((short)(int)v8 & 0xf000) == 0x4000)
                        {
                            *((unsigned long long *)&v0[16]) = v3;
                            *((int128_t *)v0) = *((int128_t *)&v1);
                            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v6);
                            core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<widestring::utfstring::Utf32String>>(&v4);
                            return a0;
                        }
                    }
                    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v6);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v1);
                    v1.next(&v4);
                } while (v1 != 0x8000000000000000);
            }
            core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<widestring::utfstring::Utf32String>>(&v4);
            errno::set_errno(v11);
            *((unsigned long long *)v0) = 0x8000000000000000;
            return a0;
        }
    }
    core::panicking::panic("assertion failed: wd.chars().next_back() == Some('/')", 53, &g_14df078); /* do not return */
}
