long long uu_basenc::uumain(unsigned long long a0, unsigned long long a1)
{
    struct struct_0 v0[16];  // [bp-0xa8]
    unsigned long long v1;  // [bp-0x98]
    unsigned long long v2;  // [bp-0x90]
    char *v3;  // [bp-0x88]
    unsigned long long v4;  // [bp-0x80]
    void* v5;  // [bp-0x78]
    char *v6;  // [bp-0x68], Other Possible Types: unsigned long long
    struct struct_1 *v7[13];  // [bp-0x60], Other Possible Types: unsigned long long
    char *v8;  // [bp-0x58]
    unsigned long long v9;  // [bp-0x50]
    char *v10;  // [bp-0x48]
    unsigned long long v11;  // [bp-0x40]
    unsigned long long v12;  // [bp-0x38]
    char v13;  // [bp-0x28]
    char v14;  // [bp-0x18]
    unsigned long long v17;  // rax
    struct struct_1 *v18[13];  // rdx
    unsigned int v19;  // eax

    (unsigned int)uucore::disable_rust_signal_handlers().expect();
    v17 = uu_basenc::uumain::uumain(a0, a1);
    if (!v17)
        return uucore::mods::error::get_exit_code();
    *((unsigned long long *)&v0[0]) = v17;
    v10 = &v0[0].field_0;
    v11 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v1 = &g_415d10;
    v2 = 1;
    v5 = 0;
    v3 = &v10;
    v4 = 1;
    v13.map_or_else(&v1);
    memcpy(&v10, &v13, 16);
    v12 = *((long long *)&v14);
    if (!(char)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt.equal(*((long long *)&v14), 1, 0))
    {
        v6 = uucore::util_name();
        v7[0] = &v18[0];
        v8 = &v6;
        v9 = <&T as core::fmt::Display>::fmt;
        v1 = &g_5a74f0;
        v2 = 2;
        v5 = 0;
        v3 = &v8;
        v4 = 1;
        std::io::stdio::_eprint(&v1);
        v6 = &v10;
        v7 = <alloc::string::String as core::fmt::Display>::fmt;
        v1 = &g_5a7510;
        v2 = 2;
        v5 = 0;
        v3 = &v6;
        v4 = 1;
        std::io::stdio::_eprint(&v1);
    }
    if ((char)v18[12](v0))
    {
        v6 = uucore::execution_phrase();
        v7[0] = &v18[0];
        v8 = &v6;
        v9 = <&T as core::fmt::Display>::fmt;
        v1 = &g_5a7530;
        v2 = 2;
        v5 = 0;
        v3 = &v8;
        v4 = 1;
        std::io::stdio::_eprint(&v1);
    }
    v19 = v18[11](v0);
    ::0x4ac3a0::core::ptr::drop_in_place<alloc::string::String>(&v10);
    ::0x4ac210::core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v0, v18);
    return v19;
}
