long long fish::input_common::update_wait_on_sequence_key_ms(unsigned long long a0)
{
    char v0;  // [bp-0xa8]
    int v1;  // [bp-0xa8]
    unsigned long long v2;  // [bp-0xa0]
    void* v3;  // [bp-0x98], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x80]
    unsigned long long v5;  // [bp-0x78]
    void* v6;  // [bp-0x70]
    char v7;  // [bp-0x68]
    char v8;  // [bp-0x50]
    unsigned long long v9;  // [bp-0x48]
    unsigned long long v10;  // [bp-0x40]
    char v11;  // [bp-0x38]
    unsigned long long v12;  // [bp-0x30]
    char v13;  // [bp-0x28]

    v7.getf_unless_empty(a0, "f", 26, 0);
    if (!*((long long *)&v7))
    {
        core::sync::atomic::atomic_store(&_ZN4fish12input_common23WAIT_ON_SEQUENCE_KEY_MS17hdedced877705b55dE, -1, 0);
        return core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v7);
    }
    v8.as_string(&v7);
    fish::wutil::wcstoi::fish_wcstol(&v11, v9, v10);
    if (v11 != 1 && (char)v12.contains())
    {
        v12 >> 63.unwrap(&g_14db020);
        core::sync::atomic::atomic_store(&_ZN4fish12input_common23WAIT_ON_SEQUENCE_KEY_MS17hdedced877705b55dE, v12, 0);
    }
    else
    {
        v4 = 0;
        v5 = 4;
        v6 = 0;
        v0 = 1;
        v2 = v9;
        v3 = v10;
        fish_printf::printf_impl::sprintf_locale(&v13, &v4, "ignoring fish_sequence_key_delay_ms: value '%ls' is not an integer or is < 10 or >= 5000 ms\nassertion failed: key.map_or(true, |key| key.codepoint != key::Invalid)Still blocked on response from terminal, deferring key eventReceived interrupt key, giving up", 92, &v0, 1);
        v13.unwrap(&g_14db038);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v0);
        v3 = v6;
        *((int128_t *)&v1) = *((int128_t *)&v4);
        fish::wutil::wwrite_to_fd(v2, v6, 2);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
    }
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v8);
    return core::ptr::drop_in_place<fish::env::var::EnvVar>(&v7);
}
