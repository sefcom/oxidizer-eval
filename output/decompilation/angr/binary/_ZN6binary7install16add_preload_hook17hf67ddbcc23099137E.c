long long binary::install::add_preload_hook(struct_1 *a0)
{
    unsigned int v0;  // [bp-0xac]
    unsigned long v1;  // [bp-0xa8]
    unsigned int v2;  // [bp-0xa4]
    unsigned long long v3;  // [bp-0xa0]
    char *v4;  // [bp-0x98], Other Possible Types: unsigned long long
    int v5;  // [bp-0x90], Other Possible Types: unsigned long long
    void* v6;  // [bp-0x88]
    int v7;  // [bp-0x78], Other Possible Types: char *, unsigned long long
    unsigned long long v8;  // [bp-0x78]
    unsigned int v9;  // [bp-0x78]
    unsigned int v10;  // [bp-0x78]
    unsigned long long v11;  // [bp-0x70]
    char *v12;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x60]
    unsigned long long v14;  // [bp-0x58]
    int v15;  // [bp-0x50], Other Possible Types: void*
    unsigned long long v16;  // [bp-0x48]
    void* v17;  // [bp-0x40]
    char *v18;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v19;  // [bp-0x30]
    int v20;  // [bp-0x28]
    unsigned long long v23;  // rdx
    unsigned long long v24;  // rax

    if (::0x1bcf200::core::sync::atomic::atomic_load() > 2)
    {
        *((int128_t *)&v15) = *((int128_t *)&a0->field_8);
        v18 = &(char)v15;
        v19 = <std::path::Display as core::fmt::Display>::fmt;
        v1 = &g_1ce6b08;
        v3 = 1;
        v6 = 0;
        v4 = &v18;
        v5 = 1;
        v7 = "binary::install";
        v11 = 15;
        v12 = "binary::install";
        v13 = 15;
        v14 = log::__private_api::loc(&g_1ce6b88);
        log::__private_api::log(&(char)v1, 3, &v7);
    }
    v15 = 0;
    v16 = 1;
    v17 = 0;
    (char)v1.open("/etc/ld.so.preload", 18);
    v8 = v7;
    if ((int)v1 != 1)
    {
        v9 = v2;
        v9.read_to_string(&v15).unwrap(v23);
        core::ptr::drop_in_place<std::fs::File>(v10);
        v8 = v8;
        if (!((char)v1 & 1))
            goto LABEL_1bcfbc5;
    }
    core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(&(char)v1);
LABEL_1bcfbc5:
    v24 = core::str::<impl str>::trim_end_matches(v16, v17);
    (char)v1.from_utf8_lossy(*((long long *)&a0->field_8), *((long long *)&a0[1].padding_0[7]));
    if ((char)v3.is_contained_in(v4, v24, v23))
    {
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&(char)v1);
        if (::0x1bcf200::core::sync::atomic::atomic_load() >= 3)
        {
            v1 = &g_1ce6b78;
            v3 = 1;
            v4 = 8;
            *((uint128_t *)&v5) = 0;
            v7 = "binary::install";
            v11 = 15;
            v12 = "binary::install";
            v13 = 15;
            v14 = log::__private_api::loc(&g_1ce6c18);
            log::__private_api::log(&(char)v1, 3, &v7);
        }
    }
    else
    {
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&(char)v1);
        (char)v1.create("/etc/ld.so.preload", 18);
        v0 = (char)v1.unwrap();
        core::str::<impl str>::trim_end_matches(v16, v17);
        if (v23)
        {
            *((int128_t *)&v20) = *((int128_t *)&a0->field_8);
            v18 = core::str::<impl str>::trim_end_matches(v16, v17);
            v19 = v23;
            v7 = &v20;
            v11 = <std::path::Display as core::fmt::Display>::fmt;
            v12 = &v18;
            v13 = <&T as core::fmt::Display>::fmt;
            v1 = &g_1ce6b18;
            v3 = 3;
            v6 = 0;
            v4 = &v7;
            v5 = 2;
            v0.write_fmt(&(char)v1).unwrap(&g_1ce6be8);
        }
        else
        {
            *((int128_t *)&v7) = *((int128_t *)&a0->field_8);
            v18 = &(unsigned long long)v7;
            v19 = <std::path::Display as core::fmt::Display>::fmt;
            v1 = &g_1ce6b48;
            v3 = 2;
            v6 = 0;
            v4 = &v18;
            v5 = 1;
            v0.write_fmt(&(char)v1).unwrap(&g_1ce6bd0);
        }
        if (::0x1bcf200::core::sync::atomic::atomic_load() > 2)
        {
            v1 = &g_1ce6b68;
            v3 = 1;
            v4 = 8;
            *((uint128_t *)&v5) = 0;
            v7 = "binary::install";
            v11 = 15;
            v12 = "binary::install";
            v13 = 15;
            v14 = log::__private_api::loc(&g_1ce6c00);
            log::__private_api::log(&(char)v1, 3, &v7);
        }
        core::ptr::drop_in_place<std::fs::File>(v0);
    }
    core::ptr::drop_in_place<alloc::string::String>(&v15);
    return ::0x1bce4a0::core::ptr::drop_in_place<std::path::PathBuf>(a0);
}
