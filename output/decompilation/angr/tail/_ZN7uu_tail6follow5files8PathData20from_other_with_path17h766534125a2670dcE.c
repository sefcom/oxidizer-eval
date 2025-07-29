long long uu_tail::follow::files::PathData::from_other_with_path(void* a0, struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long v0;  // [bp-0x1a0]
    char v1;  // [bp-0x190], Other Possible Types: unsigned long long
    char v2;  // [bp-0x18c]
    char v3;  // [bp-0xe0], Other Possible Types: unsigned long long
    char v4;  // [bp-0xd8]
    unsigned long long v5;  // [bp-0x28]
    unsigned long long v7;  // r12
    unsigned long v8;  // r14
    unsigned long v9;  // r12
    unsigned long v10;  // r14
    unsigned long v13;  // r15

    v5 = v7;
    v8 = *((long long *)&a1->field_c8);
    v9 = a1->field_d0;
    v0 = a1->field_d0;
    v10 = v8;
    if (!v10)
    {
        v1.open(a2, a3);
        v9 = *((int *)&v1);
        if ((unsigned int)v9)
        {
            core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(&v1);
            v10 = 0;
        }
        else
        {
            v3.with_capacity(0x2000, *((int *)&v2));
            v9 = &g_637b60;
            v10 = v3.new();
        }
    }
    v13 = v10;
    std::fs::metadata(&v3, a2, a3);
    if ((int)v3 == 2)
    {
        v1 = 2;
        ::0x511880::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2, *((long long *)&v4));
    }
    else
    {
        memcpy(&v1, &v3, 176);
    }
    a0.new(v13, v9, &v1, a1->field_b8, a1->field_c0);
    if (!v8)
        ::0x511a60::core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn std::io::BufRead>>>(0, v0);
    ::0x511030::core::ptr::drop_in_place<alloc::string::String>(&a1->padding_0[176]);
    return a0;
}
