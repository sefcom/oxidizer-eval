long long uu_tsort::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    char *v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x70]
    void* v5;  // [bp-0x68]
    char *v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    unsigned long long v8;  // [bp-0x48]
    char *v9;  // [bp-0x38], Other Possible Types: char, unsigned long long
    struct_2 *v10;  // [bp-0x30], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x28]
    char *v12;  // [bp-0x20]
    unsigned long long v13;  // [bp-0x18]
    unsigned long long v16;  // rax
    struct_2 *v17;  // rdx
    unsigned int v18;  // eax

    (unsigned int)uucore::disable_rust_signal_handlers().expect();
    v16 = uu_tsort::uumain::uumain(a0, a1);
    if (!v16)
        return uucore::mods::error::get_exit_code();
    v0 = v16;
    v6 = &v0;
    v7 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v1 = &g_418120;
    v2 = 1;
    v5 = 0;
    v3 = &v6;
    v4 = 1;
    v9.map_or_else(&v1);
    memcpy(&v6, &v9, 16);
    v8 = v11;
    if (!(char)v7.equal(v11, 1, 0))
    {
        v9 = uucore::util_name();
        v10 = v17;
        v12 = &v9;
        v13 = <&T as core::fmt::Display>::fmt;
        v1 = &g_4ea710;
        v2 = 2;
        v5 = 0;
        v3 = &v12;
        v4 = 1;
        std::io::stdio::_eprint(&v1);
        v9 = &v6;
        v10 = <alloc::string::String as core::fmt::Display>::fmt;
        v1 = &g_4ea730;
        v2 = 2;
        v5 = 0;
        v3 = &v9;
        v4 = 1;
        std::io::stdio::_eprint(&v1);
    }
    if ((char)v17->field_60(v0))
    {
        v9 = uucore::execution_phrase();
        v10 = v17;
        v12 = &v9;
        v13 = <&T as core::fmt::Display>::fmt;
        v1 = &g_4ea750;
        v2 = 2;
        v5 = 0;
        v3 = &v12;
        v4 = 1;
        std::io::stdio::_eprint(&v1);
    }
    v18 = v17->field_58(v0);
    core::ptr::drop_in_place<alloc::string::String>(v6, v7);
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v0, v17);
    return v18;
}
