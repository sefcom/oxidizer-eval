long long uu_od::inputdecoder::MemoryDecoder::read_float::hb631d528abcb6236(struct_1 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long v0;  // [sp-0x50]
    char *v1;  // [sp-0x48]
    unsigned long long v2;  // [sp-0x40]
    unsigned long v3;  // [sp-0x38]
    unsigned long long v4;  // [sp-0x30]
    struct struct_0 **v5;  // [sp-0x28]
    unsigned long long v6;  // [sp-0x20]
    void* v7;  // [sp-0x18]
    unsigned long long v10[3];  // rcx
    unsigned long long v11;  // rax
    unsigned long long v12[3];  // rcx
    unsigned long long v14[3];  // rcx
    unsigned long long v16;  // rdx
    unsigned int v17;  // eax
    unsigned long long v18;  // rdx

    v0 = a2;
    switch (a2)
    {
    case 2:
        v10 = a0->field_0;
        v11 = ::0x4d7c60::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h805a03118b26e41e(a1, a1 + 2, v10[1], v10[2], &g_5435d8);
        if (!a0->field_18 || a0->field_18 != 1)
        {
            v17 = _$LT$byteorder..LittleEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u16::hab4b8969433a088d(v11, v18);
        }
        else
        {
            v17 = _$LT$byteorder..BigEndian$u20$as$u20$byteorder..ByteOrder$GT$::read_u16::h083cd14a218276be(v11, v16);
            break;
        }
        if (!(char)::0x4d7ca0::std_detect::detect::cache::test::h15354216764ae092())
            return ::0x4d7ef0::half::binary16::arch::f16_to_f64_fallback::h99c57f7b07aa0fd1(v17);
        ::0x4d7fc0::half::binary16::arch::x86::f16_to_f32_x86_f16c::hae4e4afa5bc8fbe3(v17); /* do not return */
    case 4:
        v12 = a0->field_0;
        return uu_od::byteorder_io::ByteOrder::read_f32::hdad6667c13a77c60(*((int *)&a0->field_18), ::0x4d7c60::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h805a03118b26e41e(a1, a1 + 4, v12[1], v12[2], &g_5435f0), a2);
    case 8:
        v14 = a0->field_0;
        return uu_od::byteorder_io::ByteOrder::read_f64::hf4139851335640ab(*((int *)&a0->field_18), ::0x4d7c60::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h805a03118b26e41e(a1, a1 + 8, v14[1], v14[2], &g_543608), a2);
    default:
        v1 = &v0;
        v2 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
        v3 = &g_543550;
        v4 = 1;
        v7 = 0;
        v5 = &v1;
        v6 = 1;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v3, &g_543620); /* do not return */
    }
}
