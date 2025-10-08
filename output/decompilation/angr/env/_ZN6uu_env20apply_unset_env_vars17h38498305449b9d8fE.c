long long uu_env::apply_unset_env_vars(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0xc8]
    unsigned long long v1;  // [bp-0xc0]
    char *v2;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned int v3;  // [bp-0xb0], Other Possible Types: unsigned long long
    void* v4;  // [bp-0xa8]
    char *v5;  // [bp-0x90]
    unsigned long long v6;  // [bp-0x88]
    unsigned long long v7[3];  // [bp-0x80]
    unsigned long v8;  // [bp-0x78]
    unsigned long v9;  // [bp-0x70]
    unsigned long long v10;  // [bp-0x68]
    unsigned long v11;  // [bp-0x60]
    unsigned long v12;  // [bp-0x58]
    char v13;  // [bp-0x50]
    char v14;  // [bp-0x48]
    char v15;  // [bp-0x38]
    unsigned long long v17[2];  // r12
    unsigned long long v18;  // rbp
    unsigned long long v19;  // rbp
    char v20;  // al
    char v21;  // al
    unsigned long long v23;  // rax

    if (!a0->field_28)
        return 0;
    v17 = a0->field_20;
    v18 = a0->field_28 * 16;
    do
    {
        v19 = v18;
        *(v7) = 0x8000000000000000;
        v8 = v17[0];
        v9 = v17[1];
        if (!v17[1])
        {
LABEL_4753b3:
            v10 = 1;
            v11 = v17[0];
            v12 = v17[1];
            v13 = 1;
            v5 = &v10;
            v6 = <os_display::Quoted as core::fmt::Display>::fmt;
            v0 = &g_510c38;
            v1 = 2;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            v14.map_or_else(&v0);
            v3 = 125;
            memcpy(&v0, &v14, 16);
            v2 = *((long long *)&v15);
            v23 = v0.new();
            core::ptr::drop_in_place<uu_env::native_int_str::NativeStr>(0x8000000000000000, v8);
            return v23;
        }
        v20 = v7.contains(&g_41c740);
        if (v20 == 2)
            core::option::unwrap_failed(&g_510c58); /* do not return */
        if ((v20 & 1))
            goto LABEL_4753b3;
        v21 = v7.contains("=");
        if (v21 == 2)
            core::option::unwrap_failed(&g_510c70); /* do not return */
        if ((v21 & 1))
            goto LABEL_4753b3;
        std::env::remove_var(v17);
        v17 += 1;
        core::ptr::drop_in_place<uu_env::native_int_str::NativeStr>(0x8000000000000000, v8);
        v18 = v19 - 16;
    } while (v19 != 16);
    return 0;
}
