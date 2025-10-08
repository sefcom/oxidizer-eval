void starship::configure::toggle_configuration(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x170]
    unsigned long long v1;  // [bp-0x160]
    char *v2;  // [bp-0x158]
    unsigned long long v3;  // [bp-0x150]
    char v4;  // [bp-0x148]
    unsigned long long v5;  // [bp-0x138]
    unsigned long long v6;  // [bp-0x128]
    unsigned long long v7;  // [bp-0x120]
    char *v8;  // [bp-0x118]
    unsigned long long v9;  // [bp-0x110]
    void* v10;  // [bp-0x108]
    char v11;  // [bp-0xf8]

    starship::configure::get_configuration_edit(&v11);
    starship::configure::handle_toggle_configuration(&v0, &v11, a1, a2, a3, a4);
    if (!((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63)))
    {
        v5 = v1;
        memcpy(&v4, &v0, 16);
        v2 = &v4;
        v3 = <alloc::string::String as core::fmt::Display>::fmt;
        v6 = &g_11f29a8;
        v7 = 2;
        v10 = 0;
        v8 = &v2;
        v9 = 1;
        std::io::stdio::_eprint(&v6);
        std::process::exit(1); /* do not return */
    }
    starship::configure::write_configuration(a0, &v11);
    core::ptr::drop_in_place<versions::Chunk>(&v0);
    core::ptr::drop_in_place<toml_edit::document::DocumentMut>(&v11);
    return;
}
