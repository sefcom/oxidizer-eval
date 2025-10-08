double starship::modules::env_var::filter_config(long long a0, long long a1)
{
    int v0;  // [bp-0xf8], Other Possible Types: char
    unsigned long long v1;  // [bp-0xf8]
    int v2;  // [bp-0xe8], Other Possible Types: char
    int v3;  // [bp-0xd8], Other Possible Types: char
    int v4;  // [bp-0xc8], Other Possible Types: char
    char v5;  // [bp-0xb8]
    char *v6;  // [bp-0xa0]
    unsigned long long v7;  // [bp-0x98]
    char v8;  // [bp-0x90], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v9;  // [bp-0x88]
    char *v10;  // [bp-0x80], Other Possible Types: char
    unsigned long long v11;  // [bp-0x78]
    void* v12;  // [bp-0x70], Other Possible Types: char
    char v13;  // [bp-0x60]
    char v14;  // [bp-0x50]
    unsigned long long v15;  // [bp-0x40]
    unsigned long long v16;  // [bp-0x38]
    unsigned long long v17;  // [bp-0x30]
    unsigned long long v18;  // [bp-0x28]
    unsigned long long v19;  // [bp-0x20]

    if (a1[0] > 9223372036854775813)
        v0.collect(a1[1], a1[2] * 112 + a1[1]);
    else
        v1 = 0x8000000000000000;
    v8.filter(&v0);
    if (v8 == 0x8000000000000000)
    {
        v1 = 9223372036854775814;
    }
    else
    {
        memcpy(&v5, &v14, 16);
        memcpy(&v4, &v13, 16);
        memcpy(&v3, &v12, 16);
        memcpy(&v2, &v10, 16);
        memcpy(&v0, &v8, 16);
    }
    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 5)
    {
        v6 = &v0;
        v7 = <core::option::Option<T> as core::fmt::Debug>::fmt;
        v8 = &g_11f45e8;
        v9 = 1;
        v12 = 0;
        v10 = &v6;
        v11 = 1;
        v15 = "starship::modules::env_varenv_valueFiltered top-level env_var config: Error in module `erlang`:\nsrc/modules/erlang.rs";
        v16 = 26;
        v17 = "starship::modules::env_varenv_valueFiltered top-level env_var config: Error in module `erlang`:\nsrc/modules/erlang.rs";
        v18 = 26;
        v19 = log::__private_api::loc(&g_11f45f8);
        log::__private_api::log(&v8, 5, &v15);
    }
    a0[4] = *((int128_t *)&v5);
    *((void*)&a0[3]) = v4;
    *((void*)&a0[2]) = v3;
    *((void*)&a0[1]) = v2;
    *((void*)&a0[0]) = v0;
    return (unsigned long long)v0;
}
