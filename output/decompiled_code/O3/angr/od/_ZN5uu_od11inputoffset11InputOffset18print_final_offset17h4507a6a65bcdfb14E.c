long long uu_od::inputoffset::InputOffset::print_final_offset::h4507a6a65bcdfb14(struct_0 *a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0x60]
    char v1;  // [bp-0x58]
    unsigned long v2;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x40]
    unsigned long v4;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x30]
    unsigned long long v6;  // [sp-0x28]
    unsigned long long v7;  // [sp-0x20]
    void* v8;  // [sp-0x18]
    unsigned long long v10;  // rsi
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rax

    if (a0->field_18 == 3 && !a0->field_0)
        return v12;
    uu_od::inputoffset::InputOffset::format_byte_offset::hfeb077ef3f95fc42(&v0, a0);
    v2 = &v0;
    v3 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v4 = &g_503628;
    v5 = 2;
    v8 = 0;
    v6 = &v2;
    v7 = 1;
    v12 = std::io::stdio::_print::he918bceb0c89db46(&v4, v10, v11);
    if (*((long long *)&v0))
    {
        v12 = __rust_dealloc(*((long long *)&v1));
        return v12;
    }
    return v12;
}
