void fish::wutil::gettext::initialize_gettext()
{
    char v0;  // [bp-0xd0], Other Possible Types: unsigned long long
    char *v1;  // [bp-0xc8]
    unsigned long long v2;  // [bp-0xc0]
    int v3;  // [bp-0xb8], Other Possible Types: char
    char v4;  // [bp-0xa0]

    v4.new();
    std::env::var_os(&v0, "LANGUAGEf", 8);
    if (!((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63)))
    {
        fish::common::str2wcstring(&v3, v1, v2);
        v4.set_one("L", 8, 4, &v3);
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(v0, v1);
    }
    std::env::var_os(&v0, "LC_ALLLC_MESSAGESsrc/wutil/hex_float.rssrc/wutil/wcstod.rs", 6);
    if (v0 != 0x8000000000000000)
    {
        fish::common::str2wcstring(&v3, v1, v2);
        v4.set_one("L", 6, 4, &v3);
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(v0, v1);
    }
    std::env::var_os(&v0, "LC_MESSAGESsrc/wutil/hex_float.rssrc/wutil/wcstod.rs", 11);
    if (v0 != 0x8000000000000000)
    {
        fish::common::str2wcstring(&v3, v1, v2);
        v4.set_one("L", 11, 4, &v3);
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(v0, v1);
    }
    std::env::var_os(&v0, "LANGmathtruePATHYankkMSGsmsckentsnlqkundkendkRESmsgrkNXTkprtkrescwin.", 4);
    if (v0 != 0x8000000000000000)
    {
        fish::common::str2wcstring(&v3, v1, v2);
        v4.set_one("L", 4, 4, &v3);
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(v0, v1);
    }
    fish::wutil::gettext::gettext_impl::update_locale_from_env(&v4);
    core::ptr::drop_in_place<fish::env::environment::EnvStack>(&v4);
    return;
}
