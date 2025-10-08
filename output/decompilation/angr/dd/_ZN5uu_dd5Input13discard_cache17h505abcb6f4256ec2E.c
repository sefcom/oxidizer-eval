void uu_dd::Input::discard_cache(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned long long v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x78]
    unsigned long long v3;  // [bp-0x70]
    unsigned long long v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x60]
    char *v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    char *v8;  // [bp-0x48]
    unsigned long long v9;  // [bp-0x40]
    unsigned long long v10;  // [bp-0x38]
    unsigned long long v11;  // [bp-0x30]
    char *v12;  // [bp-0x28]
    unsigned long long v13;  // [bp-0x20]
    void* v14;  // [bp-0x18]
    unsigned long long v17;  // rdx

    v2 = (unsigned int)a0.discard_cache(a1, a2, a3).map_err_context();
    v3 = &g_53cab0;
    if (v2)
    {
        v0 = v2;
        v1 = &g_53cab0;
        uucore::mods::error::set_exit_code((unsigned int)uucore::mods::error::UError::code());
        v4 = uucore::util_name();
        v5 = v17;
        v6 = &v4;
        v7 = <&T as core::fmt::Display>::fmt;
        v8 = &v0;
        v9 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v10 = &g_53dd50;
        v11 = 3;
        v14 = 0;
        v12 = &v6;
        v13 = 2;
        std::io::stdio::_eprint(&v10);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(&v0);
    }
    else
    {
        core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v2);
    }
    return;
}
