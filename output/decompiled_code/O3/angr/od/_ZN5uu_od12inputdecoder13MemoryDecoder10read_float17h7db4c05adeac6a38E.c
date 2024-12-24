long long uu_od::inputdecoder::MemoryDecoder::read_float::h7db4c05adeac6a38(struct_0 *a0, unsigned long long a1, unsigned long a2)
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
    unsigned long long v11[3];  // rcx
    unsigned long long v13[3];  // rcx
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rdi
    unsigned long long v17;  // rdi
    unsigned long long v18;  // rsi
    unsigned long long v19;  // rdx
    unsigned long long v20;  // rdx

    v0 = a2;
    switch (a2)
    {
    case 2:
        v9 = a0->field_0;
        v16 = (unsigned int)uu_od::byteorder_io::ByteOrder::read_u16::h2ab1179f74bd1e55(a0->field_18, ::0x4cfe10::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::haf3e242dfcef6f6c(a1, a1 + 2, v9[1], v9[2], &g_541530), v15);
        if (!(char)::0x4cfe50::std_detect::detect::cache::test::h15354216764ae092(v17, v18, v15))
            return ::0x4d0090::half::binary16::arch::f16_to_f64_fallback::ha9f2f3e84aeb44fd(v16);
        ::0x4d0160::half::binary16::arch::x86::f16_to_f32_x86_f16c::hc415930ff6077996(v16); /* do not return */
    case 4:
        v11 = a0->field_0;
        return uu_od::byteorder_io::ByteOrder::read_f32::h096f1cf2e606e68f(a0->field_18, ::0x4cfe10::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::haf3e242dfcef6f6c(a1, a1 + 4, v11[1], v11[2], &g_541548), v20);
    case 8:
        v13 = a0->field_0;
        return uu_od::byteorder_io::ByteOrder::read_f64::haa4c03e0ddb7e769(a0->field_18, ::0x4cfe10::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::haf3e242dfcef6f6c(a1, a1 + 8, v13[1], v13[2], &g_541560), v19);
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
