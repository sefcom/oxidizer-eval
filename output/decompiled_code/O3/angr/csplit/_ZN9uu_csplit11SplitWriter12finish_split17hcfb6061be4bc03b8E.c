long long uu_csplit::SplitWriter::finish_split::hcfb6061be4bc03b8(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long v0;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x38]
    unsigned long v2;  // [sp-0x30], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x28]
    unsigned long long v4;  // [sp-0x20]
    unsigned long long v5;  // [sp-0x18]
    void* v6;  // [sp-0x10]
    char v8[99];  // rax

    if (a0->field_38)
        return v8;
    v8 = a0->field_20;
    if (v8[98] && !a0->field_30)
    {
        a0->field_28 = a0->field_28 - 1;
        return v8;
    }
    if (!v8[97])
    {
        v0 = &a0->field_30;
        v1 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
        v2 = &g_675b70;
        v3 = 2;
        v6 = 0;
        v4 = &v0;
        v5 = 1;
        return std::io::stdio::_print::he918bceb0c89db46(&v2, a1, a2);
    }
    return v8;
}
