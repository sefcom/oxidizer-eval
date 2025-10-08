long long starship::modules::kubernetes::deprecated::get_alias(struct_0 *a0, struct_1 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x110]
    int v1;  // [bp-0x108]
    unsigned long long v2;  // [bp-0x100]
    char *v3;  // [bp-0xf8]
    char *v4;  // [bp-0xf0]
    struct_1 *v5;  // [bp-0xe8]
    char *v6;  // [bp-0xe0]
    char v7;  // [bp-0xd8], Other Possible Types: unsigned long long
    char v8;  // [bp-0xd0], Other Possible Types: unsigned long long
    char *v9;  // [bp-0xc8]
    unsigned long long v10;  // [bp-0xc0]
    void* v11;  // [bp-0xb8]
    char *v12;  // [bp-0xa8], Other Possible Types: char
    char v13;  // [bp-0xa0], Other Possible Types: unsigned long long
    char *v14;  // [bp-0x98]
    unsigned long long v15;  // [bp-0x90]
    char *v16;  // [bp-0x88]
    unsigned long long v17;  // [bp-0x80]
    char *v18;  // [bp-0x78]
    unsigned long long v19;  // [bp-0x70]
    int v20;  // [bp-0x68]
    unsigned long long v21;  // [bp-0x58]
    unsigned long long v22;  // [bp-0x50]
    unsigned long long v23;  // [bp-0x48]
    unsigned long long v24;  // [bp-0x40]
    unsigned long long v25;  // [bp-0x38]
    unsigned long long v26;  // [bp-0x30]
    unsigned long long v27;  // [bp-0x28]
    unsigned long long v29[5];  // rax
    int v30;  // xmm0
    unsigned long long v31;  // rax

    v21 = a3;
    v22 = a4;
    v29 = a2.get_inner(a1->field_0[1], a1->field_8);
    if (v29)
    {
        v12.to_vec(v29[3], v29[4]);
        v30 = *((int128_t *)&v13);
    }
    else
    {
        v12.iter(a2);
        v7.try_fold(&v12, a1);
        if ((char)(((0 ^ v7) & (0 ^ -(v7))) >> 63))
        {
            core::ptr::drop_in_place<versions::Chunk>(&v7);
            v31 = a1->field_8;
            a0->field_10 = v31;
            *((unsigned long long [2])&a0->field_0) = a1->field_0;
            return v31;
        }
        v30 = *((int128_t *)&v8);
    }
    v20 = v30;
    v0 = v7;
    v1 = v20;
    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
    {
        v3 = &v21;
        v4 = &v21;
        v5 = a1;
        v6 = &v0;
        v12 = &v3;
        v13 = <&T as core::fmt::Display>::fmt;
        v14 = &v4;
        v15 = <&T as core::fmt::Display>::fmt;
        v16 = &v5;
        v17 = <&T as core::fmt::Display>::fmt;
        v18 = &v6;
        v19 = <&T as core::fmt::Display>::fmt;
        v7 = &g_11f5280;
        v8 = 5;
        v11 = 0;
        v9 = &v12;
        v10 = 4;
        v23 = "starship::modules::kubernetes::deprecated0.0.0.0:0192.0.2.0:80NetworkUnreachableunable to determine local ipv4 address: Error in module `localip`:\nsrc/modules/localip.rs";
        v24 = 41;
        v25 = "starship::modules::kubernetes::deprecated0.0.0.0:0192.0.2.0:80NetworkUnreachableunable to determine local ipv4 address: Error in module `localip`:\nsrc/modules/localip.rs";
        v26 = 41;
        v27 = log::__private_api::loc(&g_11f52d0);
        log::__private_api::log(&v7, 2, &v23);
    }
    a0->field_10 = v2;
    a0->field_0 = *((int128_t *)&v0);
    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(a1);
}
