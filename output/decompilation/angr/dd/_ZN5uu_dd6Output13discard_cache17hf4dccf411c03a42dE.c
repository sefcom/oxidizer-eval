void uu_dd::Output::discard_cache(char *a0, unsigned int a1, unsigned int a2)
{
    struct struct_2 v0[16];  // [bp-0x78]
    unsigned long long v1;  // [bp-0x68]
    struct_1 *v2;  // [bp-0x60]
    char *v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x50]
    char *v5;  // [bp-0x48]
    unsigned long long v6;  // [bp-0x40]
    unsigned long long v7;  // [bp-0x38]
    unsigned long long v8;  // [bp-0x30]
    char *v9;  // [bp-0x28]
    unsigned long long v10;  // [bp-0x20]
    void* v11;  // [bp-0x18]
    unsigned long long v13;  // rax
    struct_1 *v14;  // rdx
    unsigned long long v16;  // rdx

    v13 = (unsigned int)a0.discard_cache(a1, a2).map_err_context();
    if (v13)
    {
        *((unsigned long long *)&v0[0]) = v13;
        uucore::mods::error::set_exit_code(v14->field_58(v13));
        v1 = uucore::util_name();
        v2 = v14;
        v3 = &v1;
        v4 = <&T as core::fmt::Display>::fmt;
        v5 = &v0[0].field_0;
        v6 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v7 = &g_5deb40;
        v8 = 3;
        v11 = 0;
        v9 = &v3;
        v10 = 2;
        std::io::stdio::_eprint(&v7);
        ::0x4cbac0::core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v0, v14);
    }
    else
    {
        core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, v16);
    }
    return;
}
