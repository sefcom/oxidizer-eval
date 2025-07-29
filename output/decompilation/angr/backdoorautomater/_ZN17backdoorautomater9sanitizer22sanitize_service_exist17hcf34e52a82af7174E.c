long long backdoorautomater::sanitizer::sanitize_service_exist(struct_0 *a0)
{
    char v0;  // [bp-0x178]
    unsigned long long v1;  // [bp-0x168]
    char v2;  // [bp-0x160]
    char v3;  // [bp-0x148]
    char v4;  // [bp-0x110]
    unsigned long long v5;  // [bp-0xf0]
    char v6;  // [bp-0xe8]
    unsigned long long v7;  // [bp-0xd8]
    unsigned long long v8;  // [bp-0xd0]
    int v9;  // [bp-0xc8], Other Possible Types: unsigned long long
    uint128_t v10;  // [bp-0xc0]
    unsigned long long v14;  // rdx

    v7 = "systemctl status Error ! The service already exist on your system !\n";
    v8 = 17;
    *((int128_t *)&v9) = *((int128_t *)&(&a0->padding_0)[1]);
    alloc::str::join_generic_copy(&v2, &v7, 2, 1, 0);
    v7.new("sh-cFailed to execute commandErrorsystemctl status Error ! The service already exist on your system !\n", 2);
    v3.output(v7.arg("-cFailed to execute commandErrorsystemctl status Error ! The service already exist on your system !\n", 2).arg(&v2));
    v4.expect(&v3, &g_62a728);
    ::0x45a7f0::core::ptr::drop_in_place<std::process::Command>(&v7);
    v3.from_utf8_lossy(v5, *((long long *)&v6));
    v7.to_vec(v3.deref(), v14);
    v1 = v9;
    memcpy(&v0, &v7, 16);
    ::0x45a9c0::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v3);
    if (!v1)
    {
        v7 = &g_62a740;
        v8 = 1;
        v9 = 8;
        v10 = 0;
        core::panicking::panic_fmt(&v7, &g_62a750); /* do not return */
    }
    ::0x45a7d0::core::ptr::drop_in_place<alloc::string::String>(&v0);
    ::0x45a790::core::ptr::drop_in_place<std::process::Output>(&v4);
    return ::0x45a7d0::core::ptr::drop_in_place<alloc::string::String>(&v2);
}
