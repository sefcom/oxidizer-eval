long long uu_join::State::new(struct_0 *a0, char a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long a5, char a6, char a7)
{
    char v0;  // [bp-0x70], Other Possible Types: unsigned long long
    void* v1;  // [bp-0x68]
    char v2;  // [bp-0x60]
    unsigned int v3;  // edx
    unsigned long long v4;  // rax
    unsigned long long v5;  // rcx

    if ((char)a2.equal(a3, "-non-UTF-8 multi-byte tabvalid string with at least one bytemulti-character tab ", 1))
    {
        v4 = a4.lock().new(v3 & 1);
        v5 = &g_4fe468;
    }
    else
    {
        v2.open(a2, a3);
        v0.map_err_context(&v2, a2, a3);
        if (v0)
        {
            a0->field_8 = v0;
            a0->field_10 = v1;
            a0->field_0 = 0x8000000000000000;
            return a0;
        }
        v2.with_capacity((int)v1);
        v4 = v2.new();
        v5 = &g_4fe3e0;
    }
    a0->field_0 = 0;
    a0->field_8 = 8;
    a0->field_10 = 0;
    a0->field_18 = a2;
    a0->field_20 = a3;
    a0->field_28 = v4;
    a0->field_30 = v5;
    a0->field_38 = a6;
    a0->field_40 = a5;
    a0->field_48 = 1;
    a0->field_50 = 0;
    a0->field_58 = a1;
    a0->field_59 = a7;
    a0->field_5a = 0;
    return a0;
}
