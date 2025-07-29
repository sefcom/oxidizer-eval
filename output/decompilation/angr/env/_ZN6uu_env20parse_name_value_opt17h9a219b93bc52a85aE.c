void uu_env::parse_name_value_opt(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x98]
    unsigned long long v2;  // [bp-0x90]
    int v3;  // [bp-0x88], Other Possible Types: char
    unsigned long long v4;  // [bp-0x78]
    int v5;  // [bp-0x70]
    unsigned long long v6;  // [bp-0x60]
    int v7;  // [bp-0x58]
    unsigned long long v8;  // [bp-0x48]
    int v9;  // [bp-0x40]
    unsigned long long v10;  // [bp-0x30]
    void* v12;  // rax

    v0 = 0x8000000000000000;
    v1 = a2;
    v2 = a3;
    v3.split_once(&v0, "=");
    if (*((long long *)&v3) == 9223372036854775809)
    {
        v12 = uu_env::parse_program_opt(a1, a2, a3);
        if (v12)
        {
            *((char **)&a0->field_8) = &g_5a9928;
        }
        else
        {
            a0->field_8 = 1;
LABEL_4b4639:
            v12 = 0;
        }
    }
    else
    {
        v8 = v4;
        v7 = v3;
        v9 = v5;
        v10 = v6;
        a1 + 48.push(&v7);
        a0->field_8 = 0;
        goto LABEL_4b4639;
    }
    a0->field_0 = v12;
    core::ptr::drop_in_place<uu_env::native_int_str::NativeStr>(&v0);
    return;
}
