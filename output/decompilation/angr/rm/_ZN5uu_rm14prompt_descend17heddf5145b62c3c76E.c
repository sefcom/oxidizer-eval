long long uu_rm::prompt_descend(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x98]
    char *v2;  // [bp-0x90], Other Possible Types: unsigned long long
    int v3;  // [bp-0x88], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x80]
    unsigned long long v5;  // [bp-0x70]
    unsigned long long v6;  // [bp-0x68]
    char *v7;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x58]
    char *v9;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x48]
    char *v11;  // [bp-0x40], Other Possible Types: unsigned long long
    char v12;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax

    v9 = uucore::util_name();
    v10 = v14;
    v7 = &v9;
    v8 = <&T as core::fmt::Display>::fmt;
    v0 = &g_4ea4a0;
    v1 = 2;
    v4 = 0;
    v2 = &v7;
    v3 = 1;
    std::io::stdio::_eprint(&v0);
    v9 = 1;
    v10 = a0;
    v11 = a1;
    v12 = 1;
    v7 = &v9;
    v8 = <os_display::Quoted as core::fmt::Display>::fmt;
    v0 = &g_4ea768;
    v1 = 2;
    v4 = 0;
    v2 = &v7;
    v3 = 1;
    std::io::stdio::_eprint(&v0);
    v0 = &g_4ea630;
    v1 = 1;
    v2 = 8;
    *((uint128_t *)&v3) = 0;
    std::io::stdio::_eprint(&v0);
    v0 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
    v15 = v0.flush();
    if (!v15)
        return uucore::read_yes();
    v16 = uu_rm::prompt_file::{{closure}}(v15);
    if (v16)
    {
        v5 = v16;
        v6 = &g_4ea7a8;
        uucore::mods::error::set_exit_code((unsigned int)v16.code());
        v7 = uucore::util_name();
        v8 = v14;
        v9 = &v7;
        v10 = <&T as core::fmt::Display>::fmt;
        v11 = &v5;
        v12 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v0 = &g_4ea640;
        v1 = 3;
        v4 = 0;
        v2 = &v9;
        v3 = 2;
        std::io::stdio::_eprint(&v0);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v5, &g_4ea7a8);
    }
    return uucore::read_yes();
}
