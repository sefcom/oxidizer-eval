long long backdoorautomater::sanitizer::sanitize_command_exist(struct_0 *a0)
{
    char v0;  // [bp-0x178]
    unsigned long long v1;  // [bp-0x168]
    char v2;  // [bp-0x160]
    char v3;  // [bp-0x148]
    char v4;  // [bp-0x110]
    unsigned long long v5;  // [bp-0x108]
    char v6;  // [bp-0x100]
    unsigned long long v7;  // [bp-0xd8]
    unsigned long long v8;  // [bp-0xd0]
    int v9;  // [bp-0xc8]
    unsigned long long v13;  // rdx

    v7 = "command -v sh-cFailed to execute commandErrorsystemctl status Error ! The service already exist on your system !\n";
    v8 = 11;
    *((int128_t *)&v9) = *((int128_t *)&(&a0->padding_0)[1]);
    alloc::str::join_generic_copy(&v2, &v7, 2, 1, 0);
    v7.new("sh-cFailed to execute commandErrorsystemctl status Error ! The service already exist on your system !\n", 2);
    v3.output(v7.arg("-cFailed to execute commandErrorsystemctl status Error ! The service already exist on your system !\n", 2).arg(&v2));
    v4.expect(&v3, &g_62a6e8);
    ::0x45a7f0::core::ptr::drop_in_place<std::process::Command>(&v7);
    v3.from_utf8_lossy(v5, *((long long *)&v6));
    v7.to_vec(v3.deref(), v13);
    v1 = (long long)v9;
    memcpy(&v0, &v7, 16);
    ::0x45a9c0::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v3);
    ::0x45a7d0::core::ptr::drop_in_place<alloc::string::String>(&v0);
    ::0x45a790::core::ptr::drop_in_place<std::process::Output>(&v4);
    ::0x45a7d0::core::ptr::drop_in_place<alloc::string::String>(&v2);
    return (unsigned int)v1 & 0xffffff00 | v1;
}
