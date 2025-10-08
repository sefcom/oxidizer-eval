long long uu_dd::is_stdout_redirected_to_seekable_file()
{
    unsigned int v0;  // [bp-0x54]
    unsigned long long v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    char v3;  // [bp-0x40], Other Possible Types: unsigned int
    char v4;  // [bp-0x3c]
    char v5;  // [bp-0x30], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x28]
    char v7;  // [bp-0x20]
    unsigned int v9;  // ebp
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
        v1 = v0.stream_position();
        v2 = v10;
        if (v1)
        {
            core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v1);
            goto LABEL_491f42;
        }
        else
        {
            core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v1);
            v1 = v0.seek(1, 0);
            v2 = v10;
            if (v1)
            {
                core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v1);
LABEL_491f42:
                v9 = 0;
            }
            else
            {
                core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v1);
                v1 = v0.rewind();
                core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v1);
                v9 = v3 & 0xffffff00 | !v1;
            }
        }
        core::ptr::drop_in_place<std::fs::File>(v0);
    }
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(v5, v6);
    return v9;
}
