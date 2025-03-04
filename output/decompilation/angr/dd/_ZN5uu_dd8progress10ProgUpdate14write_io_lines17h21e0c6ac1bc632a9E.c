long long uu_dd::progress::ProgUpdate::write_io_lines::h21e0c6ac1bc632a9(struct_1 *a0, unsigned long long a1)
{
    unsigned int v0;  // [sp-0x54]
    unsigned long v1;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x48]
    struct struct_0 **v3;  // [sp-0x40], Other Possible Types: unsigned long long
    int v4;  // [sp-0x38], Other Possible Types: unsigned long long
    void* v5;  // [sp-0x30]
    char *v6;  // [sp-0x20]
    unsigned long long v7;  // [sp-0x18]
    void* v9;  // rax
    unsigned int v10;  // eax

    v9 = uu_dd::progress::ReadStat::report::hd53d51fed1f91d80(&a0->padding_0[16], a1);
    if (v9)
        return v9;
    v9 = uu_dd::progress::WriteStat::report::h421ce38315c3961a(&a0[1].padding_0[4], a1);
    if (v9)
        return v9;
    v10 = a0->field_28;
    if (!v10)
        return 0;
    if (v10 != 1)
    {
        v0 = v10;
        v6 = &v0;
        v7 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4f78b68afca2dd09;
        v1 = &g_5622e8;
        v2 = 2;
        v5 = 0;
        v3 = &v6;
        v4 = 1;
    }
    else
    {
        v1 = &g_5622d8;
        v2 = 1;
        v3 = 8;
        *((uint128_t *)&v4) = 0;
    }
    v9 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::h82787f8382d2102c(a1, &v1);
    return v9;
}
