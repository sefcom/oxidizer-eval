long long uu_env::apply_specified_env_vars(struct_0 *a0)
{
    char *v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    unsigned long long v3;  // [bp-0x78]
    char *v4;  // [bp-0x70]
    unsigned long long v5;  // [bp-0x68]
    void* v6;  // [bp-0x60]
    unsigned long long v7;  // [bp-0x50]
    unsigned long v8;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long v9;  // [bp-0x40]
    char v10;  // [bp-0x38]
    unsigned long long v11;  // [bp-0x30]
    unsigned long long v12;  // [bp-0x28]
    unsigned long long v13;  // [bp-0x20]
    unsigned long long v14;  // [bp-0x18]
    unsigned long long v15;  // [bp-0x10]
    unsigned long long v17;  // rax
    unsigned long long v18;  // r15
    unsigned long long v19;  // r14
    unsigned long long v20;  // r13
    unsigned long long v21;  // r12
    unsigned long long v22;  // rbx
    unsigned long v23;  // rbx
    unsigned long long v24;  // r15
    unsigned long long v25;  // r15
    unsigned long long v26;  // rdx
    unsigned long long v27;  // rax

    v17 = a0->field_40;
    if (!v17)
        return v17;
    v15 = v18;
    v14 = v19;
    v13 = v20;
    v12 = v21;
    v11 = v22;
    v23 = &a0->field_38->padding_18;
    v24 = v17 * 48;
    while (true)
    {
        v25 = v24;
        if (!*((long long *)(v23 - 8)))
        {
            v7 = uucore::util_name();
            v8 = v26;
            v0 = &v7;
            v1 = <&T as core::fmt::Display>::fmt;
            v2 = &g_510ca8;
            v3 = 2;
            v6 = 0;
            v4 = &v0;
            v5 = 1;
            std::io::stdio::_eprint(&v2);
            v7 = 1;
            v8 = *((long long *)(v23 + 8));
            v9 = *((long long *)(v23 + 16));
            v10 = 1;
            v0 = &v7;
            v1 = <os_display::Quoted as core::fmt::Display>::fmt;
            v2 = &g_510cc8;
            v3 = 2;
            v6 = 0;
            v4 = &v0;
            v5 = 1;
            v27 = std::io::stdio::_eprint(&v2);
            v23 += 48;
            v24 = v25 - 48;
            if (v25 == 48)
                break;
        }
        else
        {
            v27 = std::env::set_var(v23 - 24, v23);
            v23 += 48;
            v24 = v25 - 48;
            if (v25 == 48)
                break;
        }
    }
    return v27;
}
