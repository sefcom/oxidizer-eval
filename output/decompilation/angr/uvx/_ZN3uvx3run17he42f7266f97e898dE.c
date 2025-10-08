long long uvx::run(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x158]
    char v1;  // [bp-0x150]
    unsigned long long v2;  // [bp-0x148]
    unsigned long long v3;  // [bp-0x140]
    int v4;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x130]
    char v6;  // [bp-0x128], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x118]
    unsigned long long v8;  // [bp-0x110]
    unsigned long long v9;  // [bp-0x108]
    char v10;  // [bp-0x100]
    unsigned long long v12;  // rbx
    unsigned long long v13;  // rax
    unsigned long long v15;  // rdx

    std::env::current_exe(&(char)v8);
    v12 = v9;
    if ((char)(((0 ^ v8) & (0 ^ -(v8))) >> 63))
    {
        a0->field_8 = v12;
        a0->field_0 = 1;
        return -(v8);
    }
    v13 = v12.parent(*((long long *)&v10));
    if (v13)
    {
        uvx::get_uv_path(&(char)v8, v13, v15, uvx::get_uvx_suffix(v12, *((long long *)&v10)), v15);
        if (v8 == 0x8000000000000000)
        {
            a0->field_8 = v9;
            a0->field_0 = 1;
        }
        else
        {
            v0 = *((long long *)&v10);
            std::env::args_os(&(char)v8);
            memcpy(&v6, &v10, 16);
            *((int128_t *)&v4) = *((int128_t *)&v8);
            v7 = 1;
            (char)v8.chain(&(char)v4);
            v1.collect(&(char)v8);
            v4 = v8;
            v5 = v9;
            v6 = v0;
            (char)v8.new(&v4);
            (char)v8.args(v2, v3);
            a0->field_8 = uvx::exec_spawn(&(char)v8);
            a0->field_0 = 1;
            core::ptr::drop_in_place<std::process::Command>(&(char)v8);
            core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v1);
        }
    }
    else
    {
        a0->field_8 = 0.new("Could not determine the location of the `uvx` binaryerror: ", 52);
        a0->field_0 = 1;
    }
    return (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>(v8, v12);
}
