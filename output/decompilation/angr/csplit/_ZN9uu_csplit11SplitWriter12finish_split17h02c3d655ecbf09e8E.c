long long uu_csplit::SplitWriter::finish_split(struct_0 *a0)
{
    unsigned long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    unsigned long long v3;  // [bp-0x28]
    char *v4;  // [bp-0x20]
    unsigned long long v5;  // [bp-0x18]
    void* v6;  // [bp-0x10]
    unsigned long v8;  // rax
    char v9[99];  // rax

    if (a0->field_38)
        return v8;
    v9 = a0->field_20;
    if (v9[98] == 1 && !a0->field_30)
    {
        a0->field_28 = a0->field_28 - 1;
        return v9;
    }
    if (!v9[97])
    {
        v0 = &a0->field_30;
        v1 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v2 = &g_642c88;
        v3 = 2;
        v6 = 0;
        v4 = &v0;
        v5 = 1;
        return std::io::stdio::_print(&v2);
    }
    return v9;
}
