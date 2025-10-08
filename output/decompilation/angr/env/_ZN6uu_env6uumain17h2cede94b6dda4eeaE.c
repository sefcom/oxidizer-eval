long long uu_env::uumain(unsigned long long a0, unsigned int a1)
{
    unsigned long long v0;  // [bp-0x98]
    char v1[2][3];  // [bp-0x88]
    char v2[2][3];  // [bp-0x88]
    char v3[2][3];  // [bp-0x88]
    char v4[2][3];  // [bp-0x88]
    char v5;  // [bp-0x86]
    unsigned long long v6;  // [bp-0x80]
    char *v7;  // [bp-0x78]
    unsigned long long v8;  // [bp-0x70]
    void* v9;  // [bp-0x68]
    char *v10;  // [bp-0x58]
    unsigned long long v11;  // [bp-0x50]
    unsigned long long v12;  // [bp-0x48]
    char *v13;  // [bp-0x38], Other Possible Types: char, unsigned long long
    struct_2 *v14;  // [bp-0x30], Other Possible Types: unsigned long long
    unsigned long long v15;  // [bp-0x28]
    char *v16;  // [bp-0x20]
    unsigned long long v17;  // [bp-0x18]
    unsigned long long v20;  // rax
    struct_2 *v21;  // rdx
    unsigned int v22;  // eax

    (unsigned int)uucore::disable_rust_signal_handlers().expect();
    *((unsigned short *)&v4[0]) = 0;
    v5 = 2;
    v20 = (unsigned short)v4.run_env(a0, a1);
    if (!v20)
        return uucore::mods::error::get_exit_code();
    v0 = v20;
    v10 = &v0;
    v11 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    *((char **)&v4) = &g_41c170;
    v6 = 1;
    v9 = 0;
    v7 = &v10;
    v8 = 1;
    v13.map_or_else(&(unsigned short)v4);
    memcpy(&v10, &v13, 16);
    v12 = v15;
    if (!v15.equal())
    {
        v13 = uucore::util_name();
        v14 = v21;
        v16 = &v13;
        v17 = <&T as core::fmt::Display>::fmt;
        *((char **)&v2) = &g_50f960;
        v6 = 2;
        v9 = 0;
        v7 = &v16;
        v8 = 1;
        std::io::stdio::_eprint(&(unsigned short)v4);
        v13 = &v10;
        v14 = <alloc::string::String as core::fmt::Display>::fmt;
        *((char **)&v3) = &g_50f980;
        v6 = 2;
        v9 = 0;
        v7 = &v13;
        v8 = 1;
        std::io::stdio::_eprint(&(unsigned short)v4);
    }
    if ((char)v21->field_60(v0))
    {
        v13 = uucore::execution_phrase();
        v14 = v21;
        v16 = &v13;
        v17 = <&T as core::fmt::Display>::fmt;
        *((char **)&v2) = &g_50f9b0;
        v6 = 2;
        v9 = 0;
        v7 = &v16;
        v8 = 1;
        std::io::stdio::_eprint(&v1);
    }
    v22 = v21->field_58(v0);
    core::ptr::drop_in_place<alloc::string::String>(v10, <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt);
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v0, v21);
    return v22;
}
