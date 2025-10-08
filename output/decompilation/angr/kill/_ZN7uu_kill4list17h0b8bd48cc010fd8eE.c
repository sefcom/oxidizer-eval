long long uu_kill::list(unsigned long long a0[3])
{
    unsigned long long v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x98]
    unsigned long long v2;  // [bp-0x90]
    unsigned long long v3;  // [bp-0x88]
    char *v4;  // [bp-0x80]
    unsigned long long v5;  // [bp-0x78]
    char *v6;  // [bp-0x70]
    unsigned long long v7;  // [bp-0x68]
    unsigned long long v8;  // [bp-0x60]
    unsigned long long v9;  // [bp-0x58]
    char *v10;  // [bp-0x50]
    unsigned long long v11;  // [bp-0x48]
    void* v12;  // [bp-0x40]
    unsigned long long v14;  // r12
    void* v15;  // r13
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    unsigned long long v19;  // rdx
    unsigned long long v20;  // rax

    if (!a0[2])
        return uu_kill::print_signals();
    v14 = a0[2] * 24;
    v15 = 0;
    while (true)
    {
        v16 = uu_kill::print_signal(*((long long *)(8 + a0[1] + (char *)v15)), *((long long *)(16 + a0[1] + (char *)v15)));
        if (!v16)
        {
            v17 = (unsigned long long)core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, &g_4e76b0);
            v15 += 24;
            if (v14 == v15)
                return v17;
        }
        else
        {
            v0 = v16;
            v1 = &g_4e76b0;
            uucore::mods::error::set_exit_code((unsigned int)v16.code());
            v2 = uucore::util_name();
            v3 = v19;
            v4 = &v2;
            v5 = <&T as core::fmt::Display>::fmt;
            v6 = &v0;
            v7 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v8 = &g_4e7718;
            v9 = 3;
            v12 = 0;
            v10 = &v4;
            v11 = 2;
            std::io::stdio::_eprint(&v8);
            v20 = (unsigned long long)core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v0, &g_4e76b0);
            v15 += 24;
            if (v14 == v15)
                return v20;
        }
    }
}
