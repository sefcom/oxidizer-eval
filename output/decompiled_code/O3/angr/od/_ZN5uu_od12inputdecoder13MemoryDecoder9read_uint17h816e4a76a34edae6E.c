long long uu_od::inputdecoder::MemoryDecoder::read_uint::h816e4a76a34edae6(struct_0 *a0, char *a1, unsigned long a2)
{
    unsigned long v0;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x40]
    unsigned long v3;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x30]
    unsigned long long v5;  // [sp-0x28]
    unsigned long long v6;  // [sp-0x20]
    void* v7;  // [sp-0x18]
    unsigned long long v9[3];  // rcx
    unsigned long long v10[3];  // rcx
    unsigned long long v12[3];  // rcx
    unsigned long long v14[3];  // rcx
    unsigned long long v16;  // rax
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rdx

    v0 = a2;
    switch (a2)
    {
    case 1:
        v9 = a0->field_0;
        if (v9[2] > a1)
        {
            v16 = a1[v9[1]];
            return v16;
        }
        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
    case 2:
        v14 = a0->field_0;
        v16 = (unsigned int)uu_od::byteorder_io::ByteOrder::read_u16::h2ab1179f74bd1e55(a0->field_18, ::0x4cfe10::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::haf3e242dfcef6f6c(a1, a1 + 2, v14[1], v14[2], &g_5414c0), v19);
        return v16;
    case 4:
        v10 = a0->field_0;
        v16 = (unsigned int)uu_od::byteorder_io::ByteOrder::read_u32::ha1d79363fec935c0(a0->field_18, ::0x4cfe10::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::haf3e242dfcef6f6c(a1, a1 + 4, v10[1], v10[2], &g_5414d8), v17);
        return v16;
    case 8:
        v12 = a0->field_0;
        return uu_od::byteorder_io::ByteOrder::read_u64::ha37470c0ef0e5e29(a0->field_18, ::0x4cfe10::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::haf3e242dfcef6f6c(a1, a1 + 8, v12[1], v12[2], &g_5414f0), v18);
    default:
        v1 = &v0;
        v2 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
        v3 = &g_541508;
        v4 = 1;
        v7 = 0;
        v5 = &v1;
        v6 = 1;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v3); /* do not return */
    }
}
