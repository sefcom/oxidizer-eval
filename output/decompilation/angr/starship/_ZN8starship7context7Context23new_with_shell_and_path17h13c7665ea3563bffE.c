long long starship::context::Context::new_with_shell_and_path(struct_3 *a0, struct_2 *a1, char a2, unsigned long a3, unsigned long long a4, unsigned long a5)
{
    unsigned int v0;  // [bp-0x23c]
    struct_4 *v1;  // [bp-0x238]
    struct_5 *v2;  // [bp-0x228]
    int v3;  // [bp-0x218], Other Possible Types: char, unsigned long long
    unsigned long long v4;  // [bp-0x218]
    void* v5;  // [bp-0x210], Other Possible Types: unsigned long long
    char *v6;  // [bp-0x208], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x200]
    void* v8;  // [bp-0x1f8]
    unsigned long v9;  // [bp-0x1e0]
    unsigned long long v10;  // [bp-0x1d8]
    unsigned long v11;  // [bp-0x1d0]
    int v12;  // [bp-0x1c8], Other Possible Types: char
    unsigned long long v13;  // [bp-0x1b8]
    unsigned long long v14;  // [bp-0x1b0]
    unsigned long long v15;  // [bp-0x1a8]
    unsigned long long v16;  // [bp-0x1a0]
    unsigned long long v17;  // [bp-0x198]
    unsigned long long v18;  // [bp-0x190]
    int v19;  // [bp-0x188], Other Possible Types: char
    int v20;  // [bp-0x178]
    int v21;  // [bp-0x168]
    int v22;  // [bp-0x158]
    int v23;  // [bp-0x148]
    char v24;  // [bp-0x138]
    void* v27;  // rsi
    char *v28;  // r12
    struct_0 *v29;  // rax
    unsigned long v30;  // rbp
    unsigned long v32;  // rbp
    unsigned long long v33;  // r15

    starship::context::get_config_path_os(&v3);
    v27 = 0;
    if (!((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63)))
        v27 = v5;
    v28 = &v19;
    v19.initialize(v27, v6);
    v29 = (unsigned long long)v3.drop_in_place<core::option::Option<gix_ref::FullName>>();
    v30 = &a1->field_40;
    if (a1->field_40 != 0x8000000000000000 && a1->field_50 == 1)
    {
        v29 = a1->field_48;
        if (!v29->field_10)
        {
            v29 = (unsigned long long)core::ptr::drop_in_place<alloc::borrow::Cow<[alloc::string::String]>>(v30);
            *((unsigned long long *)v30) = 0x8000000000000000;
        }
    }
    v0 = (unsigned int)v29 & 0xffffff00 | 1;
    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 5)
    {
        v9 = v30;
        v10 = <core::option::Option<T> as core::fmt::Debug>::fmt;
        v4 = &g_11f3488;
        v5 = 1;
        v8 = 0;
        v6 = &v9;
        v7 = 1;
        v14 = "starship::contextFailed to find git repo: , (trust: ";
        v15 = 17;
        v16 = "starship::contextFailed to find git repo: , (trust: ";
        v17 = 17;
        v18 = log::__private_api::loc(&g_11f3498);
        log::__private_api::log(&v4, 5, &v14);
    }
    if (a1->field_28 != 0x8000000000000000 && (char)a1->field_30.equal(a1->field_38, 1, 0))
    {
        v32 = &a1->field_28;
        core::ptr::drop_in_place<regex::error::Error>(v32);
        *((unsigned long long *)v32) = 0x8000000000000000;
    }
    v12.expand_tilde(a4);
    dunce::canonicalize(&v14, &v12);
    v6 = v13;
    v3 = v12;
    v9.unwrap_or(&v14, &v3);
    if (*((long long *)&v19) == 0x8000000000000000)
        v28 = 0;
    v24.map_or_else(v28);
    v33 = a1->field_a0;
    *((void*)((char *)&a0->field_218 + 8)) = v23;
    *((void*)((char *)&a0->field_208 + 8)) = v22;
    *((void*)((char *)&a0->field_1f8 + 8)) = v21;
    *((void*)((char *)&a0->field_1e8 + 8)) = v20;
    *((void*)&a0->padding_e0[0x100]) = v19;
    memcpy(a0, a1, 176);
    a0->field_c0 = v11;
    a0->field_b0 = *((int128_t *)&v9);
    *((uint128_t *)&(&a0->field_c0)[1]) = v1->field_0;
    *((unsigned long long *)((char *)&a0->field_c8 + 8)) = v1->field_10;
    *((unsigned int *)&a0->padding_260[184]) = 0;
    *((unsigned int *)&a0->padding_324[908]) = 0;
    *((char *)&a0->field_6c0) = a2;
    *((uint128_t *)((char *)&a0->field_228 + 8)) = v2->field_0;
    *((unsigned long long *)((char *)&a0->field_238 + 8)) = v2->field_10;
    *((unsigned long long *)&a0->field_6b8) = v33;
    a0->field_248 = 1;
    a0->field_250 = &g_11f34b0;
    memcpy(&a0->field_d8, &v24, 264);
    return a0;
}
