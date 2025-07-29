long long uu_tail::follow::watch::Observer::add_path(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, char a7)
{
    char v0;  // [bp-0x280]
    unsigned long long v1;  // [bp-0x278]
    unsigned long long v2;  // [bp-0x270]
    char v3;  // [bp-0x260], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x258]
    char v5;  // [bp-0x250]
    unsigned long long v6;  // [bp-0x188]
    unsigned long long v7;  // [bp-0x180]
    unsigned long long v8;  // [bp-0x178]
    int v9;  // [bp-0xd8], Other Possible Types: char
    unsigned long long v10;  // rax

    if (a0->field_8e == 2)
    {
        core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(a5, a6);
    }
    else
    {
        if ((char)a1.is_absolute(a2))
        {
            std::sys::pal::unix::os::split_paths::bytes_to_path(&v0, a1, a2);
        }
        else
        {
            std::env::current_dir(&v3);
            if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
            {
                v10 = v7.from();
                core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(a5, a6);
                return v10;
            }
            v6 = v3;
            v7 = v4;
            v8 = *((long long *)&v5);
            v0.join(v7, *((long long *)&v5), a1, a2);
            ::0x4f5930::core::ptr::drop_in_place<std::path::PathBuf>(&v6);
        }
        std::fs::metadata(&v3, v1, v2);
        if (v3 == 2)
            ::0x4f5eb0::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v3);
        else
            memcpy(&v9, &v4, 168);
        v6 = v3;
        memcpy(&v7, &v9, 168);
        v3.new(a5, a6, &v6, a3, a4);
        a0->padding_0[56].insert(v1, v2, &v3, a7);
        ::0x4f5930::core::ptr::drop_in_place<std::path::PathBuf>(&v0);
    }
    return 0;
}
