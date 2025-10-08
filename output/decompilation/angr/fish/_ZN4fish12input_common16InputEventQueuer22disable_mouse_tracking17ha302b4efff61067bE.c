long long fish::input_common::InputEventQueuer::disable_mouse_tracking(unsigned long long a0)
{
    void* v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80]
    void* v2;  // [bp-0x78]
    char v3;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x68]
    char v5;  // [bp-0x40]
    char v6;  // [bp-0x28]

    if ((char)core::sync::atomic::atomic_load(&g_15a99b0, 0))
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v5.to_flog_str(&g_15a99a0);
        v3.into_iter(&v5);
        v0.spec_extend(&v3);
        v0.push(58, &g_14db288);
        v0.push(32, &g_14db288);
        v6.to_vec("Disabling mouse tracking", 24);
        v3.into_iter(&v6);
        v0.spec_extend(&v3);
        v0.push(10, &g_14db288);
        fish::flog::flog_impl(v1, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
    }
    v4 = 5;
    v3 = 9223372036854775810;
    return a0.push_front(&v3);
}
