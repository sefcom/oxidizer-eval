double starship_battery::platform::linux::sysfs::fs::get(long long a0, long long a1)
{
    char v0;  // [bp-0x40], Other Possible Types: unsigned long
    unsigned long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    unsigned long long v3;  // [bp-0x28]
    char v4;  // [bp-0x20]
    char v5;  // [bp-0x1f]
    char v6;  // [bp-0x18]
    unsigned long v8;  // xmm0lq
    int v9;  // xmm0

    starship_battery::platform::linux::sysfs::fs::get_string(&v0, a1);
    if (v0 != 9223372036854775810)
    {
        v9 = *((int128_t *)&v0);
        *((int128_t *)&a0[16]) = *((int128_t *)&v2);
        *(a0) = v9;
        return (unsigned long long)v9;
    }
    if (v1 == 0x8000000000000000)
    {
        *((char *)&a0[8]) = 5;
        goto LABEL_c6f12b;
    }
    else
    {
        v4.from_str(v2, v3);
        if (v4)
        {
            *((char *)&a0[8]) = 5;
            *((unsigned long long *)a0) = 9223372036854775810;
            core::ptr::drop_in_place<core::result::Result<starship_battery::types::state::State,std::io::error::Error>>(v4, *((long long *)&v6));
        }
        else
        {
            *((char *)&a0[8]) = v5;
LABEL_c6f12b:
            *((unsigned long long *)a0) = 9223372036854775810;
        }
    }
    core::ptr::drop_in_place<core::result::Result<core::option::Option<alloc::string::String>,starship_battery::errors::Error>>(&v0);
    return v8;
}
