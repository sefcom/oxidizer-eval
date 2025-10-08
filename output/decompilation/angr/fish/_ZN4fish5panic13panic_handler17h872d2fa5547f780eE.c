void fish::panic::panic_handler()
{
    char v0;  // [bp-0x20], Other Possible Types: unsigned long long
    char v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v4;  // rbx
    unsigned long long v5;  // rdx
    unsigned int v7;  // eax
    struct_2 *v8;  // rax

    v2 = v4;
    if (fish::nix::isatty(0))
    {
        std::env::var_os(&v0, "FISH_FAST_FAIL", 14);
        if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        {
            core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(0x8000000000000000, *((long long *)&v1));
            std::panicking::set_hook(std::panicking::take_hook().new(v5), &g_149a748);
        }
        else
        {
            core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(v0, *((long long *)&v1));
        }
    }
    v7 = core::ops::function::FnOnce::call_once();
    v8 = once_cell::sync::OnceCell<T>::get();
    if (v8)
        v8->field_8->field_28(v8->field_0);
    std::process::exit(v7); /* do not return */
}
