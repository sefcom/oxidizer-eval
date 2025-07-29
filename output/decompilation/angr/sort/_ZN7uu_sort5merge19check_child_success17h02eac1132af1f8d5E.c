long long uu_sort::merge::check_child_success(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x70]
    unsigned int v1;  // [bp-0x6c]
    unsigned int v2;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x60]
    char v4;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned int v5;  // [bp-0x54]
    char v6;  // [bp-0x50]
    unsigned long long v7;  // [bp-0x40]
    unsigned long v9;  // rax
    char v10;  // al
    void* v11;  // rax

    (char)v4.wait(a0);
    if (*((int *)&v4) == 1)
    {
        v2 = *((long long *)&v6);
        v0 = 1;
LABEL_520154:
        core::ptr::drop_in_place<core::result::Result<core::option::Option<i32>,std::io::error::Error>>(&v0);
        v11 = 0;
    }
    else
    {
        v9 = v5;
        v10 = (unsigned int)v9 >> 8;
        v1 = !((char)v9 & 127);
        v2 = v10;
        v0 = 0;
        if (!(!!v10 && !((char)v9 & 127)))
            goto LABEL_520154;
        core::ptr::drop_in_place<core::result::Result<core::option::Option<i32>,std::io::error::Error>>(&v0);
        v0.to_vec(a1, a2);
        v7 = v3;
        memcpy(&v6, &v0, 16);
        v4 = 9223372036854775813;
        v11 = (char)v4.new();
    }
    ::0x514eb0::core::ptr::drop_in_place<std::process::Child>(a0);
    return v11;
}
