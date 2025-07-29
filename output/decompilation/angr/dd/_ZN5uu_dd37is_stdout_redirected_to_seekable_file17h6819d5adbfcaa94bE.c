long long uu_dd::is_stdout_redirected_to_seekable_file()
{
    unsigned int v0;  // [bp-0x4c]
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    char v3;  // [bp-0x38], Other Possible Types: unsigned int
    char v4;  // [bp-0x34]
    char v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    char v7;  // [bp-0x18]
    unsigned int v9;  // ebx
    unsigned long long v10;  // rdx

    uu_dd::stdout_canonicalized(&v5);
    v3.open(v6, *((long long *)&v7));
    if (v3)
    {
        core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(&v3);
        v9 = 0;
    }
    else
    {
        v0 = *((int *)&v4);
        v1 = v0.seek(2, 0);
        v2 = v10;
        if (v1)
        {
            core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v1);
            goto LABEL_4cfe64;
        }
        else
        {
            core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v1);
            v1 = v0.seek(1, 0);
            v2 = v10;
            if (v1)
            {
                core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v1);
LABEL_4cfe64:
                v9 = 0;
            }
            else
            {
                core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v1);
                v1 = v0.rewind();
                ::0x4cc740::core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v1);
                v9 = (unsigned int)v1 & 0xffffff00 | !v1;
            }
        }
        ::0x4cbcb0::core::ptr::drop_in_place<std::fs::File>(v0);
    }
    ::0x4cbda0::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v5);
    return v9;
}
