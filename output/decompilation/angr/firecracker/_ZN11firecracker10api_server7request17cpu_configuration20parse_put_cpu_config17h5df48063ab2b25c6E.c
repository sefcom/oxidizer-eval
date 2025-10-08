long long firecracker::api_server::request::cpu_configuration::parse_put_cpu_config(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x120], Other Possible Types: unsigned long long
    char v1;  // [bp-0x118]
    char v2;  // [bp-0x117]
    unsigned int v3;  // [bp-0x114]
    unsigned long long v4;  // [bp-0x110]
    char v5;  // [bp-0x108]
    int v6;  // [bp-0xf8]
    char v7;  // [bp-0xe8]
    unsigned long long v8;  // [bp-0xd8]
    unsigned long long v9;  // [bp-0xd0]
    char v10;  // [bp-0xc8]
    unsigned int v11;  // [bp-0xc7]
    unsigned int v12;  // [bp-0xc4]
    unsigned long long v13;  // [bp-0xc0]
    char v14;  // [bp-0xb8]
    int v15;  // [bp-0xa8]
    char v16;  // [bp-0x98]
    unsigned long long v18;  // r12
    unsigned long long v19;  // r14
    unsigned long long v20;  // rax

    v18 = 1;
    g_7c47d0.add(1);
    v0.try_from(a1, a2);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        v19 = *((long long *)&v1);
        v20 = (unsigned long long)g_7c47e0.add(1);
        a0->field_8 = 4;
        a0->field_10 = v19;
    }
    else
    {
        v11 = *((int *)&v2);
        v12 = v3;
        memcpy(&v14, &v5, 16);
        v15 = v6;
        memcpy(&v16, &v7, 16);
        v9 = v0;
        v10 = v1;
        v13 = v4;
        v8 = 23;
        v20 = a0->field_8.new_sync(&v8);
        v18 = 0;
    }
    a0->field_0 = v18;
    return v20;
}
