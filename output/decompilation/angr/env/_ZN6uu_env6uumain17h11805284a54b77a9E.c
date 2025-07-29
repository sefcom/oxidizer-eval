long long uu_env::uumain(unsigned long long a0, unsigned int a1)
{
    struct struct_1 v0[16];  // [bp-0xa8]
    char v1[2][3];  // [bp-0x98]
    char v2[2][3];  // [bp-0x98]
    char v3[2][3];  // [bp-0x98]
    char v4[2][3];  // [bp-0x98]
    char v5;  // [bp-0x96]
    unsigned long long v6;  // [bp-0x90]
    char *v7;  // [bp-0x88]
    unsigned long long v8;  // [bp-0x80]
    void* v9;  // [bp-0x78]
    char *v10;  // [bp-0x68], Other Possible Types: unsigned long long
    struct struct_0 *v11[13];  // [bp-0x60], Other Possible Types: unsigned long long
    char *v12;  // [bp-0x58]
    unsigned long long v13;  // [bp-0x50]
    char *v14;  // [bp-0x48]
    unsigned long long v15;  // [bp-0x40]
    unsigned long long v16;  // [bp-0x38]
    char v17;  // [bp-0x28]
    char v18;  // [bp-0x18]
    unsigned long long v21;  // rax
    struct struct_0 *v22[13];  // rdx
    unsigned int v23;  // eax

    (unsigned int)uucore::disable_rust_signal_handlers().expect();
    *((unsigned short *)&v4[0]) = 0;
    v5 = 2;
    v21 = (unsigned short)v4.run_env(a0, a1);
    if (!v21)
        return (unsigned int)uucore::mods::error::get_exit_code();
    *((unsigned long long *)&v0[0]) = v21;
    v14 = &v0[0].field_0;
    v15 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    *((char **)&v4) = &g_432480;
    v6 = 1;
    v9 = 0;
    v7 = &v14;
    v8 = 1;
    v17.map_or_else(&(unsigned short)v4);
    memcpy(&v14, &v17, 16);
    v16 = *((long long *)&v18);
    if (!(char)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt.equal(*((long long *)&v18), 1, 0))
    {
        v10 = uucore::util_name();
        v11[0] = &v22[0];
        v12 = &v10;
        v13 = <&T as core::fmt::Display>::fmt;
        *((char **)&v2) = &g_5a96d0;
        v6 = 2;
        v9 = 0;
        v7 = &v12;
        v8 = 1;
        std::io::stdio::_eprint(&(unsigned short)v4);
        v10 = &v14;
        v11 = <alloc::string::String as core::fmt::Display>::fmt;
        *((char **)&v3) = &g_5a96f0;
        v6 = 2;
        v9 = 0;
        v7 = &v10;
        v8 = 1;
        std::io::stdio::_eprint(&(unsigned short)v4);
    }
    if ((char)v22[12](v0))
    {
        v10 = uucore::execution_phrase();
        v11[0] = &v22[0];
        v12 = &v10;
        v13 = <&T as core::fmt::Display>::fmt;
        *((char **)&v2) = &g_5a9710;
        v6 = 2;
        v9 = 0;
        v7 = &v12;
        v8 = 1;
        std::io::stdio::_eprint(&v1);
    }
    v23 = v22[11](v0);
    ::0x4b0b70::core::ptr::drop_in_place<alloc::string::String>(&v14);
    ::0x4b09b0::core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v0, v22);
    return v23;
}
