long long uu_mkdir::exec(uint128_t a0[4], unsigned long long a1)
{
    struct struct_0 v0[16];  // [bp-0x108]
    int v1;  // [bp-0xf8]
    unsigned long long v2;  // [bp-0xf0]
    char *v3;  // [bp-0xe8]
    unsigned long long v4;  // [bp-0xd8]
    struct_2 *v5;  // [bp-0xd0]
    unsigned long long v6;  // [bp-0xc0]
    char *v7;  // [bp-0xb8]
    unsigned long long v8;  // [bp-0xb0]
    void* v9;  // [bp-0xa8]
    char *v10;  // [bp-0x98]
    unsigned long long v11;  // [bp-0x90]
    char *v12;  // [bp-0x88]
    unsigned long long v13;  // [bp-0x80]
    int v14;  // [bp-0x78]
    int v15;  // [bp-0x68]
    int v16;  // [bp-0x58]
    int v17;  // [bp-0x48]
    unsigned long long v19[3];  // rax
    unsigned long long v20;  // rax
    struct_2 *v21;  // rdx

    *((uint128_t *)&v17) = a0[3];
    *((uint128_t *)&v16) = a0[2];
    *((uint128_t *)&v15) = a0[1];
    *((uint128_t *)&v14) = a0[0];
    if (!v14.next())
        return 0;
    do
    {
        v6.to_owned(v19[1], v19[2]);
        v3 = v7;
        *((int128_t *)&v1) = *((int128_t *)&v6);
        v20 = uu_mkdir::mkdir(v2, v7, a1);
        if (!v20)
        {
            core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, v21);
        }
        else
        {
            *((unsigned long long *)&v0[0]) = v20;
            uucore::mods::error::set_exit_code(v21->field_58(v20));
            v4 = uucore::util_name();
            v5 = v21;
            v10 = &v4;
            v11 = <&T as core::fmt::Display>::fmt;
            v12 = &v0[0].field_0;
            v13 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v6 = &g_57f498;
            v6 = 3;
            v9 = 0;
            v7 = &v10;
            v8 = 2;
            std::io::stdio::_eprint(&v6);
            ::0x4a0160::core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v0, v21);
        }
        core::ptr::drop_in_place<std::path::PathBuf>(&(char)v1);
        v19 = v14.next();
    } while (v19);
    return 0;
}
