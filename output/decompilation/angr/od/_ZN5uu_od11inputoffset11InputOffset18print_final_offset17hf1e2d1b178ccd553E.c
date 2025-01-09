long long uu_od::inputoffset::InputOffset::print_final_offset::hf1e2d1b178ccd553(struct_0 *a0)
{
    char *v0;  // [sp-0x60]
    unsigned long long v1;  // [sp-0x58]
    unsigned long v2;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x48]
    struct struct_1 **v4;  // [sp-0x40]
    unsigned long long v5;  // [sp-0x38]
    void* v6;  // [sp-0x30]
    char v7;  // [bp-0x20]
    unsigned long long v9;  // rax

    if (a0->field_18 == 3 && !a0->field_0)
        return v9;
    uu_od::inputoffset::InputOffset::format_byte_offset::hff6b546ad3ee8d97(&v7, a0);
    v0 = &v7;
    v1 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v2 = &g_541a80;
    v3 = 2;
    v6 = 0;
    v4 = &v0;
    v5 = 1;
    std::io::stdio::_print::he918bceb0c89db46(&v2);
    v9 = ::0x4ced60::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(&v7);
    return v9;
}
