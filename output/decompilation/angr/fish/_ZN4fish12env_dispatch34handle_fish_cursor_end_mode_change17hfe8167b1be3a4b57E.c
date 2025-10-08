long long fish::env_dispatch::handle_fish_cursor_end_mode_change(unsigned long long a0)
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x38], Other Possible Types: unsigned long long
    int v2;  // [bp-0x30]
    unsigned long long v3;  // [bp-0x20]
    int v4;  // [bp-0x18]
    unsigned int v6;  // ebx

    v6 = 0;
    v0.getf(a0, "f", 20, 0);
    if (*((long long *)&v0))
    {
        v1.as_string(&v0);
        v4 = v2;
        v3 = v1;
        v6 = fish::env_dispatch::handle_fish_cursor_end_mode_change::{{closure}}(&v3);
    }
    core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v0);
    return fish::reader::reader_change_cursor_end_mode(v6);
}
