long long fish::proc::proc_get_jiffies(unsigned int a0)
{
    char *v0;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x90]
    char v2;  // [bp-0x88]
    unsigned int v3;  // [bp-0x7c]
    void* v4;  // [bp-0x78], Other Possible Types: unsigned long, unsigned long long
    void* v5;  // [bp-0x78], Other Possible Types: unsigned long
    unsigned int v6;  // [bp-0x74]
    unsigned long long v7;  // [bp-0x70]
    int v8;  // [bp-0x70]
    char *v9;  // [bp-0x68]
    char v10;  // [bp-0x60], Other Possible Types: unsigned long long
    void* v11;  // [bp-0x58]
    unsigned int v12;  // [bp-0x44]
    void* v13;  // [bp-0x40]
    unsigned long long v14;  // [bp-0x38]
    void* v15;  // [bp-0x30]
    char v16;  // [bp-0x28]
    unsigned long long v18;  // rax
    unsigned long long v19;  // rdx
    unsigned long long v20;  // rax
    void* v21;  // rsi
    unsigned long long v22;  // rax
    unsigned long long v23;  // rbx
    void* v24;  // rsi
    unsigned long long v25;  // rax
    void* v26;  // rsi
    unsigned long long v27;  // rax

    v12 = a0;
    if (!(char)fish::proc::have_proc_stat())
        return 0;
    v0 = &v12;
    v1 = <fish::proc::Pid as core::fmt::Display>::fmt;
    v4 = &g_14df548;
    v7 = 2;
    v11 = 0;
    v9 = &v0;
    v10 = 1;
    v16.map_or_else(&(char)v4);
    (char)v4.open(&v16);
    if (((char)v4 & 1))
    {
        core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(&(char)v4);
    }
    else
    {
        v3 = v6;
        v13 = 0;
        v14 = 1;
        v15 = 0;
        v18 = v3.read_to_end(&v13);
        v4 = v18;
        *((unsigned long long *)&v8) = v19;
        if (v18)
        {
            core::ptr::drop_in_place<core::result::Result<&fish::wutil::dir_iter::DirEntry,std::io::error::Error>>(&(char)v4);
        }
        else
        {
            core::ptr::drop_in_place<core::result::Result<&fish::wutil::dir_iter::DirEntry,std::io::error::Error>>(&(char)v4);
            *((int128_t *)&v8) = *((int128_t *)&v14);
            v10 = 0;
            v5 = 0;
            if (!(unsigned long long)v8.advance_by(13))
            {
                v20 = (unsigned long long)v8.next();
                if (v20)
                {
                    core::str::converts::from_utf8(&v0, v20, v19);
                    if ((int)v0 != 1)
                    {
                        ::0x12809e0::core::num::<impl u64>::from_ascii_radix(&v0, v1, *((long long *)&v2));
                        if ((char)v0 != 1)
                        {
                            v21 = v5;
                            if (!v5)
                            {
LABEL_13f34de:
                                v22 = (unsigned long long)v8.next();
                                if (v22)
                                {
                                    core::str::converts::from_utf8(&v0, v22, v19);
                                    if (!((char)v0 & 1))
                                    {
                                        ::0x12809e0::core::num::<impl u64>::from_ascii_radix(&v0, v1, *((long long *)&v2));
                                        if (!(char)v0)
                                        {
                                            v23 = v1 * 2;
                                            if ((char)__CFADD__(v1, v1))
                                                core::panicking::panic_const::panic_const_add_overflow(&g_14df568); /* do not return */
                                            v24 = v5;
                                            if (!v5)
                                            {
LABEL_13f3536:
                                                v25 = (unsigned long long)v8.next();
                                                if (v25)
                                                {
                                                    core::str::converts::from_utf8(&v0, v25, v19);
                                                    if (!((char)v0 & 1))
                                                    {
                                                        ::0x12809e0::core::num::<impl u64>::from_ascii_radix(&v0, v1, *((long long *)&v2));
                                                        if (!(char)v0)
                                                        {
                                                            if ((char)__CFADD__(v23, v1))
                                                                core::panicking::panic_const::panic_const_add_overflow(&g_14df568); /* do not return */
                                                            v26 = v5;
                                                            if (!v5)
                                                            {
LABEL_13f3592:
                                                                v27 = (unsigned long long)v8.next();
                                                                if (v27)
                                                                {
                                                                    core::str::converts::from_utf8(&v0, v27, v19);
                                                                    if (!((char)v0 & 1))
                                                                    {
                                                                        ::0x12809e0::core::num::<impl u64>::from_ascii_radix(&v0, v1, *((long long *)&v2));
                                                                        if (!(char)v0)
                                                                        {
                                                                            if (!((char)__CFADD__(v23 + v1, v1)))
                                                                            {
                                                                                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v13, 1);
                                                                                core::ptr::drop_in_place<std::fs::File>(v3);
                                                                                return v23 + v1 + v1;
                                                                            }
                                                                            core::panicking::panic_const::panic_const_add_overflow(&g_14df568); /* do not return */
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            else
                                                            {
                                                                v4 = 0;
                                                                if (!(unsigned long long)v8.advance_by(v26))
                                                                    goto LABEL_13f3592;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                v5 = 0;
                                                if (!(unsigned long long)v8.advance_by(v24))
                                                    goto LABEL_13f3536;
                                            }
                                        }
                                    }
                                }
                            }
                            else
                            {
                                v5 = 0;
                                if (!(unsigned long long)v8.advance_by(v21))
                                    goto LABEL_13f34de;
                            }
                        }
                    }
                }
            }
        }
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v13, 1);
        core::ptr::drop_in_place<std::fs::File>(v3);
    }
    return 0;
}
