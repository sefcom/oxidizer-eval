int starship::context::Context::exec_cmd(unsigned long long *a0, struct_0 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v0;  // [bp-0x220]
    unsigned long long v1;  // [bp-0x210]
    char *v2;  // [bp-0x200]
    unsigned long long v3;  // [bp-0x1f8]
    char *v4;  // [bp-0x1f0]
    unsigned long long v5;  // [bp-0x1e8]
    unsigned long long v6;  // [bp-0x1e0]
    unsigned long long v7;  // [bp-0x1d8]
    unsigned long long v8;  // [bp-0x1d0]
    unsigned long long v9;  // [bp-0x1c8]
    unsigned long long v10;  // [bp-0x1c0]
    unsigned long long v11;  // [bp-0x100]
    unsigned long long v12;  // [bp-0xf8]
    char *v13;  // [bp-0xf0]
    unsigned long long v14;  // [bp-0xe8]
    void* v15;  // [bp-0xe0]
    unsigned long long v17;  // 4096
    unsigned int v19;  // eax

    v0 = a2;
    v1 = a4;
    v17 = a2;
    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 5)
    {
        v2 = &v0;
        v3 = <&T as core::fmt::Debug>::fmt;
        v4 = &v1;
        v5 = <&T as core::fmt::Debug>::fmt;
        v11 = &g_11f3570;
        v12 = 3;
        v15 = 0;
        v13 = &v2;
        v14 = 2;
        v6 = "starship::contextFailed to find git repo: , (trust: ";
        v7 = 17;
        v8 = "starship::contextFailed to find git repo: , (trust: ";
        v9 = 17;
        v10 = log::__private_api::loc(&g_11f35a0);
        log::__private_api::log(&v11, 5, &v6);
        v17 = v0;
    }
    starship::utils::create_command(&v11, v17, a3);
    if (!((char)(((0 ^ v11) & (0 ^ -(v11))) >> 63)))
    {
        memcpy(&v7, &v12, 216);
        v6 = v11;
        v6.args(v1, a5);
        v6.current_dir(&a1->padding_0[176]);
        starship::utils::exec_timeout(a0, &v6, (unsigned int)((a1->field_1d8 >> 3) / 125), (unsigned int)(a1->field_1d8 - (unsigned int)((a1->field_1d8 >> 3) / 125) * 1000) * 1000000);
        return core::ptr::drop_in_place<std::process::Command>(&v6);
    }
    v19 = core::ptr::drop_in_place<core::result::Result<std::process::Command,std::io::error::Error>>(&v11);
    *(a0) = 0x8000000000000000;
    return v19;
}
