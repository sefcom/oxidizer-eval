void uu_tail::follow::files::PathData::from_other_with_path(void* a0, void* a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long v0;  // [bp-0x1a0]
    char v1;  // [bp-0x190], Other Possible Types: unsigned long long
    char v2;  // [bp-0x18c]
    int v3;  // [bp-0xe0], Other Possible Types: char
    unsigned long long v4;  // [bp-0x28]
    unsigned long long v6;  // r12
    unsigned long v7;  // r14
    unsigned long v8;  // r12
    unsigned long v9;  // r14
    void* v10;  // r15
    unsigned long v11;  // r15

    v4 = v6;
    v7 = (long long)a1[200];
    v8 = (long long)a1[208];
    v0 = (long long)a1[208];
    v9 = v7;
    if (!v9)
    {
        v1.open(a2, a3);
        if (*((int *)&v1) == 1)
        {
            core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(&v1);
            v10 = 0;
        }
        else
        {
            v3.with_capacity(*((int *)&v2));
            v10 = v3.new();
        }
        v8 = &g_573408;
        v9 = v10;
    }
    v11 = v9;
    std::fs::metadata(&v3, a2, a3);
    if ((int)v3 == 2)
    {
        v1 = 2;
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v3);
    }
    else
    {
        memcpy(&v1, &v3, 176);
    }
    a0.new(v11, v8, &(char)v1, (long long)a1[184], (long long)a1[192]);
    if (!v7)
        core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, v0);
    core::ptr::drop_in_place<alloc::string::String>(a1 + 176);
    return;
}
