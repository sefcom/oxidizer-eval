long long starship::modules::rust::RustupSettings::from_toml_str(void* a0, unsigned long long a1, unsigned long long a2)
{
    char *v0;  // [bp-0x138]
    unsigned long long v1;  // [bp-0x130]
    unsigned long long v2;  // [bp-0x128]
    int v3;  // [bp-0x120]
    int v4;  // [bp-0x110]
    int v5;  // [bp-0x100]
    unsigned long v6;  // [bp-0xf8]
    char v7;  // [bp-0xf0], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0xe8]
    int v9;  // [bp-0xe0]
    int v10;  // [bp-0xd8]
    char v11;  // [bp-0xd0]
    char v12;  // [bp-0xc8]
    int v13;  // [bp-0xc0]
    unsigned long v14;  // [bp-0xb8]
    unsigned long long v15;  // [bp-0xb0]
    unsigned long long v16;  // [bp-0xa8]
    unsigned long long v17;  // [bp-0xa0]
    unsigned long long v18;  // [bp-0x98]
    unsigned long long v19;  // [bp-0x90]
    char v20;  // [bp-0x88], Other Possible Types: unsigned long long
    char v21;  // [bp-0x80], Other Possible Types: unsigned long long
    char *v22;  // [bp-0x78]
    char v23;  // [bp-0x70], Other Possible Types: unsigned long long
    void* v24;  // [bp-0x68]
    int v25;  // [bp-0x60]
    char v26;  // [bp-0x50]
    int v27;  // [bp-0x40]
    char v28;  // [bp-0x30]
    char v29;  // [bp-0x20]
    unsigned long long v31;  // rax
    int v32;  // xmm0
    int v33;  // xmm1
    int v34;  // xmm0
    int v35;  // xmm1
    int v36;  // xmm2

    toml::de::from_str(&v20, a1, a2);
    if (v20 == 9223372036854775809)
    {
        v31 = (unsigned long long)core::ptr::drop_in_place<core::result::Result<starship::modules::rust::RustupSettings,toml::de::error::Error>>(&v20);
        *((unsigned long long *)a0) = 9223372036854775809;
        return v31;
    }
    *((int128_t *)&v13) = *((int128_t *)&v29);
    memcpy(&v11, &v28, 16);
    v9 = v27;
    v32 = *((int128_t *)&v21);
    v33 = *((int128_t *)&v23);
    memcpy(&v7, &v26, 16);
    v5 = v25;
    v4 = v33;
    v3 = v32;
    v2 = v20;
    if ((unsigned long long)v5 != 0x8000000000000000 && (char)v7.equal(v8, "12Error in module `scala`:\nsrc/modules/scala.rs", 2))
    {
        *((unsigned long *)&a0[112]) = v14;
        *((int128_t *)&a0[96]) = *((int128_t *)&v12);
        a0[80] = v10;
        *((int128_t *)&a0[64]) = *((int128_t *)&v8);
        v34 = *((int128_t *)&v2);
        v35 = (int128_t)(&v3)[8];
        v36 = (int128_t)(&v4)[8];
        *((int128_t *)&a0[48]) = *((int128_t *)&v6);
        a0[32] = v36;
        a0[16] = v35;
        *(a0) = v34;
        return v14;
    }
    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
    {
        v0 = &(unsigned long long)v5;
        v1 = <core::option::Option<T> as core::fmt::Debug>::fmt;
        v20 = &g_11f6080;
        v21 = 2;
        v24 = 0;
        v22 = &v0;
        v23 = 1;
        v15 = "starship::modules::rustRustup rustc version is ";
        v16 = 23;
        v17 = "starship::modules::rustRustup rustc version is ";
        v18 = 23;
        v19 = log::__private_api::loc(&g_11f60a0);
        log::__private_api::log(&v20, 2, &v15);
    }
    *((unsigned long long *)a0) = 9223372036854775809;
    return (unsigned long long)core::ptr::drop_in_place<starship::modules::rust::RustupSettings>(&v2);
}
