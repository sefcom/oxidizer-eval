long long just::subcommand::Subcommand::edit(void* a0, unsigned long long a1)
{
    char v0;  // [bp-0x128]
    int v1;  // [bp-0x128]
    unsigned long long v2;  // [bp-0x118]
    char v3;  // [bp-0x110]
    unsigned int v4;  // [bp-0x110]
    unsigned int v5;  // [bp-0x10c]
    unsigned long long v6;  // [bp-0x108]
    unsigned long long v7;  // [bp-0x100]
    char v8;  // [bp-0xf8]
    unsigned long v10;  // rax

    std::env::var_os(&v8, "VISUALvimEDITOR", 6);
    v3.or_else(&v8);
    if ((char)(((0 ^ *((long long *)&v3)) & (0 ^ -(*((long long *)&v3)))) >> 63))
    {
        (char)v1.to_vec("vimEDITOR", 3);
    }
    else
    {
        v2 = v7;
        memcpy(&v0, &v3, 16);
    }
    v8.new(&(char)v1);
    v8.current_dir(a1 + 24);
    v8.arg(a1);
    v3.status(&v8);
    core::ptr::drop_in_place<std::process::Command>(&v8);
    if (v4 == 1)
    {
        *((unsigned long long *)&a0[32]) = v2;
        a0[16] = v1;
        *((char *)a0) = 19;
        *((unsigned long long *)&a0[8]) = v6;
        return v6;
    }
    v10 = v5;
    if (!(unsigned int)v10)
    {
        *((char *)a0) = 56;
        return core::ptr::drop_in_place<std::ffi::os_str::OsString>(&(char)v1);
    }
    *((unsigned long long *)&a0[24]) = v2;
    a0[8] = v1;
    *((char *)a0) = 20;
    *((unsigned int *)&a0[4]) = v10;
    return v10;
}
