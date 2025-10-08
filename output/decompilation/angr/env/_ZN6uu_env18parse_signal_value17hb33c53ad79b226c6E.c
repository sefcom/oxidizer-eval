void uu_env::parse_signal_value(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0xb8]
    unsigned long long v1;  // [bp-0xb0]
    char *v2;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned int v3;  // [bp-0xa0], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x98]
    char v5;  // [bp-0x88]
    unsigned long long v6;  // [bp-0x80]
    unsigned long long v7;  // [bp-0x78]
    char *v8;  // [bp-0x70]
    unsigned long long v9;  // [bp-0x68]
    void* v10;  // [bp-0x60]
    unsigned long long v11;  // [bp-0x58]
    unsigned long long v12;  // [bp-0x50]
    char v13;  // [bp-0x48]
    char v14;  // [bp-0x40]
    char v15;  // [bp-0x30]
    char v17;  // al
    unsigned long long v18;  // rax
    unsigned long long v19;  // rdx

    alloc::str::<impl str>::to_uppercase(&v5, a1, a2);
    v17 = uucore::features::signals::signal_by_name_or_value(v6, v7);
    v10 = 0;
    v11 = a1;
    v12 = a2;
    v13 = 1;
    v8 = &v10;
    v9 = <os_display::Quoted as core::fmt::Display>::fmt;
    v0 = &g_510868;
    v1 = 2;
    v4 = 0;
    v2 = &v8;
    v3 = 1;
    v14.map_or_else(&v0);
    v3 = 125;
    memcpy(&v0, &v14, 16);
    v2 = *((long long *)&v15);
    v18 = v0.new();
    if ((v19 & v17))
    {
        a0->field_8 = v19;
        a0->field_0 = 0;
        core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v18, &g_5108a8);
    }
    else
    {
        a0->field_0 = v18;
        a0->field_8 = &g_5108a8;
    }
    core::ptr::drop_in_place<alloc::string::String>(&v5);
    return;
}
