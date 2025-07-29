char metal_crusher::fun::put_random_shit_on_desktop()
{
    unsigned int v0;  // [bp-0x114]
    unsigned long long v1;  // [bp-0x110]
    unsigned int v2;  // [bp-0x108]
    unsigned long long v3;  // [bp-0xf8]
    unsigned long long v4;  // [bp-0xf0]
    int v5;  // [bp-0xe8]
    unsigned long long v6;  // [bp-0xe0]
    char *v7;  // [bp-0xd8]
    unsigned long long v8;  // [bp-0xd0]
    char v9;  // [bp-0xc8]
    char v10;  // [bp-0xb0], Other Possible Types: unsigned long long
    int v11;  // [bp-0xa8]
    char v12;  // [bp-0x98]
    unsigned long long v13;  // [bp-0x88]
    unsigned long long v14;  // [bp-0x78]
    unsigned long long v15;  // [bp-0x70]
    char *v16;  // [bp-0x68]
    unsigned long long v17;  // [bp-0x60]
    void* v18;  // [bp-0x58]
    char v19;  // [bp-0x48]
    unsigned int v21;  // r15d
    unsigned int v22;  // r15d
    unsigned int v24;  // r15d

    xdg_user::desktop(&v9);
    if (*((long long *)&v9) == 9223372036854775809)
        return v9.drop_in_place<core::result::Result<core::option::Option<std::path::PathBuf>,xdg_user::Error>>();
    v10.unwrap(&v9);
    if (v10 == 0x8000000000000000)
        return core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v10);
    v5 = v11;
    v4 = v10;
    v21 = 12;
    do
    {
        v22 = v21;
        v1 = rand::rngs::thread::rng();
        v0 = v1 + 16.next_u32();
        v7 = &v0;
        v8 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
        v14 = &g_996658;
        v15 = 1;
        v18 = 0;
        v16 = &v7;
        v17 = 1;
        v2.map_or_else(&v14);
        core::ptr::drop_in_place<rand::rngs::thread::ThreadRng>(&v1);
        memcpy(&v12, &v2, 16);
        v13 = v3;
        v19.join((long long)v5, v6, &v12);
        v14.create(&v19);
        v2 = v14.unwrap();
        v2.write_all("METAL CRUSHERsh-c/usr/bin/", 13).unwrap();
        std::thread::sleep(0, 0x1dcd6500);
        core::ptr::drop_in_place<std::fs::File>(v2);
        v24 = v22 - 1;
        v21 = v24;
    } while (v22 != 1);
    return ::0x7835c0::core::ptr::drop_in_place<std::path::PathBuf>(&v4);
}
