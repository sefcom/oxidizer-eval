long long _ZN5uu_dd8progress10ProgUpdate14write_io_lines17h6f1e01542e89c0ffE.llvm.15503904748741807753(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [sp-0x74]
    unsigned long v1;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x68]
    unsigned long long v3;  // [sp-0x60]
    int v4;  // [sp-0x58], Other Possible Types: unsigned long long
    void* v5;  // [sp-0x50]
    unsigned long v6;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x38]
    unsigned long long v8;  // [sp-0x30]
    unsigned long long v9;  // [sp-0x28]
    void* v11;  // rax
    unsigned long long v12;  // rdx
    unsigned int v13;  // eax

    v6 = &a0->padding_0[16];
    v7 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
    v8 = &a0->padding_0[24];
    v9 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
    v1 = &g_516da8;
    v2 = 3;
    v5 = 0;
    v3 = &v6;
    v4 = 2;
    v11 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::h82787f8382d2102c(a1, &v1, a2);
    if (v11)
        return v11;
    v6 = &a0[1].padding_0[20];
    v7 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
    v8 = &a0[1].padding_0[28];
    v9 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
    v1 = &g_516dd8;
    v2 = 3;
    v5 = 0;
    v3 = &v6;
    v4 = 2;
    v11 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::h82787f8382d2102c(a1, &v1, v12);
    if (v11)
        return v11;
    v13 = a0->field_28;
    if (!v13)
        return 0;
    if (v13 != 1)
    {
        v0 = v13;
        v6 = &v0;
        v7 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4f78b68afca2dd09;
        v1 = &g_516ba8;
        v2 = 2;
        v5 = 0;
        v3 = &v6;
        v4 = 1;
    }
    else
    {
        v1 = &g_516b98;
        v2 = 1;
        v3 = 8;
        *((int128_t *)&v4) = 0;
    }
    v11 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::h82787f8382d2102c(a1, &v1, v12);
    return v11;
}
