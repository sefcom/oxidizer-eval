long long bat::app::env_no_color()
{
    char v0;  // [bp-0x20], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x18]
    char v2;  // [bp-0x10]
    unsigned int v4;  // ebx

    std::env::var_os(&v0, "NO_COLOR*.vbprojCOMPOSER", 8);
    if (!((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63)))
    {
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(v0, v1);
        return v4 & 0xffffff00 | *((long long *)&v2);
    }
    return 0;
}
