long long uu_printf::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x78]
    char *v3;  // [bp-0x70]
    unsigned long long v4;  // [bp-0x68]
    void* v5;  // [bp-0x60]
    char *v6;  // [bp-0x50], Other Possible Types: char, unsigned long long
    struct_2 *v7;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x40]
    char *v9;  // [bp-0x38]
    unsigned long long v10;  // [bp-0x30]
    char *v11;  // [bp-0x28]
    unsigned long long v12;  // [bp-0x20]
    unsigned long long v13;  // [bp-0x18]
    unsigned long long v16;  // rax
    struct_2 *v17;  // rdx
    unsigned int v18;  // eax

    (unsigned int)uucore::disable_rust_signal_handlers().expect();
    v16 = uu_printf::uumain::uumain(a0, a1);
    if (!v16)
        return uucore::mods::error::get_exit_code();
    v0 = v16;
    v11 = &v0;
    v12 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v1 = &g_40e980;
    v2 = 1;
    v5 = 0;
    v3 = &v11;
    v4 = 1;
    v6.map_or_else(&v1);
    memcpy(&v11, &v6, 16);
    v13 = v8;
    if (!(char)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt.equal(v8, 1, 0))
    {
        v6 = uucore::util_name();
        v7 = v17;
        v9 = &v6;
        v10 = <&T as core::fmt::Display>::fmt;
        v1 = &g_514980;
        v2 = 2;
        v5 = 0;
        v3 = &v9;
        v4 = 1;
        std::io::stdio::_eprint(&v1);
        v6 = &v11;
        v7 = <alloc::string::String as core::fmt::Display>::fmt;
        v1 = &g_5149a0;
        v2 = 2;
        v5 = 0;
        v3 = &v6;
        v4 = 1;
        std::io::stdio::_eprint(&v1);
    }
    if ((char)v17->field_60(v0))
    {
        v6 = uucore::execution_phrase();
        v7 = v17;
        v9 = &v6;
        v10 = <&T as core::fmt::Display>::fmt;
        v1 = &g_5149c0;
        v2 = 2;
        v5 = 0;
        v3 = &v9;
        v4 = 1;
        std::io::stdio::_eprint(&v1);
    }
    v18 = v17->field_58(v0);
    core::ptr::drop_in_place<alloc::string::String>(&v11);
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v0, v17);
    return v18;
}
