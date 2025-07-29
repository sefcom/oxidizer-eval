long long uu_sort::open(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x90]
    unsigned int v1;  // [bp-0x8c]
    unsigned long long v2;  // [bp-0x88]
    unsigned long long v3;  // [bp-0x80]
    char v4;  // [bp-0x78]
    unsigned long long v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60]
    char v7;  // [bp-0x58]
    unsigned long long v8;  // [bp-0x48]
    unsigned long long v9;  // [bp-0x40]
    unsigned long long v11;  // r14
    unsigned long long v12;  // rdx
    unsigned long long v13;  // rax

    v11 = a1.as_ref();
    if ((char)v11.equal(v12, "-", 1))
    {
        a0->field_8 = std::io::stdio::stdin().new();
        v13 = &g_66f9b8;
    }
    else
    {
        v0.open(v11, v12);
        if ((v0 & 1))
        {
            v3 = v2;
            std::sys::pal::unix::os::split_paths::bytes_to_path(&v4, v11, v12);
            v8 = v5;
            memcpy(&v7, &v4, 16);
            v9 = v3;
            v6 = 9223372036854775810;
            *((double *)&a0->field_8) = v6.new();
            a0->field_10 = &g_66f950;
            a0->field_0 = 1;
            return &g_66f950;
        }
        a0->field_8 = v1.new();
        v13 = &g_66f8d8;
    }
    a0->field_10 = v13;
    a0->field_0 = 0;
    return v13;
}
