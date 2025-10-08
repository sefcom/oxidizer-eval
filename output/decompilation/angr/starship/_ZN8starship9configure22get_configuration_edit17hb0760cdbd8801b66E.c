long long starship::configure::get_configuration_edit(unsigned long long a0)
{
    int v0;  // [bp-0x118], Other Possible Types: void*
    unsigned long long v1;  // [bp-0x110]
    void* v2;  // [bp-0x108]
    char v3;  // [bp-0x100], Other Possible Types: unsigned long long
    void* v4;  // [bp-0xf8]
    unsigned long long v5;  // [bp-0xf0]
    int v6;  // [bp-0xe8], Other Possible Types: char
    void* v7;  // [bp-0xd8]
    char v8;  // [bp-0xd0]
    void* v11;  // rsi
    unsigned long long v12;  // rsi
    void* v13;  // rdx

    v3.get_config_path_os();
    v11 = 0;
    if (!((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63)))
        v11 = v4;
    v6.read_config_content_as_str(v11, v5);
    if (*((long long *)&v6) == 0x8000000000000000)
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v12 = 1;
        v13 = 0;
    }
    else
    {
        v0 = v6;
        v13 = v7;
        v2 = v13;
    }
    v8.from_str(v12, v13);
    a0.expect(&v8);
    core::ptr::drop_in_place<alloc::string::String>(&v0);
    v3.drop_in_place<core::option::Option<gix_ref::FullName>>();
    return a0;
}
