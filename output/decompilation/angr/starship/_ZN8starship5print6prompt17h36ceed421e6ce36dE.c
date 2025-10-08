void starship::print::prompt(unsigned long long a0[17], unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x748]
    unsigned long long v1;  // [bp-0x740]
    char *v2;  // [bp-0x738]
    unsigned long long v3;  // [bp-0x730]
    unsigned long long v4;  // [bp-0x728]
    unsigned long long v5;  // [bp-0x720]
    char *v6;  // [bp-0x718]
    unsigned long long v7;  // [bp-0x710]
    void* v8;  // [bp-0x708]
    char v9;  // [bp-0x6f8]
    char v10;  // [bp-0x6e0]

    v10.new(a0, a1);
    v1 = std::io::stdio::stdout();
    v0 = v1.lock();
    starship::print::get_prompt(&v9, &v10);
    v2 = &v9;
    v3 = <alloc::string::String as core::fmt::Display>::fmt;
    v4 = &g_525500;
    v5 = 1;
    v8 = 0;
    v6 = &v2;
    v7 = 1;
    v0.write_fmt(&v4).unwrap();
    core::ptr::drop_in_place<alloc::string::String>(&v9);
    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v0);
    core::ptr::drop_in_place<starship::context::Context>(&v10);
    return;
}
